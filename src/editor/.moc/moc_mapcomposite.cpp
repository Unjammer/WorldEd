/****************************************************************************
** Meta object code from reading C++ file 'mapcomposite.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mapcomposite.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapcomposite.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MapComposite_t {
    QByteArrayData data[18];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapComposite_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapComposite_t qt_meta_stringdata_MapComposite = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MapComposite"
QT_MOC_LITERAL(1, 13, 15), // "layerGroupAdded"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "level"
QT_MOC_LITERAL(4, 36, 17), // "layerAddedToGroup"
QT_MOC_LITERAL(5, 54, 5), // "index"
QT_MOC_LITERAL(6, 60, 30), // "layerAboutToBeRemovedFromGroup"
QT_MOC_LITERAL(7, 91, 21), // "layerRemovedFromGroup"
QT_MOC_LITERAL(8, 113, 20), // "CompositeLayerGroup*"
QT_MOC_LITERAL(9, 134, 8), // "oldGroup"
QT_MOC_LITERAL(10, 143, 17), // "layerLevelChanged"
QT_MOC_LITERAL(11, 161, 8), // "oldLevel"
QT_MOC_LITERAL(12, 170, 10), // "needsSynch"
QT_MOC_LITERAL(13, 181, 25), // "bmpBlenderLayersRecreated"
QT_MOC_LITERAL(14, 207, 9), // "mapLoaded"
QT_MOC_LITERAL(15, 217, 8), // "MapInfo*"
QT_MOC_LITERAL(16, 226, 7), // "mapInfo"
QT_MOC_LITERAL(17, 234, 15) // "mapFailedToLoad"

    },
    "MapComposite\0layerGroupAdded\0\0level\0"
    "layerAddedToGroup\0index\0"
    "layerAboutToBeRemovedFromGroup\0"
    "layerRemovedFromGroup\0CompositeLayerGroup*\0"
    "oldGroup\0layerLevelChanged\0oldLevel\0"
    "needsSynch\0bmpBlenderLayersRecreated\0"
    "mapLoaded\0MapInfo*\0mapInfo\0mapFailedToLoad"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapComposite[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,
       7,    2,   68,    2, 0x06 /* Public */,
      10,    2,   73,    2, 0x06 /* Public */,
      12,    0,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   79,    2, 0x08 /* Private */,
      14,    1,   80,    2, 0x08 /* Private */,
      17,    1,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,    5,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,   11,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void MapComposite::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapComposite *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layerGroupAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->layerAddedToGroup((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->layerAboutToBeRemovedFromGroup((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->layerRemovedFromGroup((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< CompositeLayerGroup*(*)>(_a[2]))); break;
        case 4: _t->layerLevelChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->needsSynch(); break;
        case 6: _t->bmpBlenderLayersRecreated(); break;
        case 7: _t->mapLoaded((*reinterpret_cast< MapInfo*(*)>(_a[1]))); break;
        case 8: _t->mapFailedToLoad((*reinterpret_cast< MapInfo*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapComposite::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapComposite::layerGroupAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MapComposite::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapComposite::layerAddedToGroup)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MapComposite::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapComposite::layerAboutToBeRemovedFromGroup)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MapComposite::*)(int , CompositeLayerGroup * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapComposite::layerRemovedFromGroup)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MapComposite::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapComposite::layerLevelChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MapComposite::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapComposite::needsSynch)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapComposite::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MapComposite.data,
    qt_meta_data_MapComposite,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapComposite::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapComposite::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapComposite.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MapComposite::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MapComposite::layerGroupAdded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MapComposite::layerAddedToGroup(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MapComposite::layerAboutToBeRemovedFromGroup(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MapComposite::layerRemovedFromGroup(int _t1, CompositeLayerGroup * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MapComposite::layerLevelChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MapComposite::needsSynch()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
