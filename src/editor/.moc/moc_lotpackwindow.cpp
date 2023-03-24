/****************************************************************************
** Meta object code from reading C++ file 'lotpackwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../lotpackwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lotpackwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LotPackScene_t {
    QByteArrayData data[7];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LotPackScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LotPackScene_t qt_meta_stringdata_LotPackScene = {
    {
QT_MOC_LITERAL(0, 0, 12), // "LotPackScene"
QT_MOC_LITERAL(1, 13, 12), // "showRoomDefs"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "show"
QT_MOC_LITERAL(4, 32, 21), // "highlightCurrentLevel"
QT_MOC_LITERAL(5, 54, 10), // "levelAbove"
QT_MOC_LITERAL(6, 65, 10) // "levelBelow"

    },
    "LotPackScene\0showRoomDefs\0\0show\0"
    "highlightCurrentLevel\0levelAbove\0"
    "levelBelow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LotPackScene[] = {

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
       6,    0,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LotPackScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LotPackScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showRoomDefs((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->highlightCurrentLevel(); break;
        case 2: _t->levelAbove(); break;
        case 3: _t->levelBelow(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LotPackScene::staticMetaObject = { {
    &BaseGraphicsScene::staticMetaObject,
    qt_meta_stringdata_LotPackScene.data,
    qt_meta_data_LotPackScene,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LotPackScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LotPackScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LotPackScene.stringdata0))
        return static_cast<void*>(this);
    return BaseGraphicsScene::qt_metacast(_clname);
}

int LotPackScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseGraphicsScene::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_LotPackView_t {
    QByteArrayData data[5];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LotPackView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LotPackView_t qt_meta_stringdata_LotPackView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LotPackView"
QT_MOC_LITERAL(1, 12, 19), // "tilePositionChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "tilePos"
QT_MOC_LITERAL(4, 41, 8) // "recenter"

    },
    "LotPackView\0tilePositionChanged\0\0"
    "tilePos\0recenter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LotPackView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void LotPackView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LotPackView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tilePositionChanged((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->recenter(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LotPackView::*)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LotPackView::tilePositionChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LotPackView::staticMetaObject = { {
    &BaseGraphicsView::staticMetaObject,
    qt_meta_stringdata_LotPackView.data,
    qt_meta_data_LotPackView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LotPackView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LotPackView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LotPackView.stringdata0))
        return static_cast<void*>(this);
    return BaseGraphicsView::qt_metacast(_clname);
}

int LotPackView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void LotPackView::tilePositionChanged(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_LotPackWindow_t {
    QByteArrayData data[15];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LotPackWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LotPackWindow_t qt_meta_stringdata_LotPackWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LotPackWindow"
QT_MOC_LITERAL(1, 14, 4), // "open"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 10), // "openRecent"
QT_MOC_LITERAL(4, 31, 9), // "directory"
QT_MOC_LITERAL(5, 41, 10), // "closeWorld"
QT_MOC_LITERAL(6, 52, 6), // "zoomIn"
QT_MOC_LITERAL(7, 59, 7), // "zoomOut"
QT_MOC_LITERAL(8, 67, 10), // "zoomNormal"
QT_MOC_LITERAL(9, 78, 10), // "updateZoom"
QT_MOC_LITERAL(10, 89, 14), // "saveScreenshot"
QT_MOC_LITERAL(11, 104, 4), // "path"
QT_MOC_LITERAL(12, 109, 12), // "startMapping"
QT_MOC_LITERAL(13, 122, 19), // "tilePositionChanged"
QT_MOC_LITERAL(14, 142, 7) // "tilePos"

    },
    "LotPackWindow\0open\0\0openRecent\0directory\0"
    "closeWorld\0zoomIn\0zoomOut\0zoomNormal\0"
    "updateZoom\0saveScreenshot\0path\0"
    "startMapping\0tilePositionChanged\0"
    "tilePos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LotPackWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       1,    1,   76,    2, 0x08 /* Private */,
       5,    0,   79,    2, 0x08 /* Private */,
       6,    0,   80,    2, 0x08 /* Private */,
       7,    0,   81,    2, 0x08 /* Private */,
       8,    0,   82,    2, 0x08 /* Private */,
       9,    0,   83,    2, 0x08 /* Private */,
      10,    0,   84,    2, 0x08 /* Private */,
      10,    1,   85,    2, 0x08 /* Private */,
      12,    0,   88,    2, 0x08 /* Private */,
      13,    1,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   14,

       0        // eod
};

void LotPackWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LotPackWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->open(); break;
        case 1: _t->openRecent(); break;
        case 2: _t->open((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->closeWorld(); break;
        case 4: _t->zoomIn(); break;
        case 5: _t->zoomOut(); break;
        case 6: _t->zoomNormal(); break;
        case 7: _t->updateZoom(); break;
        case 8: _t->saveScreenshot(); break;
        case 9: _t->saveScreenshot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->startMapping(); break;
        case 11: _t->tilePositionChanged((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LotPackWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_LotPackWindow.data,
    qt_meta_data_LotPackWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LotPackWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LotPackWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LotPackWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int LotPackWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
