/*
 * Copyright 2018, Tim Baker <treectrl@users.sf.net>
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

#include "ingamemapfeaturegenerator.h"

#include "generatelotsfailuredialog.h"
#include "lotfilesmanager.h"
#include "mainwindow.h"
#include "mapcomposite.h"
#include "mapmanager.h"
#include "progress.h"
#include "world.h"
#include "worldcell.h"
#include "worlddocument.h"

#include "BuildingEditor/roofhiding.h"

#include "bmpblender.h"
#include "mapobject.h"
#include "objectgroup.h"
#include "tile.h"
#include "tileset.h"
#include "tilelayer.h"

#include <qmath.h>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QUndoStack>

#include "clipper.hpp"

using namespace Tiled;

namespace
{
struct pzPolygon
{
    ClipperLib::Path outer;
    ClipperLib::Paths inner; // holes
};
}

InGameMapFeatureGenerator::InGameMapFeatureGenerator(QObject *parent) :
    QObject(parent)
{
}

bool InGameMapFeatureGenerator::generateWorld(WorldDocument *worldDoc, InGameMapFeatureGenerator::GenerateMode mode, FeatureType type)
{
    auto start = std::chrono::high_resolution_clock::now();
    mFeatureType = type;

    mWorldDoc = worldDoc;
    World *world = mWorldDoc->world();

    MapManager::instance()->purgeUnreferencedMaps();

    QString typeStr;
    switch (type) {
    case FeatureBuilding: typeStr = QStringLiteral("building"); break;
    case FeatureTree: typeStr = QStringLiteral("trees"); break;
    case FeatureWater: typeStr = QStringLiteral("water"); break;
    case FeatureRoad: typeStr = QStringLiteral("Road"); break;
    }
    PROGRESS progress(QStringLiteral("Generating %1 features").arg(typeStr));

    mFailures.clear();

    mWorldDoc->undoStack()->beginMacro(QStringLiteral("Generate InGameMap %1 Features").arg(typeStr));

    if (mode == GenerateSelected) {
        for (WorldCell* cell : worldDoc->selectedCells())
        {
            if (!generateCell(cell)) {
                mWorldDoc->undoStack()->endMacro();
                goto errorExit;
            }
        }
        if (worldDoc->selectedCells().count() > 1)
        {
            auto stop = std::chrono::high_resolution_clock::now();
            auto duration = std::chrono::duration_cast<std::chrono::seconds>(stop - start);
            QMessageBox msgBox;
            msgBox.setWindowTitle(QLatin1String("Duration : ") + QString::number(duration.count()) + QLatin1String(" seconds"));
            msgBox.setText(QLatin1String("You just generated Map features.") + QLatin1Char('\n') + QLatin1String("Please do not forget to Write it to file."));
            msgBox.isModal();
            msgBox.isTopLevel();
            msgBox.exec();
        }
    } else {
        for (int y = 0; y < world->height(); y++) {
            for (int x = 0; x < world->width(); x++) {
                if (!generateCell(world->cellAt(x, y))) {
                    mWorldDoc->undoStack()->endMacro();
                    goto errorExit;
                }

            }
        }
        auto stop = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::seconds>(stop - start);
        QMessageBox msgBox;
        msgBox.setWindowTitle(QLatin1String("Duration : ") + QString::number(duration.count()) + QLatin1String(" seconds"));
        msgBox.setText(QLatin1String("You just generated Map features.") + QLatin1Char('\n') + QLatin1String("Please do not forget to Write it to file."));
        msgBox.isModal();
        msgBox.isTopLevel();
        msgBox.exec();
    }

    mWorldDoc->undoStack()->endMacro();

    MapManager::instance()->purgeUnreferencedMaps();

    if (!mFailures.isEmpty()) {
        QStringList errorList;
        for (const GenerateCellFailure &failure : mFailures) {
            errorList += QString(QStringLiteral("Cell %1,%2: %3")).arg(failure.cell->x()).arg(failure.cell->y()).arg(failure.error);
        }
        GenerateLotsFailureDialog dialog(errorList, MainWindow::instance());
        dialog.exec();
    }

#if 0
    // While displaying this, the MapManager's FileSystemWatcher might see some
    // changed .tmx files, which results in the PROGRESS dialog being displayed.
    // It's a bit odd to see the PROGRESS dialog blocked behind this messagebox.
    QMessageBox::information(MainWindow::instance(),
                             tr("InGameMap Feature Generator"), tr("Finished!"));
#endif
    return true;

errorExit:
    QMessageBox::warning(MainWindow::instance(), tr("It's no good, Jim!"), mError);
    return false;
}

bool InGameMapFeatureGenerator::shouldGenerateCell(WorldCell *cell)
{
    switch (mFeatureType) {
    case FeatureBuilding:
        //return !cell->lots().isEmpty();
        return true;
    case FeatureTree:
        return true;
    case FeatureWater:
        return true;
    case FeatureRoad:
        return true;
    default:
        return false;
    }
}

bool InGameMapFeatureGenerator::generateCell(WorldCell *cell)
{
    if (!shouldGenerateCell(cell))
        return true;

    if (cell->mapFilePath().isEmpty()) {
        return true;
    }

    MapInfo *mapInfo = MapManager::instance()->loadMap(cell->mapFilePath(),
                                                       mWorldDoc->fileName());
    if (!mapInfo) {
        mError = MapManager::instance()->errorString();
        return false;
    }

    MapManager::instance()->addReferenceToMap(mapInfo);

    QString message = QLatin1String("");
    bool ok;
    switch (mFeatureType) {
    case FeatureBuilding:
        ok = doBuildings(cell, mapInfo);
        message = QLatin1String("Buildings");
        break;
    case FeatureTree:
        ok = doTrees(cell, mapInfo);
        message = QLatin1String("Trees");
        break;
    case FeatureWater:
        ok = doWater(cell, mapInfo);
        message = QLatin1String("Water");
        break;
    case FeatureRoad:
        ok = doRoadMain(cell, mapInfo);
        ok = doRoadSecondary(cell, mapInfo);
        ok = doRoadTertiary(cell, mapInfo);
        ok = doRoadTrail(cell, mapInfo);
        ok = doRailroad(cell, mapInfo);
        message = QLatin1String("Roads");
        break;
    }

    MapManager::instance()->removeReferenceToMap(mapInfo);

    return ok;
}

bool InGameMapFeatureGenerator::doBuildings(WorldCell *cell, MapInfo *mapInfo)
{


        // Remove all "building=" features
        auto& features = cell->inGameMap().features();
        for (int i = features.size() - 1; i >= 0; i--) {
            auto* feature = features[i];
            for (auto& property : feature->properties()) {
                if (property.mKey == QStringLiteral("building")) {
                    mWorldDoc->removeInGameMapFeature(cell, feature->index());
                }
            }
        }

        DelayedMapLoader mapLoader;
        mapLoader.addMap(mapInfo);
     if (cell->lots().count() > 0)
     {
         qDebug() << "cell->lots().count() " + cell->lots().count();
        for (WorldCellLot* lot : cell->lots()) {
            if (MapInfo* info = MapManager::instance()->loadMap(lot->mapName(),
                QString(), true,
                MapManager::PriorityMedium)) {
                mapLoader.addMap(info);
            }
            else {
                mError = MapManager::instance()->errorString();

                return false;
            }
        }

#if 1
        while (mapLoader.isLoading()) {
            qApp->processEvents(QEventLoop::ExcludeUserInputEvents);
        }

        // This method won't work for buildings in the TMX, it only works for separate building files.

        for (WorldCellLot* lot : cell->lots()) {
            MapInfo* info = MapManager::instance()->mapInfo(lot->mapName());
            if (info != nullptr && info->map() != nullptr) {
            QRect bounds;
            QVector<QRect> rects;
            for (ObjectGroup *og : info->map()->objectGroups()) {
                if (processObjectGroup(cell, info, og, lot->level(), lot->pos(), bounds, rects) == false) {
                    return false;
                }
            }
            if (traceBuildingOutline(cell, info, bounds, rects) == false) {
                return false;
            }
            }
        }
    }
     else {

         while (mapInfo->isLoading())
             qApp->processEvents(QEventLoop::ExcludeUserInputEvents);

         MapComposite staticMapComposite(mapInfo);
         MapComposite* mapComposite = &staticMapComposite;
         while (mapComposite->waitingForMapsToLoad() || mapLoader.isLoading())
             qApp->processEvents(QEventLoop::ExcludeUserInputEvents);
         if (!mapLoader.errorString().isEmpty()) {
             mError = mapLoader.errorString();
             qDebug() << mError;
             return false;
         }

         foreach(WorldCellLot * lot, cell->lots()) {
             MapInfo* info = MapManager::instance()->mapInfo(lot->mapName());
             Q_ASSERT(info && info->map());
             mapComposite->addMap(info, lot->pos(), lot->level());
         }
         if (processObjectGroups(cell, mapComposite) == false)
         {
             QMessageBox msgBox;
             msgBox.setText(QLatin1String("The document has been modified."));
             msgBox.exec();
             return false;
         }
     }
    return true;
#else
#endif
}

bool InGameMapFeatureGenerator::processObjectGroups(WorldCell *cell, MapComposite *mapComposite)
{
    foreach (Layer *layer, mapComposite->map()->layers()) {
        if (ObjectGroup *og = layer->asObjectGroup()) {
            if (!processObjectGroupNew(cell, og, mapComposite->levelRecursive(), mapComposite->originRecursive())) {
                return false;
            }
        }
    }

    foreach(MapComposite* subMap, mapComposite->subMaps())
    {
        if (!processObjectGroups(cell, subMap)) {
            return false;
        }
    }

    return true;
}

bool InGameMapFeatureGenerator::processObjectGroupNew(WorldCell* cell, ObjectGroup* objectGroup,
    int levelOffset, const QPoint& offset)
{
    int level = objectGroup->level() + levelOffset;

    // Préparer les correspondances entre noms et types d'objet
    static const QMap<QString, QString> objectTypeMap = {
        // Restaurants and Entertainment
        { QStringLiteral("restaurant"), QStringLiteral("RestaurantsAndEntertainment")}, { QStringLiteral("spiffo_dining"), QStringLiteral("RestaurantsAndEntertainment")},
               { QStringLiteral("spiffoskitchen"), QStringLiteral("RestaurantsAndEntertainment")}, { QStringLiteral("bakery"), QStringLiteral("RestaurantsAndEntertainment")},
               { QStringLiteral("dinerkitchen"), QStringLiteral("RestaurantsAndEntertainment")}, { QStringLiteral("cafe"), QStringLiteral("RestaurantsAndEntertainment")},
               { QStringLiteral("sushidining"), QStringLiteral("RestaurantsAndEntertainment")}, { QStringLiteral("sushikitchen"), QStringLiteral("RestaurantsAndEntertainment")},
               { QStringLiteral("knoxbutcher"), QStringLiteral("RestaurantsAndEntertainment")}, { QStringLiteral("spiffosstorage"), QStringLiteral("RestaurantsAndEntertainment")},
               { QStringLiteral("tacokitchen"), QStringLiteral("RestaurantsAndEntertainment")}, { QStringLiteral("fishchipskitchen"), QStringLiteral("RestaurantsAndEntertainment")},
               { QStringLiteral("jayschicken_kitchen"), QStringLiteral("RestaurantsAndEntertainment")}, { QStringLiteral("chinesekitchen"), QStringLiteral("RestaurantsAndEntertainment")},
               { QStringLiteral("burger"), QStringLiteral("RestaurantsAndEntertainment")}, { QStringLiteral("mexican"), QStringLiteral("RestaurantsAndEntertainment")},
               { QStringLiteral("kitchen_crepe"), QStringLiteral("RestaurantsAndEntertainment")}, { QStringLiteral("jayschicken"), QStringLiteral("RestaurantsAndEntertainment")},
               { QStringLiteral("icecream"), QStringLiteral("RestaurantsAndEntertainment")}, { QStringLiteral("donut"), QStringLiteral("RestaurantsAndEntertainment")},
               { QStringLiteral("deepfry"), QStringLiteral("RestaurantsAndEntertainment")}, { QStringLiteral("bowlingalley"), QStringLiteral("RestaurantsAndEntertainment")},
               { QStringLiteral("bowllingalley"), QStringLiteral("RestaurantsAndEntertainment")}, { QStringLiteral("fitness"), QStringLiteral("RestaurantsAndEntertainment")},
               { QStringLiteral("gym"), QStringLiteral("RestaurantsAndEntertainment")}, { QStringLiteral("italian"), QStringLiteral("RestaurantsAndEntertainment")},
               { QStringLiteral("western"), QStringLiteral("RestaurantsAndEntertainment")}, { QStringLiteral("pizza"), QStringLiteral("RestaurantsAndEntertainment")},
               // Retail and Commercial
               { QStringLiteral("zippeestore"), QStringLiteral("RetailAndCommercial")}, { QStringLiteral("zippeestorage"), QStringLiteral("RetailAndCommercial")},
               { QStringLiteral("gasstore"), QStringLiteral("RetailAndCommercial")}, { QStringLiteral("gasstorage"), QStringLiteral("RetailAndCommercial")},
               { QStringLiteral("furniturestore"), QStringLiteral("RetailAndCommercial")}, { QStringLiteral("furniturestorage"), QStringLiteral("RetailAndCommercial")},
               { QStringLiteral("gigamart"), QStringLiteral("RetailAndCommercial")}, { QStringLiteral("grocers"), QStringLiteral("RetailAndCommercial")},
               { QStringLiteral("fossoil"), QStringLiteral("RetailAndCommercial")}, { QStringLiteral("aesthetic"), QStringLiteral("RetailAndCommercial")},
               { QStringLiteral("storage"), QStringLiteral("RetailAndCommercial")}, { QStringLiteral("grocery"), QStringLiteral("RetailAndCommercial")},
               { QStringLiteral("library"), QStringLiteral("RetailAndCommercial")}, { QStringLiteral("liquorstore"), QStringLiteral("RetailAndCommercial")},
               { QStringLiteral("changeroom"), QStringLiteral("RetailAndCommercial")},
               // Medical
               { QStringLiteral("medical"), QStringLiteral("Medical")}, { QStringLiteral("pharmacy"), QStringLiteral("Medical")}, { QStringLiteral("optometrist"), QStringLiteral("Medical")},
               { QStringLiteral("laboratory"), QStringLiteral("Medical")}, { QStringLiteral("hospital"), QStringLiteral("Medical")}, { QStringLiteral("dentist"), QStringLiteral("Medical")},
               { QStringLiteral("clinic"), QStringLiteral("Medical")},
               // Community Services
               { QStringLiteral("police"), QStringLiteral("CommunityServices")}, { QStringLiteral("security"), QStringLiteral("CommunityServices")},
               { QStringLiteral("church"), QStringLiteral("CommunityServices")}, { QStringLiteral("firestorage"), QStringLiteral("CommunityServices")},
               { QStringLiteral("armystorage"), QStringLiteral("CommunityServices")}, { QStringLiteral("armysurplus"), QStringLiteral("CommunityServices")},
               { QStringLiteral("gunstore"), QStringLiteral("CommunityServices")}, { QStringLiteral("post"), QStringLiteral("CommunityServices")},
               { QStringLiteral("theatre"), QStringLiteral("CommunityServices")}, { QStringLiteral("school"), QStringLiteral("CommunityServices")},
               { QStringLiteral("bank"), QStringLiteral("CommunityServices")},
               // Hospitality
               { QStringLiteral("motel"), QStringLiteral("Hospitality")},
               // Industrial
               { QStringLiteral("shed"), QStringLiteral("Industrial")}, { QStringLiteral("storageunit"), QStringLiteral("Industrial")}, { QStringLiteral("garage"), QStringLiteral("Industrial")},
               { QStringLiteral("mechanic"), QStringLiteral("Industrial")}, { QStringLiteral("Foundry"), QStringLiteral("Industrial")}, { QStringLiteral("barn"), QStringLiteral("Industrial")},
               { QStringLiteral("construction"), QStringLiteral("Industrial")}, { QStringLiteral("railroad"), QStringLiteral("Industrial") }
    };

    foreach (const MapObject* mapObject, objectGroup->objects()) {
        if (!mapObject->width() || !mapObject->height())
            continue;

        int x = qFloor(mapObject->x());
        int y = qFloor(mapObject->y());
        int w = qCeil(mapObject->x() + mapObject->width()) - x;
        int h = qCeil(mapObject->y() + mapObject->height()) - y;

        QString name = mapObject->name().isEmpty() ? QLatin1String("unnamed") : mapObject->name();
        QString objectType = objectTypeMap.value(name, QStringLiteral("Residential"));

        if (objectGroup->map()->orientation() == Map::Isometric) {
            x += 3 * level;
            y += 3 * level;
        }

        x += offset.x();
        y += offset.y();

        if (objectGroup->name().contains(QLatin1String("RoomDefs"))) {
            if (x < 0 || y < 0 || x + w > 300 || y + h > 300) {
                x = qBound(0, x, 300);
                y = qBound(0, y, 300);
                mError = tr("A RoomDef in cell %1,%2 overlaps cell boundaries.\nNear x,y=%3,%4")
                    .arg(cell->x()).arg(cell->y()).arg(x).arg(y);
                return false;
            }

            InGameMapFeature* feature = new InGameMapFeature(&cell->inGameMap());

            InGameMapProperty property;
            property.mKey = QStringLiteral("building");
            property.mValue = objectType;
            feature->properties() += property;

            feature->mGeometry.mType = QStringLiteral("Polygon");
            InGameMapCoordinates coords;
            coords += InGameMapPoint(x, y);
            coords += InGameMapPoint(x + w, y);
            coords += InGameMapPoint(x + w, y + h);
            coords += InGameMapPoint(x, y + h);
            feature->mGeometry.mCoordinates += coords;

            mWorldDoc->addInGameMapFeature(cell, cell->inGameMap().features().size(), feature);
        }
    }
    return true;
}


namespace {

class OutlineCell {
public:
    OutlineCell(int x, int y)
        : x(x)
        , y(y)
    {
    }

    int x = -1, y = -1;
    bool w = false, n = false, e = false, s = false; // true if no cell in this direction
    bool tw = false, tn = false, te = false, ts = false; // true if traced the given edge
    bool inner = false;
    bool start = false;
};

typedef std::shared_ptr<OutlineCell> OutlineCellPtr;

class OutlineGrid {
public:
    std::vector<OutlineCellPtr> elements;
    int W, H;
    bool EXTEND = true;

    void setSize(int w, int h) {
        elements.resize(size_t(w * h));
        W = w;
        H = h;
    }

    void setInner(int x, int y) {
        OutlineCellPtr f1 = get(x, y);
        if (f1) {
            f1->inner = true;
        }
    }

    bool isInner(int x, int y) {
        OutlineCellPtr f1 = get(x, y);
        return f1 && (f1->start || f1->inner);
    }

    bool canTrace_W(int x, int y) {
        OutlineCellPtr cell = get(x, y);
        return cell && cell->inner && cell->w && !cell->tw;
    }

    bool canTrace_N(int x, int y) {
        OutlineCellPtr cell = get(x, y);
        return cell && cell->inner && cell->n && !cell->tn;
    }

    bool canTrace_E(int x, int y) {
        OutlineCellPtr cell = get(x, y);
        return cell && cell->inner && cell->e && !cell->te;
    }

    bool canTrace_S(int x, int y) {
        OutlineCellPtr cell = get(x, y);
        return cell && cell->inner && cell->s && !cell->ts;
    }

    OutlineCellPtr& elementAt(int x, int y) {
        return elements[size_t(x + y * W)];
    }

    OutlineCellPtr get(int x, int y) {
        if (x < 0 || x >= W)
            return nullptr;
        if (y < 0 || y >= H)
            return nullptr;
        if (!elementAt(x, y))
            elementAt(x, y) = std::make_shared<OutlineCell>(x, y);
        return elementAt(x, y);
    }

    void trace_W(OutlineCell& cell, QPolygon& nodes, int extend) {
        const int x = cell.x, y = cell.y;
        if (EXTEND && extend != -1) {
            nodes[extend] = { x, y };
        } else {
            nodes += { x, y };
        }
        cell.tw = true; // done

        // turn w, continue n, turn e
        if (canTrace_S(x - 1, y - 1)) {
            trace_S(*get(x - 1, y - 1), nodes, -1);
        } else if (canTrace_W(x, y - 1)) {
            trace_W(*get(x, y - 1), nodes, nodes.size()-1);
        } else if (canTrace_N(x, y)) {
            trace_N(cell, nodes, -1);
        }
    }

    void trace_N(OutlineCell& cell, QPolygon& nodes, int extend) {
        const int x = cell.x, y = cell.y;
        if (EXTEND && extend != -1) {
            nodes[extend] = { x + 1, y };
        } else {
            nodes += { x + 1, y };
        }
        cell.tn = true; // done

        // turn n, continue e, turn s
        if (canTrace_W(x + 1, y - 1)) {
            trace_W(*get(x + 1, y - 1), nodes, -1);
        } else if (canTrace_N(x + 1, y)) {
            trace_N(*get(x + 1, y), nodes, nodes.size()-1);
        } else if (canTrace_E(x, y)) {
            trace_E(cell, nodes, -1);
        }
    }

    void trace_E(OutlineCell& cell, QPolygon& nodes, int extend) {
        const int x = cell.x, y = cell.y;
        if (EXTEND && extend != -1) {
            nodes[extend] = { x + 1, y + 1 };
        } else {
            nodes += { x + 1, y + 1 };
        }
        cell.te = true; // done

        // turn e, continue s, turn w
        if (canTrace_N(x + 1, y + 1)) {
            trace_N(*get(x + 1, y + 1), nodes, -1);
        } else if (canTrace_E(x, y + 1)) {
            trace_E(*get(x, y + 1), nodes, nodes.size()-1);
        } else if (canTrace_S(x, y)) {
            trace_S(cell, nodes, -1);
        }
    }

    void trace_S(OutlineCell& cell, QPolygon& nodes, int extend) {
        const int x = cell.x, y = cell.y;
        if (EXTEND && extend != -1) {
            nodes[extend] = { x, y + 1 };
        } else {
            nodes += { x, y + 1 };
        }
        cell.ts = true; // done

        // turn s, continue w, turn n
        if (canTrace_E(x - 1, y + 1)) {
            trace_E(*get(x - 1, y + 1), nodes, -1);
        } else if (canTrace_S(x - 1, y)) {
            trace_S(*get(x - 1, y), nodes, nodes.size()-1);
        } else if (canTrace_W(x, y)) {
            trace_W(cell, nodes, -1);
        }
    }

    QPolygon trace(OutlineCell& cell) {
        const int x = cell.x, y = cell.y;
        QPolygon nodes;
        QPoint node1(x, y);
        nodes += node1;
        cell.start = true;
        trace_N(cell, nodes, -1);
        if (nodes.back() == nodes.first())
            nodes.pop_back();
        return nodes;
    }

    void trace(bool extend, std::function<void(QPolygon&)> callback) {
        EXTEND = extend;
        for (int y = 0; y < H; y++) {
            for (int x = 0; x < W; x++) {
                OutlineCell& cell = *get(x, y);
                if (!cell.inner)
                    continue;
                if (!isInner(x - 1, y))
                    cell.w = true;
                if (!isInner(x, y - 1))
                    cell.n = true;
                if (!isInner(x + 1, y))
                    cell.e = true;
                if (!isInner(x, y + 1))
                    cell.s = true;
            }
        }

        for (int y = 0; y < H; y++) {
            for (int x = 0; x < W; x++) {
                OutlineCellPtr cell = get(x, y);
                // every poly must have a nw corner.
                // this should only happen once.
                if (cell && cell->n && cell->w && cell->inner && !(cell->tw || cell->tn || cell->te || cell->ts)) {
                    QPolygon nodes = trace(*cell);
                    if (nodes.isEmpty())
                        continue;
                    callback(nodes);
                }
            }
        }
    }
};

} // namespace

bool InGameMapFeatureGenerator::processObjectGroup(WorldCell *cell, ObjectGroup *objectGroup, int levelOffset, const QPoint &offset)
{
    if (objectGroup->name().contains(QLatin1String("RoomDefs")) == false) {
        return true;
    }

    int level = objectGroup->level();
    level += levelOffset;

    if (level != 0)
        return true;

    QRect bounds;
    QVector<QRect> rects;

    foreach (const MapObject *mapObject, objectGroup->objects()) {
#if 0
        if (mapObject->name().isEmpty() || mapObject->type().isEmpty())
            continue;
#endif
        if (mapObject->width() * mapObject->height() <= 0)
            continue;

        if ((level <= 0) && BuildingEditor::RoofHiding::isEmptyOutside(mapObject->name())) {
            continue;
        }

        int x = qFloor(mapObject->x());
        int y = qFloor(mapObject->y());
        int w = qCeil(mapObject->x() + mapObject->width()) - x;
        int h = qCeil(mapObject->y() + mapObject->height()) - y;

        if (objectGroup->map()->orientation() == Map::Isometric) {
            x += 3 * level;
            y += 3 * level;
        }

        // Apply the MapComposite offset in the top-level map.
        x += offset.x();
        y += offset.y();

        if (x < 0 || y < 0 || x + w > 300 || y + h > 300) {
            x = qBound(0, x, 300);
            y = qBound(0, y, 300);
            mError = tr("A RoomDef in cell %1,%2 overlaps cell boundaries.\nNear x,y=%3,%4")
                    .arg(cell->x()).arg(cell->y()).arg(x).arg(y);
            return false;
        }
        if (bounds.isEmpty())
            bounds = { x, y, w, h };
        else
            bounds |= { x, y, w, h };
        rects += { x, y, w, h };
    }

    if (bounds.isEmpty())
        return true;

    OutlineGrid grid;
    grid.setSize(bounds.width(), bounds.height());
    for (auto& rect : rects) {
        for (int y = 0; y < rect.height(); y++)
            for (int x = 0; x < rect.width(); x++)
                grid.setInner(rect.x() - bounds.x() + x, rect.y() - bounds.y() + y);
    }

    grid.trace(true, [&](QPolygon& nodes) {
        nodes.translate(bounds.left(), bounds.top());

        InGameMapFeature* feature = new InGameMapFeature(&cell->inGameMap());

        InGameMapProperty property;
        property.mKey = QStringLiteral("building");
        property.mValue = QStringLiteral("yes");
        feature->properties() += property;

        feature->mGeometry.mType = QStringLiteral("Polygon");
        InGameMapCoordinates coords;
        for (auto& point : nodes) {
            coords += InGameMapPoint(point.x(), point.y());
        }
        feature->mGeometry.mCoordinates += coords;

        mWorldDoc->addInGameMapFeature(cell, cell->inGameMap().features().size(), feature);
    });

    return true;
}

bool InGameMapFeatureGenerator::processObjectGroup(WorldCell *cell, MapInfo *mapInfo, ObjectGroup *objectGroup, int levelOffset,
                                                   const QPoint &offset, QRect &bounds, QVector<QRect> &rects)
{
    if (objectGroup->name().contains(QLatin1String("RoomDefs")) == false) {
        return true;
    }

    int level = objectGroup->level();
    level += levelOffset;

    if (level < 0) {
        return true;
    }

    for (const MapObject *mapObject : objectGroup->objects()) {
#if 0
        if (mapObject->name().isEmpty() || mapObject->type().isEmpty())
            continue;
#endif
        if (mapObject->width() * mapObject->height() <= 0)
            continue;

        if ((level <= 0) && BuildingEditor::RoofHiding::isEmptyOutside(mapObject->name())) {
            continue;
        }

        int x = qFloor(mapObject->x());
        int y = qFloor(mapObject->y());
        int w = qCeil(mapObject->x() + mapObject->width()) - x;
        int h = qCeil(mapObject->y() + mapObject->height()) - y;

        if (objectGroup->map()->orientation() == Map::Isometric) {
            x += 3 * level;
            y += 3 * level;
        }

        // Apply the MapComposite offset in the top-level map.
        x += offset.x();
        y += offset.y();

        if (x < 0 || y < 0 || x + w > 300 || y + h > 300) {
            x = qBound(0, x, 300);
            y = qBound(0, y, 300);
            mError = tr("A RoomDef in cell %1,%2 overlaps cell boundaries.\nNear x,y=%3,%4")
                    .arg(cell->x()).arg(cell->y()).arg(x).arg(y);
            return false;
        }
        if (bounds.isEmpty())
            bounds = { x, y, w, h };
        else
            bounds |= { x, y, w, h };
        rects += { x, y, w, h };
    }

    return true;
}

bool InGameMapFeatureGenerator::traceBuildingOutline(WorldCell *cell, MapInfo *mapInfo, QRect &bounds, QVector<QRect> &rects)
{
    if (bounds.isEmpty())
        return true;
#if 1
    ClipperLib::Clipper clipper;
    ClipperLib::Path path;

    for (const QRect box : rects) {
        path.clear();
        path << ClipperLib::IntPoint(box.left(), box.top());
        path << ClipperLib::IntPoint(box.right() + 1, box.top());
        path << ClipperLib::IntPoint(box.right() + 1, box.bottom() + 1);
        path << ClipperLib::IntPoint(box.left(), box.bottom() + 1);
        clipper.AddPath(path, ClipperLib::ptSubject, true);
    }

    ClipperLib::PolyTree polyTree;
    if (clipper.Execute(ClipperLib::ctDifference, polyTree, ClipperLib::PolyFillType::pftPositive) == false) {
        return true;
    }

    std::map<ClipperLib::PolyNode*,pzPolygon*> polyMap;
    std::vector<pzPolygon*> allPolygons;
    for (ClipperLib::PolyNode* node = polyTree.GetFirst(); node != nullptr; node = node->GetNext()) {
        if (node->IsHole()) {
            pzPolygon *outer = polyMap[node->Parent];
            outer->inner.push_back(node->Contour);
        } else {
            pzPolygon* poly = new pzPolygon();
            poly->outer = node->Contour;
            polyMap[node] = poly;
            allPolygons.push_back(poly);
        }
    }

    // FIXME: This may create multiple features each with an outer and zero or more holes.
    //        It would be better if a single feature per building was created.
    for (pzPolygon *poly : allPolygons) {
        ClipperLib::Path path = poly->outer;
        if (path.size() < 3) {
            continue;
        }

        InGameMapFeature* feature = new InGameMapFeature(&cell->inGameMap());
        InGameMapProperty property;
        property.mKey = QStringLiteral("building");
        QString LEGEND = QStringLiteral("Legend");
        if (mapInfo->map()->properties().contains(LEGEND)) {
            property.mValue = mapInfo->map()->property(LEGEND);
        } else {
            property.mValue = QStringLiteral("yes");
        }
        feature->properties() += property;
        for (auto it = mapInfo->map()->properties().cbegin(); it != mapInfo->map()->properties().cend(); it++) {
            if (it.key() == LEGEND) {
                continue;
            }
            property.mKey = it.key();
            property.mValue = it.value();
            feature->properties() += property;
        }
        feature->mGeometry.mType = QStringLiteral("Polygon");
        InGameMapCoordinates coords;
        for (auto& point : path) {
            coords += InGameMapPoint(point.X, point.Y);
        }
        feature->mGeometry.mCoordinates += coords;

        if (poly->inner.empty() == false) {
            for (auto& hole : poly->inner) {
                if (hole.size() < 3) {
                    continue;
                }
                coords.clear();
                for (auto& point : hole) {
                    coords += InGameMapPoint(point.X, point.Y);
                }
                feature->mGeometry.mCoordinates += coords;
            }
        }

        mWorldDoc->addInGameMapFeature(cell, cell->inGameMap().features().size(), feature);
    }

    qDeleteAll(allPolygons);
#else
    OutlineGrid grid;
    grid.setSize(bounds.width(), bounds.height());
    for (auto& rect : rects) {
        for (int y = 0; y < rect.height(); y++)
            for (int x = 0; x < rect.width(); x++)
                grid.setInner(rect.x() - bounds.x() + x, rect.y() - bounds.y() + y);
    }

    grid.trace(true, [&](QPolygon& nodes) {
        nodes.translate(bounds.left(), bounds.top());

        if (isInvalidBuildingPolygon(nodes)) {
            return;
        }

        InGameMapFeature* feature = new InGameMapFeature(&cell->inGameMap());

        InGameMapProperty property;
        property.mKey = QStringLiteral("building");
        QString LEGEND = QStringLiteral("Legend");
        if (mapInfo->map()->properties().contains(LEGEND)) {
            property.mValue = mapInfo->map()->property(LEGEND);
        } else {
            property.mValue = QStringLiteral("yes");
        }
        feature->properties() += property;
        for (auto it = mapInfo->map()->properties().cbegin(); it != mapInfo->map()->properties().cend(); it++) {
            if (it.key() == LEGEND) {
                continue;
            }
            property.mKey = it.key();
            property.mValue = it.value();
            feature->properties() += property;
        }

        feature->mGeometry.mType = QStringLiteral("Polygon");
        InGameMapCoordinates coords;
        for (auto& point : nodes) {
            coords += InGameMapPoint(point.x(), point.y());
        }
        feature->mGeometry.mCoordinates += coords;

        mWorldDoc->addInGameMapFeature(cell, cell->inGameMap().features().size(), feature);
    });
#endif
    return true;
}

bool InGameMapFeatureGenerator::isInvalidBuildingPolygon(const QPolygon &poly)
{
    QRect bounds = poly.boundingRect();
    return (bounds.width() == 2) && (bounds.height() == 2);
}

#include <stack>

struct DPPoint {
    std::int64_t x;
    std::int64_t y;
    bool necessary;
};

// square_distance_from_line() and douglas_peucker() from tippecanoe.

static double square_distance_from_line(std::int64_t point_x, std::int64_t point_y, std::int64_t segA_x, std::int64_t segA_y, std::int64_t segB_x, std::int64_t segB_y) {
    double p2x = segB_x - segA_x;
    double p2y = segB_y - segA_y;
    double something = p2x * p2x + p2y * p2y;
    double u = (0 == something) ? 0 : ((point_x - segA_x) * p2x + (point_y - segA_y) * p2y) / something;

    if (u > 1) {
        u = 1;
    } else if (u < 0) {
        u = 0;
    }

    double x = segA_x + u * p2x;
    double y = segA_y + u * p2y;

    double dx = x - point_x;
    double dy = y - point_y;

    return dx * dx + dy * dy;
}

// https://github.com/Project-OSRM/osrm-backend/blob/733d1384a40f/Algorithms/DouglasePeucker.cpp
static void douglas_peucker(std::vector<DPPoint> &geom, size_t start, size_t n, double e, size_t kept, size_t retain) {
    e = e * e;
    std::stack<size_t> recursion_stack;

    {
        size_t left_border = 0;
        size_t right_border = 1;
        // Sweep linearly over array and identify those ranges that need to be checked
        do {
            if (geom[start + right_border].necessary) {
                recursion_stack.push(left_border);
                recursion_stack.push(right_border);
                left_border = right_border;
            }
            ++right_border;
        } while (right_border < n);
    }

    while (!recursion_stack.empty()) {
        // pop next element
        size_t second = recursion_stack.top();
        recursion_stack.pop();
        size_t first = recursion_stack.top();
        recursion_stack.pop();

        double max_distance = -1;
        size_t farthest_element_index = second;

        // find index idx of element with max_distance
        for (size_t i = first + 1; i < second; i++) {
            double temp_dist = square_distance_from_line(
                        geom[start + i].x, geom[start + i].y,
                        geom[start + first].x, geom[start + first].y,
                        geom[start + second].x, geom[start + second].y);

            double distance = std::fabs(temp_dist);

            if ((distance > e || kept < retain) && distance > max_distance) {
                farthest_element_index = i;
                max_distance = distance;
            }
        }

        if (max_distance >= 0) {
            // mark idx as necessary
            geom[start + farthest_element_index].necessary = true;
            kept++;

            if (1 < farthest_element_index - first) {
                recursion_stack.push(first);
                recursion_stack.push(farthest_element_index);
            }
            if (1 < second - farthest_element_index) {
                recursion_stack.push(farthest_element_index);
                recursion_stack.push(second);
            }
        }
    }
}

static void simplifyPolygon(ClipperLib::Path& nodes)
{
    // Simplification of the polygon using Ramer-Douglas-Peucker algorithm
    std::vector<DPPoint> points;
    std::int64_t SCALE = 1000;
    const size_t DI = 40;
    size_t lastNecessary = -1;
    for (size_t i = 0; i < nodes.size(); i++) {
        const auto& node = nodes[i];
        bool necessary = i == 0 || i == nodes.size() - 1;

        // Keep points on cell borders
        if (node.X == 0 || node.X == 300 || node.Y == 0 || node.Y == 300)
            necessary = true;

        if (i - lastNecessary >= DI)
            necessary = true;

        if (necessary)
            lastNecessary = i;

        points.push_back( { std::int64_t(node.X * SCALE), std::int64_t(node.Y * SCALE), necessary } );
    }

    double simplification = 2 * SCALE;
    douglas_peucker(points, 0, points.size(), simplification, 2, 0);

    nodes.clear();
    for (auto& point : points) {
        if (point.necessary)
            nodes.push_back({int(point.x / SCALE), int(point.y / SCALE)});
    }

    // Merge horizontal/vertical spans (on cell borders)
    for (size_t i = 0; i < nodes.size() - 1; i++) {
        const auto& n0 = nodes[i];
        size_t end = i;
        for (size_t j = i + 1; j < nodes.size(); j++) {
            const auto& n1 = nodes[j];
            if (n0.Y != n1.Y)
                break;
            end = j;
        }
        if (i != end)
            nodes.erase(nodes.begin() + i + 1, nodes.begin() + end /*- i - 1*/);
    }
    for (size_t i = 0; i < nodes.size() - 1; i++) {
        const auto& n0 = nodes[i];
        size_t end = i;
        for (size_t j = i + 1; j < nodes.size(); j++) {
            const auto& n1 = nodes[j];
            if (n0.X != n1.X)
                break;
            end = j;
        }
        if (i < end)
            nodes.erase(nodes.begin() + i + 1, nodes.begin() + end /*- i - 1*/);
    }
}

