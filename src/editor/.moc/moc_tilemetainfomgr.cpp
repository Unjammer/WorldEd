/****************************************************************************
** Meta object code from reading C++ file 'tilemetainfomgr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tilemetainfomgr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tilemetainfomgr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tiled__TileMetaInfoMgr_t {
    QByteArrayData data[8];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tiled__TileMetaInfoMgr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tiled__TileMetaInfoMgr_t qt_meta_stringdata_Tiled__TileMetaInfoMgr = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Tiled::TileMetaInfoMgr"
QT_MOC_LITERAL(1, 23, 12), // "tilesetAdded"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 15), // "Tiled::Tileset*"
QT_MOC_LITERAL(4, 53, 2), // "ts"
QT_MOC_LITERAL(5, 56, 23), // "tilesetAboutToBeRemoved"
QT_MOC_LITERAL(6, 80, 14), // "tilesetRemoved"
QT_MOC_LITERAL(7, 95, 14) // "tilesetChanged"

    },
    "Tiled::TileMetaInfoMgr\0tilesetAdded\0"
    "\0Tiled::Tileset*\0ts\0tilesetAboutToBeRemoved\0"
    "tilesetRemoved\0tilesetChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tiled__TileMetaInfoMgr[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Tiled::TileMetaInfoMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TileMetaInfoMgr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tilesetAdded((*reinterpret_cast< Tiled::Tileset*(*)>(_a[1]))); break;
        case 1: _t->tilesetAboutToBeRemoved((*reinterpret_cast< Tiled::Tileset*(*)>(_a[1]))); break;
        case 2: _t->tilesetRemoved((*reinterpret_cast< Tiled::Tileset*(*)>(_a[1]))); break;
        case 3: _t->tilesetChanged((*reinterpret_cast< Tiled::Tileset*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TileMetaInfoMgr::*)(Tiled::Tileset * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileMetaInfoMgr::tilesetAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TileMetaInfoMgr::*)(Tiled::Tileset * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileMetaInfoMgr::tilesetAboutToBeRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TileMetaInfoMgr::*)(Tiled::Tileset * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileMetaInfoMgr::tilesetRemoved)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Tiled::TileMetaInfoMgr::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Tiled__TileMetaInfoMgr.data,
    qt_meta_data_Tiled__TileMetaInfoMgr,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Tiled::TileMetaInfoMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::TileMetaInfoMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tiled__TileMetaInfoMgr.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tiled::TileMetaInfoMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Tiled::TileMetaInfoMgr::tilesetAdded(Tiled::Tileset * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tiled::TileMetaInfoMgr::tilesetAboutToBeRemoved(Tiled::Tileset * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tiled::TileMetaInfoMgr::tilesetRemoved(Tiled::Tileset * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
