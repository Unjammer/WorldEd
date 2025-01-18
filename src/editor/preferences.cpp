/*
 * Copyright 2013, Tim Baker <treectrl@users.sf.net>
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

#include "preferences.h"
#include "logger.h"

#include <QCoreApplication>
#include <QDir>
#include <QSettings>
#include <QApplication>
Preferences *Preferences::mInstance = 0;

Preferences *Preferences::instance()
{
    if (!mInstance)
        mInstance = new Preferences;
    return mInstance;
}

void Preferences::deleteInstance()
{
    delete mInstance;
    mInstance = 0;
}

bool Preferences::snapToGrid() const
{
    return mSnapToGrid;
}

bool Preferences::showCellBorder() const
{
    return mShowCellBorder;
}

bool Preferences::showCoordinates() const
{
    return mShowCoordinates;
}

bool Preferences::showWorldGrid() const
{
    return mShowWorldGrid;
}

bool Preferences::showCellGrid() const
{
    return mShowCellGrid;
}

bool Preferences::showMiniMap() const
{
    return mShowMiniMap;
}

int Preferences::miniMapWidth() const
{
    return mMiniMapWidth;
}

bool Preferences::highlightCurrentLevel() const
{
    return mHighlightCurrentLevel;
}

//Preferences::Preferences()
//    : QObject()
//    , mSettings(new QSettings)
//{

    Preferences::Preferences()
        : QObject()
        , mSettings(new QSettings(QDir::currentPath() + QLatin1String("/settings.ini"), QSettings::IniFormat))
    {
    Logger::instance().log(tr("Preferences - Loading : %1").arg(mSettings->fileName()), QLatin1String("INFO"));

    if (!QFile::exists(mSettings->fileName())) {
        Logger::instance().log(tr("Preferences - Creating new settings file: %1").arg(mSettings->fileName()), QLatin1String("INFO"));
    }

    // Retrieve interface settings
    mSettings->beginGroup(QLatin1String("Interface"));
    mSnapToGrid = mSettings->value(QLatin1String("SnapToGrid"), true).toBool();
    mShowCellBorder = mSettings->value(QLatin1String("ShowCellBorder"), true).toBool();
    mShowCoordinates = mSettings->value(QLatin1String("ShowCoordinates"), true).toBool();
    mShowWorldGrid = mSettings->value(QLatin1String("ShowWorldGrid"), true).toBool();
    mShowCellGrid = mSettings->value(QLatin1String("ShowCellGrid"), false).toBool();
    mGridColor = QColor(mSettings->value(QLatin1String("GridColor"), QColor(Qt::black).name()).toString());
    mShowObjects = mSettings->value(QLatin1String("ShowObjects"), true).toBool();
    mShowObjectNames = mSettings->value(QLatin1String("ShowObjectNames"), true).toBool();
    mShowBMPs = mSettings->value(QLatin1String("ShowBMPs"), true).toBool();
    mShowMiniMap = mSettings->value(QLatin1String("ShowMiniMap"), true).toBool();
    mShowZombieSpawnImage = mSettings->value(QLatin1String("ShowZombieSpawnImage"), false).toBool();
    mZombieSpawnImageOpacity = mSettings->value(QLatin1String("ZombieSpawnImageOpacity"), 0.8).toReal();
    mShowZonesInWorldView = mSettings->value(QLatin1String("ShowZonesInWorldView"), false).toBool();
    mMiniMapWidth = mSettings->value(QLatin1String("MiniMapWidth"), 256).toInt();
    mHighlightCurrentLevel = mSettings->value(QLatin1String("HighlightCurrentLevel"),false).toBool();
    mHighlightRoomUnderPointer = mSettings->value(QLatin1String("HighlightRoomUnderPointer"),false).toBool();
    mShowOtherWorlds = mSettings->value(QLatin1String("ShowOtherWorlds"), true).toBool();
    mUseOpenGL = mSettings->value(QLatin1String("OpenGL"), false).toBool();
    mWorldThumbnails = mSettings->value(QLatin1String("WorldThumbnails"), false).toBool();
    mShowAdjacentMaps = mSettings->value(QLatin1String("ShowAdjacentMaps"), true).toBool();
    mShowInvisibleTiles = mSettings->value(QLatin1String("ShowInvisibleTiles"), true).toBool();

    // Unofficial Fork - begin
    mLoadLastActivProject = mSettings->value(QLatin1String("LoadLastActivProject"), true).toBool();
    menableDarkTheme = mSettings->value(QLatin1String("EnableDarkTheme"), false).toBool();
    mhsThresholdHP = mSettings->value(QLatin1String("HsThresholdHP"), 1000).toInt();
    mhsSizeHP = mSettings->value(QLatin1String("HsSizeHP"), 40).toInt();
    mhsThresholdHT = mSettings->value(QLatin1String("HsThresholdHT"), 1000).toInt();
    mhsSizeHT = mSettings->value(QLatin1String("HsSizeHT"), 40).toInt();
    mhsThresholdR = mSettings->value(QLatin1String("HsThresholdR"), 1000).toInt();
    mhsSizeR = mSettings->value(QLatin1String("HsSizeR"), 40).toInt();

    mGridOpacity = mSettings->value(QLatin1String("GridOpacity"), 128).toInt();
    mGridWidth = mSettings->value(QLatin1String("GridWidth"), 1).toInt();
    mThumbWidth = mSettings->value(QLatin1String("ThumbWidth"), 512).toInt();
    mTheme = mSettings->value(QLatin1String("Theme"), QString()).toString();

    QString tileZedPath = mSettings->value(QLatin1String("TileZedPath")).toString();
    if (tileZedPath.isEmpty() || !QDir(tileZedPath).exists()) {
        tileZedPath = QDir::currentPath() + QLatin1Char('/') + QLatin1String("../TileZed");
        if (!QDir(tileZedPath).exists()) tileZedPath = QDir::currentPath() + QLatin1Char('/') + QLatin1String("../../TileZed");
    }
    mTileZedPath = mSettings->value(QLatin1String("TileZedPath"), tileZedPath).toString();
    // Unofficial Fork - end


    mSettings->endGroup();

    mSettings->beginGroup(QLatin1String("MapsDirectory"));
    mMapsDirectory = mSettings->value(QLatin1String("Current"), QString()).toString();
    mSettings->endGroup();

    mSettings->beginGroup(QLatin1String("TileZed"));

    // Set the default location of the Tiles Directory to the same value set
    // in TileZed's Tilesets Dialog.
    QSettings settings(QLatin1String("TheIndieStone"), QLatin1String("TileZed"));
//    QString KEY_TILES_DIR = QLatin1String("Tilesets/TilesDirectory");
//    QString tilesDirectory = settings.value(KEY_TILES_DIR).toString();

    QString tilesDirectory = mSettings->value(QLatin1String("TilesDirectory")).toString();
    if (tilesDirectory.isEmpty() || !QDir(tilesDirectory).exists()) {
        tilesDirectory = QDir::currentPath() + QLatin1Char('/') + QLatin1String("../Tiles");
        if (!QDir(tilesDirectory).exists()) tilesDirectory = QDir::currentPath() + QLatin1Char('/') + QLatin1String("../../Tiles");
    }
//    if (tilesDirectory.length())
//        tilesDirectory = QDir::cleanPath(tilesDirectory);
//    if (!QDir(tilesDirectory).exists())
//        tilesDirectory.clear();
    mTilesDirectory = mSettings->value(QLatin1String("TilesDirectory"), tilesDirectory).toString();

    // Use the same .tiles files as TileZed
    mTilePropertiesFiles = mSettings->value(QLatin1String("TilePropertiesFiles")).toStringList();

    mOpenFileDirectory = mSettings->value(QLatin1String("OpenFileDirectory")).toString();
    mWorldMapXMLFile = mSettings->value(QLatin1String("WorldMapXMLFile")).toString();

    // Use the same directory as TileZed.
    QString KEY_CONFIG_PATH = QLatin1String("ConfigDirectory");
    QString configPath = mSettings->value(KEY_CONFIG_PATH).toString();
    if (configPath.isEmpty()) configPath = QDir::currentPath() + QLatin1String("/../") + QLatin1String(".TileZed");
    mConfigDirectory = configPath;

    // Use the same directory as TileZed.
    mThumbnailsDirectory = mSettings->value(QLatin1String("Thumbnails/Directory")).toString();


    mSettings->endGroup();


}

Preferences::~Preferences()
{
    mSettings->sync();
    delete mSettings;
}

QString Preferences::configPath() const
{
    return mConfigDirectory;
}

QString Preferences::configPath(const QString &fileName) const
{
    return configPath() + QLatin1Char('/') + fileName;
}

QString Preferences::appConfigPath() const
{
#ifdef Q_OS_WIN
    return QCoreApplication::applicationDirPath();
#elif defined(Q_OS_UNIX)
    return QCoreApplication::applicationDirPath() + QLatin1String("/../../TileZed/share/tilezed/config");
#elif defined(Q_OS_MAC)
    return QCoreApplication::applicationDirPath() + QLatin1String("/../Config");
#else
#error "wtf system is this???"
#endif
}

QString Preferences::appConfigPath(const QString &fileName) const
{
    return appConfigPath() + QLatin1Char('/') + fileName;
}

QString Preferences::docsPath() const
{
#ifdef Q_OS_WIN
    return QCoreApplication::applicationDirPath() + QLatin1String("/docs");
#elif defined(Q_OS_UNIX)
    return QCoreApplication::applicationDirPath() + QLatin1String("/../share/tilezed/docs");
#elif defined(Q_OS_MAC)
    return QCoreApplication::applicationDirPath() + QLatin1String("/../Docs");
#else
#error "wtf system is this???"
#endif
}

QString Preferences::docsPath(const QString &fileName) const
{
    return docsPath() + QLatin1Char('/') + fileName;
}

QString Preferences::luaPath() const
{
#ifdef Q_OS_WIN
    return QCoreApplication::applicationDirPath() + QLatin1String("/lua");
#elif defined(Q_OS_UNIX)
    return QCoreApplication::applicationDirPath() + QLatin1String("/../share/tilezed/lua");
#elif defined(Q_OS_MAC)
    return QCoreApplication::applicationDirPath() + QLatin1String("/../Lua");
#else
#error "wtf system is this???"
#endif
}

QString Preferences::luaPath(const QString &fileName) const
{
    return luaPath() + QLatin1Char('/') + fileName;
}

QString Preferences::mapsDirectory() const
{
    return mMapsDirectory;
}

void Preferences::setSnapToGrid(bool snapToGrid)
{
    if (snapToGrid == mSnapToGrid)
        return;

    mSnapToGrid = snapToGrid;
    mSettings->setValue(QLatin1String("Interface/SnapToGrid"), mSnapToGrid);
    emit snapToGridChanged(mSnapToGrid);
}

void Preferences::setShowCellBorder(bool showCellBorder)
{
    if (showCellBorder == mShowCellBorder)
        return;

    mShowCellBorder = showCellBorder;
    mSettings->setValue(QLatin1String("Interface/ShowCellBorder"), mShowCellBorder);
    emit showCellBorderChanged(mShowCellBorder);
}

void Preferences::setShowCoordinates(bool showCoords)
{
    if (showCoords == mShowCoordinates)
        return;

    mShowCoordinates = showCoords;
    mSettings->setValue(QLatin1String("Interface/ShowCoordinates"), mShowCoordinates);
    emit showCoordinatesChanged(mShowCoordinates);
}

void Preferences::setShowWorldGrid(bool showGrid)
{
    if (showGrid == mShowWorldGrid)
        return;

    mShowWorldGrid = showGrid;
    mSettings->setValue(QLatin1String("Interface/ShowWorldGrid"), mShowWorldGrid);
    emit showWorldGridChanged(mShowWorldGrid);
}

void Preferences::setShowCellGrid(bool showGrid)
{
    if (showGrid == mShowCellGrid)
        return;

    mShowCellGrid = showGrid;
    mSettings->setValue(QLatin1String("Interface/ShowCellGrid"), mShowCellGrid);
    emit showCellGridChanged(mShowCellGrid);
}

void Preferences::setGridColor(const QColor &gridColor)
{
    if (mGridColor == gridColor)
        return;

    mGridColor = gridColor;
    mSettings->setValue(QLatin1String("Interface/GridColor"), mGridColor.name());
    emit gridColorChanged(mGridColor);
}

void Preferences::setUseOpenGL(bool useOpenGL)
{
    if (mUseOpenGL == useOpenGL)
        return;

    mUseOpenGL = useOpenGL;
    mSettings->setValue(QLatin1String("Interface/OpenGL"), mUseOpenGL);

    emit useOpenGLChanged(mUseOpenGL);
}

void Preferences::setWorldThumbnails(bool thumbs)
{
    if (mWorldThumbnails == thumbs)
        return;

    mWorldThumbnails = thumbs;
    mSettings->setValue(QLatin1String("Interface/WorldThumbnails"), mWorldThumbnails);

    emit worldThumbnailsChanged(mWorldThumbnails);
}

QString Preferences::openFileDirectory() const
{
    return mOpenFileDirectory;
}

void Preferences::setOpenFileDirectory(const QString &path)
{
    if (mOpenFileDirectory == path)
        return;
    mOpenFileDirectory = path;
    mSettings->setValue(QLatin1String("OpenFileDirectory"), mOpenFileDirectory);
}

QString Preferences::worldMapXMLFile() const
{
    return mWorldMapXMLFile;
}

void Preferences::setWorldMapXMLFile(const QString &path)
{
    if (mWorldMapXMLFile == path)
        return;
    mWorldMapXMLFile = path;
    mSettings->setValue(QLatin1String("WorldMapXMLFile"), mWorldMapXMLFile);
}

void Preferences::setShowAdjacentMaps(bool show)
{
    if (mShowAdjacentMaps == show)
        return;

    mShowAdjacentMaps = show;
    mSettings->setValue(QLatin1String("Interface/ShowAdjacentMaps"), mShowAdjacentMaps);

    emit showAdjacentMapsChanged(mShowAdjacentMaps);
}

void Preferences::setShowObjects(bool show)
{
    if (mShowObjects == show)
        return;

    mShowObjects = show;
    mSettings->setValue(QLatin1String("Interface/ShowObjects"), mShowObjects);

    emit showObjectsChanged(mShowObjects);
}

void Preferences::setShowObjectNames(bool show)
{
    if (mShowObjectNames == show)
        return;

    mShowObjectNames = show;
    mSettings->setValue(QLatin1String("Interface/ShowObjectNames"), mShowObjectNames);

    emit showObjectNamesChanged(mShowObjectNames);
}

void Preferences::setShowBMPs(bool show)
{
    if (mShowBMPs == show)
        return;

    mShowBMPs = show;
    mSettings->setValue(QLatin1String("Interface/ShowBMPs"), mShowBMPs);

    emit showBMPsChanged(mShowBMPs);
}

void Preferences::setShowZombieSpawnImage(bool show)
{
    if (mShowZombieSpawnImage == show)
        return;

    mShowZombieSpawnImage = show;
    mSettings->setValue(QLatin1String("Interface/ShowZombieSpawnImage"), mShowZombieSpawnImage);

    emit showZombieSpawnImageChanged(mShowZombieSpawnImage);
}

void Preferences::setZombieSpawnImageOpacity(qreal opacity)
{
    opacity = qMin(opacity, 1.0);
    opacity = qMax(opacity, 0.0);

    if (mZombieSpawnImageOpacity == opacity)
        return;

    mZombieSpawnImageOpacity = opacity;
    mSettings->setValue(QLatin1String("Interface/ZombieSpawnImageOpacity"), mZombieSpawnImageOpacity);

    emit zombieSpawnImageOpacityChanged(mZombieSpawnImageOpacity);
}

void Preferences::setShowZonesInWorldView(bool show)
{
    if (mShowZonesInWorldView == show)
        return;

    mShowZonesInWorldView = show;
    mSettings->setValue(QLatin1String("Interface/ShowZonesInWorldView"), mShowZonesInWorldView);

    emit showZonesInWorldViewChanged(mShowZonesInWorldView);
}

void Preferences::setShowMiniMap(bool show)
{
    if (show == mShowMiniMap)
        return;

    mShowMiniMap = show;
    mSettings->setValue(QLatin1String("Interface/ShowMiniMap"), mShowMiniMap);
    emit showMiniMapChanged(mShowMiniMap);
}

void Preferences::setMiniMapWidth(int width)
{
    width = qMin(width, MINIMAP_WIDTH_MAX);
    width = qMax(width, MINIMAP_WIDTH_MIN);

    if (mMiniMapWidth == width)
        return;
    mMiniMapWidth = width;
    mSettings->setValue(QLatin1String("Interface/MiniMapWidth"), width);
    emit miniMapWidthChanged(mMiniMapWidth);
}

void Preferences::setHighlightCurrentLevel(bool highlight)
{
    if (highlight == mHighlightCurrentLevel)
        return;

    mHighlightCurrentLevel = highlight;
    mSettings->setValue(QLatin1String("Interface/HighlightCurrentLevel"), mHighlightCurrentLevel);
    emit highlightCurrentLevelChanged(mHighlightCurrentLevel);
}

void Preferences::setHighlightRoomUnderPointer(bool highlight)
{
    if (highlight == mHighlightRoomUnderPointer)
        return;
    mHighlightRoomUnderPointer = highlight;
    mSettings->setValue(QLatin1String("Interface/HighlightRoomUnderPointer"),
                        mHighlightRoomUnderPointer);
    emit highlightRoomUnderPointerChanged(mHighlightRoomUnderPointer);
}

void Preferences::setShowOtherWorlds(bool show)
{
    if (show == mShowOtherWorlds)
        return;
    mShowOtherWorlds = show;
    mSettings->setValue(QLatin1String("Interface/ShowOtherWorlds"),
                        mShowOtherWorlds);
    emit showOtherWorldsChanged(mShowOtherWorlds);
}

void Preferences::setMapsDirectory(const QString &path)
{
    if (mMapsDirectory == path)
        return;
    mMapsDirectory = path;
    mSettings->setValue(QLatin1String("MapsDirectory/Current"), path);

    // Put this up, otherwise the progress dialog shows and hides for each lot.
    // Since each open document has its own ZLotManager, this shows and hides for each document as well.
//    ZProgressManager::instance()->begin(QLatin1String("Checking lots..."));

    emit mapsDirectoryChanged();
}

QString Preferences::tilesDirectory() const
{
    return mTilesDirectory;
}

void Preferences::setTilesDirectory(const QString &path)
{
    if (mTilesDirectory == path)
        return;
    mTilesDirectory = path;
    mSettings->setValue(QLatin1String("TilesDirectory"), path);
    emit tilesDirectoryChanged();
}

QString Preferences::tiles2xDirectory() const
{
    if (mTilesDirectory.isEmpty())
        return QString();
    return mTilesDirectory + QLatin1Char('/') + QLatin1String("2x");
}

QString Preferences::texturesDirectory() const
{
    return QDir(mTilesDirectory).filePath(QLatin1String("Textures"));
}

void Preferences::setShowInvisibleTiles(bool show)
{
    if (mShowInvisibleTiles == show)
        return;

    mShowInvisibleTiles = show;
    mSettings->setValue(QLatin1String("Interface/ShowInvisibleTiles"), mShowInvisibleTiles);

    emit showInvisibleTilesChanged(mShowInvisibleTiles);
}
// Unofficial Fork - begin
void Preferences::setTileZedPath(const QString &path)
{
    if (mTileZedPath == path)
        return;
    mTileZedPath = path;
    mSettings->setValue(QLatin1String("TileZedPath"), path);
    emit tileZedPathChanged();
}

void Preferences::setLoadLastActivProject(bool show)
{
    if (mLoadLastActivProject == show)
        return;

    mLoadLastActivProject = show;
    mSettings->setValue(QLatin1String("Interface/LoadLastActivProject"), mLoadLastActivProject);

    emit LoadLastActivProject(mLoadLastActivProject);
}

void Preferences::setenableDarkTheme(bool show)
{
    if (menableDarkTheme == show)
        return;

    menableDarkTheme = show;
    mSettings->setValue(QLatin1String("Interface/EnableDarkTheme"), menableDarkTheme);

    emit enableDarkTheme(menableDarkTheme);
}

void Preferences::setHsThresholdHP(int threshold)
{

    if (mhsThresholdHP == threshold)
        return;

    mhsThresholdHP = threshold;
    mSettings->setValue(QLatin1String("Interface/HsThresholdHP"), mhsThresholdHP);
    emit HsThresholdHP(threshold);
}

void Preferences::setHsSizeHP(int size)
{
    if (mhsSizeHP == size)
        return;

    mhsSizeHP = size;
    mSettings->setValue(QLatin1String("Interface/HsSizeHP"), mhsSizeHP);
    emit HsSizeHP(size);
}

void Preferences::setHsThresholdHT(int threshold)
{

    if (mhsThresholdHT == threshold)
        return;

    mhsThresholdHT = threshold;
    mSettings->setValue(QLatin1String("Interface/HsThresholdHT"), mhsThresholdHT);
    emit HsThresholdHT(threshold);
}

void Preferences::setHsSizeHT(int size)
{
    if (mhsSizeHT == size)
        return;

    mhsSizeHT = size;
    mSettings->setValue(QLatin1String("Interface/HsSizeHT"), mhsSizeHT);
    emit HsSizeHT(size);
}

void Preferences::setHsThresholdR(int threshold)
{

    if (mhsThresholdR == threshold)
        return;

    mhsThresholdR = threshold;
    mSettings->setValue(QLatin1String("Interface/HsThresholdR"), mhsThresholdR);
    emit HsThresholdR(threshold);
}

void Preferences::setHsSizeR(int size)
{
    if (mhsSizeR == size)
        return;

    mhsSizeR = size;
    mSettings->setValue(QLatin1String("Interface/HsSizeR"), mhsSizeR);
    emit HsSizeR(size);
}

void Preferences::setGridOpacity(int newOpacity)
{
    if (mGridOpacity == newOpacity)
        return;
    mGridOpacity = newOpacity;
    mSettings->setValue(QLatin1String("Interface/GridOpacity"), mGridOpacity);
    emit gridOpacityChanged(mGridOpacity);
}

void Preferences::setGridWidth(int newWidth)
{
    if (mGridWidth == newWidth)
        return;
    mGridWidth = newWidth;
    mSettings->setValue(QLatin1String("Interface/GridWidth"), mGridWidth);
    emit gridWidthChanged(mGridWidth);
}

void Preferences::setThumbWidth(int newWidth)
{
    if (mThumbWidth == newWidth)
        return;
    mThumbWidth = newWidth;
    mSettings->setValue(QLatin1String("Interface/ThumbWidth"), mThumbWidth);
    emit thumbWidthChanged(mThumbWidth);
}

void Preferences::setTheme(QString theme)
{

    if (mTheme == theme)
        return;

    mTheme = theme;
    mSettings->setValue(QLatin1String("Interface/Theme"), mTheme);
    emit Theme(theme);
}

// Unofficial Fork - end
