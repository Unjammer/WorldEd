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

#ifndef PREFERENCESDIALOG_H
#define PREFERENCESDIALOG_H

#include <QDialog>
#include <QComboBox>

class WorldDocument;

class QListWidgetItem;

namespace Ui {
class PreferencesDialog;
}

class PreferencesDialog : public QDialog
{
    Q_OBJECT
public:
    explicit PreferencesDialog(WorldDocument *worldDoc, QWidget *parent = 0);

private:
    void populateThemeList(QComboBox *themeListbox, const QString &directoryPath);

private slots:
    void browseTilesDirectory();
    void browseTileZedPath();
    void gridColorChanged(const QColor &gridColor);
    void resetThumbWidth();
    void accept();
    void onThemeChanged(const QString &theme);
private:
    Ui::PreferencesDialog *ui;
    WorldDocument *mWorldDoc;
    QString mTilesDirectory;
    QString mTileZedPath;
    QString mTheme;
    QColor mGridColor;
};

#endif // PREFERENCESDIALOG_H
