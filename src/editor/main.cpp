/*
 * Copyright 2012, Tim Baker <treectrl@users.sf.net>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include <QApplication>
#include "mainwindow.h"
#include "logger.h"

#ifdef ZOMBOID
#include "documentmanager.h"
#include "toolmanager.h"
#include "preferences.h"
#include "mapimagemanager.h"
#include "mapmanager.h"
#include "progress.h"
#include "tilemetainfomgr.h"
#include "tilesetmanager.h"
#include <QTextStream>
#include <QSplashScreen>
#include <QSettings>
#include <QDir>
using namespace Tiled;
using namespace Tiled::Internal;
#endif

#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
#include <QImageReader>
#endif

int main(int argc, char *argv[])
{

#if ZOMBOID
    QCoreApplication::setAttribute(Qt::AA_ShareOpenGLContexts);
#endif
    QApplication a(argc, argv);
    QDir::setCurrent(QDir::currentPath());
    Preferences *prefs = Preferences::instance();

    a.setOrganizationName(QLatin1String("TheIndieStone"));
    a.setApplicationName(QLatin1String("PZWorldEd"));
#ifdef BUILD_INFO_VERSION
    a.setApplicationVersion(QLatin1String(AS_STRING(BUILD_INFO_VERSION)));
#else
    a.setApplicationVersion(QLatin1String("0.0.1a"));
#endif
    // Unofficial Fork - begin


    if (prefs->enableDarkTheme())
    {
        QString fileName = QDir::currentPath() + QLatin1String("/theme/") + prefs->themes();
        Logger::instance().log(QLatin1String("MainWindow - Theme : %1").arg(fileName), QLatin1String("INFO"));
        QFile file(fileName);
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream in(&file);
        QString stylesheet = in.readAll();

        a.setStyleSheet(stylesheet);
    }
    // Unofficial Fork - end


#ifdef Q_WS_MAC
    a.setAttribute(Qt::AA_DontShowIconsInMenus);
#endif

#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
    QImageReader::setAllocationLimit(0);
#endif

    MainWindow w;
    w.show();

    if (!w.InitConfigFiles())
        return 0;

#if 0
    QObject::connect(&a, SIGNAL(fileOpenRequest(QString)),
                     &w, SLOT(openFile(QString)));
#endif

    PROGRESS progress(QStringLiteral("Loading Tilesets %1 / %2").arg(0).arg(TileMetaInfoMgr::instance()->tilesets().size()), &w);
    TileMetaInfoMgr::instance()->loadTilesets(true);
    TilesetManager::instance()->waitForTilesets(TilesetManager::instance()->tilesets(), &w);
    progress.release();

    // Unofficial Fork - begin
    if (prefs->LoadLastActivProject())
    {
        w.openLastFiles();
    }
    // Unofficial Fork - end



#if 1
    int ret = a.exec();

    DocumentManager::deleteInstance();
    ToolManager::deleteInstance();
    Preferences::deleteInstance();
    MapImageManager::deleteInstance();
    MapManager::deleteInstance();
    TileMetaInfoMgr::deleteInstance();
    TilesetManager::deleteInstance();

    return ret;
#else
    return a.exec();
#endif
}
