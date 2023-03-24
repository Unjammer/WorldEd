/****************************************************************************
** Meta object code from reading C++ file 'spawntooldialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../spawntooldialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spawntooldialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SpawnToolDialog_t {
    QByteArrayData data[19];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpawnToolDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpawnToolDialog_t qt_meta_stringdata_SpawnToolDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SpawnToolDialog"
QT_MOC_LITERAL(1, 16, 22), // "selectedObjectsChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 28), // "propertyEnumAboutToBeRemoved"
QT_MOC_LITERAL(4, 69, 5), // "index"
QT_MOC_LITERAL(5, 75, 26), // "propertyEnumChoicesChanged"
QT_MOC_LITERAL(6, 102, 13), // "PropertyEnum*"
QT_MOC_LITERAL(7, 116, 2), // "pe"
QT_MOC_LITERAL(8, 119, 20), // "checkProfessionsEnum"
QT_MOC_LITERAL(9, 140, 17), // "propertiesChanged"
QT_MOC_LITERAL(10, 158, 15), // "PropertyHolder*"
QT_MOC_LITERAL(11, 174, 2), // "ph"
QT_MOC_LITERAL(12, 177, 7), // "addItem"
QT_MOC_LITERAL(13, 185, 10), // "removeItem"
QT_MOC_LITERAL(14, 196, 11), // "itemChanged"
QT_MOC_LITERAL(15, 208, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(16, 225, 4), // "item"
QT_MOC_LITERAL(17, 230, 17), // "currentRowChanged"
QT_MOC_LITERAL(18, 248, 3) // "row"

    },
    "SpawnToolDialog\0selectedObjectsChanged\0"
    "\0propertyEnumAboutToBeRemoved\0index\0"
    "propertyEnumChoicesChanged\0PropertyEnum*\0"
    "pe\0checkProfessionsEnum\0propertiesChanged\0"
    "PropertyHolder*\0ph\0addItem\0removeItem\0"
    "itemChanged\0QListWidgetItem*\0item\0"
    "currentRowChanged\0row"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpawnToolDialog[] = {

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
       3,    1,   60,    2, 0x08 /* Private */,
       5,    1,   63,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    1,   67,    2, 0x08 /* Private */,
      12,    0,   70,    2, 0x08 /* Private */,
      13,    0,   71,    2, 0x08 /* Private */,
      14,    1,   72,    2, 0x08 /* Private */,
      17,    1,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::Int,   18,

       0        // eod
};

void SpawnToolDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SpawnToolDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedObjectsChanged(); break;
        case 1: _t->propertyEnumAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->propertyEnumChoicesChanged((*reinterpret_cast< PropertyEnum*(*)>(_a[1]))); break;
        case 3: _t->checkProfessionsEnum(); break;
        case 4: _t->propertiesChanged((*reinterpret_cast< PropertyHolder*(*)>(_a[1]))); break;
        case 5: _t->addItem(); break;
        case 6: _t->removeItem(); break;
        case 7: _t->itemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SpawnToolDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_SpawnToolDialog.data,
    qt_meta_data_SpawnToolDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SpawnToolDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpawnToolDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpawnToolDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Singleton<SpawnToolDialog>"))
        return static_cast< Singleton<SpawnToolDialog>*>(this);
    return QDialog::qt_metacast(_clname);
}

int SpawnToolDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
