/****************************************************************************
** Meta object code from reading C++ file 'cellscene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cellscene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cellscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CellMiniMapItem_t {
    QByteArrayData data[7];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CellMiniMapItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CellMiniMapItem_t qt_meta_stringdata_CellMiniMapItem = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CellMiniMapItem"
QT_MOC_LITERAL(1, 16, 16), // "sceneRectChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 9), // "sceneRect"
QT_MOC_LITERAL(4, 44, 15), // "mapImageChanged"
QT_MOC_LITERAL(5, 60, 9), // "MapImage*"
QT_MOC_LITERAL(6, 70, 8) // "mapImage"

    },
    "CellMiniMapItem\0sceneRectChanged\0\0"
    "sceneRect\0mapImageChanged\0MapImage*\0"
    "mapImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CellMiniMapItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QRectF,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void CellMiniMapItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CellMiniMapItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sceneRectChanged((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 1: _t->mapImageChanged((*reinterpret_cast< MapImage*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CellMiniMapItem::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CellMiniMapItem.data,
    qt_meta_data_CellMiniMapItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CellMiniMapItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CellMiniMapItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CellMiniMapItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return QObject::qt_metacast(_clname);
}

int CellMiniMapItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_AdjacentMap_t {
    QByteArrayData data[43];
    char stringdata0[669];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdjacentMap_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdjacentMap_t qt_meta_stringdata_AdjacentMap = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AdjacentMap"
QT_MOC_LITERAL(1, 12, 18), // "cellMapFileChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10), // "WorldCell*"
QT_MOC_LITERAL(4, 43, 4), // "cell"
QT_MOC_LITERAL(5, 48, 19), // "cellContentsChanged"
QT_MOC_LITERAL(6, 68, 12), // "cellLotAdded"
QT_MOC_LITERAL(7, 81, 5), // "index"
QT_MOC_LITERAL(8, 87, 23), // "cellLotAboutToBeRemoved"
QT_MOC_LITERAL(9, 111, 12), // "cellLotMoved"
QT_MOC_LITERAL(10, 124, 13), // "WorldCellLot*"
QT_MOC_LITERAL(11, 138, 3), // "lot"
QT_MOC_LITERAL(12, 142, 15), // "lotLevelChanged"
QT_MOC_LITERAL(13, 158, 16), // "cellLotReordered"
QT_MOC_LITERAL(14, 175, 15), // "cellObjectAdded"
QT_MOC_LITERAL(15, 191, 26), // "cellObjectAboutToBeRemoved"
QT_MOC_LITERAL(16, 218, 15), // "cellObjectMoved"
QT_MOC_LITERAL(17, 234, 16), // "WorldCellObject*"
QT_MOC_LITERAL(18, 251, 3), // "obj"
QT_MOC_LITERAL(19, 255, 17), // "cellObjectResized"
QT_MOC_LITERAL(20, 273, 18), // "objectLevelChanged"
QT_MOC_LITERAL(21, 292, 17), // "objectXXXXChanged"
QT_MOC_LITERAL(22, 310, 22), // "cellObjectGroupChanged"
QT_MOC_LITERAL(23, 333, 19), // "cellObjectReordered"
QT_MOC_LITERAL(24, 353, 20), // "cellObjectPointMoved"
QT_MOC_LITERAL(25, 374, 11), // "objectIndex"
QT_MOC_LITERAL(26, 386, 10), // "pointIndex"
QT_MOC_LITERAL(27, 397, 23), // "cellObjectPointsChanged"
QT_MOC_LITERAL(28, 421, 17), // "propertiesChanged"
QT_MOC_LITERAL(29, 439, 15), // "PropertyHolder*"
QT_MOC_LITERAL(30, 455, 2), // "ph"
QT_MOC_LITERAL(31, 458, 21), // "inGameMapFeatureAdded"
QT_MOC_LITERAL(32, 480, 32), // "inGameMapFeatureAboutToBeRemoved"
QT_MOC_LITERAL(33, 513, 19), // "inGameMapPointMoved"
QT_MOC_LITERAL(34, 533, 12), // "featureIndex"
QT_MOC_LITERAL(35, 546, 10), // "coordIndex"
QT_MOC_LITERAL(36, 557, 26), // "inGameMapPropertiesChanged"
QT_MOC_LITERAL(37, 584, 24), // "inGameMapGeometryChanged"
QT_MOC_LITERAL(38, 609, 9), // "mapLoaded"
QT_MOC_LITERAL(39, 619, 8), // "MapInfo*"
QT_MOC_LITERAL(40, 628, 7), // "mapInfo"
QT_MOC_LITERAL(41, 636, 15), // "mapFailedToLoad"
QT_MOC_LITERAL(42, 652, 16) // "sceneRectChanged"

    },
    "AdjacentMap\0cellMapFileChanged\0\0"
    "WorldCell*\0cell\0cellContentsChanged\0"
    "cellLotAdded\0index\0cellLotAboutToBeRemoved\0"
    "cellLotMoved\0WorldCellLot*\0lot\0"
    "lotLevelChanged\0cellLotReordered\0"
    "cellObjectAdded\0cellObjectAboutToBeRemoved\0"
    "cellObjectMoved\0WorldCellObject*\0obj\0"
    "cellObjectResized\0objectLevelChanged\0"
    "objectXXXXChanged\0cellObjectGroupChanged\0"
    "cellObjectReordered\0cellObjectPointMoved\0"
    "objectIndex\0pointIndex\0cellObjectPointsChanged\0"
    "propertiesChanged\0PropertyHolder*\0ph\0"
    "inGameMapFeatureAdded\0"
    "inGameMapFeatureAboutToBeRemoved\0"
    "inGameMapPointMoved\0featureIndex\0"
    "coordIndex\0inGameMapPropertiesChanged\0"
    "inGameMapGeometryChanged\0mapLoaded\0"
    "MapInfo*\0mapInfo\0mapFailedToLoad\0"
    "sceneRectChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdjacentMap[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  144,    2, 0x08 /* Private */,
       5,    1,  147,    2, 0x08 /* Private */,
       6,    2,  150,    2, 0x08 /* Private */,
       8,    2,  155,    2, 0x08 /* Private */,
       9,    1,  160,    2, 0x08 /* Private */,
      12,    1,  163,    2, 0x08 /* Private */,
      13,    1,  166,    2, 0x08 /* Private */,
      14,    2,  169,    2, 0x08 /* Private */,
      15,    2,  174,    2, 0x08 /* Private */,
      16,    1,  179,    2, 0x08 /* Private */,
      19,    1,  182,    2, 0x08 /* Private */,
      20,    1,  185,    2, 0x08 /* Private */,
      21,    1,  188,    2, 0x08 /* Private */,
      22,    1,  191,    2, 0x08 /* Private */,
      23,    1,  194,    2, 0x08 /* Private */,
      24,    3,  197,    2, 0x08 /* Private */,
      27,    2,  204,    2, 0x08 /* Private */,
      28,    1,  209,    2, 0x08 /* Private */,
      31,    2,  212,    2, 0x08 /* Private */,
      32,    2,  217,    2, 0x08 /* Private */,
      33,    4,  222,    2, 0x08 /* Private */,
      36,    2,  231,    2, 0x08 /* Private */,
      37,    2,  236,    2, 0x08 /* Private */,
      38,    1,  241,    2, 0x08 /* Private */,
      41,    1,  244,    2, 0x08 /* Private */,
      42,    0,  247,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    7,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    7,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,   25,   26,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    7,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,   34,   35,   26,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,   34,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,   34,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void,

       0        // eod
};

void AdjacentMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdjacentMap *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cellMapFileChanged((*reinterpret_cast< WorldCell*(*)>(_a[1]))); break;
        case 1: _t->cellContentsChanged((*reinterpret_cast< WorldCell*(*)>(_a[1]))); break;
        case 2: _t->cellLotAdded((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->cellLotAboutToBeRemoved((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->cellLotMoved((*reinterpret_cast< WorldCellLot*(*)>(_a[1]))); break;
        case 5: _t->lotLevelChanged((*reinterpret_cast< WorldCellLot*(*)>(_a[1]))); break;
        case 6: _t->cellLotReordered((*reinterpret_cast< WorldCellLot*(*)>(_a[1]))); break;
        case 7: _t->cellObjectAdded((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->cellObjectAboutToBeRemoved((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->cellObjectMoved((*reinterpret_cast< WorldCellObject*(*)>(_a[1]))); break;
        case 10: _t->cellObjectResized((*reinterpret_cast< WorldCellObject*(*)>(_a[1]))); break;
        case 11: _t->objectLevelChanged((*reinterpret_cast< WorldCellObject*(*)>(_a[1]))); break;
        case 12: _t->objectXXXXChanged((*reinterpret_cast< WorldCellObject*(*)>(_a[1]))); break;
        case 13: _t->cellObjectGroupChanged((*reinterpret_cast< WorldCellObject*(*)>(_a[1]))); break;
        case 14: _t->cellObjectReordered((*reinterpret_cast< WorldCellObject*(*)>(_a[1]))); break;
        case 15: _t->cellObjectPointMoved((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 16: _t->cellObjectPointsChanged((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->propertiesChanged((*reinterpret_cast< PropertyHolder*(*)>(_a[1]))); break;
        case 18: _t->inGameMapFeatureAdded((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->inGameMapFeatureAboutToBeRemoved((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->inGameMapPointMoved((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 21: _t->inGameMapPropertiesChanged((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->inGameMapGeometryChanged((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->mapLoaded((*reinterpret_cast< MapInfo*(*)>(_a[1]))); break;
        case 24: _t->mapFailedToLoad((*reinterpret_cast< MapInfo*(*)>(_a[1]))); break;
        case 25: _t->sceneRectChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AdjacentMap::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AdjacentMap.data,
    qt_meta_data_AdjacentMap,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AdjacentMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdjacentMap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdjacentMap.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AdjacentMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}
struct qt_meta_stringdata_TilesetTextures_t {
    QByteArrayData data[6];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TilesetTextures_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TilesetTextures_t qt_meta_stringdata_TilesetTextures = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TilesetTextures"
QT_MOC_LITERAL(1, 16, 18), // "aboutToBeDestroyed"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 14), // "tilesetChanged"
QT_MOC_LITERAL(4, 51, 15), // "Tiled::Tileset*"
QT_MOC_LITERAL(5, 67, 7) // "tileset"

    },
    "TilesetTextures\0aboutToBeDestroyed\0\0"
    "tilesetChanged\0Tiled::Tileset*\0tileset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TilesetTextures[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void TilesetTextures::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TilesetTextures *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutToBeDestroyed(); break;
        case 1: _t->tilesetChanged((*reinterpret_cast< Tiled::Tileset*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TilesetTextures::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TilesetTextures.data,
    qt_meta_data_TilesetTextures,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TilesetTextures::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TilesetTextures::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TilesetTextures.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TilesetTextures::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_LayerGroupVBO_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LayerGroupVBO_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LayerGroupVBO_t qt_meta_stringdata_LayerGroupVBO = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LayerGroupVBO"
QT_MOC_LITERAL(1, 14, 18), // "aboutToBeDestroyed"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "LayerGroupVBO\0aboutToBeDestroyed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LayerGroupVBO[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void LayerGroupVBO::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LayerGroupVBO *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutToBeDestroyed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LayerGroupVBO::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_LayerGroupVBO.data,
    qt_meta_data_LayerGroupVBO,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LayerGroupVBO::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LayerGroupVBO::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LayerGroupVBO.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QOpenGLFunctions_3_0"))
        return static_cast< QOpenGLFunctions_3_0*>(this);
    return QObject::qt_metacast(_clname);
}

int LayerGroupVBO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_CellScene_t {
    QByteArrayData data[96];
    char stringdata0[1569];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CellScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CellScene_t qt_meta_stringdata_CellScene = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CellScene"
QT_MOC_LITERAL(1, 10, 18), // "mapContentsChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "tilesetChanged"
QT_MOC_LITERAL(4, 45, 8), // "Tileset*"
QT_MOC_LITERAL(5, 54, 7), // "tileset"
QT_MOC_LITERAL(6, 62, 16), // "mapAboutToChange"
QT_MOC_LITERAL(7, 79, 8), // "MapInfo*"
QT_MOC_LITERAL(8, 88, 7), // "mapInfo"
QT_MOC_LITERAL(9, 96, 10), // "mapChanged"
QT_MOC_LITERAL(10, 107, 9), // "mapLoaded"
QT_MOC_LITERAL(11, 117, 15), // "mapFailedToLoad"
QT_MOC_LITERAL(12, 133, 9), // "cellAdded"
QT_MOC_LITERAL(13, 143, 10), // "WorldCell*"
QT_MOC_LITERAL(14, 154, 4), // "cell"
QT_MOC_LITERAL(15, 159, 20), // "cellAboutToBeRemoved"
QT_MOC_LITERAL(16, 180, 18), // "cellMapFileChanged"
QT_MOC_LITERAL(17, 199, 19), // "cellContentsChanged"
QT_MOC_LITERAL(18, 219, 12), // "cellLotAdded"
QT_MOC_LITERAL(19, 232, 5), // "index"
QT_MOC_LITERAL(20, 238, 23), // "cellLotAboutToBeRemoved"
QT_MOC_LITERAL(21, 262, 12), // "cellLotMoved"
QT_MOC_LITERAL(22, 275, 13), // "WorldCellLot*"
QT_MOC_LITERAL(23, 289, 3), // "lot"
QT_MOC_LITERAL(24, 293, 15), // "lotLevelChanged"
QT_MOC_LITERAL(25, 309, 19), // "selectedLotsChanged"
QT_MOC_LITERAL(26, 329, 16), // "cellLotReordered"
QT_MOC_LITERAL(27, 346, 15), // "cellObjectAdded"
QT_MOC_LITERAL(28, 362, 26), // "cellObjectAboutToBeRemoved"
QT_MOC_LITERAL(29, 389, 15), // "cellObjectMoved"
QT_MOC_LITERAL(30, 405, 16), // "WorldCellObject*"
QT_MOC_LITERAL(31, 422, 3), // "obj"
QT_MOC_LITERAL(32, 426, 17), // "cellObjectResized"
QT_MOC_LITERAL(33, 444, 18), // "objectLevelChanged"
QT_MOC_LITERAL(34, 463, 17), // "objectXXXXChanged"
QT_MOC_LITERAL(35, 481, 22), // "cellObjectGroupChanged"
QT_MOC_LITERAL(36, 504, 19), // "cellObjectReordered"
QT_MOC_LITERAL(37, 524, 20), // "cellObjectPointMoved"
QT_MOC_LITERAL(38, 545, 11), // "objectIndex"
QT_MOC_LITERAL(39, 557, 10), // "pointIndex"
QT_MOC_LITERAL(40, 568, 23), // "cellObjectPointsChanged"
QT_MOC_LITERAL(41, 592, 22), // "selectedObjectsChanged"
QT_MOC_LITERAL(42, 615, 27), // "selectedObjectPointsChanged"
QT_MOC_LITERAL(43, 643, 22), // "layerVisibilityChanged"
QT_MOC_LITERAL(44, 666, 13), // "Tiled::Layer*"
QT_MOC_LITERAL(45, 680, 5), // "layer"
QT_MOC_LITERAL(46, 686, 15), // "layerGroupAdded"
QT_MOC_LITERAL(47, 702, 5), // "level"
QT_MOC_LITERAL(48, 708, 27), // "layerGroupVisibilityChanged"
QT_MOC_LITERAL(49, 736, 23), // "Tiled::ZTileLayerGroup*"
QT_MOC_LITERAL(50, 760, 10), // "layerGroup"
QT_MOC_LITERAL(51, 771, 25), // "lotLevelVisibilityChanged"
QT_MOC_LITERAL(52, 797, 28), // "objectLevelVisibilityChanged"
QT_MOC_LITERAL(53, 826, 28), // "objectGroupVisibilityChanged"
QT_MOC_LITERAL(54, 855, 17), // "WorldObjectGroup*"
QT_MOC_LITERAL(55, 873, 2), // "og"
QT_MOC_LITERAL(56, 876, 23), // "objectGroupColorChanged"
QT_MOC_LITERAL(57, 900, 20), // "objectGroupReordered"
QT_MOC_LITERAL(58, 921, 19), // "currentLevelChanged"
QT_MOC_LITERAL(59, 941, 14), // "setGridVisible"
QT_MOC_LITERAL(60, 956, 7), // "visible"
QT_MOC_LITERAL(61, 964, 16), // "gridColorChanged"
QT_MOC_LITERAL(62, 981, 9), // "gridColor"
QT_MOC_LITERAL(63, 991, 18), // "showObjectsChanged"
QT_MOC_LITERAL(64, 1010, 4), // "show"
QT_MOC_LITERAL(65, 1015, 22), // "showObjectNamesChanged"
QT_MOC_LITERAL(66, 1038, 24), // "setHighlightCurrentLevel"
QT_MOC_LITERAL(67, 1063, 9), // "highlight"
QT_MOC_LITERAL(68, 1073, 32), // "highlightRoomUnderPointerChanged"
QT_MOC_LITERAL(69, 1106, 20), // "handlePendingUpdates"
QT_MOC_LITERAL(70, 1127, 17), // "propertiesChanged"
QT_MOC_LITERAL(71, 1145, 15), // "PropertyHolder*"
QT_MOC_LITERAL(72, 1161, 2), // "ph"
QT_MOC_LITERAL(73, 1164, 21), // "inGameMapFeatureAdded"
QT_MOC_LITERAL(74, 1186, 32), // "inGameMapFeatureAboutToBeRemoved"
QT_MOC_LITERAL(75, 1219, 19), // "inGameMapPointMoved"
QT_MOC_LITERAL(76, 1239, 12), // "featureIndex"
QT_MOC_LITERAL(77, 1252, 10), // "coordIndex"
QT_MOC_LITERAL(78, 1263, 24), // "inGameMapGeometryChanged"
QT_MOC_LITERAL(79, 1288, 18), // "inGameMapHoleAdded"
QT_MOC_LITERAL(80, 1307, 9), // "holeIndex"
QT_MOC_LITERAL(81, 1317, 20), // "inGameMapHoleRemoved"
QT_MOC_LITERAL(82, 1338, 32), // "selectedInGameMapFeaturesChanged"
QT_MOC_LITERAL(83, 1371, 30), // "selectedInGameMapPointsChanged"
QT_MOC_LITERAL(84, 1402, 9), // "roadAdded"
QT_MOC_LITERAL(85, 1412, 11), // "roadRemoved"
QT_MOC_LITERAL(86, 1424, 5), // "Road*"
QT_MOC_LITERAL(87, 1430, 4), // "road"
QT_MOC_LITERAL(88, 1435, 17), // "roadCoordsChanged"
QT_MOC_LITERAL(89, 1453, 16), // "roadWidthChanged"
QT_MOC_LITERAL(90, 1470, 20), // "selectedRoadsChanged"
QT_MOC_LITERAL(91, 1491, 12), // "roadsChanged"
QT_MOC_LITERAL(92, 1504, 22), // "mapCompositeNeedsSynch"
QT_MOC_LITERAL(93, 1527, 15), // "mapCompositeVBO"
QT_MOC_LITERAL(94, 1543, 16), // "MapCompositeVBO*"
QT_MOC_LITERAL(95, 1560, 8) // "adjacent"

    },
    "CellScene\0mapContentsChanged\0\0"
    "tilesetChanged\0Tileset*\0tileset\0"
    "mapAboutToChange\0MapInfo*\0mapInfo\0"
    "mapChanged\0mapLoaded\0mapFailedToLoad\0"
    "cellAdded\0WorldCell*\0cell\0"
    "cellAboutToBeRemoved\0cellMapFileChanged\0"
    "cellContentsChanged\0cellLotAdded\0index\0"
    "cellLotAboutToBeRemoved\0cellLotMoved\0"
    "WorldCellLot*\0lot\0lotLevelChanged\0"
    "selectedLotsChanged\0cellLotReordered\0"
    "cellObjectAdded\0cellObjectAboutToBeRemoved\0"
    "cellObjectMoved\0WorldCellObject*\0obj\0"
    "cellObjectResized\0objectLevelChanged\0"
    "objectXXXXChanged\0cellObjectGroupChanged\0"
    "cellObjectReordered\0cellObjectPointMoved\0"
    "objectIndex\0pointIndex\0cellObjectPointsChanged\0"
    "selectedObjectsChanged\0"
    "selectedObjectPointsChanged\0"
    "layerVisibilityChanged\0Tiled::Layer*\0"
    "layer\0layerGroupAdded\0level\0"
    "layerGroupVisibilityChanged\0"
    "Tiled::ZTileLayerGroup*\0layerGroup\0"
    "lotLevelVisibilityChanged\0"
    "objectLevelVisibilityChanged\0"
    "objectGroupVisibilityChanged\0"
    "WorldObjectGroup*\0og\0objectGroupColorChanged\0"
    "objectGroupReordered\0currentLevelChanged\0"
    "setGridVisible\0visible\0gridColorChanged\0"
    "gridColor\0showObjectsChanged\0show\0"
    "showObjectNamesChanged\0setHighlightCurrentLevel\0"
    "highlight\0highlightRoomUnderPointerChanged\0"
    "handlePendingUpdates\0propertiesChanged\0"
    "PropertyHolder*\0ph\0inGameMapFeatureAdded\0"
    "inGameMapFeatureAboutToBeRemoved\0"
    "inGameMapPointMoved\0featureIndex\0"
    "coordIndex\0inGameMapGeometryChanged\0"
    "inGameMapHoleAdded\0holeIndex\0"
    "inGameMapHoleRemoved\0"
    "selectedInGameMapFeaturesChanged\0"
    "selectedInGameMapPointsChanged\0roadAdded\0"
    "roadRemoved\0Road*\0road\0roadCoordsChanged\0"
    "roadWidthChanged\0selectedRoadsChanged\0"
    "roadsChanged\0mapCompositeNeedsSynch\0"
    "mapCompositeVBO\0MapCompositeVBO*\0"
    "adjacent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CellScene[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      62,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  324,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  325,    2, 0x0a /* Public */,
       6,    1,  328,    2, 0x0a /* Public */,
       9,    1,  331,    2, 0x0a /* Public */,
      10,    1,  334,    2, 0x0a /* Public */,
      11,    1,  337,    2, 0x0a /* Public */,
      12,    1,  340,    2, 0x0a /* Public */,
      15,    1,  343,    2, 0x0a /* Public */,
      16,    0,  346,    2, 0x0a /* Public */,
      17,    0,  347,    2, 0x0a /* Public */,
      18,    2,  348,    2, 0x0a /* Public */,
      20,    2,  353,    2, 0x0a /* Public */,
      21,    1,  358,    2, 0x0a /* Public */,
      24,    1,  361,    2, 0x0a /* Public */,
      25,    0,  364,    2, 0x0a /* Public */,
      26,    1,  365,    2, 0x0a /* Public */,
      27,    2,  368,    2, 0x0a /* Public */,
      28,    2,  373,    2, 0x0a /* Public */,
      29,    1,  378,    2, 0x0a /* Public */,
      32,    1,  381,    2, 0x0a /* Public */,
      33,    1,  384,    2, 0x0a /* Public */,
      34,    1,  387,    2, 0x0a /* Public */,
      35,    1,  390,    2, 0x0a /* Public */,
      36,    1,  393,    2, 0x0a /* Public */,
      37,    3,  396,    2, 0x0a /* Public */,
      40,    2,  403,    2, 0x0a /* Public */,
      41,    0,  408,    2, 0x0a /* Public */,
      42,    0,  409,    2, 0x0a /* Public */,
      43,    1,  410,    2, 0x0a /* Public */,
      46,    1,  413,    2, 0x0a /* Public */,
      48,    1,  416,    2, 0x0a /* Public */,
      51,    1,  419,    2, 0x0a /* Public */,
      52,    1,  422,    2, 0x0a /* Public */,
      53,    2,  425,    2, 0x0a /* Public */,
      56,    1,  430,    2, 0x0a /* Public */,
      57,    1,  433,    2, 0x0a /* Public */,
      58,    1,  436,    2, 0x0a /* Public */,
      59,    1,  439,    2, 0x0a /* Public */,
      61,    1,  442,    2, 0x0a /* Public */,
      63,    1,  445,    2, 0x0a /* Public */,
      65,    1,  448,    2, 0x0a /* Public */,
      66,    1,  451,    2, 0x0a /* Public */,
      68,    1,  454,    2, 0x0a /* Public */,
      69,    0,  457,    2, 0x0a /* Public */,
      70,    1,  458,    2, 0x0a /* Public */,
      73,    2,  461,    2, 0x0a /* Public */,
      74,    2,  466,    2, 0x0a /* Public */,
      75,    4,  471,    2, 0x0a /* Public */,
      78,    2,  480,    2, 0x0a /* Public */,
      79,    3,  485,    2, 0x0a /* Public */,
      81,    3,  492,    2, 0x0a /* Public */,
      82,    0,  499,    2, 0x0a /* Public */,
      83,    0,  500,    2, 0x0a /* Public */,
      84,    1,  501,    2, 0x0a /* Public */,
      85,    1,  504,    2, 0x0a /* Public */,
      88,    1,  507,    2, 0x0a /* Public */,
      89,    1,  510,    2, 0x0a /* Public */,
      90,    0,  513,    2, 0x0a /* Public */,
      91,    0,  514,    2, 0x0a /* Public */,
      92,    0,  515,    2, 0x0a /* Public */,
      93,    0,  516,    2, 0x0a /* Public */,
      93,    1,  517,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Bool, 0x80000000 | 7,    8,
    QMetaType::Bool, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,   14,   19,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,   14,   19,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,   14,   19,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,   14,   19,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int, QMetaType::Int,   14,   38,   39,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,   14,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Void, 0x80000000 | 49,   50,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Void, 0x80000000 | 54, QMetaType::Int,   55,   47,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Bool,   60,
    QMetaType::Void, QMetaType::QColor,   62,
    QMetaType::Void, QMetaType::Bool,   64,
    QMetaType::Void, QMetaType::Bool,   64,
    QMetaType::Void, QMetaType::Bool,   67,
    QMetaType::Void, QMetaType::Bool,   67,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 71,   72,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,   14,   19,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,   14,   19,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int, QMetaType::Int, QMetaType::Int,   14,   76,   77,   39,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,   14,   76,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int, QMetaType::Int,   14,   76,   80,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int, QMetaType::Int,   14,   76,   80,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, 0x80000000 | 86,   87,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 94,
    0x80000000 | 94, QMetaType::Int,   95,

       0        // eod
};

void CellScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CellScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mapContentsChanged(); break;
        case 1: _t->tilesetChanged((*reinterpret_cast< Tileset*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->mapAboutToChange((*reinterpret_cast< MapInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->mapChanged((*reinterpret_cast< MapInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->mapLoaded((*reinterpret_cast< MapInfo*(*)>(_a[1]))); break;
        case 5: _t->mapFailedToLoad((*reinterpret_cast< MapInfo*(*)>(_a[1]))); break;
        case 6: _t->cellAdded((*reinterpret_cast< WorldCell*(*)>(_a[1]))); break;
        case 7: _t->cellAboutToBeRemoved((*reinterpret_cast< WorldCell*(*)>(_a[1]))); break;
        case 8: _t->cellMapFileChanged(); break;
        case 9: _t->cellContentsChanged(); break;
        case 10: _t->cellLotAdded((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->cellLotAboutToBeRemoved((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->cellLotMoved((*reinterpret_cast< WorldCellLot*(*)>(_a[1]))); break;
        case 13: _t->lotLevelChanged((*reinterpret_cast< WorldCellLot*(*)>(_a[1]))); break;
        case 14: _t->selectedLotsChanged(); break;
        case 15: _t->cellLotReordered((*reinterpret_cast< WorldCellLot*(*)>(_a[1]))); break;
        case 16: _t->cellObjectAdded((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->cellObjectAboutToBeRemoved((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->cellObjectMoved((*reinterpret_cast< WorldCellObject*(*)>(_a[1]))); break;
        case 19: _t->cellObjectResized((*reinterpret_cast< WorldCellObject*(*)>(_a[1]))); break;
        case 20: _t->objectLevelChanged((*reinterpret_cast< WorldCellObject*(*)>(_a[1]))); break;
        case 21: _t->objectXXXXChanged((*reinterpret_cast< WorldCellObject*(*)>(_a[1]))); break;
        case 22: _t->cellObjectGroupChanged((*reinterpret_cast< WorldCellObject*(*)>(_a[1]))); break;
        case 23: _t->cellObjectReordered((*reinterpret_cast< WorldCellObject*(*)>(_a[1]))); break;
        case 24: _t->cellObjectPointMoved((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 25: _t->cellObjectPointsChanged((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: _t->selectedObjectsChanged(); break;
        case 27: _t->selectedObjectPointsChanged(); break;
        case 28: _t->layerVisibilityChanged((*reinterpret_cast< Tiled::Layer*(*)>(_a[1]))); break;
        case 29: _t->layerGroupAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->layerGroupVisibilityChanged((*reinterpret_cast< Tiled::ZTileLayerGroup*(*)>(_a[1]))); break;
        case 31: _t->lotLevelVisibilityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->objectLevelVisibilityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->objectGroupVisibilityChanged((*reinterpret_cast< WorldObjectGroup*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 34: _t->objectGroupColorChanged((*reinterpret_cast< WorldObjectGroup*(*)>(_a[1]))); break;
        case 35: _t->objectGroupReordered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->currentLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->setGridVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->gridColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 39: _t->showObjectsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->showObjectNamesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->setHighlightCurrentLevel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->highlightRoomUnderPointerChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->handlePendingUpdates(); break;
        case 44: _t->propertiesChanged((*reinterpret_cast< PropertyHolder*(*)>(_a[1]))); break;
        case 45: _t->inGameMapFeatureAdded((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 46: _t->inGameMapFeatureAboutToBeRemoved((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 47: _t->inGameMapPointMoved((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 48: _t->inGameMapGeometryChanged((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 49: _t->inGameMapHoleAdded((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 50: _t->inGameMapHoleRemoved((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 51: _t->selectedInGameMapFeaturesChanged(); break;
        case 52: _t->selectedInGameMapPointsChanged(); break;
        case 53: _t->roadAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 54: _t->roadRemoved((*reinterpret_cast< Road*(*)>(_a[1]))); break;
        case 55: _t->roadCoordsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->roadWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->selectedRoadsChanged(); break;
        case 58: _t->roadsChanged(); break;
        case 59: _t->mapCompositeNeedsSynch(); break;
        case 60: { MapCompositeVBO* _r = _t->mapCompositeVBO();
            if (_a[0]) *reinterpret_cast< MapCompositeVBO**>(_a[0]) = std::move(_r); }  break;
        case 61: { MapCompositeVBO* _r = _t->mapCompositeVBO((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< MapCompositeVBO**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CellScene::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CellScene::mapContentsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CellScene::staticMetaObject = { {
    &BaseGraphicsScene::staticMetaObject,
    qt_meta_stringdata_CellScene.data,
    qt_meta_data_CellScene,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CellScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CellScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CellScene.stringdata0))
        return static_cast<void*>(this);
    return BaseGraphicsScene::qt_metacast(_clname);
}

int CellScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 62)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 62;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 62)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 62;
    }
    return _id;
}

// SIGNAL 0
void CellScene::mapContentsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
