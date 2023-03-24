/****************************************************************************
** Meta object code from reading C++ file 'documentmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../documentmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'documentmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DocumentManager_t {
    QByteArrayData data[8];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DocumentManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DocumentManager_t qt_meta_stringdata_DocumentManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DocumentManager"
QT_MOC_LITERAL(1, 16, 22), // "currentDocumentChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 9), // "Document*"
QT_MOC_LITERAL(4, 50, 3), // "doc"
QT_MOC_LITERAL(5, 54, 13), // "documentAdded"
QT_MOC_LITERAL(6, 68, 20), // "documentAboutToClose"
QT_MOC_LITERAL(7, 89, 5) // "index"

    },
    "DocumentManager\0currentDocumentChanged\0"
    "\0Document*\0doc\0documentAdded\0"
    "documentAboutToClose\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DocumentManager[] = {

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
       5,    1,   32,    2, 0x06 /* Public */,
       6,    2,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3,    7,    4,

       0        // eod
};

void DocumentManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DocumentManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentDocumentChanged((*reinterpret_cast< Document*(*)>(_a[1]))); break;
        case 1: _t->documentAdded((*reinterpret_cast< Document*(*)>(_a[1]))); break;
        case 2: _t->documentAboutToClose((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Document*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DocumentManager::*)(Document * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentManager::currentDocumentChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DocumentManager::*)(Document * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentManager::documentAdded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DocumentManager::*)(int , Document * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentManager::documentAboutToClose)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DocumentManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_DocumentManager.data,
    qt_meta_data_DocumentManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DocumentManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DocumentManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DocumentManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DocumentManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DocumentManager::currentDocumentChanged(Document * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DocumentManager::documentAdded(Document * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DocumentManager::documentAboutToClose(int _t1, Document * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