bool InGameMapFeatureGenerator::doWater(WorldCell *cell, MapInfo *mapInfo)
{
    // Remove all "water=" features
    auto& features = cell->inGameMap().features();
    for (int i = features.size() - 1; i >= 0; i--) {
        auto* feature = features[i];
        if (feature->properties().containsKey(QStringLiteral("water"))) {
            mWorldDoc->removeInGameMapFeature(cell, feature->index());
        }
        if (feature->properties().contains(QStringLiteral("natural"), QStringLiteral("forest"))) {
            mWorldDoc->removeInGameMapFeature(cell, feature->index());
        }
    }

    DelayedMapLoader mapLoader;
    mapLoader.addMap(mapInfo);

    while (mapInfo->isLoading())
        qApp->processEvents(QEventLoop::ExcludeUserInputEvents);

    MapComposite staticMapComposite(mapInfo);
    MapComposite *mapComposite = &staticMapComposite;
    while (mapComposite->waitingForMapsToLoad() || mapLoader.isLoading())
        qApp->processEvents(QEventLoop::ExcludeUserInputEvents);

    const QRect bounds(QPoint(), mapInfo->map()->size());

    auto* layerGroup = mapComposite->layerGroupForLevel(0);
    layerGroup->prepareDrawing2();

    ClipperLib::Clipper clipper;
    ClipperLib::Path path;

    static QVector<const Tiled::Cell*> cells(40);

    auto isWaterAt = [&](int x, int y) {
        cells.resize(0);
        layerGroup->orderedCellsAt2({x, y}, cells);
        for (auto* cell : qAsConst(cells)) {
            if (cell->isEmpty())
                continue;
            if ((cell->tile->id() == 0 || cell->tile->id() == 5 || cell->tile->id() == 6 || cell->tile->id() == 7) && (cell->tile->tileset()->name() == QStringLiteral("blends_natural_02"))) {
                return true;
            }
        }
        return false;
    };

    for (int y = 0; y < bounds.height(); y++) {
        for (int x = 0; x < bounds.width(); x++) {
            if (isWaterAt(x, y)) {
#if 1
                path.clear();
                path << ClipperLib::IntPoint(x, y);
                path << ClipperLib::IntPoint(x + 1, y);
                path << ClipperLib::IntPoint(x + 1, y + 1);
                path << ClipperLib::IntPoint(x, y + 1);
                clipper.AddPath(path, ClipperLib::ptSubject, true);
#else
                // This should work...
                int end = x + 1;
                for (; end < bounds.width(); end++) {
                    if (isWaterAt(end, y) == false)
                        break;
                }
                path.clear();
                path << ClipperLib::IntPoint(x, y);
                path << ClipperLib::IntPoint(end, y);
                path << ClipperLib::IntPoint(end, y + 1);
                path << ClipperLib::IntPoint(x, y + 1);
                clipper.AddPath(path, ClipperLib::ptSubject, true);
                x = end - 1;
#endif
            }
        }
    }

    ClipperLib::PolyTree polyTree;
    if (clipper.Execute(ClipperLib::ctDifference, polyTree, ClipperLib::PolyFillType::pftPositive) == false) {
        return true;
    }

    std::map<ClipperLib::PolyNode*,pzPolygon*> polyMap;
    std::vector<pzPolygon*> allPolygons;
    for (ClipperLib::PolyNode* node = polyTree.GetFirst(); node != nullptr; node = node->GetNext()) {
        if (node->IsHole()) {
            pzPolygon *outer = polyMap[node->Parent];
            outer->inner.push_back(node->Contour);
        } else {
            pzPolygon* poly = new pzPolygon();
            poly->outer = node->Contour;
            polyMap[node] = poly;
            allPolygons.push_back(poly);
        }
    }

    for (pzPolygon *poly : allPolygons) {
        if (poly->outer.empty()) continue;
        InGameMapFeature* feature = new InGameMapFeature(&cell->inGameMap());
        feature->properties().set(QStringLiteral("water"), QStringLiteral("river"));
        ClipperLib::Path simple = poly->outer;
        simplifyPolygon(simple);
        if (simple.size() < 3) continue;
        feature->mGeometry.mType = QStringLiteral("Polygon");
        InGameMapCoordinates coords;
        for (auto& point : simple) {
            coords += InGameMapPoint(point.X, point.Y);
        }
        feature->mGeometry.mCoordinates += coords;

        if (poly->inner.empty() == false) {
            for (auto& hole : poly->inner) {
                simple = hole;
                simplifyPolygon(simple);
                if (simple.size() < 3) continue;
                coords.clear();
                for (auto& point : simple) {
                    coords += InGameMapPoint(point.X, point.Y);
                }
                feature->mGeometry.mCoordinates += coords;
            }
        }

        mWorldDoc->addInGameMapFeature(cell, cell->inGameMap().features().size(), feature);
    }

    qDeleteAll(allPolygons);
    return true;
}

