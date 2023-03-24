/****************************************************************************
** Meta object code from reading C++ file 'ingamemapdock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../InGameMap/ingamemapdock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ingamemapdock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InGameMapDock_t {
    QByteArrayData data[9];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InGameMapDock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InGameMapDock_t qt_meta_stringdata_InGameMapDock = {
    {
QT_MOC_LITERAL(0, 0, 13), // "InGameMapDock"
QT_MOC_LITERAL(1, 14, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "itemClicked"
QT_MOC_LITERAL(4, 44, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 56, 5), // "index"
QT_MOC_LITERAL(6, 62, 17), // "itemDoubleClicked"
QT_MOC_LITERAL(7, 80, 9), // "trashItem"
QT_MOC_LITERAL(8, 90, 23) // "selectedFeaturesChanged"

    },
    "InGameMapDock\0selectionChanged\0\0"
    "itemClicked\0QModelIndex\0index\0"
    "itemDoubleClicked\0trashItem\0"
    "selectedFeaturesChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InGameMapDock[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,
       7,    1,   46,    2, 0x08 /* Private */,
       8,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

       0        // eod
};

void InGameMapDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InGameMapDock *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->itemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->itemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->trashItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->selectedFeaturesChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InGameMapDock::staticMetaObject = { {
    &QDockWidget::staticMetaObject,
    qt_meta_stringdata_InGameMapDock.data,
    qt_meta_data_InGameMapDock,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InGameMapDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InGameMapDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InGameMapDock.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int InGameMapDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_InGameMapView_t {
    QByteArrayData data[8];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InGameMapView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InGameMapView_t qt_meta_stringdata_InGameMapView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "InGameMapView"
QT_MOC_LITERAL(1, 14, 9), // "trashItem"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 37, 5), // "index"
QT_MOC_LITERAL(5, 43, 20), // "selectedCellsChanged"
QT_MOC_LITERAL(6, 64, 23), // "selectedFeaturesChanged"
QT_MOC_LITERAL(7, 88, 12) // "modelSynched"

    },
    "InGameMapView\0trashItem\0\0QModelIndex\0"
    "index\0selectedCellsChanged\0"
    "selectedFeaturesChanged\0modelSynched"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InGameMapView[] = {

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

void InGameMapView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InGameMapView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->trashItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->selectedCellsChanged(); break;
        case 2: _t->selectedFeaturesChanged(); break;
        case 3: _t->modelSynched(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InGameMapView::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InGameMapView::trashItem)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InGameMapView::staticMetaObject = { {
    &QTreeView::staticMetaObject,
    qt_meta_stringdata_InGameMapView.data,
    qt_meta_data_InGameMapView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InGameMapView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InGameMapView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InGameMapView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int InGameMapView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void InGameMapView::trashItem(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_InGameMapModel_t {
    QByteArrayData data[12];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InGameMapModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InGameMapModel_t qt_meta_stringdata_InGameMapModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "InGameMapModel"
QT_MOC_LITERAL(1, 15, 7), // "synched"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "featureAdded"
QT_MOC_LITERAL(4, 37, 10), // "WorldCell*"
QT_MOC_LITERAL(5, 48, 4), // "cell"
QT_MOC_LITERAL(6, 53, 5), // "index"
QT_MOC_LITERAL(7, 59, 23), // "featureAboutToBeRemoved"
QT_MOC_LITERAL(8, 83, 17), // "propertiesChanged"
QT_MOC_LITERAL(9, 101, 12), // "featureIndex"
QT_MOC_LITERAL(10, 114, 25), // "cellContentsAboutToChange"
QT_MOC_LITERAL(11, 140, 19) // "cellContentsChanged"

    },
    "InGameMapModel\0synched\0\0featureAdded\0"
    "WorldCell*\0cell\0index\0featureAboutToBeRemoved\0"
    "propertiesChanged\0featureIndex\0"
    "cellContentsAboutToChange\0cellContentsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InGameMapModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   45,    2, 0x08 /* Private */,
       7,    2,   50,    2, 0x08 /* Private */,
       8,    2,   55,    2, 0x08 /* Private */,
      10,    1,   60,    2, 0x08 /* Private */,
      11,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,    6,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,    6,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,    9,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void InGameMapModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InGameMapModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->synched(); break;
        case 1: _t->featureAdded((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->featureAboutToBeRemoved((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->propertiesChanged((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->cellContentsAboutToChange((*reinterpret_cast< WorldCell*(*)>(_a[1]))); break;
        case 5: _t->cellContentsChanged((*reinterpret_cast< WorldCell*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InGameMapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InGameMapModel::synched)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InGameMapModel::staticMetaObject = { {
    &QAbstractItemModel::staticMetaObject,
    qt_meta_stringdata_InGameMapModel.data,
    qt_meta_data_InGameMapModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InGameMapModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InGameMapModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InGameMapModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int InGameMapModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void InGameMapModel::synched()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
