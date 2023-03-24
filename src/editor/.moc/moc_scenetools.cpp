/****************************************************************************
** Meta object code from reading C++ file 'scenetools.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../scenetools.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scenetools.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AbstractTool_t {
    QByteArrayData data[7];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractTool_t qt_meta_stringdata_AbstractTool = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AbstractTool"
QT_MOC_LITERAL(1, 13, 17), // "statusInfoChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10), // "statusInfo"
QT_MOC_LITERAL(4, 43, 14), // "enabledChanged"
QT_MOC_LITERAL(5, 58, 7), // "enabled"
QT_MOC_LITERAL(6, 66, 18) // "updateEnabledState"

    },
    "AbstractTool\0statusInfoChanged\0\0"
    "statusInfo\0enabledChanged\0enabled\0"
    "updateEnabledState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void AbstractTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusInfoChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->enabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->updateEnabledState(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractTool::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractTool::statusInfoChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AbstractTool::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractTool::enabledChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AbstractTool::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AbstractTool.data,
    qt_meta_data_AbstractTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AbstractTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractTool.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AbstractTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void AbstractTool::statusInfoChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AbstractTool::enabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_BaseCellSceneTool_t {
    QByteArrayData data[6];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BaseCellSceneTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BaseCellSceneTool_t qt_meta_stringdata_BaseCellSceneTool = {
    {
QT_MOC_LITERAL(0, 0, 17), // "BaseCellSceneTool"
QT_MOC_LITERAL(1, 18, 18), // "updateEnabledState"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "setEventView"
QT_MOC_LITERAL(4, 51, 17), // "BaseGraphicsView*"
QT_MOC_LITERAL(5, 69, 4) // "view"

    },
    "BaseCellSceneTool\0updateEnabledState\0"
    "\0setEventView\0BaseGraphicsView*\0view"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaseCellSceneTool[] = {

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

void BaseCellSceneTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BaseCellSceneTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateEnabledState(); break;
        case 1: _t->setEventView((*reinterpret_cast< BaseGraphicsView*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BaseCellSceneTool::staticMetaObject = { {
    &AbstractTool::staticMetaObject,
    qt_meta_stringdata_BaseCellSceneTool.data,
    qt_meta_data_BaseCellSceneTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BaseCellSceneTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaseCellSceneTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BaseCellSceneTool.stringdata0))
        return static_cast<void*>(this);
    return AbstractTool::qt_metacast(_clname);
}

int BaseCellSceneTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractTool::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CreateObjectTool_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreateObjectTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreateObjectTool_t qt_meta_stringdata_CreateObjectTool = {
    {
QT_MOC_LITERAL(0, 0, 16) // "CreateObjectTool"

    },
    "CreateObjectTool"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateObjectTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CreateObjectTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CreateObjectTool::staticMetaObject = { {
    &BaseCellSceneTool::staticMetaObject,
    qt_meta_stringdata_CreateObjectTool.data,
    qt_meta_data_CreateObjectTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CreateObjectTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateObjectTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreateObjectTool.stringdata0))
        return static_cast<void*>(this);
    return BaseCellSceneTool::qt_metacast(_clname);
}

int CreateObjectTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseCellSceneTool::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SelectMoveObjectTool_t {
    QByteArrayData data[10];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectMoveObjectTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectMoveObjectTool_t qt_meta_stringdata_SelectMoveObjectTool = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SelectMoveObjectTool"
QT_MOC_LITERAL(1, 21, 26), // "cellObjectAboutToBeRemoved"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 10), // "WorldCell*"
QT_MOC_LITERAL(4, 60, 4), // "cell"
QT_MOC_LITERAL(5, 65, 11), // "objectIndex"
QT_MOC_LITERAL(6, 77, 15), // "cellObjectMoved"
QT_MOC_LITERAL(7, 93, 16), // "WorldCellObject*"
QT_MOC_LITERAL(8, 110, 6), // "object"
QT_MOC_LITERAL(9, 117, 17) // "cellObjectResized"

    },
    "SelectMoveObjectTool\0cellObjectAboutToBeRemoved\0"
    "\0WorldCell*\0cell\0objectIndex\0"
    "cellObjectMoved\0WorldCellObject*\0"
    "object\0cellObjectResized"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectMoveObjectTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x08 /* Private */,
       6,    1,   34,    2, 0x08 /* Private */,
       9,    1,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void SelectMoveObjectTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SelectMoveObjectTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cellObjectAboutToBeRemoved((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->cellObjectMoved((*reinterpret_cast< WorldCellObject*(*)>(_a[1]))); break;
        case 2: _t->cellObjectResized((*reinterpret_cast< WorldCellObject*(*)>(_a[1]))); break;
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
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SelectMoveObjectTool::staticMetaObject = { {
    &BaseCellSceneTool::staticMetaObject,
    qt_meta_stringdata_SelectMoveObjectTool.data,
    qt_meta_data_SelectMoveObjectTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SelectMoveObjectTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectMoveObjectTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SelectMoveObjectTool.stringdata0))
        return static_cast<void*>(this);
    return BaseCellSceneTool::qt_metacast(_clname);
}

int SelectMoveObjectTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseCellSceneTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_SubMapTool_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubMapTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubMapTool_t qt_meta_stringdata_SubMapTool = {
    {
QT_MOC_LITERAL(0, 0, 10) // "SubMapTool"

    },
    "SubMapTool"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubMapTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SubMapTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SubMapTool::staticMetaObject = { {
    &BaseCellSceneTool::staticMetaObject,
    qt_meta_stringdata_SubMapTool.data,
    qt_meta_data_SubMapTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SubMapTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubMapTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SubMapTool.stringdata0))
        return static_cast<void*>(this);
    return BaseCellSceneTool::qt_metacast(_clname);
}

int SubMapTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseCellSceneTool::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RoomToneTool_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoomToneTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoomToneTool_t qt_meta_stringdata_RoomToneTool = {
    {
QT_MOC_LITERAL(0, 0, 12) // "RoomToneTool"

    },
    "RoomToneTool"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoomToneTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void RoomToneTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RoomToneTool::staticMetaObject = { {
    &BaseCellSceneTool::staticMetaObject,
    qt_meta_stringdata_RoomToneTool.data,
    qt_meta_data_RoomToneTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RoomToneTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoomToneTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RoomToneTool.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Singleton<RoomToneTool>"))
        return static_cast< Singleton<RoomToneTool>*>(this);
    return BaseCellSceneTool::qt_metacast(_clname);
}

int RoomToneTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseCellSceneTool::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SpawnPointTool_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpawnPointTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpawnPointTool_t qt_meta_stringdata_SpawnPointTool = {
    {
QT_MOC_LITERAL(0, 0, 14) // "SpawnPointTool"

    },
    "SpawnPointTool"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpawnPointTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SpawnPointTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SpawnPointTool::staticMetaObject = { {
    &BaseCellSceneTool::staticMetaObject,
    qt_meta_stringdata_SpawnPointTool.data,
    qt_meta_data_SpawnPointTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SpawnPointTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpawnPointTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpawnPointTool.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Singleton<SpawnPointTool>"))
        return static_cast< Singleton<SpawnPointTool>*>(this);
    return BaseCellSceneTool::qt_metacast(_clname);
}

int SpawnPointTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseCellSceneTool::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CellCreateRoadTool_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CellCreateRoadTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CellCreateRoadTool_t qt_meta_stringdata_CellCreateRoadTool = {
    {
QT_MOC_LITERAL(0, 0, 18) // "CellCreateRoadTool"

    },
    "CellCreateRoadTool"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CellCreateRoadTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CellCreateRoadTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CellCreateRoadTool::staticMetaObject = { {
    &BaseCellSceneTool::staticMetaObject,
    qt_meta_stringdata_CellCreateRoadTool.data,
    qt_meta_data_CellCreateRoadTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CellCreateRoadTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CellCreateRoadTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CellCreateRoadTool.stringdata0))
        return static_cast<void*>(this);
    return BaseCellSceneTool::qt_metacast(_clname);
}

int CellCreateRoadTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseCellSceneTool::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CellEditRoadTool_t {
    QByteArrayData data[5];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CellEditRoadTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CellEditRoadTool_t qt_meta_stringdata_CellEditRoadTool = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CellEditRoadTool"
QT_MOC_LITERAL(1, 17, 20), // "roadAboutToBeRemoved"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "index"
QT_MOC_LITERAL(4, 45, 17) // "roadCoordsChanged"

    },
    "CellEditRoadTool\0roadAboutToBeRemoved\0"
    "\0index\0roadCoordsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CellEditRoadTool[] = {

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
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void CellEditRoadTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CellEditRoadTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->roadAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->roadCoordsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CellEditRoadTool::staticMetaObject = { {
    &BaseCellSceneTool::staticMetaObject,
    qt_meta_stringdata_CellEditRoadTool.data,
    qt_meta_data_CellEditRoadTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CellEditRoadTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CellEditRoadTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CellEditRoadTool.stringdata0))
        return static_cast<void*>(this);
    return BaseCellSceneTool::qt_metacast(_clname);
}

int CellEditRoadTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseCellSceneTool::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CellSelectMoveRoadTool_t {
    QByteArrayData data[4];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CellSelectMoveRoadTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CellSelectMoveRoadTool_t qt_meta_stringdata_CellSelectMoveRoadTool = {
    {
QT_MOC_LITERAL(0, 0, 22), // "CellSelectMoveRoadTool"
QT_MOC_LITERAL(1, 23, 20), // "roadAboutToBeRemoved"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5) // "index"

    },
    "CellSelectMoveRoadTool\0roadAboutToBeRemoved\0"
    "\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CellSelectMoveRoadTool[] = {

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
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void CellSelectMoveRoadTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CellSelectMoveRoadTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->roadAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CellSelectMoveRoadTool::staticMetaObject = { {
    &BaseCellSceneTool::staticMetaObject,
    qt_meta_stringdata_CellSelectMoveRoadTool.data,
    qt_meta_data_CellSelectMoveRoadTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CellSelectMoveRoadTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CellSelectMoveRoadTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CellSelectMoveRoadTool.stringdata0))
        return static_cast<void*>(this);
    return BaseCellSceneTool::qt_metacast(_clname);
}

int CellSelectMoveRoadTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseCellSceneTool::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_AbstractCreatePolygonObjectTool_t {
    QByteArrayData data[1];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractCreatePolygonObjectTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractCreatePolygonObjectTool_t qt_meta_stringdata_AbstractCreatePolygonObjectTool = {
    {
QT_MOC_LITERAL(0, 0, 31) // "AbstractCreatePolygonObjectTool"

    },
    "AbstractCreatePolygonObjectTool"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractCreatePolygonObjectTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AbstractCreatePolygonObjectTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AbstractCreatePolygonObjectTool::staticMetaObject = { {
    &BaseCellSceneTool::staticMetaObject,
    qt_meta_stringdata_AbstractCreatePolygonObjectTool.data,
    qt_meta_data_AbstractCreatePolygonObjectTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AbstractCreatePolygonObjectTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractCreatePolygonObjectTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractCreatePolygonObjectTool.stringdata0))
        return static_cast<void*>(this);
    return BaseCellSceneTool::qt_metacast(_clname);
}

int AbstractCreatePolygonObjectTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseCellSceneTool::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CreatePointObjectTool_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreatePointObjectTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreatePointObjectTool_t qt_meta_stringdata_CreatePointObjectTool = {
    {
QT_MOC_LITERAL(0, 0, 21) // "CreatePointObjectTool"

    },
    "CreatePointObjectTool"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreatePointObjectTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CreatePointObjectTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CreatePointObjectTool::staticMetaObject = { {
    &AbstractCreatePolygonObjectTool::staticMetaObject,
    qt_meta_stringdata_CreatePointObjectTool.data,
    qt_meta_data_CreatePointObjectTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CreatePointObjectTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreatePointObjectTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreatePointObjectTool.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Singleton<CreatePointObjectTool>"))
        return static_cast< Singleton<CreatePointObjectTool>*>(this);
    return AbstractCreatePolygonObjectTool::qt_metacast(_clname);
}

int CreatePointObjectTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractCreatePolygonObjectTool::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CreatePolygonObjectTool_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreatePolygonObjectTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreatePolygonObjectTool_t qt_meta_stringdata_CreatePolygonObjectTool = {
    {
QT_MOC_LITERAL(0, 0, 23) // "CreatePolygonObjectTool"

    },
    "CreatePolygonObjectTool"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreatePolygonObjectTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CreatePolygonObjectTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CreatePolygonObjectTool::staticMetaObject = { {
    &AbstractCreatePolygonObjectTool::staticMetaObject,
    qt_meta_stringdata_CreatePolygonObjectTool.data,
    qt_meta_data_CreatePolygonObjectTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CreatePolygonObjectTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreatePolygonObjectTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreatePolygonObjectTool.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Singleton<CreatePolygonObjectTool>"))
        return static_cast< Singleton<CreatePolygonObjectTool>*>(this);
    return AbstractCreatePolygonObjectTool::qt_metacast(_clname);
}

int CreatePolygonObjectTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractCreatePolygonObjectTool::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CreatePolylineObjectTool_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreatePolylineObjectTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreatePolylineObjectTool_t qt_meta_stringdata_CreatePolylineObjectTool = {
    {
QT_MOC_LITERAL(0, 0, 24) // "CreatePolylineObjectTool"

    },
    "CreatePolylineObjectTool"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreatePolylineObjectTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CreatePolylineObjectTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CreatePolylineObjectTool::staticMetaObject = { {
    &AbstractCreatePolygonObjectTool::staticMetaObject,
    qt_meta_stringdata_CreatePolylineObjectTool.data,
    qt_meta_data_CreatePolylineObjectTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CreatePolylineObjectTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreatePolylineObjectTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreatePolylineObjectTool.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Singleton<CreatePolylineObjectTool>"))
        return static_cast< Singleton<CreatePolylineObjectTool>*>(this);
    return AbstractCreatePolygonObjectTool::qt_metacast(_clname);
}

int CreatePolylineObjectTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractCreatePolygonObjectTool::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_EditPolygonObjectTool_t {
    QByteArrayData data[14];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditPolygonObjectTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditPolygonObjectTool_t qt_meta_stringdata_EditPolygonObjectTool = {
    {
QT_MOC_LITERAL(0, 0, 21), // "EditPolygonObjectTool"
QT_MOC_LITERAL(1, 22, 26), // "cellObjectAboutToBeRemoved"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 10), // "WorldCell*"
QT_MOC_LITERAL(4, 61, 4), // "cell"
QT_MOC_LITERAL(5, 66, 11), // "objectIndex"
QT_MOC_LITERAL(6, 78, 15), // "cellObjectMoved"
QT_MOC_LITERAL(7, 94, 16), // "WorldCellObject*"
QT_MOC_LITERAL(8, 111, 6), // "object"
QT_MOC_LITERAL(9, 118, 20), // "cellObjectPointMoved"
QT_MOC_LITERAL(10, 139, 10), // "pointIndex"
QT_MOC_LITERAL(11, 150, 23), // "cellObjectPointsChanged"
QT_MOC_LITERAL(12, 174, 22), // "selectedObjectsChanged"
QT_MOC_LITERAL(13, 197, 27) // "selectedObjectPointsChanged"

    },
    "EditPolygonObjectTool\0cellObjectAboutToBeRemoved\0"
    "\0WorldCell*\0cell\0objectIndex\0"
    "cellObjectMoved\0WorldCellObject*\0"
    "object\0cellObjectPointMoved\0pointIndex\0"
    "cellObjectPointsChanged\0selectedObjectsChanged\0"
    "selectedObjectPointsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditPolygonObjectTool[] = {

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
       1,    2,   44,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x08 /* Private */,
       9,    3,   52,    2, 0x08 /* Private */,
      11,    2,   59,    2, 0x08 /* Private */,
      12,    0,   64,    2, 0x08 /* Private */,
      13,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,   10,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EditPolygonObjectTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditPolygonObjectTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cellObjectAboutToBeRemoved((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->cellObjectMoved((*reinterpret_cast< WorldCellObject*(*)>(_a[1]))); break;
        case 2: _t->cellObjectPointMoved((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->cellObjectPointsChanged((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->selectedObjectsChanged(); break;
        case 5: _t->selectedObjectPointsChanged(); break;
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
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EditPolygonObjectTool::staticMetaObject = { {
    &BaseCellSceneTool::staticMetaObject,
    qt_meta_stringdata_EditPolygonObjectTool.data,
    qt_meta_data_EditPolygonObjectTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EditPolygonObjectTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditPolygonObjectTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditPolygonObjectTool.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Singleton<EditPolygonObjectTool>"))
        return static_cast< Singleton<EditPolygonObjectTool>*>(this);
    return BaseCellSceneTool::qt_metacast(_clname);
}

int EditPolygonObjectTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseCellSceneTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_BaseWorldSceneTool_t {
    QByteArrayData data[3];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BaseWorldSceneTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BaseWorldSceneTool_t qt_meta_stringdata_BaseWorldSceneTool = {
    {
QT_MOC_LITERAL(0, 0, 18), // "BaseWorldSceneTool"
QT_MOC_LITERAL(1, 19, 18), // "updateEnabledState"
QT_MOC_LITERAL(2, 38, 0) // ""

    },
    "BaseWorldSceneTool\0updateEnabledState\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaseWorldSceneTool[] = {

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

void BaseWorldSceneTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BaseWorldSceneTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateEnabledState(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BaseWorldSceneTool::staticMetaObject = { {
    &AbstractTool::staticMetaObject,
    qt_meta_stringdata_BaseWorldSceneTool.data,
    qt_meta_data_BaseWorldSceneTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BaseWorldSceneTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaseWorldSceneTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BaseWorldSceneTool.stringdata0))
        return static_cast<void*>(this);
    return AbstractTool::qt_metacast(_clname);
}

int BaseWorldSceneTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractTool::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_WorldCellTool_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WorldCellTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WorldCellTool_t qt_meta_stringdata_WorldCellTool = {
    {
QT_MOC_LITERAL(0, 0, 13) // "WorldCellTool"

    },
    "WorldCellTool"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WorldCellTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void WorldCellTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WorldCellTool::staticMetaObject = { {
    &BaseWorldSceneTool::staticMetaObject,
    qt_meta_stringdata_WorldCellTool.data,
    qt_meta_data_WorldCellTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WorldCellTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorldCellTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WorldCellTool.stringdata0))
        return static_cast<void*>(this);
    return BaseWorldSceneTool::qt_metacast(_clname);
}

int WorldCellTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseWorldSceneTool::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PasteCellsTool_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PasteCellsTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PasteCellsTool_t qt_meta_stringdata_PasteCellsTool = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PasteCellsTool"
QT_MOC_LITERAL(1, 15, 18), // "updateEnabledState"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "PasteCellsTool\0updateEnabledState\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PasteCellsTool[] = {

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

void PasteCellsTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PasteCellsTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateEnabledState(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PasteCellsTool::staticMetaObject = { {
    &BaseWorldSceneTool::staticMetaObject,
    qt_meta_stringdata_PasteCellsTool.data,
    qt_meta_data_PasteCellsTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PasteCellsTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PasteCellsTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PasteCellsTool.stringdata0))
        return static_cast<void*>(this);
    return BaseWorldSceneTool::qt_metacast(_clname);
}

int PasteCellsTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseWorldSceneTool::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_WorldCreateRoadTool_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WorldCreateRoadTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WorldCreateRoadTool_t qt_meta_stringdata_WorldCreateRoadTool = {
    {
QT_MOC_LITERAL(0, 0, 19) // "WorldCreateRoadTool"

    },
    "WorldCreateRoadTool"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WorldCreateRoadTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void WorldCreateRoadTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WorldCreateRoadTool::staticMetaObject = { {
    &BaseWorldSceneTool::staticMetaObject,
    qt_meta_stringdata_WorldCreateRoadTool.data,
    qt_meta_data_WorldCreateRoadTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WorldCreateRoadTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorldCreateRoadTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WorldCreateRoadTool.stringdata0))
        return static_cast<void*>(this);
    return BaseWorldSceneTool::qt_metacast(_clname);
}

int WorldCreateRoadTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseWorldSceneTool::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WorldEditRoadTool_t {
    QByteArrayData data[5];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WorldEditRoadTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WorldEditRoadTool_t qt_meta_stringdata_WorldEditRoadTool = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WorldEditRoadTool"
QT_MOC_LITERAL(1, 18, 20), // "roadAboutToBeRemoved"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "index"
QT_MOC_LITERAL(4, 46, 17) // "roadCoordsChanged"

    },
    "WorldEditRoadTool\0roadAboutToBeRemoved\0"
    "\0index\0roadCoordsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WorldEditRoadTool[] = {

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
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void WorldEditRoadTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WorldEditRoadTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->roadAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->roadCoordsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WorldEditRoadTool::staticMetaObject = { {
    &BaseWorldSceneTool::staticMetaObject,
    qt_meta_stringdata_WorldEditRoadTool.data,
    qt_meta_data_WorldEditRoadTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WorldEditRoadTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorldEditRoadTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WorldEditRoadTool.stringdata0))
        return static_cast<void*>(this);
    return BaseWorldSceneTool::qt_metacast(_clname);
}

int WorldEditRoadTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseWorldSceneTool::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_WorldSelectMoveRoadTool_t {
    QByteArrayData data[4];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WorldSelectMoveRoadTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WorldSelectMoveRoadTool_t qt_meta_stringdata_WorldSelectMoveRoadTool = {
    {
QT_MOC_LITERAL(0, 0, 23), // "WorldSelectMoveRoadTool"
QT_MOC_LITERAL(1, 24, 20), // "roadAboutToBeRemoved"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 5) // "index"

    },
    "WorldSelectMoveRoadTool\0roadAboutToBeRemoved\0"
    "\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WorldSelectMoveRoadTool[] = {

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
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void WorldSelectMoveRoadTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WorldSelectMoveRoadTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->roadAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WorldSelectMoveRoadTool::staticMetaObject = { {
    &BaseWorldSceneTool::staticMetaObject,
    qt_meta_stringdata_WorldSelectMoveRoadTool.data,
    qt_meta_data_WorldSelectMoveRoadTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WorldSelectMoveRoadTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorldSelectMoveRoadTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WorldSelectMoveRoadTool.stringdata0))
        return static_cast<void*>(this);
    return BaseWorldSceneTool::qt_metacast(_clname);
}

int WorldSelectMoveRoadTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseWorldSceneTool::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_WorldBMPTool_t {
    QByteArrayData data[4];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WorldBMPTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WorldBMPTool_t qt_meta_stringdata_WorldBMPTool = {
    {
QT_MOC_LITERAL(0, 0, 12), // "WorldBMPTool"
QT_MOC_LITERAL(1, 13, 19), // "bmpAboutToBeRemoved"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5) // "index"

    },
    "WorldBMPTool\0bmpAboutToBeRemoved\0\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WorldBMPTool[] = {

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
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void WorldBMPTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WorldBMPTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bmpAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WorldBMPTool::staticMetaObject = { {
    &BaseWorldSceneTool::staticMetaObject,
    qt_meta_stringdata_WorldBMPTool.data,
    qt_meta_data_WorldBMPTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WorldBMPTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorldBMPTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WorldBMPTool.stringdata0))
        return static_cast<void*>(this);
    return BaseWorldSceneTool::qt_metacast(_clname);
}

int WorldBMPTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseWorldSceneTool::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
