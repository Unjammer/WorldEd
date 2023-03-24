/****************************************************************************
** Meta object code from reading C++ file 'worldscene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../worldscene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'worldscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WorldSelectionItem_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WorldSelectionItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WorldSelectionItem_t qt_meta_stringdata_WorldSelectionItem = {
    {
QT_MOC_LITERAL(0, 0, 18), // "WorldSelectionItem"
QT_MOC_LITERAL(1, 19, 20), // "selectedCellsChanged"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "WorldSelectionItem\0selectedCellsChanged\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WorldSelectionItem[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void WorldSelectionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WorldSelectionItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedCellsChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WorldSelectionItem::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_WorldSelectionItem.data,
    qt_meta_data_WorldSelectionItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WorldSelectionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorldSelectionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WorldSelectionItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return QObject::qt_metacast(_clname);
}

int WorldSelectionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_WorldScene_t {
    QByteArrayData data[57];
    char stringdata0[853];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WorldScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WorldScene_t qt_meta_stringdata_WorldScene = {
    {
QT_MOC_LITERAL(0, 0, 10), // "WorldScene"
QT_MOC_LITERAL(1, 11, 18), // "worldAboutToResize"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "newSize"
QT_MOC_LITERAL(4, 39, 12), // "worldResized"
QT_MOC_LITERAL(5, 52, 7), // "oldSize"
QT_MOC_LITERAL(6, 60, 27), // "generateLotsSettingsChanged"
QT_MOC_LITERAL(7, 88, 20), // "selectedCellsChanged"
QT_MOC_LITERAL(8, 109, 18), // "cellMapFileChanged"
QT_MOC_LITERAL(9, 128, 10), // "WorldCell*"
QT_MOC_LITERAL(10, 139, 4), // "cell"
QT_MOC_LITERAL(11, 144, 12), // "cellLotAdded"
QT_MOC_LITERAL(12, 157, 5), // "index"
QT_MOC_LITERAL(13, 163, 23), // "cellLotAboutToBeRemoved"
QT_MOC_LITERAL(14, 187, 12), // "cellLotMoved"
QT_MOC_LITERAL(15, 200, 13), // "WorldCellLot*"
QT_MOC_LITERAL(16, 214, 3), // "lot"
QT_MOC_LITERAL(17, 218, 19), // "cellContentsChanged"
QT_MOC_LITERAL(18, 238, 15), // "cellObjectAdded"
QT_MOC_LITERAL(19, 254, 11), // "objectIndex"
QT_MOC_LITERAL(20, 266, 26), // "cellObjectAboutToBeRemoved"
QT_MOC_LITERAL(21, 293, 20), // "cellObjectPointMoved"
QT_MOC_LITERAL(22, 314, 10), // "pointIndex"
QT_MOC_LITERAL(23, 325, 23), // "cellObjectPointsChanged"
QT_MOC_LITERAL(24, 349, 11), // "setShowGrid"
QT_MOC_LITERAL(25, 361, 4), // "show"
QT_MOC_LITERAL(26, 366, 18), // "setShowCoordinates"
QT_MOC_LITERAL(27, 385, 11), // "setShowBMPs"
QT_MOC_LITERAL(28, 397, 18), // "setShowOtherWorlds"
QT_MOC_LITERAL(29, 416, 23), // "setShowZombieSpawnImage"
QT_MOC_LITERAL(30, 440, 30), // "zombieSpawnImageOpacityChanged"
QT_MOC_LITERAL(31, 471, 7), // "opacity"
QT_MOC_LITERAL(32, 479, 23), // "setShowZonesInWorldView"
QT_MOC_LITERAL(33, 503, 28), // "setShowZonesWorldInWorldView"
QT_MOC_LITERAL(34, 532, 20), // "selectedRoadsChanged"
QT_MOC_LITERAL(35, 553, 9), // "roadAdded"
QT_MOC_LITERAL(36, 563, 20), // "roadAboutToBeRemoved"
QT_MOC_LITERAL(37, 584, 17), // "roadCoordsChanged"
QT_MOC_LITERAL(38, 602, 16), // "roadWidthChanged"
QT_MOC_LITERAL(39, 619, 19), // "selectedBMPsChanged"
QT_MOC_LITERAL(40, 639, 8), // "bmpAdded"
QT_MOC_LITERAL(41, 648, 19), // "bmpAboutToBeRemoved"
QT_MOC_LITERAL(42, 668, 16), // "bmpCoordsChanged"
QT_MOC_LITERAL(43, 685, 10), // "pointToBMP"
QT_MOC_LITERAL(44, 696, 9), // "WorldBMP*"
QT_MOC_LITERAL(45, 706, 8), // "scenePos"
QT_MOC_LITERAL(46, 715, 10), // "itemForBMP"
QT_MOC_LITERAL(47, 726, 13), // "WorldBMPItem*"
QT_MOC_LITERAL(48, 740, 3), // "bmp"
QT_MOC_LITERAL(49, 744, 14), // "mapFileCreated"
QT_MOC_LITERAL(50, 759, 4), // "path"
QT_MOC_LITERAL(51, 764, 15), // "mapImageChanged"
QT_MOC_LITERAL(52, 780, 9), // "MapImage*"
QT_MOC_LITERAL(53, 790, 8), // "mapImage"
QT_MOC_LITERAL(54, 799, 22), // "worldThumbnailsChanged"
QT_MOC_LITERAL(55, 822, 6), // "thumbs"
QT_MOC_LITERAL(56, 829, 23) // "handlePendingThumbnails"

    },
    "WorldScene\0worldAboutToResize\0\0newSize\0"
    "worldResized\0oldSize\0generateLotsSettingsChanged\0"
    "selectedCellsChanged\0cellMapFileChanged\0"
    "WorldCell*\0cell\0cellLotAdded\0index\0"
    "cellLotAboutToBeRemoved\0cellLotMoved\0"
    "WorldCellLot*\0lot\0cellContentsChanged\0"
    "cellObjectAdded\0objectIndex\0"
    "cellObjectAboutToBeRemoved\0"
    "cellObjectPointMoved\0pointIndex\0"
    "cellObjectPointsChanged\0setShowGrid\0"
    "show\0setShowCoordinates\0setShowBMPs\0"
    "setShowOtherWorlds\0setShowZombieSpawnImage\0"
    "zombieSpawnImageOpacityChanged\0opacity\0"
    "setShowZonesInWorldView\0"
    "setShowZonesWorldInWorldView\0"
    "selectedRoadsChanged\0roadAdded\0"
    "roadAboutToBeRemoved\0roadCoordsChanged\0"
    "roadWidthChanged\0selectedBMPsChanged\0"
    "bmpAdded\0bmpAboutToBeRemoved\0"
    "bmpCoordsChanged\0pointToBMP\0WorldBMP*\0"
    "scenePos\0itemForBMP\0WorldBMPItem*\0bmp\0"
    "mapFileCreated\0path\0mapImageChanged\0"
    "MapImage*\0mapImage\0worldThumbnailsChanged\0"
    "thumbs\0handlePendingThumbnails"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WorldScene[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  194,    2, 0x0a /* Public */,
       4,    1,  197,    2, 0x0a /* Public */,
       6,    0,  200,    2, 0x0a /* Public */,
       7,    0,  201,    2, 0x0a /* Public */,
       8,    1,  202,    2, 0x0a /* Public */,
      11,    2,  205,    2, 0x0a /* Public */,
      13,    2,  210,    2, 0x0a /* Public */,
      14,    1,  215,    2, 0x0a /* Public */,
      17,    1,  218,    2, 0x0a /* Public */,
      18,    2,  221,    2, 0x0a /* Public */,
      20,    2,  226,    2, 0x0a /* Public */,
      21,    3,  231,    2, 0x0a /* Public */,
      23,    2,  238,    2, 0x0a /* Public */,
      24,    1,  243,    2, 0x0a /* Public */,
      26,    1,  246,    2, 0x0a /* Public */,
      27,    1,  249,    2, 0x0a /* Public */,
      28,    1,  252,    2, 0x0a /* Public */,
      29,    1,  255,    2, 0x0a /* Public */,
      30,    1,  258,    2, 0x0a /* Public */,
      32,    1,  261,    2, 0x0a /* Public */,
      33,    1,  264,    2, 0x0a /* Public */,
      34,    0,  267,    2, 0x0a /* Public */,
      35,    1,  268,    2, 0x0a /* Public */,
      36,    1,  271,    2, 0x0a /* Public */,
      37,    1,  274,    2, 0x0a /* Public */,
      38,    1,  277,    2, 0x0a /* Public */,
      39,    0,  280,    2, 0x0a /* Public */,
      40,    1,  281,    2, 0x0a /* Public */,
      41,    1,  284,    2, 0x0a /* Public */,
      42,    1,  287,    2, 0x0a /* Public */,
      43,    1,  290,    2, 0x0a /* Public */,
      46,    1,  293,    2, 0x0a /* Public */,
      49,    1,  296,    2, 0x0a /* Public */,
      51,    1,  299,    2, 0x0a /* Public */,
      54,    1,  302,    2, 0x0a /* Public */,
      56,    0,  305,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QSize,    3,
    QMetaType::Void, QMetaType::QSize,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,   10,   12,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,   10,   12,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,   10,   19,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,   10,   19,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int, QMetaType::Int,   10,   19,   22,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,   10,   19,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::QReal,   31,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    0x80000000 | 44, QMetaType::QPointF,   45,
    0x80000000 | 47, 0x80000000 | 44,   48,
    QMetaType::Void, QMetaType::QString,   50,
    QMetaType::Void, 0x80000000 | 52,   53,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void,

       0        // eod
};

void WorldScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WorldScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->worldAboutToResize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 1: _t->worldResized((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 2: _t->generateLotsSettingsChanged(); break;
        case 3: _t->selectedCellsChanged(); break;
        case 4: _t->cellMapFileChanged((*reinterpret_cast< WorldCell*(*)>(_a[1]))); break;
        case 5: _t->cellLotAdded((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->cellLotAboutToBeRemoved((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->cellLotMoved((*reinterpret_cast< WorldCellLot*(*)>(_a[1]))); break;
        case 8: _t->cellContentsChanged((*reinterpret_cast< WorldCell*(*)>(_a[1]))); break;
        case 9: _t->cellObjectAdded((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->cellObjectAboutToBeRemoved((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->cellObjectPointMoved((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->cellObjectPointsChanged((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->setShowGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setShowCoordinates((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->setShowBMPs((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->setShowOtherWorlds((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->setShowZombieSpawnImage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->zombieSpawnImageOpacityChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 19: _t->setShowZonesInWorldView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->setShowZonesWorldInWorldView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->selectedRoadsChanged(); break;
        case 22: _t->roadAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->roadAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->roadCoordsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->roadWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->selectedBMPsChanged(); break;
        case 27: _t->bmpAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->bmpAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->bmpCoordsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: { WorldBMP* _r = _t->pointToBMP((*reinterpret_cast< const QPointF(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< WorldBMP**>(_a[0]) = std::move(_r); }  break;
        case 31: { WorldBMPItem* _r = _t->itemForBMP((*reinterpret_cast< WorldBMP*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< WorldBMPItem**>(_a[0]) = std::move(_r); }  break;
        case 32: _t->mapFileCreated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->mapImageChanged((*reinterpret_cast< MapImage*(*)>(_a[1]))); break;
        case 34: _t->worldThumbnailsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->handlePendingThumbnails(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        case 6:
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
        case 9:
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
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorldCell* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WorldScene::staticMetaObject = { {
    &BaseGraphicsScene::staticMetaObject,
    qt_meta_stringdata_WorldScene.data,
    qt_meta_data_WorldScene,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WorldScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorldScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WorldScene.stringdata0))
        return static_cast<void*>(this);
    return BaseGraphicsScene::qt_metacast(_clname);
}

int WorldScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
