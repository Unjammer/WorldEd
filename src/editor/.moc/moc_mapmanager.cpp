/****************************************************************************
** Meta object code from reading C++ file 'mapmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mapmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MapReaderWorker_t {
    QByteArrayData data[15];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapReaderWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapReaderWorker_t qt_meta_stringdata_MapReaderWorker = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MapReaderWorker"
QT_MOC_LITERAL(1, 16, 6), // "loaded"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "Tiled::Map*"
QT_MOC_LITERAL(4, 36, 3), // "map"
QT_MOC_LITERAL(5, 40, 8), // "MapInfo*"
QT_MOC_LITERAL(6, 49, 7), // "mapInfo"
QT_MOC_LITERAL(7, 57, 25), // "BuildingEditor::Building*"
QT_MOC_LITERAL(8, 83, 8), // "building"
QT_MOC_LITERAL(9, 92, 12), // "failedToLoad"
QT_MOC_LITERAL(10, 105, 5), // "error"
QT_MOC_LITERAL(11, 111, 4), // "work"
QT_MOC_LITERAL(12, 116, 6), // "addJob"
QT_MOC_LITERAL(13, 123, 8), // "priority"
QT_MOC_LITERAL(14, 132, 21) // "possiblyRaisePriority"

    },
    "MapReaderWorker\0loaded\0\0Tiled::Map*\0"
    "map\0MapInfo*\0mapInfo\0BuildingEditor::Building*\0"
    "building\0failedToLoad\0error\0work\0"
    "addJob\0priority\0possiblyRaisePriority"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapReaderWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       1,    2,   49,    2, 0x06 /* Public */,
       9,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   59,    2, 0x0a /* Public */,
      12,    2,   60,    2, 0x0a /* Public */,
      14,    2,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 5,    8,    6,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,   10,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,   13,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,   13,

       0        // eod
};

void MapReaderWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapReaderWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loaded((*reinterpret_cast< Tiled::Map*(*)>(_a[1])),(*reinterpret_cast< MapInfo*(*)>(_a[2]))); break;
        case 1: _t->loaded((*reinterpret_cast< BuildingEditor::Building*(*)>(_a[1])),(*reinterpret_cast< MapInfo*(*)>(_a[2]))); break;
        case 2: _t->failedToLoad((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< MapInfo*(*)>(_a[2]))); break;
        case 3: _t->work(); break;
        case 4: _t->addJob((*reinterpret_cast< MapInfo*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->possiblyRaisePriority((*reinterpret_cast< MapInfo*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapReaderWorker::*)(Tiled::Map * , MapInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapReaderWorker::loaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MapReaderWorker::*)(BuildingEditor::Building * , MapInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapReaderWorker::loaded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MapReaderWorker::*)(const QString , MapInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapReaderWorker::failedToLoad)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapReaderWorker::staticMetaObject = { {
    &BaseWorker::staticMetaObject,
    qt_meta_stringdata_MapReaderWorker.data,
    qt_meta_data_MapReaderWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapReaderWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapReaderWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapReaderWorker.stringdata0))
        return static_cast<void*>(this);
    return BaseWorker::qt_metacast(_clname);
}

int MapReaderWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseWorker::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void MapReaderWorker::loaded(Tiled::Map * _t1, MapInfo * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MapReaderWorker::loaded(BuildingEditor::Building * _t1, MapInfo * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MapReaderWorker::failedToLoad(const QString _t1, MapInfo * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_MapManager_t {
    QByteArrayData data[26];
    char stringdata0[345];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapManager_t qt_meta_stringdata_MapManager = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MapManager"
QT_MOC_LITERAL(1, 11, 16), // "mapAboutToChange"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "MapInfo*"
QT_MOC_LITERAL(4, 38, 7), // "mapInfo"
QT_MOC_LITERAL(5, 46, 10), // "mapChanged"
QT_MOC_LITERAL(6, 57, 14), // "mapFileChanged"
QT_MOC_LITERAL(7, 72, 14), // "mapFileCreated"
QT_MOC_LITERAL(8, 87, 4), // "path"
QT_MOC_LITERAL(9, 92, 9), // "mapLoaded"
QT_MOC_LITERAL(10, 102, 15), // "mapFailedToLoad"
QT_MOC_LITERAL(11, 118, 11), // "fileChanged"
QT_MOC_LITERAL(12, 130, 18), // "fileChangedTimeout"
QT_MOC_LITERAL(13, 149, 16), // "metaTilesetAdded"
QT_MOC_LITERAL(14, 166, 15), // "Tiled::Tileset*"
QT_MOC_LITERAL(15, 182, 7), // "tileset"
QT_MOC_LITERAL(16, 190, 18), // "metaTilesetRemoved"
QT_MOC_LITERAL(17, 209, 17), // "mapLoadedByThread"
QT_MOC_LITERAL(18, 227, 11), // "Tiled::Map*"
QT_MOC_LITERAL(19, 239, 3), // "map"
QT_MOC_LITERAL(20, 243, 22), // "buildingLoadedByThread"
QT_MOC_LITERAL(21, 266, 25), // "BuildingEditor::Building*"
QT_MOC_LITERAL(22, 292, 8), // "building"
QT_MOC_LITERAL(23, 301, 20), // "failedToLoadByThread"
QT_MOC_LITERAL(24, 322, 5), // "error"
QT_MOC_LITERAL(25, 328, 16) // "processDeferrals"

    },
    "MapManager\0mapAboutToChange\0\0MapInfo*\0"
    "mapInfo\0mapChanged\0mapFileChanged\0"
    "mapFileCreated\0path\0mapLoaded\0"
    "mapFailedToLoad\0fileChanged\0"
    "fileChangedTimeout\0metaTilesetAdded\0"
    "Tiled::Tileset*\0tileset\0metaTilesetRemoved\0"
    "mapLoadedByThread\0Tiled::Map*\0map\0"
    "buildingLoadedByThread\0BuildingEditor::Building*\0"
    "building\0failedToLoadByThread\0error\0"
    "processDeferrals"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       5,    1,   87,    2, 0x06 /* Public */,
       6,    1,   90,    2, 0x06 /* Public */,
       7,    1,   93,    2, 0x06 /* Public */,
       9,    1,   96,    2, 0x06 /* Public */,
      10,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,  102,    2, 0x08 /* Private */,
      12,    0,  105,    2, 0x08 /* Private */,
      13,    1,  106,    2, 0x08 /* Private */,
      16,    1,  109,    2, 0x08 /* Private */,
      17,    2,  112,    2, 0x08 /* Private */,
      20,    2,  117,    2, 0x08 /* Private */,
      23,    2,  122,    2, 0x08 /* Private */,
      25,    0,  127,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 3,   19,    4,
    QMetaType::Void, 0x80000000 | 21, 0x80000000 | 3,   22,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,   24,    4,
    QMetaType::Void,

       0        // eod
};

void MapManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mapAboutToChange((*reinterpret_cast< MapInfo*(*)>(_a[1]))); break;
        case 1: _t->mapChanged((*reinterpret_cast< MapInfo*(*)>(_a[1]))); break;
        case 2: _t->mapFileChanged((*reinterpret_cast< MapInfo*(*)>(_a[1]))); break;
        case 3: _t->mapFileCreated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->mapLoaded((*reinterpret_cast< MapInfo*(*)>(_a[1]))); break;
        case 5: _t->mapFailedToLoad((*reinterpret_cast< MapInfo*(*)>(_a[1]))); break;
        case 6: _t->fileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->fileChangedTimeout(); break;
        case 8: _t->metaTilesetAdded((*reinterpret_cast< Tiled::Tileset*(*)>(_a[1]))); break;
        case 9: _t->metaTilesetRemoved((*reinterpret_cast< Tiled::Tileset*(*)>(_a[1]))); break;
        case 10: _t->mapLoadedByThread((*reinterpret_cast< Tiled::Map*(*)>(_a[1])),(*reinterpret_cast< MapInfo*(*)>(_a[2]))); break;
        case 11: _t->buildingLoadedByThread((*reinterpret_cast< BuildingEditor::Building*(*)>(_a[1])),(*reinterpret_cast< MapInfo*(*)>(_a[2]))); break;
        case 12: _t->failedToLoadByThread((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< MapInfo*(*)>(_a[2]))); break;
        case 13: _t->processDeferrals(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapManager::*)(MapInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapManager::mapAboutToChange)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MapManager::*)(MapInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapManager::mapChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MapManager::*)(MapInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapManager::mapFileChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MapManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapManager::mapFileCreated)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MapManager::*)(MapInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapManager::mapLoaded)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MapManager::*)(MapInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapManager::mapFailedToLoad)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MapManager.data,
    qt_meta_data_MapManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MapManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MapManager::mapAboutToChange(MapInfo * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MapManager::mapChanged(MapInfo * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MapManager::mapFileChanged(MapInfo * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MapManager::mapFileCreated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MapManager::mapLoaded(MapInfo * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MapManager::mapFailedToLoad(MapInfo * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