#include <array>
#include <iostream>
#include <preferences.h>

bool InGameMapFeatureGenerator::doTrees(WorldCell *cell, MapInfo *mapInfo)
{
    // Remove all "natural=forest" features
    auto& features = cell->inGameMap().features();
    for (int i = features.size() - 1; i >= 0; i--) {
        auto* feature = features[i];
        if (feature->properties().contains(QStringLiteral("natural"), QStringLiteral("forest"))) {
            mWorldDoc->removeInGameMapFeature(cell, feature->index());
        }
    }

    DelayedMapLoader mapLoader;
    mapLoader.addMap(mapInfo);

    while (mapInfo->isLoading())
        qApp->processEvents(QEventLoop::ExcludeUserInputEvents);

    MapComposite staticMapComposite(mapInfo);
    MapComposite *mapComposite = &staticMapComposite;
    while (mapComposite->waitingForMapsToLoad() || mapLoader.isLoading())
        qApp->processEvents(QEventLoop::ExcludeUserInputEvents);

    const QRect bounds(QPoint(), mapInfo->map()->size());

    auto* layerGroup = mapComposite->layerGroupForLevel(0);
    layerGroup->prepareDrawing2();

    static QVector<const Tiled::Cell*> cells(40);

    auto isTreeAt = [&](int _x, int _y) {
        cells.resize(0);
        layerGroup->orderedCellsAt2({_x, _y}, cells);
        for (auto* cell : qAsConst(cells)) {
            if (cell->isEmpty())
                continue;
            if ((cell->tile->id() >= 8 && cell->tile->id() <= 15 && cell->tile->tileset()->name().startsWith(QLatin1String("vegetation_trees"))) || (cell->tile->id() == 0 && cell->tile->tileset()->name() == QStringLiteral("jumbo_tree_01"))) {
                return true;
            }
        }
        return false;
    };

    std::array<bool, 300 * 300> trees;
    for (int y = 0; y < bounds.height(); y++) {
        for (int x = 0; x < bounds.width(); x++) {
            trees[x + y * 300] = isTreeAt(x, y);
        }
    }

    auto getTreesNear = [&](int _x, int _y) {
        QRect box = { _x, _y, 1, 1 };
        for (int y = _y - 4; y < _y + 4; y++) {
            for (int x = _x - 4; x < _x + 4; x++) {
                if (x == _x && y == _y)
                    continue;
                if (bounds.contains(x, y) && trees[x + y * 300]) {
                    box |= { x, y, 1, 1 };
                }
            }
        }
        return box;

    };

    ClipperLib::Clipper clipper;
    ClipperLib::Path path;

    for (int y = 0; y < bounds.height(); y++) {
        for (int x = 0; x < bounds.width(); x++) {
            if (trees[x + y * 300]) {
                QRect box = getTreesNear(x, y);
                if (box.size() != QSize(1, 1)) {
                    path.clear();
                    box.adjust(-1, -1, 1, 1);
                    box &= bounds;
                    path << ClipperLib::IntPoint(box.left(), box.top());
                    path << ClipperLib::IntPoint(box.right() + 1, box.top());
                    path << ClipperLib::IntPoint(box.right() + 1, box.bottom() + 1);
                    path << ClipperLib::IntPoint(box.left(), box.bottom() + 1);
                    clipper.AddPath(path, ClipperLib::ptSubject, true);
                }
            }
        }
    }

    ClipperLib::PolyTree polyTree;
    if (clipper.Execute(ClipperLib::ctDifference, polyTree, ClipperLib::PolyFillType::pftPositive) == false) {
        return true;
    }

    std::map<ClipperLib::PolyNode*,pzPolygon*> polyMap;
    std::vector<pzPolygon*> allPolygons;
    for (ClipperLib::PolyNode* node = polyTree.GetFirst(); node != nullptr; node = node->GetNext()) {
        if (node->IsHole()) {
            pzPolygon *outer = polyMap[node->Parent];
            outer->inner.push_back(node->Contour);
        } else {
            pzPolygon* poly = new pzPolygon();
            poly->outer = node->Contour;
            polyMap[node] = poly;
            allPolygons.push_back(poly);
        }
    }

#if 0
    int nextID = 0;
    for (auto *feature : cell->inGameMap().features()) {
        nextID = std::max(nextID, feature->mProperties.getInt(QStringLiteral("id"), 0));
    }
#endif

    for (pzPolygon *poly : allPolygons) {
        ClipperLib::Path simple = poly->outer;
        simplifyPolygon(simple);
        if (simple.size() < 3) {
            continue;
        }
#if 0
        int minX = std::numeric_limits<int>::max();
        int minY = std::numeric_limits<int>::max();
        int maxX = std::numeric_limits<int>::min();
        int maxY = std::numeric_limits<int>::min();
        for (auto& point : simple) {
            minX = std::min(minX, (int) point.X);
            minY = std::min(minY, (int) point.Y);
            maxX = std::max(maxX, (int) point.X);
            maxY = std::max(maxY, (int) point.Y);
        }
        if ((maxX - minX + 1) * (maxY - minY + 1) < 1000) {
            continue;
        }
#endif

        InGameMapFeature* feature = new InGameMapFeature(&cell->inGameMap());
        feature->properties().set(QStringLiteral("natural"), QStringLiteral("forest"));
        feature->mGeometry.mType = QStringLiteral("Polygon");
        InGameMapCoordinates coords;
        for (auto& point : simple) {
            coords += InGameMapPoint(point.X, point.Y);
        }
        feature->mGeometry.mCoordinates += coords;

        if (poly->inner.empty() == false) {
#if 1
            for (auto& hole : poly->inner) {
                simple = hole;
                simplifyPolygon(simple);
                if (simple.size() < 3) {
                    continue;
                }
                coords.clear();
                for (auto& point : simple) {
                    coords += InGameMapPoint(point.X, point.Y);
                }
                feature->mGeometry.mCoordinates += coords;
            }
#else
            // If this polygon has holes, assign a unique ID so holes can refer to this polygon.
            ++nextID;
            feature->properties().set(QStringLiteral("id"), nextID);
#endif
        }

        mWorldDoc->addInGameMapFeature(cell, cell->inGameMap().features().size(), feature);

#if 0
        for (auto& hole : poly->inner) {
            InGameMapFeature* feature = new InGameMapFeature(&cell->inGameMap());
            feature->properties().set(QStringLiteral("natural"), QStringLiteral("forest"));
            feature->properties().set(QStringLiteral("hole"), nextID);
            feature->mGeometry.mType = QStringLiteral("Polygon");
            InGameMapCoordinates coords;
            simple = hole;
            simplifyPolygon(simple);
            for (auto& point : simple) {
                coords += InGameMapPoint(point.X, point.Y);
            }
            feature->mGeometry.mCoordinates += coords;
            mWorldDoc->addInGameMapFeature(cell, cell->inGameMap().features().size(), feature);
        }
#endif
    }

    qDeleteAll(allPolygons);
    return true;
}

