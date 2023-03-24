/****************************************************************************
** Meta object code from reading C++ file 'zoomable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../zoomable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zoomable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Zoomable_t {
    QByteArrayData data[10];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Zoomable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Zoomable_t qt_meta_stringdata_Zoomable = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Zoomable"
QT_MOC_LITERAL(1, 9, 12), // "scaleChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "scale"
QT_MOC_LITERAL(4, 29, 6), // "zoomIn"
QT_MOC_LITERAL(5, 36, 7), // "zoomOut"
QT_MOC_LITERAL(6, 44, 9), // "resetZoom"
QT_MOC_LITERAL(7, 54, 14), // "comboActivated"
QT_MOC_LITERAL(8, 69, 5), // "index"
QT_MOC_LITERAL(9, 75, 11) // "comboEdited"

    },
    "Zoomable\0scaleChanged\0\0scale\0zoomIn\0"
    "zoomOut\0resetZoom\0comboActivated\0index\0"
    "comboEdited"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Zoomable[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x0a /* Public */,
       5,    0,   48,    2, 0x0a /* Public */,
       6,    0,   49,    2, 0x0a /* Public */,
       7,    1,   50,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,

       0        // eod
};

void Zoomable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Zoomable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scaleChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->zoomIn(); break;
        case 2: _t->zoomOut(); break;
        case 3: _t->resetZoom(); break;
        case 4: _t->comboActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->comboEdited(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Zoomable::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Zoomable::scaleChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Zoomable::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Zoomable.data,
    qt_meta_data_Zoomable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Zoomable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Zoomable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Zoomable.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Zoomable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Zoomable::scaleChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
