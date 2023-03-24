/****************************************************************************
** Meta object code from reading C++ file 'filesystemwatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../filesystemwatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesystemwatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tiled__Internal__FileSystemWatcher_t {
    QByteArrayData data[7];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tiled__Internal__FileSystemWatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tiled__Internal__FileSystemWatcher_t qt_meta_stringdata_Tiled__Internal__FileSystemWatcher = {
    {
QT_MOC_LITERAL(0, 0, 34), // "Tiled::Internal::FileSystemWa..."
QT_MOC_LITERAL(1, 35, 11), // "fileChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 4), // "path"
QT_MOC_LITERAL(4, 53, 16), // "directoryChanged"
QT_MOC_LITERAL(5, 70, 12), // "pathsChanged"
QT_MOC_LITERAL(6, 83, 5) // "paths"

    },
    "Tiled::Internal::FileSystemWatcher\0"
    "fileChanged\0\0path\0directoryChanged\0"
    "pathsChanged\0paths"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tiled__Internal__FileSystemWatcher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       5,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QStringList,    6,

       0        // eod
};

void Tiled::Internal::FileSystemWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileSystemWatcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->directoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->pathsChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileSystemWatcher::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileSystemWatcher::fileChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileSystemWatcher::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileSystemWatcher::directoryChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileSystemWatcher::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileSystemWatcher::pathsChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Tiled::Internal::FileSystemWatcher::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Tiled__Internal__FileSystemWatcher.data,
    qt_meta_data_Tiled__Internal__FileSystemWatcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Tiled::Internal::FileSystemWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::Internal::FileSystemWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tiled__Internal__FileSystemWatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tiled::Internal::FileSystemWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Tiled::Internal::FileSystemWatcher::fileChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tiled::Internal::FileSystemWatcher::directoryChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tiled::Internal::FileSystemWatcher::pathsChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
