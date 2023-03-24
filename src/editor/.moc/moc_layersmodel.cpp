/****************************************************************************
** Meta object code from reading C++ file 'layersmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../layersmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layersmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LayersModel_t {
    QByteArrayData data[12];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LayersModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LayersModel_t qt_meta_stringdata_LayersModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LayersModel"
QT_MOC_LITERAL(1, 12, 22), // "layerVisibilityChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13), // "Tiled::Layer*"
QT_MOC_LITERAL(4, 50, 5), // "layer"
QT_MOC_LITERAL(5, 56, 15), // "layerGroupAdded"
QT_MOC_LITERAL(6, 72, 5), // "level"
QT_MOC_LITERAL(7, 78, 27), // "layerGroupVisibilityChanged"
QT_MOC_LITERAL(8, 106, 23), // "Tiled::ZTileLayerGroup*"
QT_MOC_LITERAL(9, 130, 10), // "layerGroup"
QT_MOC_LITERAL(10, 141, 24), // "cellMapFileAboutToChange"
QT_MOC_LITERAL(11, 166, 18) // "cellMapFileChanged"

    },
    "LayersModel\0layerVisibilityChanged\0\0"
    "Tiled::Layer*\0layer\0layerGroupAdded\0"
    "level\0layerGroupVisibilityChanged\0"
    "Tiled::ZTileLayerGroup*\0layerGroup\0"
    "cellMapFileAboutToChange\0cellMapFileChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LayersModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,
      10,    0,   48,    2, 0x08 /* Private */,
      11,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LayersModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LayersModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layerVisibilityChanged((*reinterpret_cast< Tiled::Layer*(*)>(_a[1]))); break;
        case 1: _t->layerGroupAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->layerGroupVisibilityChanged((*reinterpret_cast< Tiled::ZTileLayerGroup*(*)>(_a[1]))); break;
        case 3: _t->cellMapFileAboutToChange(); break;
        case 4: _t->cellMapFileChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LayersModel::staticMetaObject = { {
    &QAbstractItemModel::staticMetaObject,
    qt_meta_stringdata_LayersModel.data,
    qt_meta_data_LayersModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LayersModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LayersModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LayersModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int LayersModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