static void simplifyPolygonRoad(ClipperLib::Path& nodes, int simple, int minPoint)
{
    // Simplification of the polygon using Ramer-Douglas-Peucker algorithm
    std::vector<DPPoint> points;
    std::int64_t SCALE = simple;
    const size_t DI = minPoint;
    size_t lastNecessary = -1;
    for (size_t i = 0; i < nodes.size(); i++) {
        const auto& node = nodes[i];
        bool necessary = i == 0 || i == nodes.size() - 1;

        // Keep points on cell borders
        if (node.X == 0 || node.X == 300 || node.Y == 0 || node.Y == 300)
            necessary = true;

        if (i - lastNecessary >= DI)
            necessary = true;

        if (necessary)
            lastNecessary = i;

        points.push_back({ std::int64_t(node.X * SCALE), std::int64_t(node.Y * SCALE), necessary });
    }

    double simplification = 2 * SCALE;
    //simplification = SCALE;

    douglas_peucker(points, 0, points.size(), simplification, 2, 0);

    nodes.clear();
    for (auto& point : points) {
        if (point.necessary)
            nodes.push_back({ int(point.x / SCALE), int(point.y / SCALE) });
    }

    for (size_t i = 0; i < nodes.size() - 1; i++) {
        const auto& n0 = nodes[i];
        size_t end = i;
        for (size_t j = i + 1; j < nodes.size(); j++) {
            const auto& n1 = nodes[j];
            if ((n0.X != n1.X) && (n0.Y != n1.Y)) // check both conditions in one if statement
                break;
            end = j;
        }
        if (i < end)
            nodes.erase(nodes.begin() + i + 1, nodes.begin() + end);
    }
}


