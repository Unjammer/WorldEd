/****************************************************************************
** Meta object code from reading C++ file 'basegraphicsview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../basegraphicsview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'basegraphicsview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MiniMap_t {
    QByteArrayData data[8];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MiniMap_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MiniMap_t qt_meta_stringdata_MiniMap = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MiniMap"
QT_MOC_LITERAL(1, 8, 16), // "sceneRectChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 9), // "sceneRect"
QT_MOC_LITERAL(4, 36, 6), // "bigger"
QT_MOC_LITERAL(5, 43, 7), // "smaller"
QT_MOC_LITERAL(6, 51, 12), // "widthChanged"
QT_MOC_LITERAL(7, 64, 5) // "width"

    },
    "MiniMap\0sceneRectChanged\0\0sceneRect\0"
    "bigger\0smaller\0widthChanged\0width"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MiniMap[] = {

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
       1,    1,   34,    2, 0x0a /* Public */,
       4,    0,   37,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    1,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QRectF,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void MiniMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MiniMap *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sceneRectChanged((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 1: _t->bigger(); break;
        case 2: _t->smaller(); break;
        case 3: _t->widthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MiniMap::staticMetaObject = { {
    &QGraphicsView::staticMetaObject,
    qt_meta_stringdata_MiniMap.data,
    qt_meta_data_MiniMap,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MiniMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MiniMap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MiniMap.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int MiniMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_BaseGraphicsView_t {
    QByteArrayData data[10];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BaseGraphicsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BaseGraphicsView_t qt_meta_stringdata_BaseGraphicsView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "BaseGraphicsView"
QT_MOC_LITERAL(1, 17, 27), // "statusBarCoordinatesChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 1), // "x"
QT_MOC_LITERAL(4, 48, 1), // "y"
QT_MOC_LITERAL(5, 50, 11), // "adjustScale"
QT_MOC_LITERAL(6, 62, 5), // "scale"
QT_MOC_LITERAL(7, 68, 12), // "setUseOpenGL"
QT_MOC_LITERAL(8, 81, 9), // "useOpenGL"
QT_MOC_LITERAL(9, 91, 17) // "autoScrollTimeout"

    },
    "BaseGraphicsView\0statusBarCoordinatesChanged\0"
    "\0x\0y\0adjustScale\0scale\0setUseOpenGL\0"
    "useOpenGL\0autoScrollTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaseGraphicsView[] = {

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
       1,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   39,    2, 0x0a /* Public */,
       7,    1,   42,    2, 0x08 /* Private */,
       9,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,

       0        // eod
};

void BaseGraphicsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BaseGraphicsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusBarCoordinatesChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->adjustScale((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->setUseOpenGL((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->autoScrollTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BaseGraphicsView::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseGraphicsView::statusBarCoordinatesChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BaseGraphicsView::staticMetaObject = { {
    &QGraphicsView::staticMetaObject,
    qt_meta_stringdata_BaseGraphicsView.data,
    qt_meta_data_BaseGraphicsView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BaseGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaseGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BaseGraphicsView.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int BaseGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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
void BaseGraphicsView::statusBarCoordinatesChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
