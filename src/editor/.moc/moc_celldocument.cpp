/****************************************************************************
** Meta object code from reading C++ file 'celldocument.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../celldocument.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'celldocument.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CellDocument_t {
    QByteArrayData data[41];
    char stringdata0[739];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CellDocument_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CellDocument_t qt_meta_stringdata_CellDocument = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CellDocument"
QT_MOC_LITERAL(1, 13, 22), // "layerVisibilityChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "Tiled::Layer*"
QT_MOC_LITERAL(4, 51, 5), // "layer"
QT_MOC_LITERAL(5, 57, 15), // "layerGroupAdded"
QT_MOC_LITERAL(6, 73, 5), // "level"
QT_MOC_LITERAL(7, 79, 27), // "layerGroupVisibilityChanged"
QT_MOC_LITERAL(8, 107, 23), // "Tiled::ZTileLayerGroup*"
QT_MOC_LITERAL(9, 131, 10), // "layerGroup"
QT_MOC_LITERAL(10, 142, 25), // "lotLevelVisibilityChanged"
QT_MOC_LITERAL(11, 168, 28), // "objectLevelVisibilityChanged"
QT_MOC_LITERAL(12, 197, 28), // "objectGroupVisibilityChanged"
QT_MOC_LITERAL(13, 226, 17), // "WorldObjectGroup*"
QT_MOC_LITERAL(14, 244, 2), // "og"
QT_MOC_LITERAL(15, 247, 19), // "selectedLotsChanged"
QT_MOC_LITERAL(16, 267, 22), // "selectedObjectsChanged"
QT_MOC_LITERAL(17, 290, 27), // "selectedObjectPointsChanged"
QT_MOC_LITERAL(18, 318, 32), // "selectedInGameMapFeaturesChanged"
QT_MOC_LITERAL(19, 351, 30), // "selectedInGameMapPointsChanged"
QT_MOC_LITERAL(20, 382, 25), // "cellContentsAboutToChange"
QT_MOC_LITERAL(21, 408, 19), // "cellContentsChanged"
QT_MOC_LITERAL(22, 428, 24), // "cellMapFileAboutToChange"
QT_MOC_LITERAL(23, 453, 18), // "cellMapFileChanged"
QT_MOC_LITERAL(24, 472, 24), // "currentLayerIndexChanged"
QT_MOC_LITERAL(25, 497, 19), // "currentLevelChanged"
QT_MOC_LITERAL(26, 517, 25), // "currentObjectGroupChanged"
QT_MOC_LITERAL(27, 543, 16), // "mapAboutToChange"
QT_MOC_LITERAL(28, 560, 8), // "MapInfo*"
QT_MOC_LITERAL(29, 569, 7), // "mapInfo"
QT_MOC_LITERAL(30, 577, 10), // "mapChanged"
QT_MOC_LITERAL(31, 588, 10), // "WorldCell*"
QT_MOC_LITERAL(32, 599, 4), // "cell"
QT_MOC_LITERAL(33, 604, 12), // "cellLotAdded"
QT_MOC_LITERAL(34, 617, 5), // "index"
QT_MOC_LITERAL(35, 623, 23), // "cellLotAboutToBeRemoved"
QT_MOC_LITERAL(36, 647, 12), // "cellLotMoved"
QT_MOC_LITERAL(37, 660, 13), // "WorldCellLot*"
QT_MOC_LITERAL(38, 674, 3), // "lot"
QT_MOC_LITERAL(39, 678, 32), // "inGameMapFeatureAboutToBeRemoved"
QT_MOC_LITERAL(40, 711, 27) // "objectGroupAboutToBeRemoved"

    },
    "CellDocument\0layerVisibilityChanged\0"
    "\0Tiled::Layer*\0layer\0layerGroupAdded\0"
    "level\0layerGroupVisibilityChanged\0"
    "Tiled::ZTileLayerGroup*\0layerGroup\0"
    "lotLevelVisibilityChanged\0"
    "objectLevelVisibilityChanged\0"
    "objectGroupVisibilityChanged\0"
    "WorldObjectGroup*\0og\0selectedLotsChanged\0"
    "selectedObjectsChanged\0"
    "selectedObjectPointsChanged\0"
    "selectedInGameMapFeaturesChanged\0"
    "selectedInGameMapPointsChanged\0"
    "cellContentsAboutToChange\0cellContentsChanged\0"
    "cellMapFileAboutToChange\0cellMapFileChanged\0"
    "currentLayerIndexChanged\0currentLevelChanged\0"
    "currentObjectGroupChanged\0mapAboutToChange\0"
    "MapInfo*\0mapInfo\0mapChanged\0WorldCell*\0"
    "cell\0cellLotAdded\0index\0cellLotAboutToBeRemoved\0"
    "cellLotMoved\0WorldCellLot*\0lot\0"
    "inGameMapFeatureAboutToBeRemoved\0"
    "objectGroupAboutToBeRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CellDocument[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  159,    2, 0x06 /* Public */,
       5,    1,  162,    2, 0x06 /* Public */,
       7,    1,  165,    2, 0x06 /* Public */,
      10,    1,  168,    2, 0x06 /* Public */,
      11,    1,  171,    2, 0x06 /* Public */,
      12,    2,  174,    2, 0x06 /* Public */,
      15,    0,  179,    2, 0x06 /* Public */,
      16,    0,  180,    2, 0x06 /* Public */,
      17,    0,  181,    2, 0x06 /* Public */,
      18,    0,  182,    2, 0x06 /* Public */,
      19,    0,  183,    2, 0x06 /* Public */,
      20,    0,  184,    2, 0x06 /* Public */,
      21,    0,  185,    2, 0x06 /* Public */,
      22,    0,  186,    2, 0x06 /* Public */,
      23,    0,  187,    2, 0x06 /* Public */,
      24,    1,  188,    2, 0x06 /* Public */,
      25,    1,  191,    2, 0x06 /* Public */,
      26,    1,  194,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      27,    1,  197,    2, 0x08 /* Private */,
      30,    1,  200,    2, 0x08 /* Private */,
      20,    1,  203,    2, 0x08 /* Private */,
      21,    1,  206,    2, 0x08 /* Private */,
      22,    1,  209,    2, 0x08 /* Private */,
      23,    1,  212,    2, 0x08 /* Private */,
      33,    2,  215,    2, 0x08 /* Private */,
      35,    2,  220,    2, 0x08 /* Private */,
      36,    1,  225,    2, 0x08 /* Private */,
      39,    2,  228,    2, 0x08 /* Private */,
      40,    1,  233,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,   14,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 13,   14,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, 0x80000000 | 31, QMetaType::Int,   32,   34,
    QMetaType::Void, 0x80000000 | 31, QMetaType::Int,   32,   34,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void, 0x80000000 | 31, QMetaType::Int,   32,   34,
    QMetaType::Void, QMetaType::Int,   34,

       0        // eod
};

void CellDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CellDocument *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layerVisibilityChanged((*reinterpret_cast< Tiled::Layer*(*)>(_a[1]))); break;
        case 1: _t->layerGroupAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->layerGroupVisibilityChanged((*reinterpret_cast< Tiled::ZTileLayerGroup*(*)>(_a[1]))); break;
        case 3: _t->lotLevelVisibilityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->objectLevelVisibilityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->objectGroupVisibilityChanged((*reinterpret_cast< WorldObjectGroup*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->selectedLotsChanged(); break;
        case 7: _t->selectedObjectsChanged(); break;
        case 8: _t->selectedObjectPointsChanged(); break;
        case 9: _t->selectedInGameMapFeaturesChanged(); break;
        case 10: _t->selectedInGameMapPointsChanged(); break;
        case 11: _t->cellContentsAboutToChange(); break;
        case 12: _t->cellContentsChanged(); break;
        case 13: _t->cellMapFileAboutToChange(); break;
        case 14: _t->cellMapFileChanged(); break;
        case 15: _t->currentLayerIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->currentLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->currentObjectGroupChanged((*reinterpret_cast< WorldObjectGroup*(*)>(_a[1]))); break;
        case 18: _t->mapAboutToChange((*reinterpret_cast< MapInfo*(*)>(_a[1]))); break;
        case 19: _t->mapChanged((*reinterpret_cast< MapInfo*(*)>(_a[1]))); break;
        case 20: _t->cellContentsAboutToChange((*reinterpret_cast< WorldCell*(*)>(_a[1]))); break;
        case 21: _t->cellContentsChanged((*reinterpret_cast< WorldCell*(*)>(_a[1]))); break;
        case 22: _t->cellMapFileAboutToChange((*reinterpret_cast< WorldCell*(*)>(_a[1]))); break;
        case 23: _t->cellMapFileChanged((*reinterpret_cast< WorldCell*(*)>(_a[1]))); break;
        case 24: _t->cellLotAdded((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 25: _t->cellLotAboutToBeRemoved((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: _t->cellLotMoved((*reinterpret_cast< WorldCellLot*(*)>(_a[1]))); break;
        case 27: _t->inGameMapFeatureAboutToBeRemoved((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 28: _t->objectGroupAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CellDocument::*)(Tiled::Layer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CellDocument::layerVisibilityChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CellDocument::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CellDocument::layerGroupAdded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CellDocument::*)(Tiled::ZTileLayerGroup * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CellDocument::layerGroupVisibilityChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CellDocument::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CellDocument::lotLevelVisibilityChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CellDocument::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CellDocument::objectLevelVisibilityChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CellDocument::*)(WorldObjectGroup * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CellDocument::objectGroupVisibilityChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CellDocument::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CellDocument::selectedLotsChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CellDocument::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CellDocument::selectedObjectsChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (CellDocument::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CellDocument::selectedObjectPointsChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (CellDocument::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CellDocument::selectedInGameMapFeaturesChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (CellDocument::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CellDocument::selectedInGameMapPointsChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (CellDocument::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CellDocument::cellContentsAboutToChange)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (CellDocument::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CellDocument::cellContentsChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (CellDocument::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CellDocument::cellMapFileAboutToChange)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (CellDocument::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CellDocument::cellMapFileChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (CellDocument::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CellDocument::currentLayerIndexChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (CellDocument::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CellDocument::currentLevelChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (CellDocument::*)(WorldObjectGroup * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CellDocument::currentObjectGroupChanged)) {
                *result = 17;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CellDocument::staticMetaObject = { {
    &Document::staticMetaObject,
    qt_meta_stringdata_CellDocument.data,
    qt_meta_data_CellDocument,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CellDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CellDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CellDocument.stringdata0))
        return static_cast<void*>(this);
    return Document::qt_metacast(_clname);
}

int CellDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Document::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void CellDocument::layerVisibilityChanged(Tiled::Layer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CellDocument::layerGroupAdded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CellDocument::layerGroupVisibilityChanged(Tiled::ZTileLayerGroup * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CellDocument::lotLevelVisibilityChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CellDocument::objectLevelVisibilityChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CellDocument::objectGroupVisibilityChanged(WorldObjectGroup * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CellDocument::selectedLotsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void CellDocument::selectedObjectsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void CellDocument::selectedObjectPointsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void CellDocument::selectedInGameMapFeaturesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void CellDocument::selectedInGameMapPointsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void CellDocument::cellContentsAboutToChange()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void CellDocument::cellContentsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void CellDocument::cellMapFileAboutToChange()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void CellDocument::cellMapFileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void CellDocument::currentLayerIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void CellDocument::currentLevelChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void CellDocument::currentObjectGroupChanged(WorldObjectGroup * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