bool InGameMapFeatureGenerator::doRoadMain(WorldCell* cell, MapInfo* mapInfo)
{
    auto& features = cell->inGameMap().features();
    for (int i = features.size() - 1; i >= 0; i--) {
        auto* feature = features[i];
        if (feature->properties().contains(QStringLiteral("highway"), QStringLiteral("primary"))) {
            mWorldDoc->removeInGameMapFeature(cell, feature->index());
        }
        if (feature->properties().contains(QStringLiteral("natural"), QStringLiteral("forest"))) {
            mWorldDoc->removeInGameMapFeature(cell, feature->index());
        }
    }
    Preferences* prefs = Preferences::instance();
    int threshold = prefs->hsThresholdHP();
    int size = prefs->hsSizeHP();

    DelayedMapLoader mapLoader;
    mapLoader.addMap(mapInfo);

    while (mapInfo->isLoading())
        qApp->processEvents(QEventLoop::ExcludeUserInputEvents);

    MapComposite staticMapComposite(mapInfo);
    MapComposite* mapComposite = &staticMapComposite;
    while (mapComposite->waitingForMapsToLoad() || mapLoader.isLoading())
        qApp->processEvents(QEventLoop::ExcludeUserInputEvents);

    const QRect bounds(QPoint(), mapInfo->map()->size());

    auto* layerGroup = mapComposite->layerGroupForLevel(0);
    layerGroup->prepareDrawing2();

    ClipperLib::Clipper clipper;
    ClipperLib::Path path;

    static QVector<const Tiled::Cell*> cells(40);

    auto isRoadAt = [&](int x, int y) {
        cells.resize(0);
        layerGroup->orderedCellsAt2({ x, y }, cells);
        for (auto* cell : qAsConst(cells)) {
            if (cell->isEmpty())
                continue;
            // blends_street_01_32
            // blends_street_01_37
            // blends_street_01_38
            // blends_street_01_39
            // blends_street_01_80
            // blends_street_01_85
            // blends_street_01_86
            // blends_street_01_87
            if ((cell->tile->id() == 32 || cell->tile->id() == 37 || cell->tile->id() == 38 || cell->tile->id() == 39 || cell->tile->id() == 80 || cell->tile->id() == 85 || cell->tile->id() == 86 || cell->tile->id() == 87) && (cell->tile->tileset()->name() == QStringLiteral("blends_street_01"))) {
                return true;
            }
        }
        return false;
    };

    for (int y = 0; y < bounds.height(); y++) {
        for (int x = 0; x < bounds.width(); x++) {
            if (isRoadAt(x, y)) {

                path.clear();
                path << ClipperLib::IntPoint(x, y);
                path << ClipperLib::IntPoint(x + 1, y);
                path << ClipperLib::IntPoint(x + 1, y + 1);
                path << ClipperLib::IntPoint(x, y + 1);
                clipper.AddPath(path, ClipperLib::ptSubject, true);

            }
        }
    }

    ClipperLib::PolyTree polyTree;
    if (clipper.Execute(ClipperLib::ctDifference, polyTree, ClipperLib::PolyFillType::pftPositive) == false) {
        return true;
    }

    std::map<ClipperLib::PolyNode*, pzPolygon*> polyMap;
    std::vector<pzPolygon*> allPolygons;
    for (ClipperLib::PolyNode* node = polyTree.GetFirst(); node != nullptr; node = node->GetNext()) {
        if (node->IsHole()) {
            pzPolygon* outer = polyMap[node->Parent];
            outer->inner.push_back(node->Contour);
        }
        else {
            pzPolygon* poly = new pzPolygon();
            poly->outer = node->Contour;
            polyMap[node] = poly;
            allPolygons.push_back(poly);
        }
    }

    for (pzPolygon* poly : allPolygons) {
        InGameMapFeature* feature = new InGameMapFeature(&cell->inGameMap());
        feature->properties().set(QStringLiteral("highway"), QStringLiteral("primary"));
        ClipperLib::Path simple = poly->outer;
        simplifyPolygonRoad(simple, threshold, size);
        if (simple.size() < 4) continue;
        feature->mGeometry.mType = QStringLiteral("Polygon");
        InGameMapCoordinates coords;
        for (auto& point : simple) {
            coords += InGameMapPoint(point.X, point.Y);
        }
        feature->mGeometry.mCoordinates += coords;

        if (poly->inner.empty() == false) {
            for (auto& hole : poly->inner) {
                simple = hole;
                simplifyPolygonRoad(simple, threshold, size);
                if (simple.size() < 4) continue;
                coords.clear();
                for (auto& point : simple) {
                    coords += InGameMapPoint(point.X, point.Y);
                }
                feature->mGeometry.mCoordinates += coords;
            }
        }
        mWorldDoc->addInGameMapFeature(cell, cell->inGameMap().features().size(), feature);
    }

    qDeleteAll(allPolygons);
    return true;
}

