/****************************************************************************
** Meta object code from reading C++ file 'templatesdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../templatesdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'templatesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TemplatesDialog_t {
    QByteArrayData data[17];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TemplatesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TemplatesDialog_t qt_meta_stringdata_TemplatesDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TemplatesDialog"
QT_MOC_LITERAL(1, 16, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 9), // "closeItem"
QT_MOC_LITERAL(4, 44, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 56, 5), // "index"
QT_MOC_LITERAL(6, 62, 13), // "clearTemplate"
QT_MOC_LITERAL(7, 76, 11), // "addTemplate"
QT_MOC_LITERAL(8, 88, 22), // "updateSelectedTemplate"
QT_MOC_LITERAL(9, 111, 22), // "removeSelectedTemplate"
QT_MOC_LITERAL(10, 134, 18), // "displayDescription"
QT_MOC_LITERAL(11, 153, 12), // "synchButtons"
QT_MOC_LITERAL(12, 166, 13), // "templateAdded"
QT_MOC_LITERAL(13, 180, 24), // "templateAboutToBeRemoved"
QT_MOC_LITERAL(14, 205, 15), // "templateChanged"
QT_MOC_LITERAL(15, 221, 17), // "PropertyTemplate*"
QT_MOC_LITERAL(16, 239, 2) // "pt"

    },
    "TemplatesDialog\0selectionChanged\0\0"
    "closeItem\0QModelIndex\0index\0clearTemplate\0"
    "addTemplate\0updateSelectedTemplate\0"
    "removeSelectedTemplate\0displayDescription\0"
    "synchButtons\0templateAdded\0"
    "templateAboutToBeRemoved\0templateChanged\0"
    "PropertyTemplate*\0pt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TemplatesDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    1,   70,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    1,   79,    2, 0x08 /* Private */,
      13,    1,   82,    2, 0x08 /* Private */,
      14,    1,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void TemplatesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TemplatesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->closeItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->clearTemplate(); break;
        case 3: _t->addTemplate(); break;
        case 4: _t->updateSelectedTemplate(); break;
        case 5: _t->removeSelectedTemplate(); break;
        case 6: _t->displayDescription(); break;
        case 7: _t->synchButtons(); break;
        case 8: _t->templateAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->templateAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->templateChanged((*reinterpret_cast< PropertyTemplate*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TemplatesDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_TemplatesDialog.data,
    qt_meta_data_TemplatesDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TemplatesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TemplatesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TemplatesDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TemplatesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
