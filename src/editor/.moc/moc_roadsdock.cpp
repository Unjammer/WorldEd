/****************************************************************************
** Meta object code from reading C++ file 'roadsdock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../roadsdock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'roadsdock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RoadsDock_t {
    QByteArrayData data[8];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoadsDock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoadsDock_t qt_meta_stringdata_RoadsDock = {
    {
QT_MOC_LITERAL(0, 0, 9), // "RoadsDock"
QT_MOC_LITERAL(1, 10, 20), // "selectedRoadsChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 28), // "roadWidthSpinBoxValueChanged"
QT_MOC_LITERAL(4, 61, 8), // "newValue"
QT_MOC_LITERAL(5, 70, 28), // "trafficLineComboBoxActivated"
QT_MOC_LITERAL(6, 99, 5), // "index"
QT_MOC_LITERAL(7, 105, 16) // "roadTypeSelected"

    },
    "RoadsDock\0selectedRoadsChanged\0\0"
    "roadWidthSpinBoxValueChanged\0newValue\0"
    "trafficLineComboBoxActivated\0index\0"
    "roadTypeSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoadsDock[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       7,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void RoadsDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RoadsDock *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedRoadsChanged(); break;
        case 1: _t->roadWidthSpinBoxValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->trafficLineComboBoxActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->roadTypeSelected(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RoadsDock::staticMetaObject = { {
    &QDockWidget::staticMetaObject,
    qt_meta_stringdata_RoadsDock.data,
    qt_meta_data_RoadsDock,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RoadsDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoadsDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RoadsDock.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int RoadsDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