bool InGameMapFeatureGenerator::doRoadSecondary(WorldCell* cell, MapInfo* mapInfo)
{
    auto& features = cell->inGameMap().features();
    for (int i = features.size() - 1; i >= 0; i--) {
        auto* feature = features[i];
        if (feature->properties().contains(QStringLiteral("highway"), QStringLiteral("secondary"))) {
            mWorldDoc->removeInGameMapFeature(cell, feature->index());
        }
        if (feature->properties().contains(QStringLiteral("natural"), QStringLiteral("forest"))) {
            mWorldDoc->removeInGameMapFeature(cell, feature->index());
        }
    }

    Preferences* prefs = Preferences::instance();
    int threshold = prefs->hsThresholdHP();
    int size = prefs->hsSizeHP();

    DelayedMapLoader mapLoader;
    mapLoader.addMap(mapInfo);

    while (mapInfo->isLoading())
        qApp->processEvents(QEventLoop::ExcludeUserInputEvents);

    MapComposite staticMapComposite(mapInfo);
    MapComposite* mapComposite = &staticMapComposite;
    while (mapComposite->waitingForMapsToLoad() || mapLoader.isLoading())
        qApp->processEvents(QEventLoop::ExcludeUserInputEvents);

    const QRect bounds(QPoint(), mapInfo->map()->size());

    auto* layerGroup = mapComposite->layerGroupForLevel(0);
    layerGroup->prepareDrawing2();

    ClipperLib::Clipper clipper;
    ClipperLib::Path path;

    static QVector<const Tiled::Cell*> cells(40);

    auto isRoadAt = [&](int x, int y) {
        cells.resize(0);
        layerGroup->orderedCellsAt2({ x, y }, cells);
        for (auto* cell : qAsConst(cells)) {
            if (cell->isEmpty())
                continue;
            // blends_street_01_96
            // blends_street_01_101
            // blends_street_01_102
            // blends_street_01_103
            if ((cell->tile->id() == 96 || cell->tile->id() == 101 || cell->tile->id() == 102 || cell->tile->id() == 103) && (cell->tile->tileset()->name() == QStringLiteral("blends_street_01"))) {
                return true;
            }
        }
        return false;
    };

    for (int y = 0; y < bounds.height(); y++) {
        for (int x = 0; x < bounds.width(); x++) {
            if (isRoadAt(x, y)) {

                path.clear();
                path << ClipperLib::IntPoint(x, y);
                path << ClipperLib::IntPoint(x + 1, y);
                path << ClipperLib::IntPoint(x + 1, y + 1);
                path << ClipperLib::IntPoint(x, y + 1);
                clipper.AddPath(path, ClipperLib::ptSubject, true);

            }
        }
    }

    ClipperLib::PolyTree polyTree;
    if (clipper.Execute(ClipperLib::ctDifference, polyTree, ClipperLib::PolyFillType::pftPositive) == false) {
        return true;
    }

    std::map<ClipperLib::PolyNode*, pzPolygon*> polyMap;
    std::vector<pzPolygon*> allPolygons;
    for (ClipperLib::PolyNode* node = polyTree.GetFirst(); node != nullptr; node = node->GetNext()) {
        if (node->IsHole()) {
            pzPolygon* outer = polyMap[node->Parent];
            outer->inner.push_back(node->Contour);
        }
        else {
            pzPolygon* poly = new pzPolygon();
            poly->outer = node->Contour;
            polyMap[node] = poly;
            allPolygons.push_back(poly);
        }
    }

    for (pzPolygon* poly : allPolygons) {
        InGameMapFeature* feature = new InGameMapFeature(&cell->inGameMap());
        feature->properties().set(QStringLiteral("highway"), QStringLiteral("secondary"));
        ClipperLib::Path simple = poly->outer;
        simplifyPolygonRoad(simple, threshold, size);
        if (simple.size() < 4) continue;
        feature->mGeometry.mType = QStringLiteral("Polygon");
        InGameMapCoordinates coords;
        for (auto& point : simple) {
            coords += InGameMapPoint(point.X, point.Y);
        }
        feature->mGeometry.mCoordinates += coords;

        if (poly->inner.empty() == false) {
            for (auto& hole : poly->inner) {
                simple = hole;
                simplifyPolygonRoad(simple, threshold, size);
                if (simple.size() < 4) continue;
                coords.clear();
                for (auto& point : simple) {
                    coords += InGameMapPoint(point.X, point.Y);
                }
                feature->mGeometry.mCoordinates += coords;
            }
        }
        mWorldDoc->addInGameMapFeature(cell, cell->inGameMap().features().size(), feature);
    }

    qDeleteAll(allPolygons);
    return true;
}

