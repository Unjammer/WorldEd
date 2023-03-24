/****************************************************************************
** Meta object code from reading C++ file 'objectgroupsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../objectgroupsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'objectgroupsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ObjectGroupsDialog_t {
    QByteArrayData data[13];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ObjectGroupsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ObjectGroupsDialog_t qt_meta_stringdata_ObjectGroupsDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ObjectGroupsDialog"
QT_MOC_LITERAL(1, 19, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 3), // "add"
QT_MOC_LITERAL(4, 41, 6), // "update"
QT_MOC_LITERAL(5, 48, 6), // "remove"
QT_MOC_LITERAL(6, 55, 12), // "synchButtons"
QT_MOC_LITERAL(7, 68, 11), // "moveGroupUp"
QT_MOC_LITERAL(8, 80, 13), // "moveGroupDown"
QT_MOC_LITERAL(9, 94, 12), // "colorChanged"
QT_MOC_LITERAL(10, 107, 5), // "color"
QT_MOC_LITERAL(11, 113, 11), // "typeChanged"
QT_MOC_LITERAL(12, 125, 5) // "index"

    },
    "ObjectGroupsDialog\0selectionChanged\0"
    "\0add\0update\0remove\0synchButtons\0"
    "moveGroupUp\0moveGroupDown\0colorChanged\0"
    "color\0typeChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ObjectGroupsDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,   10,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void ObjectGroupsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ObjectGroupsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->add(); break;
        case 2: _t->update(); break;
        case 3: _t->remove(); break;
        case 4: _t->synchButtons(); break;
        case 5: _t->moveGroupUp(); break;
        case 6: _t->moveGroupDown(); break;
        case 7: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 8: _t->typeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ObjectGroupsDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_ObjectGroupsDialog.data,
    qt_meta_data_ObjectGroupsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ObjectGroupsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ObjectGroupsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ObjectGroupsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ObjectGroupsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
