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

#ifndef PREFERENCES_H
#define PREFERENCES_H

#include <QObject>
#include <QColor>
#include <QStringList>

class QSettings;

class Preferences : public QObject
{
    Q_OBJECT
public:
    static Preferences *instance();
    static void deleteInstance();

    QString configPath() const;
    QString configPath(const QString &fileName) const;

    QString appConfigPath() const;
    QString appConfigPath(const QString &fileName) const;

    QString docsPath() const;
    QString docsPath(const QString &fileName) const;

    QString luaPath() const;
    QString luaPath(const QString &fileName) const;

    bool snapToGrid() const;
    bool showCellBorder() const;
    bool showCoordinates() const;
    bool showWorldGrid() const;
    bool showCellGrid() const;
    QColor gridColor() const { return mGridColor; }
    bool showMiniMap() const;
    int miniMapWidth() const;
    bool highlightCurrentLevel() const;
    bool highlightRoomUnderPointer() const
    { return mHighlightRoomUnderPointer; }
    bool showOtherWorlds() const
    { return mShowOtherWorlds; }

    QString mapsDirectory() const;
    void setMapsDirectory(const QString &path);

    QString tilesDirectory() const;
    void setTilesDirectory(const QString &path);

    QString tiles2xDirectory() const;

    QStringList tilePropertiesFiles() const { return mTilePropertiesFiles; }

    QString texturesDirectory() const;

    QString thumbnailsDirectory() const
    { return mThumbnailsDirectory; }

    bool useOpenGL() const { return mUseOpenGL; }
    void setUseOpenGL(bool useOpenGL);

    bool worldThumbnails() const { return mWorldThumbnails; }
    void setWorldThumbnails(bool thumbs);

    bool showObjects() const { return mShowObjects; }
    bool showObjectNames() const { return mShowObjectNames; }
    bool showBMPs() const { return mShowBMPs; }
    bool showZombieSpawnImage() const { return mShowZombieSpawnImage; }
    qreal zombieSpawnImageOpacity() const { return mZombieSpawnImageOpacity; }
    bool showZonesInWorldView() const { return mShowZonesInWorldView; }

    QString openFileDirectory() const;
    void setOpenFileDirectory(const QString &path);

    QString worldMapXMLFile() const;
    void setWorldMapXMLFile(const QString &path);

    bool showAdjacentMaps() const { return mShowAdjacentMaps; }
    void setShowAdjacentMaps(bool show);

    bool showInvisibleTiles() const { return mShowInvisibleTiles; }

    // Unofficial Fork - begin

    int hsThresholdHP() const { return mhsThresholdHP; }
    int hsSizeHP() const { return mhsSizeHP; }
    int hsThresholdHT() const { return mhsThresholdHT; }
    int hsSizeHT() const { return mhsSizeHT; }
    int hsThresholdR() const { return mhsThresholdR; }
    int hsSizeR() const { return mhsSizeR; }

    int gridOpacity() const
        {
            return mGridOpacity;
        }

    int gridWidth() const
        {
            return mGridWidth;
        }
    int thumbWidth() const
        {
            return mThumbWidth;
        }

    QString tileZedPath() const;
    void setTileZedPath(const QString &path);

    QString themes() const { return mTheme; }

    bool LoadLastActivProject() const { return mLoadLastActivProject; }
    bool enableDarkTheme() const { return menableDarkTheme; }
    int GridOpacity() const { return mGridOpacity;  }
    int GridWidth() const { return mGridWidth;  }
    int ThumbWidth() const { return mThumbWidth;  }
    void setLoadLastActivProject(bool show);
    void setenableDarkTheme(bool show);
    void setHsThresholdHP(int threshold);
    void setHsSizeHP(int size);
    void setHsThresholdHT(int threshold);
    void setHsSizeHT(int size);
    void setHsThresholdR(int threshold);
    void setHsSizeR(int size);
    void setGridOpacity(int newOpacity);
    void setGridWidth(int newWidth);
    void setThumbWidth(int newWidth);
    void setTheme(QString theme);
    // Unofficial Fork - end

signals:
    void snapToGridChanged(bool snapToGrid);
    void showCellBorderChanged(bool showGrid);
    void showCoordinatesChanged(bool showGrid);
    void showWorldGridChanged(bool showGrid);
    void showCellGridChanged(bool showGrid);
    void gridColorChanged(const QColor &gridColor);

