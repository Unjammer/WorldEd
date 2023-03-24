/****************************************************************************
** Meta object code from reading C++ file 'mapimagemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mapimagemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapimagemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MapImageReaderWorker_t {
    QByteArrayData data[10];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapImageReaderWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapImageReaderWorker_t qt_meta_stringdata_MapImageReaderWorker = {
    {
QT_MOC_LITERAL(0, 0, 20), // "MapImageReaderWorker"
QT_MOC_LITERAL(1, 21, 11), // "imageLoaded"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "QImage*"
QT_MOC_LITERAL(4, 42, 5), // "image"
QT_MOC_LITERAL(5, 48, 9), // "MapImage*"
QT_MOC_LITERAL(6, 58, 8), // "mapImage"
QT_MOC_LITERAL(7, 67, 4), // "work"
QT_MOC_LITERAL(8, 72, 6), // "addJob"
QT_MOC_LITERAL(9, 79, 13) // "imageFileName"

    },
    "MapImageReaderWorker\0imageLoaded\0\0"
    "QImage*\0image\0MapImage*\0mapImage\0work\0"
    "addJob\0imageFileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapImageReaderWorker[] = {

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
       7,    0,   34,    2, 0x0a /* Public */,
       8,    2,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    9,    6,

       0        // eod
};

void MapImageReaderWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapImageReaderWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->imageLoaded((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< MapImage*(*)>(_a[2]))); break;
        case 1: _t->work(); break;
        case 2: _t->addJob((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< MapImage*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapImageReaderWorker::*)(QImage * , MapImage * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapImageReaderWorker::imageLoaded)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapImageReaderWorker::staticMetaObject = { {
    &BaseWorker::staticMetaObject,
    qt_meta_stringdata_MapImageReaderWorker.data,
    qt_meta_data_MapImageReaderWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapImageReaderWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapImageReaderWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapImageReaderWorker.stringdata0))
        return static_cast<void*>(this);
    return BaseWorker::qt_metacast(_clname);
}

int MapImageReaderWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MapImageReaderWorker::imageLoaded(QImage * _t1, MapImage * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MapImageRenderWorker_t {
    QByteArrayData data[16];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapImageRenderWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapImageRenderWorker_t qt_meta_stringdata_MapImageRenderWorker = {
    {
QT_MOC_LITERAL(0, 0, 20), // "MapImageRenderWorker"
QT_MOC_LITERAL(1, 21, 9), // "mapNeeded"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "MapImage*"
QT_MOC_LITERAL(4, 42, 8), // "mapImage"
QT_MOC_LITERAL(5, 51, 13), // "imageRendered"
QT_MOC_LITERAL(6, 65, 12), // "MapImageData"
QT_MOC_LITERAL(7, 78, 4), // "data"
QT_MOC_LITERAL(8, 83, 7), // "jobDone"
QT_MOC_LITERAL(9, 91, 13), // "MapComposite*"
QT_MOC_LITERAL(10, 105, 12), // "mapComposite"
QT_MOC_LITERAL(11, 118, 4), // "work"
QT_MOC_LITERAL(12, 123, 6), // "addJob"
QT_MOC_LITERAL(13, 130, 9), // "mapLoaded"
QT_MOC_LITERAL(14, 140, 15), // "mapFailedToLoad"
QT_MOC_LITERAL(15, 156, 6) // "resume"

    },
    "MapImageRenderWorker\0mapNeeded\0\0"
    "MapImage*\0mapImage\0imageRendered\0"
    "MapImageData\0data\0jobDone\0MapComposite*\0"
    "mapComposite\0work\0addJob\0mapLoaded\0"
    "mapFailedToLoad\0resume"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapImageRenderWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    2,   57,    2, 0x06 /* Public */,
       8,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   65,    2, 0x0a /* Public */,
      12,    1,   66,    2, 0x0a /* Public */,
      13,    1,   69,    2, 0x0a /* Public */,
      14,    0,   72,    2, 0x0a /* Public */,
      15,    1,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 3,    7,    4,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void MapImageRenderWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapImageRenderWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mapNeeded((*reinterpret_cast< MapImage*(*)>(_a[1]))); break;
        case 1: _t->imageRendered((*reinterpret_cast< MapImageData(*)>(_a[1])),(*reinterpret_cast< MapImage*(*)>(_a[2]))); break;
        case 2: _t->jobDone((*reinterpret_cast< MapComposite*(*)>(_a[1]))); break;
        case 3: _t->work(); break;
        case 4: _t->addJob((*reinterpret_cast< MapImage*(*)>(_a[1]))); break;
        case 5: _t->mapLoaded((*reinterpret_cast< MapComposite*(*)>(_a[1]))); break;
        case 6: _t->mapFailedToLoad(); break;
        case 7: _t->resume((*reinterpret_cast< MapImage*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MapImageData >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapImageRenderWorker::*)(MapImage * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapImageRenderWorker::mapNeeded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MapImageRenderWorker::*)(MapImageData , MapImage * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapImageRenderWorker::imageRendered)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MapImageRenderWorker::*)(MapComposite * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapImageRenderWorker::jobDone)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapImageRenderWorker::staticMetaObject = { {
    &BaseWorker::staticMetaObject,
    qt_meta_stringdata_MapImageRenderWorker.data,
    qt_meta_data_MapImageRenderWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapImageRenderWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapImageRenderWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapImageRenderWorker.stringdata0))
        return static_cast<void*>(this);
    return BaseWorker::qt_metacast(_clname);
}

int MapImageRenderWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseWorker::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void MapImageRenderWorker::mapNeeded(MapImage * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MapImageRenderWorker::imageRendered(MapImageData _t1, MapImage * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MapImageRenderWorker::jobDone(MapComposite * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_MapImageManager_t {
    QByteArrayData data[24];
    char stringdata0[315];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapImageManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapImageManager_t qt_meta_stringdata_MapImageManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MapImageManager"
QT_MOC_LITERAL(1, 16, 15), // "mapImageChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 9), // "MapImage*"
QT_MOC_LITERAL(4, 43, 8), // "mapImage"
QT_MOC_LITERAL(5, 52, 20), // "mapImageFailedToLoad"
QT_MOC_LITERAL(6, 73, 16), // "mapAboutToChange"
QT_MOC_LITERAL(7, 90, 8), // "MapInfo*"
QT_MOC_LITERAL(8, 99, 7), // "mapInfo"
QT_MOC_LITERAL(9, 107, 10), // "mapChanged"
QT_MOC_LITERAL(10, 118, 14), // "mapFileChanged"
QT_MOC_LITERAL(11, 133, 19), // "imageLoadedByThread"
QT_MOC_LITERAL(12, 153, 7), // "QImage*"
QT_MOC_LITERAL(13, 161, 5), // "image"
QT_MOC_LITERAL(14, 167, 20), // "renderThreadNeedsMap"
QT_MOC_LITERAL(15, 188, 21), // "imageRenderedByThread"
QT_MOC_LITERAL(16, 210, 12), // "MapImageData"
QT_MOC_LITERAL(17, 223, 7), // "imgData"
QT_MOC_LITERAL(18, 231, 13), // "renderJobDone"
QT_MOC_LITERAL(19, 245, 13), // "MapComposite*"
QT_MOC_LITERAL(20, 259, 12), // "mapComposite"
QT_MOC_LITERAL(21, 272, 9), // "mapLoaded"
QT_MOC_LITERAL(22, 282, 15), // "mapFailedToLoad"
QT_MOC_LITERAL(23, 298, 16) // "processDeferrals"

    },
    "MapImageManager\0mapImageChanged\0\0"
    "MapImage*\0mapImage\0mapImageFailedToLoad\0"
    "mapAboutToChange\0MapInfo*\0mapInfo\0"
    "mapChanged\0mapFileChanged\0imageLoadedByThread\0"
    "QImage*\0image\0renderThreadNeedsMap\0"
    "imageRenderedByThread\0MapImageData\0"
    "imgData\0renderJobDone\0MapComposite*\0"
    "mapComposite\0mapLoaded\0mapFailedToLoad\0"
    "processDeferrals"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapImageManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   80,    2, 0x08 /* Private */,
       9,    1,   83,    2, 0x08 /* Private */,
      10,    1,   86,    2, 0x08 /* Private */,
      11,    2,   89,    2, 0x08 /* Private */,
      14,    1,   94,    2, 0x08 /* Private */,
      15,    2,   97,    2, 0x08 /* Private */,
      18,    1,  102,    2, 0x08 /* Private */,
      21,    1,  105,    2, 0x08 /* Private */,
      22,    1,  108,    2, 0x08 /* Private */,
      23,    0,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 3,   13,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 3,   17,    4,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

void MapImageManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapImageManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mapImageChanged((*reinterpret_cast< MapImage*(*)>(_a[1]))); break;
        case 1: _t->mapImageFailedToLoad((*reinterpret_cast< MapImage*(*)>(_a[1]))); break;
        case 2: _t->mapAboutToChange((*reinterpret_cast< MapInfo*(*)>(_a[1]))); break;
        case 3: _t->mapChanged((*reinterpret_cast< MapInfo*(*)>(_a[1]))); break;
        case 4: _t->mapFileChanged((*reinterpret_cast< MapInfo*(*)>(_a[1]))); break;
        case 5: _t->imageLoadedByThread((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< MapImage*(*)>(_a[2]))); break;
        case 6: _t->renderThreadNeedsMap((*reinterpret_cast< MapImage*(*)>(_a[1]))); break;
        case 7: _t->imageRenderedByThread((*reinterpret_cast< MapImageData(*)>(_a[1])),(*reinterpret_cast< MapImage*(*)>(_a[2]))); break;
        case 8: _t->renderJobDone((*reinterpret_cast< MapComposite*(*)>(_a[1]))); break;
        case 9: _t->mapLoaded((*reinterpret_cast< MapInfo*(*)>(_a[1]))); break;
        case 10: _t->mapFailedToLoad((*reinterpret_cast< MapInfo*(*)>(_a[1]))); break;
        case 11: _t->processDeferrals(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MapImageData >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapImageManager::*)(MapImage * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapImageManager::mapImageChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MapImageManager::*)(MapImage * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapImageManager::mapImageFailedToLoad)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapImageManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MapImageManager.data,
    qt_meta_data_MapImageManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapImageManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapImageManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapImageManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MapImageManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MapImageManager::mapImageChanged(MapImage * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MapImageManager::mapImageFailedToLoad(MapImage * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
