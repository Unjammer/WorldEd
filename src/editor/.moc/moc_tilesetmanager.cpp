/****************************************************************************
** Meta object code from reading C++ file 'tilesetmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tilesetmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tilesetmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TilesetImageReaderWorker_t {
    QByteArrayData data[9];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TilesetImageReaderWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TilesetImageReaderWorker_t qt_meta_stringdata_TilesetImageReaderWorker = {
    {
QT_MOC_LITERAL(0, 0, 24), // "TilesetImageReaderWorker"
QT_MOC_LITERAL(1, 25, 11), // "imageLoaded"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 15), // "Tiled::Tileset*"
QT_MOC_LITERAL(4, 54, 7), // "tileset"
QT_MOC_LITERAL(5, 62, 10), // "fromThread"
QT_MOC_LITERAL(6, 73, 4), // "work"
QT_MOC_LITERAL(7, 78, 6), // "addJob"
QT_MOC_LITERAL(8, 85, 8) // "Tileset*"

    },
    "TilesetImageReaderWorker\0imageLoaded\0"
    "\0Tiled::Tileset*\0tileset\0fromThread\0"
    "work\0addJob\0Tileset*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TilesetImageReaderWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   34,    2, 0x0a /* Public */,
       7,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    4,

       0        // eod
};

void TilesetImageReaderWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TilesetImageReaderWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->imageLoaded((*reinterpret_cast< Tiled::Tileset*(*)>(_a[1])),(*reinterpret_cast< Tiled::Tileset*(*)>(_a[2]))); break;
        case 1: _t->work(); break;
        case 2: _t->addJob((*reinterpret_cast< Tileset*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TilesetImageReaderWorker::*)(Tiled::Tileset * , Tiled::Tileset * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TilesetImageReaderWorker::imageLoaded)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TilesetImageReaderWorker::staticMetaObject = { {
    &BaseWorker::staticMetaObject,
    qt_meta_stringdata_TilesetImageReaderWorker.data,
    qt_meta_data_TilesetImageReaderWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TilesetImageReaderWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TilesetImageReaderWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TilesetImageReaderWorker.stringdata0))
        return static_cast<void*>(this);
    return BaseWorker::qt_metacast(_clname);
}

int TilesetImageReaderWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseWorker::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void TilesetImageReaderWorker::imageLoaded(Tiled::Tileset * _t1, Tiled::Tileset * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_Tiled__Internal__TilesetManager_t {
    QByteArrayData data[13];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tiled__Internal__TilesetManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tiled__Internal__TilesetManager_t qt_meta_stringdata_Tiled__Internal__TilesetManager = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Tiled::Internal::TilesetManager"
QT_MOC_LITERAL(1, 32, 14), // "tilesetChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 8), // "Tileset*"
QT_MOC_LITERAL(4, 57, 7), // "tileset"
QT_MOC_LITERAL(5, 65, 11), // "fileChanged"
QT_MOC_LITERAL(6, 77, 4), // "path"
QT_MOC_LITERAL(7, 82, 18), // "fileChangedTimeout"
QT_MOC_LITERAL(8, 101, 11), // "imageLoaded"
QT_MOC_LITERAL(9, 113, 7), // "QImage*"
QT_MOC_LITERAL(10, 121, 5), // "image"
QT_MOC_LITERAL(11, 127, 15), // "Tiled::Tileset*"
QT_MOC_LITERAL(12, 143, 10) // "fromThread"

    },
    "Tiled::Internal::TilesetManager\0"
    "tilesetChanged\0\0Tileset*\0tileset\0"
    "fileChanged\0path\0fileChangedTimeout\0"
    "imageLoaded\0QImage*\0image\0Tiled::Tileset*\0"
    "fromThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tiled__Internal__TilesetManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   42,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,
       8,    2,   46,    2, 0x08 /* Private */,
       8,    2,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11,   10,    4,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   12,    4,

       0        // eod
};

void Tiled::Internal::TilesetManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TilesetManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tilesetChanged((*reinterpret_cast< Tileset*(*)>(_a[1]))); break;
        case 1: _t->fileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->fileChangedTimeout(); break;
        case 3: _t->imageLoaded((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< Tiled::Tileset*(*)>(_a[2]))); break;
        case 4: _t->imageLoaded((*reinterpret_cast< Tiled::Tileset*(*)>(_a[1])),(*reinterpret_cast< Tiled::Tileset*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TilesetManager::*)(Tileset * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TilesetManager::tilesetChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Tiled::Internal::TilesetManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Tiled__Internal__TilesetManager.data,
    qt_meta_data_Tiled__Internal__TilesetManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Tiled::Internal::TilesetManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::Internal::TilesetManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tiled__Internal__TilesetManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tiled::Internal::TilesetManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Tiled::Internal::TilesetManager::tilesetChanged(Tileset * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