    void useOpenGLChanged(bool useOpenGL);
    void worldThumbnailsChanged(bool thumbs);

    void showObjectsChanged(bool show);
    void showObjectNamesChanged(bool show);
    void showBMPsChanged(bool show);
    void showZombieSpawnImageChanged(bool show);
    void zombieSpawnImageOpacityChanged(qreal opacity);
    void showZonesInWorldViewChanged(bool show);



#define MINIMAP_WIDTH_MIN 128
#define MINIMAP_WIDTH_MAX 1024 //512
    void showMiniMapChanged(bool show);
    void miniMapWidthChanged(int width);

    void highlightCurrentLevelChanged(bool highlight);
    void mapsDirectoryChanged();
    void tilesDirectoryChanged();
    void showAdjacentMapsChanged(bool show);
    void highlightRoomUnderPointerChanged(bool highlight);
    void showOtherWorldsChanged(bool show);
    void showInvisibleTilesChanged(bool show);

    // Unofficial Fork - begin
    void LoadLastActivProject(bool show);
    void enableDarkTheme(bool show);

    void HsThresholdHP(int threshold);
    void HsSizeHP(int size);

    void HsThresholdHT(int threshold);
    void HsSizeHT(int size);

    void HsThresholdR(int threshold);
    void HsSizeR(int size);

    void gridOpacityChanged(int newOpacity);
    void gridWidthChanged(int newWidth);
    void thumbWidthChanged(int newWidth);
    void tileZedPathChanged();
    void Theme(QString theme);
    // Unofficial Fork - end

public slots:
    void setSnapToGrid(bool snapToGrid);
    void setShowCellBorder(bool showCellBorder);
    void setShowCoordinates(bool showCoords);
    void setShowWorldGrid(bool showGrid);
    void setShowCellGrid(bool showGrid);
    void setGridColor(const QColor &gridColor);
    void setShowMiniMap(bool show);
    void setMiniMapWidth(int width);
    void setShowObjects(bool show);
    void setShowObjectNames(bool show);
    void setShowBMPs(bool show);
    void setShowZombieSpawnImage(bool show);
    void setZombieSpawnImageOpacity(qreal opacity);
    void setShowZonesInWorldView(bool show);
    void setHighlightCurrentLevel(bool highlight);
    void setHighlightRoomUnderPointer(bool highlight);
    void setShowOtherWorlds(bool show);
    void setShowInvisibleTiles(bool show);


private:
    Preferences();
    ~Preferences();

    QSettings *mSettings;

    bool mSnapToGrid;
    bool mShowCellBorder;
    bool mShowCoordinates;
    bool mShowWorldGrid;
    bool mShowCellGrid;
    QColor mGridColor;
    bool mUseOpenGL;
    bool mWorldThumbnails;
    bool mShowObjects;
    bool mShowObjectNames;
    bool mShowBMPs;
    bool mShowMiniMap;
    bool mShowZombieSpawnImage;
    qreal mZombieSpawnImageOpacity;
    bool mShowZonesInWorldView;
    int mMiniMapWidth;
    bool mHighlightCurrentLevel;
    QString mConfigDirectory;
    QString mMapsDirectory;
    QString mTilesDirectory;
    QStringList mTilePropertiesFiles;
    QString mOpenFileDirectory;
    QString mWorldMapXMLFile;
    bool mShowAdjacentMaps;
    bool mHighlightRoomUnderPointer;
    bool mShowOtherWorlds;
    QString mThumbnailsDirectory;
    bool mShowInvisibleTiles;

    // Unofficial Fork - begin
    int mGridOpacity;
    int mGridWidth;
    int mThumbWidth;
    bool mLoadLastActivProject;
    bool menableDarkTheme;
    int mhsThresholdHP;
    int mhsSizeHP;
    int mhsThresholdHT;
    int mhsSizeHT;
    int mhsThresholdR;
    int mhsSizeR;
    QString mTileZedPath;
    QString mTheme;
    // Unofficial Fork - end

    static Preferences *mInstance;
};

#endif // PREFERENCES_H
