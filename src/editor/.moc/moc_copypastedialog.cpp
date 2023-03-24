/****************************************************************************
** Meta object code from reading C++ file 'copypastedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../copypastedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'copypastedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CopyPasteDialog_t {
    QByteArrayData data[14];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CopyPasteDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CopyPasteDialog_t qt_meta_stringdata_CopyPasteDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CopyPasteDialog"
QT_MOC_LITERAL(1, 16, 21), // "worldSelectionChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "index"
QT_MOC_LITERAL(4, 45, 16), // "worldItemChanged"
QT_MOC_LITERAL(5, 62, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(6, 79, 8), // "viewItem"
QT_MOC_LITERAL(7, 88, 6), // "column"
QT_MOC_LITERAL(8, 95, 13), // "worldCheckAll"
QT_MOC_LITERAL(9, 109, 14), // "worldCheckNone"
QT_MOC_LITERAL(10, 124, 19), // "cellCategoryChanged"
QT_MOC_LITERAL(11, 144, 15), // "cellItemChanged"
QT_MOC_LITERAL(12, 160, 12), // "cellCheckAll"
QT_MOC_LITERAL(13, 173, 13) // "cellCheckNone"

    },
    "CopyPasteDialog\0worldSelectionChanged\0"
    "\0index\0worldItemChanged\0QTreeWidgetItem*\0"
    "viewItem\0column\0worldCheckAll\0"
    "worldCheckNone\0cellCategoryChanged\0"
    "cellItemChanged\0cellCheckAll\0cellCheckNone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CopyPasteDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    2,   57,    2, 0x08 /* Private */,
       8,    0,   62,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    1,   64,    2, 0x08 /* Private */,
      11,    2,   67,    2, 0x08 /* Private */,
      12,    0,   72,    2, 0x08 /* Private */,
      13,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CopyPasteDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CopyPasteDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->worldSelectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->worldItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->worldCheckAll(); break;
        case 3: _t->worldCheckNone(); break;
        case 4: _t->cellCategoryChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->cellItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->cellCheckAll(); break;
        case 7: _t->cellCheckNone(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CopyPasteDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_CopyPasteDialog.data,
    qt_meta_data_CopyPasteDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CopyPasteDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CopyPasteDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CopyPasteDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CopyPasteDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
