/****************************************************************************
** Meta object code from reading C++ file 'toolmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../toolmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toolmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ToolBar_t {
    QByteArrayData data[3];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToolBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToolBar_t qt_meta_stringdata_ToolBar = {
    {
QT_MOC_LITERAL(0, 0, 7), // "ToolBar"
QT_MOC_LITERAL(1, 8, 15), // "languageChanged"
QT_MOC_LITERAL(2, 24, 0) // ""

    },
    "ToolBar\0languageChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToolBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void ToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToolBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->languageChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ToolBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBar::languageChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToolBar::staticMetaObject = { {
    &QToolBar::staticMetaObject,
    qt_meta_stringdata_ToolBar.data,
    qt_meta_data_ToolBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToolBar.stringdata0))
        return static_cast<void*>(this);
    return QToolBar::qt_metacast(_clname);
}

int ToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ToolBar::languageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ToolManager_t {
    QByteArrayData data[14];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToolManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToolManager_t qt_meta_stringdata_ToolManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ToolManager"
QT_MOC_LITERAL(1, 12, 19), // "selectedToolChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "AbstractTool*"
QT_MOC_LITERAL(4, 47, 4), // "tool"
QT_MOC_LITERAL(5, 52, 17), // "statusInfoChanged"
QT_MOC_LITERAL(6, 70, 4), // "info"
QT_MOC_LITERAL(7, 75, 15), // "actionTriggered"
QT_MOC_LITERAL(8, 91, 8), // "QAction*"
QT_MOC_LITERAL(9, 100, 6), // "action"
QT_MOC_LITERAL(10, 107, 15), // "languageChanged"
QT_MOC_LITERAL(11, 123, 18), // "toolEnabledChanged"
QT_MOC_LITERAL(12, 142, 7), // "enabled"
QT_MOC_LITERAL(13, 150, 17) // "selectEnabledTool"

    },
    "ToolManager\0selectedToolChanged\0\0"
    "AbstractTool*\0tool\0statusInfoChanged\0"
    "info\0actionTriggered\0QAction*\0action\0"
    "languageChanged\0toolEnabledChanged\0"
    "enabled\0selectEnabledTool"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToolManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   50,    2, 0x08 /* Private */,
      10,    0,   53,    2, 0x08 /* Private */,
      11,    1,   54,    2, 0x08 /* Private */,
      13,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,

       0        // eod
};

void ToolManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToolManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedToolChanged((*reinterpret_cast< AbstractTool*(*)>(_a[1]))); break;
        case 1: _t->statusInfoChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->actionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->languageChanged(); break;
        case 4: _t->toolEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->selectEnabledTool(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ToolManager::*)(AbstractTool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolManager::selectedToolChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ToolManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolManager::statusInfoChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ToolManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ToolManager.data,
    qt_meta_data_ToolManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToolManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToolManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToolManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ToolManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ToolManager::selectedToolChanged(AbstractTool * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ToolManager::statusInfoChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
