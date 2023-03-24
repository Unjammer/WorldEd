/****************************************************************************
** Meta object code from reading C++ file 'layersdock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../layersdock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layersdock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LayersDock_t {
    QByteArrayData data[12];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LayersDock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LayersDock_t qt_meta_stringdata_LayersDock = {
    {
QT_MOC_LITERAL(0, 0, 10), // "LayersDock"
QT_MOC_LITERAL(1, 11, 20), // "documentAboutToClose"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "index"
QT_MOC_LITERAL(4, 39, 9), // "Document*"
QT_MOC_LITERAL(5, 49, 3), // "doc"
QT_MOC_LITERAL(6, 53, 24), // "cellMapFileAboutToChange"
QT_MOC_LITERAL(7, 78, 10), // "WorldCell*"
QT_MOC_LITERAL(8, 89, 4), // "cell"
QT_MOC_LITERAL(9, 94, 25), // "opacitySliderValueChanged"
QT_MOC_LITERAL(10, 120, 5), // "value"
QT_MOC_LITERAL(11, 126, 19) // "updateOpacitySlider"

    },
    "LayersDock\0documentAboutToClose\0\0index\0"
    "Document*\0doc\0cellMapFileAboutToChange\0"
    "WorldCell*\0cell\0opacitySliderValueChanged\0"
    "value\0updateOpacitySlider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LayersDock[] = {

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
       1,    2,   34,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,
       9,    1,   42,    2, 0x08 /* Private */,
      11,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,

       0        // eod
};

void LayersDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LayersDock *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->documentAboutToClose((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Document*(*)>(_a[2]))); break;
        case 1: _t->cellMapFileAboutToChange((*reinterpret_cast< WorldCell*(*)>(_a[1]))); break;
        case 2: _t->opacitySliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateOpacitySlider(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LayersDock::staticMetaObject = { {
    &QDockWidget::staticMetaObject,
    qt_meta_stringdata_LayersDock.data,
    qt_meta_data_LayersDock,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LayersDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LayersDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LayersDock.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int LayersDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_LayersView_t {
    QByteArrayData data[10];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LayersView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LayersView_t qt_meta_stringdata_LayersView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "LayersView"
QT_MOC_LITERAL(1, 11, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "QItemSelection"
QT_MOC_LITERAL(4, 44, 8), // "selected"
QT_MOC_LITERAL(5, 53, 10), // "deselected"
QT_MOC_LITERAL(6, 64, 31), // "currentLevelOrLayerIndexChanged"
QT_MOC_LITERAL(7, 96, 5), // "index"
QT_MOC_LITERAL(8, 102, 11), // "onActivated"
QT_MOC_LITERAL(9, 114, 11) // "QModelIndex"

    },
    "LayersView\0selectionChanged\0\0"
    "QItemSelection\0selected\0deselected\0"
    "currentLevelOrLayerIndexChanged\0index\0"
    "onActivated\0QModelIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LayersView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x09 /* Protected */,
       6,    1,   34,    2, 0x08 /* Private */,
       8,    1,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 9,    7,

       0        // eod
};

void LayersView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LayersView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 1: _t->currentLevelOrLayerIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LayersView::staticMetaObject = { {
    &QTreeView::staticMetaObject,
    qt_meta_stringdata_LayersView.data,
    qt_meta_data_LayersView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LayersView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LayersView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LayersView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int LayersView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
