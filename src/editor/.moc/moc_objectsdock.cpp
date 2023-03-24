/****************************************************************************
** Meta object code from reading C++ file 'objectsdock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../objectsdock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'objectsdock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ObjectsDock_t {
    QByteArrayData data[11];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ObjectsDock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ObjectsDock_t qt_meta_stringdata_ObjectsDock = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ObjectsDock"
QT_MOC_LITERAL(1, 12, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "itemClicked"
QT_MOC_LITERAL(4, 42, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 54, 5), // "index"
QT_MOC_LITERAL(6, 60, 17), // "itemDoubleClicked"
QT_MOC_LITERAL(7, 78, 9), // "trashItem"
QT_MOC_LITERAL(8, 88, 22), // "selectedObjectsChanged"
QT_MOC_LITERAL(9, 111, 20), // "polylineWidthChanged"
QT_MOC_LITERAL(10, 132, 5) // "value"

    },
    "ObjectsDock\0selectionChanged\0\0itemClicked\0"
    "QModelIndex\0index\0itemDoubleClicked\0"
    "trashItem\0selectedObjectsChanged\0"
    "polylineWidthChanged\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ObjectsDock[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    1,   45,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       7,    1,   51,    2, 0x08 /* Private */,
       8,    0,   54,    2, 0x08 /* Private */,
       9,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void ObjectsDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ObjectsDock *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->itemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->itemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->trashItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->selectedObjectsChanged(); break;
        case 5: _t->polylineWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ObjectsDock::staticMetaObject = { {
    &QDockWidget::staticMetaObject,
    qt_meta_stringdata_ObjectsDock.data,
    qt_meta_data_ObjectsDock,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ObjectsDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ObjectsDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ObjectsDock.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int ObjectsDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ObjectsView_t {
    QByteArrayData data[13];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ObjectsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ObjectsView_t qt_meta_stringdata_ObjectsView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ObjectsView"
QT_MOC_LITERAL(1, 12, 9), // "trashItem"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 35, 5), // "index"
QT_MOC_LITERAL(5, 41, 12), // "rowsInserted"
QT_MOC_LITERAL(6, 54, 6), // "parent"
QT_MOC_LITERAL(7, 61, 5), // "start"
QT_MOC_LITERAL(8, 67, 3), // "end"
QT_MOC_LITERAL(9, 71, 20), // "selectedCellsChanged"
QT_MOC_LITERAL(10, 92, 22), // "selectedObjectsChanged"
QT_MOC_LITERAL(11, 115, 12), // "modelSynched"
QT_MOC_LITERAL(12, 128, 19) // "closeComboBoxEditor"

    },
    "ObjectsView\0trashItem\0\0QModelIndex\0"
    "index\0rowsInserted\0parent\0start\0end\0"
    "selectedCellsChanged\0selectedObjectsChanged\0"
    "modelSynched\0closeComboBoxEditor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ObjectsView[] = {

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
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    3,   47,    2, 0x08 /* Private */,
       9,    0,   54,    2, 0x08 /* Private */,
      10,    0,   55,    2, 0x08 /* Private */,
      11,    0,   56,    2, 0x08 /* Private */,
      12,    0,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ObjectsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ObjectsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->trashItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->selectedCellsChanged(); break;
        case 3: _t->selectedObjectsChanged(); break;
        case 4: _t->modelSynched(); break;
        case 5: _t->closeComboBoxEditor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ObjectsView::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ObjectsView::trashItem)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ObjectsView::staticMetaObject = { {
    &QTreeView::staticMetaObject,
    qt_meta_stringdata_ObjectsView.data,
    qt_meta_data_ObjectsView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ObjectsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ObjectsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ObjectsView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int ObjectsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
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
void ObjectsView::trashItem(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ObjectsViewDelegate_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ObjectsViewDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ObjectsViewDelegate_t qt_meta_stringdata_ObjectsViewDelegate = {
    {
QT_MOC_LITERAL(0, 0, 19) // "ObjectsViewDelegate"

    },
    "ObjectsViewDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ObjectsViewDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ObjectsViewDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ObjectsViewDelegate::staticMetaObject = { {
    &QStyledItemDelegate::staticMetaObject,
    qt_meta_stringdata_ObjectsViewDelegate.data,
    qt_meta_data_ObjectsViewDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ObjectsViewDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ObjectsViewDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ObjectsViewDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int ObjectsViewDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ObjectsModel_t {
    QByteArrayData data[29];
    char stringdata0[466];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ObjectsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ObjectsModel_t qt_meta_stringdata_ObjectsModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ObjectsModel"
QT_MOC_LITERAL(1, 13, 7), // "synched"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 21), // "objectTypeNameChanged"
QT_MOC_LITERAL(4, 44, 11), // "ObjectType*"
QT_MOC_LITERAL(5, 56, 7), // "objType"
QT_MOC_LITERAL(6, 64, 16), // "objectGroupAdded"
QT_MOC_LITERAL(7, 81, 5), // "index"
QT_MOC_LITERAL(8, 87, 27), // "objectGroupAboutToBeRemoved"
QT_MOC_LITERAL(9, 115, 22), // "objectGroupNameChanged"
QT_MOC_LITERAL(10, 138, 17), // "WorldObjectGroup*"
QT_MOC_LITERAL(11, 156, 2), // "og"
QT_MOC_LITERAL(12, 159, 20), // "objectGroupReordered"
QT_MOC_LITERAL(13, 180, 25), // "cellContentsAboutToChange"
QT_MOC_LITERAL(14, 206, 10), // "WorldCell*"
QT_MOC_LITERAL(15, 217, 4), // "cell"
QT_MOC_LITERAL(16, 222, 19), // "cellContentsChanged"
QT_MOC_LITERAL(17, 242, 15), // "cellObjectAdded"
QT_MOC_LITERAL(18, 258, 26), // "cellObjectAboutToBeRemoved"
QT_MOC_LITERAL(19, 285, 21), // "cellObjectXXXXChanged"
QT_MOC_LITERAL(20, 307, 16), // "WorldCellObject*"
QT_MOC_LITERAL(21, 324, 3), // "obj"
QT_MOC_LITERAL(22, 328, 28), // "cellObjectGroupAboutToChange"
QT_MOC_LITERAL(23, 357, 22), // "cellObjectGroupChanged"
QT_MOC_LITERAL(24, 380, 24), // "objectLevelAboutToChange"
QT_MOC_LITERAL(25, 405, 18), // "objectLevelChanged"
QT_MOC_LITERAL(26, 424, 19), // "cellObjectReordered"
QT_MOC_LITERAL(27, 444, 15), // "layerGroupAdded"
QT_MOC_LITERAL(28, 460, 5) // "level"

    },
    "ObjectsModel\0synched\0\0objectTypeNameChanged\0"
    "ObjectType*\0objType\0objectGroupAdded\0"
    "index\0objectGroupAboutToBeRemoved\0"
    "objectGroupNameChanged\0WorldObjectGroup*\0"
    "og\0objectGroupReordered\0"
    "cellContentsAboutToChange\0WorldCell*\0"
    "cell\0cellContentsChanged\0cellObjectAdded\0"
    "cellObjectAboutToBeRemoved\0"
    "cellObjectXXXXChanged\0WorldCellObject*\0"
    "obj\0cellObjectGroupAboutToChange\0"
    "cellObjectGroupChanged\0objectLevelAboutToChange\0"
    "objectLevelChanged\0cellObjectReordered\0"
    "layerGroupAdded\0level"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ObjectsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  100,    2, 0x08 /* Private */,
       6,    1,  103,    2, 0x08 /* Private */,
       8,    1,  106,    2, 0x08 /* Private */,
       9,    1,  109,    2, 0x08 /* Private */,
      12,    1,  112,    2, 0x08 /* Private */,
      13,    1,  115,    2, 0x08 /* Private */,
      16,    1,  118,    2, 0x08 /* Private */,
      17,    2,  121,    2, 0x08 /* Private */,
      18,    2,  126,    2, 0x08 /* Private */,
      19,    1,  131,    2, 0x08 /* Private */,
      22,    1,  134,    2, 0x08 /* Private */,
      23,    1,  137,    2, 0x08 /* Private */,
      24,    1,  140,    2, 0x08 /* Private */,
      25,    1,  143,    2, 0x08 /* Private */,
      26,    1,  146,    2, 0x08 /* Private */,
      27,    1,  149,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,   15,    7,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,   15,    7,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::Int,   28,

       0        // eod
};

void ObjectsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ObjectsModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->synched(); break;
        case 1: _t->objectTypeNameChanged((*reinterpret_cast< ObjectType*(*)>(_a[1]))); break;
        case 2: _t->objectGroupAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->objectGroupAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->objectGroupNameChanged((*reinterpret_cast< WorldObjectGroup*(*)>(_a[1]))); break;
        case 5: _t->objectGroupReordered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->cellContentsAboutToChange((*reinterpret_cast< WorldCell*(*)>(_a[1]))); break;
        case 7: _t->cellContentsChanged((*reinterpret_cast< WorldCell*(*)>(_a[1]))); break;
        case 8: _t->cellObjectAdded((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->cellObjectAboutToBeRemoved((*reinterpret_cast< WorldCell*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->cellObjectXXXXChanged((*reinterpret_cast< WorldCellObject*(*)>(_a[1]))); break;
        case 11: _t->cellObjectGroupAboutToChange((*reinterpret_cast< WorldCellObject*(*)>(_a[1]))); break;
        case 12: _t->cellObjectGroupChanged((*reinterpret_cast< WorldCellObject*(*)>(_a[1]))); break;
        case 13: _t->objectLevelAboutToChange((*reinterpret_cast< WorldCellObject*(*)>(_a[1]))); break;
        case 14: _t->objectLevelChanged((*reinterpret_cast< WorldCellObject*(*)>(_a[1]))); break;
        case 15: _t->cellObjectReordered((*reinterpret_cast< WorldCellObject*(*)>(_a[1]))); break;
        case 16: _t->layerGroupAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ObjectsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ObjectsModel::synched)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ObjectsModel::staticMetaObject = { {
    &QAbstractItemModel::staticMetaObject,
    qt_meta_stringdata_ObjectsModel.data,
    qt_meta_data_ObjectsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ObjectsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ObjectsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ObjectsModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int ObjectsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void ObjectsModel::synched()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
