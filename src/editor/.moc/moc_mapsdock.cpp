/****************************************************************************
** Meta object code from reading C++ file 'mapsdock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mapsdock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapsdock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MapsDock_t {
    QByteArrayData data[10];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapsDock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapsDock_t qt_meta_stringdata_MapsDock = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MapsDock"
QT_MOC_LITERAL(1, 9, 6), // "browse"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 19), // "editedMapsDirectory"
QT_MOC_LITERAL(4, 37, 22), // "onMapsDirectoryChanged"
QT_MOC_LITERAL(5, 60, 16), // "selectionChanged"
QT_MOC_LITERAL(6, 77, 17), // "onMapImageChanged"
QT_MOC_LITERAL(7, 95, 9), // "MapImage*"
QT_MOC_LITERAL(8, 105, 8), // "mapImage"
QT_MOC_LITERAL(9, 114, 20) // "mapImageFailedToLoad"

    },
    "MapsDock\0browse\0\0editedMapsDirectory\0"
    "onMapsDirectoryChanged\0selectionChanged\0"
    "onMapImageChanged\0MapImage*\0mapImage\0"
    "mapImageFailedToLoad"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapsDock[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       9,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void MapsDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapsDock *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->browse(); break;
        case 1: _t->editedMapsDirectory(); break;
        case 2: _t->onMapsDirectoryChanged(); break;
        case 3: _t->selectionChanged(); break;
        case 4: _t->onMapImageChanged((*reinterpret_cast< MapImage*(*)>(_a[1]))); break;
        case 5: _t->mapImageFailedToLoad((*reinterpret_cast< MapImage*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapsDock::staticMetaObject = { {
    &QDockWidget::staticMetaObject,
    qt_meta_stringdata_MapsDock.data,
    qt_meta_data_MapsDock,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapsDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapsDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapsDock.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int MapsDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_MapsView_t {
    QByteArrayData data[6];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapsView_t qt_meta_stringdata_MapsView = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MapsView"
QT_MOC_LITERAL(1, 9, 22), // "onMapsDirectoryChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "onActivated"
QT_MOC_LITERAL(4, 45, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 57, 5) // "index"

    },
    "MapsView\0onMapsDirectoryChanged\0\0"
    "onActivated\0QModelIndex\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapsView[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void MapsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onMapsDirectoryChanged(); break;
        case 1: _t->onActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapsView::staticMetaObject = { {
    &QTreeView::staticMetaObject,
    qt_meta_stringdata_MapsView.data,
    qt_meta_data_MapsView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapsView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int MapsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