bool InGameMapFeatureGenerator::doRoadTertiary(WorldCell* cell, MapInfo* mapInfo)
{
    auto& features = cell->inGameMap().features();
    for (int i = features.size() - 1; i >= 0; i--) {
        auto* feature = features[i];
        if (feature->properties().contains(QStringLiteral("highway"), QStringLiteral("tertiary"))) {
            mWorldDoc->removeInGameMapFeature(cell, feature->index());
        }
        if (feature->properties().contains(QStringLiteral("natural"), QStringLiteral("forest"))) {
            mWorldDoc->removeInGameMapFeature(cell, feature->index());
        }
    }

    Preferences* prefs = Preferences::instance();
    int threshold = prefs->hsThresholdHP();
    int size = prefs->hsSizeHP();

    DelayedMapLoader mapLoader;
    mapLoader.addMap(mapInfo);

    while (mapInfo->isLoading())
        qApp->processEvents(QEventLoop::ExcludeUserInputEvents);

    MapComposite staticMapComposite(mapInfo);
    MapComposite* mapComposite = &staticMapComposite;
    while (mapComposite->waitingForMapsToLoad() || mapLoader.isLoading())
        qApp->processEvents(QEventLoop::ExcludeUserInputEvents);

    const QRect bounds(QPoint(), mapInfo->map()->size());

    auto* layerGroup = mapComposite->layerGroupForLevel(0);
    layerGroup->prepareDrawing2();

    ClipperLib::Clipper clipper;
    ClipperLib::Path path;

    static QVector<const Tiled::Cell*> cells(40);

    auto isRoadAt = [&](int x, int y) {
        cells.resize(0);
        layerGroup->orderedCellsAt2({ x, y }, cells);
        for (auto* cell : qAsConst(cells)) {
            if (cell->isEmpty())
                continue;
            // blends_street_01_16
            // blends_street_01_21
            // blends_street_01_48
            // blends_street_01_53
            // blends_street_01_54
            // blends_street_01_55
            if ((cell->tile->id() == 48 || cell->tile->id() == 53 || cell->tile->id() == 54 || cell->tile->id() == 55 || cell->tile->id() == 16 || cell->tile->id() == 21) && (cell->tile->tileset()->name() == QStringLiteral("blends_street_01"))) {
                return true;
            }
        }
        return false;
    };

    for (int y = 0; y < bounds.height(); y++) {
        for (int x = 0; x < bounds.width(); x++) {
            if (isRoadAt(x, y)) {

                path.clear();
                path << ClipperLib::IntPoint(x, y);
                path << ClipperLib::IntPoint(x + 1, y);
                path << ClipperLib::IntPoint(x + 1, y + 1);
                path << ClipperLib::IntPoint(x, y + 1);
                clipper.AddPath(path, ClipperLib::ptSubject, true);

            }
        }
    }

    ClipperLib::PolyTree polyTree;
    if (clipper.Execute(ClipperLib::ctDifference, polyTree, ClipperLib::PolyFillType::pftPositive) == false) {
        return true;
    }

    std::map<ClipperLib::PolyNode*, pzPolygon*> polyMap;
    std::vector<pzPolygon*> allPolygons;
    for (ClipperLib::PolyNode* node = polyTree.GetFirst(); node != nullptr; node = node->GetNext()) {
        if (node->IsHole()) {
            pzPolygon* outer = polyMap[node->Parent];
            outer->inner.push_back(node->Contour);
        }
        else {
            pzPolygon* poly = new pzPolygon();
            poly->outer = node->Contour;
            polyMap[node] = poly;
            allPolygons.push_back(poly);
        }
    }

    for (pzPolygon* poly : allPolygons) {
        InGameMapFeature* feature = new InGameMapFeature(&cell->inGameMap());
        feature->properties().set(QStringLiteral("highway"), QStringLiteral("tertiary"));
        ClipperLib::Path simple = poly->outer;
        simplifyPolygonRoad(simple, threshold, size);
        if (simple.size() < 4) continue;
        feature->mGeometry.mType = QStringLiteral("Polygon");
        InGameMapCoordinates coords;
        for (auto& point : simple) {
            coords += InGameMapPoint(point.X, point.Y);
        }
        feature->mGeometry.mCoordinates += coords;

        if (poly->inner.empty() == false) {
            for (auto& hole : poly->inner) {
                simple = hole;
                simplifyPolygonRoad(simple, threshold, size);
                if (simple.size() < 4) continue;
                coords.clear();
                for (auto& point : simple) {
                    coords += InGameMapPoint(point.X, point.Y);
                }
                feature->mGeometry.mCoordinates += coords;
            }
        }
        mWorldDoc->addInGameMapFeature(cell, cell->inGameMap().features().size(), feature);
    }

    qDeleteAll(allPolygons);
    return true;
}

