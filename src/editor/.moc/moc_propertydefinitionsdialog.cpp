/****************************************************************************
** Meta object code from reading C++ file 'propertydefinitionsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../propertydefinitionsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propertydefinitionsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PropertyDefinitionsDialog_t {
    QByteArrayData data[21];
    char stringdata0[335];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropertyDefinitionsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropertyDefinitionsDialog_t qt_meta_stringdata_PropertyDefinitionsDialog = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PropertyDefinitionsDialog"
QT_MOC_LITERAL(1, 26, 23), // "propertyDefinitionAdded"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 12), // "PropertyDef*"
QT_MOC_LITERAL(4, 64, 2), // "pd"
QT_MOC_LITERAL(5, 67, 5), // "index"
QT_MOC_LITERAL(6, 73, 34), // "propertyDefinitionAboutToBeRe..."
QT_MOC_LITERAL(7, 108, 25), // "propertyDefinitionChanged"
QT_MOC_LITERAL(8, 134, 17), // "propertyEnumAdded"
QT_MOC_LITERAL(9, 152, 28), // "propertyEnumAboutToBeRemoved"
QT_MOC_LITERAL(10, 181, 19), // "propertyEnumChanged"
QT_MOC_LITERAL(11, 201, 13), // "PropertyEnum*"
QT_MOC_LITERAL(12, 215, 2), // "pe"
QT_MOC_LITERAL(13, 218, 18), // "definitionSelected"
QT_MOC_LITERAL(14, 237, 13), // "addDefinition"
QT_MOC_LITERAL(15, 251, 16), // "updateDefinition"
QT_MOC_LITERAL(16, 268, 16), // "removeDefinition"
QT_MOC_LITERAL(17, 285, 7), // "clearUI"
QT_MOC_LITERAL(18, 293, 12), // "synchButtons"
QT_MOC_LITERAL(19, 306, 9), // "editEnums"
QT_MOC_LITERAL(20, 316, 18) // "currentEnumChanged"

    },
    "PropertyDefinitionsDialog\0"
    "propertyDefinitionAdded\0\0PropertyDef*\0"
    "pd\0index\0propertyDefinitionAboutToBeRemoved\0"
    "propertyDefinitionChanged\0propertyEnumAdded\0"
    "propertyEnumAboutToBeRemoved\0"
    "propertyEnumChanged\0PropertyEnum*\0pe\0"
    "definitionSelected\0addDefinition\0"
    "updateDefinition\0removeDefinition\0"
    "clearUI\0synchButtons\0editEnums\0"
    "currentEnumChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertyDefinitionsDialog[] = {

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
       1,    2,   84,    2, 0x08 /* Private */,
       6,    1,   89,    2, 0x08 /* Private */,
       7,    1,   92,    2, 0x08 /* Private */,
       8,    1,   95,    2, 0x08 /* Private */,
       9,    1,   98,    2, 0x08 /* Private */,
      10,    1,  101,    2, 0x08 /* Private */,
      13,    0,  104,    2, 0x08 /* Private */,
      14,    0,  105,    2, 0x08 /* Private */,
      15,    0,  106,    2, 0x08 /* Private */,
      16,    0,  107,    2, 0x08 /* Private */,
      17,    0,  108,    2, 0x08 /* Private */,
      18,    0,  109,    2, 0x08 /* Private */,
      19,    0,  110,    2, 0x08 /* Private */,
      20,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PropertyDefinitionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyDefinitionsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyDefinitionAdded((*reinterpret_cast< PropertyDef*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->propertyDefinitionAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->propertyDefinitionChanged((*reinterpret_cast< PropertyDef*(*)>(_a[1]))); break;
        case 3: _t->propertyEnumAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->propertyEnumAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->propertyEnumChanged((*reinterpret_cast< PropertyEnum*(*)>(_a[1]))); break;
        case 6: _t->definitionSelected(); break;
        case 7: _t->addDefinition(); break;
        case 8: _t->updateDefinition(); break;
        case 9: _t->removeDefinition(); break;
        case 10: _t->clearUI(); break;
        case 11: _t->synchButtons(); break;
        case 12: _t->editEnums(); break;
        case 13: _t->currentEnumChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PropertyDefinitionsDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_PropertyDefinitionsDialog.data,
    qt_meta_data_PropertyDefinitionsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PropertyDefinitionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertyDefinitionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyDefinitionsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PropertyDefinitionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
