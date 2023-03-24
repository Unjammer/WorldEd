/****************************************************************************
** Meta object code from reading C++ file 'lotsdock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../lotsdock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lotsdock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LotsDock_t {
    QByteArrayData data[8];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LotsDock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LotsDock_t qt_meta_stringdata_LotsDock = {
    {
QT_MOC_LITERAL(0, 0, 8), // "LotsDock"
QT_MOC_LITERAL(1, 9, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "itemClicked"
QT_MOC_LITERAL(4, 39, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 51, 5), // "index"
QT_MOC_LITERAL(6, 57, 17), // "itemDoubleClicked"
QT_MOC_LITERAL(7, 75, 9) // "trashItem"

    },
    "LotsDock\0selectionChanged\0\0itemClicked\0"
    "QModelIndex\0index\0itemDoubleClicked\0"
    "trashItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LotsDock[] = {

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
       6,    1,   38,    2, 0x08 /* Private */,
       7,    1,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void LotsDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LotsDock *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->itemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->itemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->trashItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LotsDock::staticMetaObject = { {
    &QDockWidget::staticMetaObject,
    qt_meta_stringdata_LotsDock.data,
    qt_meta_data_LotsDock,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LotsDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LotsDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LotsDock.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int LotsDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_LotsView_t {
    QByteArrayData data[8];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LotsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LotsView_t qt_meta_stringdata_LotsView = {
    {
QT_MOC_LITERAL(0, 0, 8), // "LotsView"
QT_MOC_LITERAL(1, 9, 9), // "trashItem"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 32, 5), // "index"
QT_MOC_LITERAL(5, 38, 20), // "selectedCellsChanged"
QT_MOC_LITERAL(6, 59, 19), // "selectedLotsChanged"
QT_MOC_LITERAL(7, 79, 12) // "modelSynched"

    },
    "LotsView\0trashItem\0\0QModelIndex\0index\0"
    "selectedCellsChanged\0selectedLotsChanged\0"
    "modelSynched"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LotsView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   37,    2, 0x08 /* Private */,
       6,    0,   38,    2, 0x08 /* Private */,
       7,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LotsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LotsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->trashItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->selectedCellsChanged(); break;
        case 2: _t->selectedLotsChanged(); break;
        case 3: _t->modelSynched(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LotsView::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LotsView::trashItem)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LotsView::staticMetaObject = { {
    &QTreeView::staticMetaObject,
    qt_meta_stringdata_LotsView.data,
    qt_meta_data_LotsView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LotsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LotsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LotsView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int LotsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void LotsView::trashItem(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_LotsModel_t {
    QByteArrayData data[16];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LotsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LotsModel_t qt_meta_stringdata_LotsModel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LotsModel"
QT_MOC_LITERAL(1, 10, 7), // "synched"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 12), // "cellLotAdded"
QT_MOC_LITERAL(4, 32, 10), // "WorldCell*"
QT_MOC_LITERAL(5, 43, 4), // "cell"
QT_MOC_LITERAL(6, 48, 5), // "index"
QT_MOC_LITERAL(7, 54, 23), // "cellLotAboutToBeRemoved"
QT_MOC_LITERAL(8, 78, 16), // "cellLotReordered"
QT_MOC_LITERAL(9, 95, 13), // "WorldCellLot*"
QT_MOC_LITERAL(10, 109, 3), // "lot"
QT_MOC_LITERAL(11, 113, 25), // "cellContentsAboutToChange"
QT_MOC_LITERAL(12, 139, 19), // "cellContentsChanged"
QT_MOC_LITERAL(13, 159, 15), // "lotLevelChanged"
QT_MOC_LITERAL(14, 175, 15), // "layerGroupAdded"
QT_MOC_LITERAL(15, 191, 5) // "level"

    },
    "LotsModel\0synched\0\0cellLotAdded\0"
    "WorldCell*\0cell\0index\0cellLotAboutToBeRemoved\0"
    "cellLotReordered\0WorldCellLot*\0lot\0"
    "cellContentsAboutToChange\0cellContentsChanged\0"
    "lotLevelChanged\0layerGroupAdded\0level"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LotsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   55,    2, 0x08 /* Private */,
       7,    2,   60,    2, 0x08 /* Private */,
       8,    1,   65,    2, 0x08 /* Private */,
      11,    1,   68,    2, 0x08 /* Private */,
      12,    1,   71,    2, 0x08 /* Private */,
      13,    1,   74,    2, 0x08 /* Private */,
      14,    1,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,    6,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,    6,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,   15,

       0        // eod
};

void LotsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LotsModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->synched(); break;
        case 1: _t->cellLotAdded((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->cellLotAboutToBeRemoved((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->cellLotReordered((*reinterpret_cast< WorldCellLot*(*)>(_a[1]))); break;
        case 4: _t->cellContentsAboutToChange((*reinterpret_cast< WorldCell*(*)>(_a[1]))); break;
        case 5: _t->cellContentsChanged((*reinterpret_cast< WorldCell*(*)>(_a[1]))); break;
        case 6: _t->lotLevelChanged((*reinterpret_cast< WorldCellLot*(*)>(_a[1]))); break;
        case 7: _t->layerGroupAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LotsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LotsModel::synched)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LotsModel::staticMetaObject = { {
    &QAbstractItemModel::staticMetaObject,
    qt_meta_stringdata_LotsModel.data,
    qt_meta_data_LotsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LotsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LotsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LotsModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int LotsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void LotsModel::synched()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