bool InGameMapFeatureGenerator::doRoadTrail(WorldCell* cell, MapInfo* mapInfo)
{
    auto& features = cell->inGameMap().features();
    for (int i = features.size() - 1; i >= 0; i--) {
        auto* feature = features[i];
        if (feature->properties().contains(QStringLiteral("highway"), QStringLiteral("trail"))) {
            mWorldDoc->removeInGameMapFeature(cell, feature->index());
        }
        if (feature->properties().contains(QStringLiteral("natural"), QStringLiteral("forest"))) {
            mWorldDoc->removeInGameMapFeature(cell, feature->index());
        }
    }

    Preferences* prefs = Preferences::instance();
    int threshold = prefs->hsThresholdHT();
    int size = prefs->hsSizeHT();

    DelayedMapLoader mapLoader;
    mapLoader.addMap(mapInfo);

    while (mapInfo->isLoading())
        qApp->processEvents(QEventLoop::ExcludeUserInputEvents);

    MapComposite staticMapComposite(mapInfo);
    MapComposite* mapComposite = &staticMapComposite;
    while (mapComposite->waitingForMapsToLoad() || mapLoader.isLoading())
        qApp->processEvents(QEventLoop::ExcludeUserInputEvents);

    const QRect bounds(QPoint(), mapInfo->map()->size());

    auto* layerGroup = mapComposite->layerGroupForLevel(0);
    layerGroup->prepareDrawing2();

    ClipperLib::Clipper clipper;
    ClipperLib::Path path;

    static QVector<const Tiled::Cell*> cells(40);

    auto isRoadAt = [&](int x, int y) {
        cells.resize(0);
        layerGroup->orderedCellsAt2({ x, y }, cells);
        for (auto* cell : qAsConst(cells)) {
            if (cell->isEmpty())
                continue;

            // blends_natural_01_64
            // blends_natural_01_69
            // blends_natural_01_70
            // blends_natural_01_71
            if ((cell->tile->id() == 64 || cell->tile->id() == 69 || cell->tile->id() == 70 || cell->tile->id() == 71 || cell->tile->id() == 80 || cell->tile->id() == 85 || cell->tile->id() == 86 || cell->tile->id() == 87) && (cell->tile->tileset()->name() == QStringLiteral("blends_natural_01"))) {
                return true;
            }
        }
        return false;
    };

    for (int y = 0; y < bounds.height(); y++) {
        for (int x = 0; x < bounds.width(); x++) {
            if (isRoadAt(x, y)) {

                path.clear();
                path << ClipperLib::IntPoint(x, y);
                path << ClipperLib::IntPoint(x + 1, y);
                path << ClipperLib::IntPoint(x + 1, y + 1);
                path << ClipperLib::IntPoint(x, y + 1);
                clipper.AddPath(path, ClipperLib::ptSubject, true);

            }
        }
    }

    ClipperLib::PolyTree polyTree;
    if (clipper.Execute(ClipperLib::ctDifference, polyTree, ClipperLib::PolyFillType::pftPositive) == false) {
        return true;
    }

    std::map<ClipperLib::PolyNode*, pzPolygon*> polyMap;
    std::vector<pzPolygon*> allPolygons;
    for (ClipperLib::PolyNode* node = polyTree.GetFirst(); node != nullptr; node = node->GetNext()) {
        if (node->IsHole()) {
            pzPolygon* outer = polyMap[node->Parent];
            outer->inner.push_back(node->Contour);
        }
        else {
            pzPolygon* poly = new pzPolygon();
            poly->outer = node->Contour;
            polyMap[node] = poly;
            allPolygons.push_back(poly);
        }
    }

    for (pzPolygon* poly : allPolygons) {
            if (poly->outer.size() < 3) continue;
            InGameMapFeature* feature = new InGameMapFeature(&cell->inGameMap());
            feature->properties().set(QStringLiteral("highway"), QStringLiteral("trail"));
            ClipperLib::Path simple = poly->outer;

            simplifyPolygonRoad(simple, threshold, size);
            if (simple.size() < 4) continue;
            feature->mGeometry.mType = QStringLiteral("Polygon");
            InGameMapCoordinates coords;
            for (auto& point : simple) {
                coords += InGameMapPoint(point.X, point.Y);
            }
            feature->mGeometry.mCoordinates += coords;

            if (poly->inner.empty() == false) {
                for (auto& hole : poly->inner) {
                    simple = hole;
                    simplifyPolygonRoad(simple, threshold, size);
                    if (simple.size() < 4) continue;
                    coords.clear();
                    for (auto& point : simple) {
                        coords += InGameMapPoint(point.X, point.Y);
                    }
                    feature->mGeometry.mCoordinates += coords;
                }
            }


            mWorldDoc->addInGameMapFeature(cell, cell->inGameMap().features().size(), feature);

    }

    qDeleteAll(allPolygons);
    return true;
}


bool InGameMapFeatureGenerator::doRailroad(WorldCell* cell, MapInfo* mapInfo)
{
    auto& features = cell->inGameMap().features();
    for (int i = features.size() - 1; i >= 0; i--) {
        auto* feature = features[i];
        if (feature->properties().contains(QStringLiteral("railway"), QStringLiteral("*"))) {
            mWorldDoc->removeInGameMapFeature(cell, feature->index());
        }
        if (feature->properties().contains(QStringLiteral("natural"), QStringLiteral("forest"))) {
            mWorldDoc->removeInGameMapFeature(cell, feature->index());
        }
    }

    Preferences* prefs = Preferences::instance();
    int threshold = prefs->hsThresholdR();
    int size = prefs->hsSizeR();

    DelayedMapLoader mapLoader;
    mapLoader.addMap(mapInfo);

    while (mapInfo->isLoading())
        qApp->processEvents(QEventLoop::ExcludeUserInputEvents);

    MapComposite staticMapComposite(mapInfo);
    MapComposite* mapComposite = &staticMapComposite;
    while (mapComposite->waitingForMapsToLoad() || mapLoader.isLoading())
        qApp->processEvents(QEventLoop::ExcludeUserInputEvents);

    const QRect bounds(QPoint(), mapInfo->map()->size());

    auto* layerGroup = mapComposite->layerGroupForLevel(0);
    layerGroup->prepareDrawing2();

    ClipperLib::Clipper clipper;
    ClipperLib::Path path;

    static QVector<const Tiled::Cell*> cells(40);

    auto isRoadAt = [&](int x, int y) {
        cells.resize(0);
        layerGroup->orderedCellsAt2({ x, y }, cells);
        for (auto* cell : qAsConst(cells)) {
            if (cell->isEmpty())
                continue;
            //industry_railroad_01_xx
            if ((cell->tile->id() >= 0) && (cell->tile->tileset()->name() == QStringLiteral("industry_railroad_01"))) {
                return true;
            }
        }
        return false;
    };

    for (int y = 0; y < bounds.height(); y++) {
        for (int x = 0; x < bounds.width(); x++) {
            if (isRoadAt(x, y)) {

                path.clear();
                path << ClipperLib::IntPoint(x, y);
                path << ClipperLib::IntPoint(x + 1, y);
                path << ClipperLib::IntPoint(x + 1, y + 1);
                path << ClipperLib::IntPoint(x, y + 1);
                clipper.AddPath(path, ClipperLib::ptSubject, true);

            }
        }
    }

    ClipperLib::PolyTree polyTree;
    if (clipper.Execute(ClipperLib::ctDifference, polyTree, ClipperLib::PolyFillType::pftPositive) == false) {
        return true;
    }

    std::map<ClipperLib::PolyNode*, pzPolygon*> polyMap;
    std::vector<pzPolygon*> allPolygons;
    for (ClipperLib::PolyNode* node = polyTree.GetFirst(); node != nullptr; node = node->GetNext()) {
        if (node->IsHole()) {
            pzPolygon* outer = polyMap[node->Parent];
            outer->inner.push_back(node->Contour);
        }
        else {
            pzPolygon* poly = new pzPolygon();
            poly->outer = node->Contour;
            polyMap[node] = poly;
            allPolygons.push_back(poly);
        }
    }



    for (pzPolygon* poly : allPolygons) {
        InGameMapFeature* feature = new InGameMapFeature(&cell->inGameMap());
        feature->properties().set(QStringLiteral("railway"), QStringLiteral("*"));
        ClipperLib::Path simple = poly->outer;
        simplifyPolygonRoad(simple, threshold, size);
        if (simple.size() < 4) continue;
        feature->mGeometry.mType = QStringLiteral("Polygon");
        InGameMapCoordinates coords;
        for (auto& point : simple) {
            coords += InGameMapPoint(point.X, point.Y);
        }
        feature->mGeometry.mCoordinates += coords;

        mWorldDoc->addInGameMapFeature(cell, cell->inGameMap().features().size(), feature);

    }

    qDeleteAll(allPolygons);
    return true;
}
