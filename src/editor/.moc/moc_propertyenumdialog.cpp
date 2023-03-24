/****************************************************************************
** Meta object code from reading C++ file 'propertyenumdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../propertyenumdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propertyenumdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PropertyEnumDialog_t {
    QByteArrayData data[23];
    char stringdata0[295];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropertyEnumDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropertyEnumDialog_t qt_meta_stringdata_PropertyEnumDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PropertyEnumDialog"
QT_MOC_LITERAL(1, 19, 7), // "addEnum"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "removeEnum"
QT_MOC_LITERAL(4, 39, 18), // "currentEnumChanged"
QT_MOC_LITERAL(5, 58, 3), // "row"
QT_MOC_LITERAL(6, 62, 28), // "propertyEnumAboutToBeRemoved"
QT_MOC_LITERAL(7, 91, 5), // "index"
QT_MOC_LITERAL(8, 97, 19), // "propertyEnumChanged"
QT_MOC_LITERAL(9, 117, 13), // "PropertyEnum*"
QT_MOC_LITERAL(10, 131, 2), // "pe"
QT_MOC_LITERAL(11, 134, 9), // "addChoice"
QT_MOC_LITERAL(12, 144, 12), // "removeChoice"
QT_MOC_LITERAL(13, 157, 20), // "currentChoiceChanged"
QT_MOC_LITERAL(14, 178, 12), // "multiToggled"
QT_MOC_LITERAL(15, 191, 5), // "multi"
QT_MOC_LITERAL(16, 197, 13), // "updateActions"
QT_MOC_LITERAL(17, 211, 12), // "setEnumsList"
QT_MOC_LITERAL(18, 224, 14), // "setChoicesList"
QT_MOC_LITERAL(19, 239, 15), // "enumItemChanged"
QT_MOC_LITERAL(20, 255, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(21, 272, 4), // "item"
QT_MOC_LITERAL(22, 277, 17) // "choiceItemChanged"

    },
    "PropertyEnumDialog\0addEnum\0\0removeEnum\0"
    "currentEnumChanged\0row\0"
    "propertyEnumAboutToBeRemoved\0index\0"
    "propertyEnumChanged\0PropertyEnum*\0pe\0"
    "addChoice\0removeChoice\0currentChoiceChanged\0"
    "multiToggled\0multi\0updateActions\0"
    "setEnumsList\0setChoicesList\0enumItemChanged\0"
    "QListWidgetItem*\0item\0choiceItemChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertyEnumDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    1,   86,    2, 0x08 /* Private */,
       6,    1,   89,    2, 0x08 /* Private */,
       8,    1,   92,    2, 0x08 /* Private */,
      11,    0,   95,    2, 0x08 /* Private */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    1,   97,    2, 0x08 /* Private */,
      14,    1,  100,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,
      17,    0,  104,    2, 0x08 /* Private */,
      18,    0,  105,    2, 0x08 /* Private */,
      19,    1,  106,    2, 0x08 /* Private */,
      22,    1,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 20,   21,

       0        // eod
};

void PropertyEnumDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyEnumDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addEnum(); break;
        case 1: _t->removeEnum(); break;
        case 2: _t->currentEnumChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->propertyEnumAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->propertyEnumChanged((*reinterpret_cast< PropertyEnum*(*)>(_a[1]))); break;
        case 5: _t->addChoice(); break;
        case 6: _t->removeChoice(); break;
        case 7: _t->currentChoiceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->multiToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->updateActions(); break;
        case 10: _t->setEnumsList(); break;
        case 11: _t->setChoicesList(); break;
        case 12: _t->enumItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 13: _t->choiceItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PropertyEnumDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_PropertyEnumDialog.data,
    qt_meta_data_PropertyEnumDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PropertyEnumDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertyEnumDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyEnumDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PropertyEnumDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
