/****************************************************************************
** Meta object code from reading C++ file 'searchdock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../searchdock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchdock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SearchDock_t {
    QByteArrayData data[16];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchDock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchDock_t qt_meta_stringdata_SearchDock = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SearchDock"
QT_MOC_LITERAL(1, 11, 15), // "comboActivated1"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "index"
QT_MOC_LITERAL(4, 34, 15), // "comboActivated2"
QT_MOC_LITERAL(5, 50, 16), // "searchObjectType"
QT_MOC_LITERAL(6, 67, 17), // "searchLotFileName"
QT_MOC_LITERAL(7, 85, 7), // "setList"
QT_MOC_LITERAL(8, 93, 14), // "SearchResults*"
QT_MOC_LITERAL(9, 108, 7), // "results"
QT_MOC_LITERAL(10, 116, 20), // "listSelectionChanged"
QT_MOC_LITERAL(11, 137, 13), // "listActivated"
QT_MOC_LITERAL(12, 151, 11), // "QModelIndex"
QT_MOC_LITERAL(13, 163, 20), // "documentAboutToClose"
QT_MOC_LITERAL(14, 184, 9), // "Document*"
QT_MOC_LITERAL(15, 194, 3) // "doc"

    },
    "SearchDock\0comboActivated1\0\0index\0"
    "comboActivated2\0searchObjectType\0"
    "searchLotFileName\0setList\0SearchResults*\0"
    "results\0listSelectionChanged\0listActivated\0"
    "QModelIndex\0documentAboutToClose\0"
    "Document*\0doc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchDock[] = {

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
       4,    1,   57,    2, 0x08 /* Private */,
       5,    0,   60,    2, 0x08 /* Private */,
       6,    0,   61,    2, 0x08 /* Private */,
       7,    1,   62,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,
      11,    1,   66,    2, 0x08 /* Private */,
      13,    2,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 14,    3,   15,

       0        // eod
};

void SearchDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SearchDock *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->comboActivated1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->comboActivated2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->searchObjectType(); break;
        case 3: _t->searchLotFileName(); break;
        case 4: _t->setList((*reinterpret_cast< SearchResults*(*)>(_a[1]))); break;
        case 5: _t->listSelectionChanged(); break;
        case 6: _t->listActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->documentAboutToClose((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Document*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SearchDock::staticMetaObject = { {
    &QDockWidget::staticMetaObject,
    qt_meta_stringdata_SearchDock.data,
    qt_meta_data_SearchDock,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SearchDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchDock.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int SearchDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
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
