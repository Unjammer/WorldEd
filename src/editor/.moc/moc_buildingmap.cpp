/****************************************************************************
** Meta object code from reading C++ file 'buildingmap.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BuildingEditor/buildingmap.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buildingmap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BuildingEditor__BuildingMap_t {
    QByteArrayData data[9];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BuildingEditor__BuildingMap_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BuildingEditor__BuildingMap_t qt_meta_stringdata_BuildingEditor__BuildingMap = {
    {
QT_MOC_LITERAL(0, 0, 27), // "BuildingEditor::BuildingMap"
QT_MOC_LITERAL(1, 28, 21), // "aboutToRecreateLayers"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 15), // "layersRecreated"
QT_MOC_LITERAL(4, 67, 10), // "mapResized"
QT_MOC_LITERAL(5, 78, 13), // "layersUpdated"
QT_MOC_LITERAL(6, 92, 5), // "level"
QT_MOC_LITERAL(7, 98, 3), // "rgn"
QT_MOC_LITERAL(8, 102, 13) // "handlePending"

    },
    "BuildingEditor::BuildingMap\0"
    "aboutToRecreateLayers\0\0layersRecreated\0"
    "mapResized\0layersUpdated\0level\0rgn\0"
    "handlePending"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BuildingEditor__BuildingMap[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    2,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QRegion,    6,    7,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void BuildingEditor::BuildingMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BuildingMap *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutToRecreateLayers(); break;
        case 1: _t->layersRecreated(); break;
        case 2: _t->mapResized(); break;
        case 3: _t->layersUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QRegion(*)>(_a[2]))); break;
        case 4: _t->handlePending(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BuildingMap::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuildingMap::aboutToRecreateLayers)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BuildingMap::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuildingMap::layersRecreated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BuildingMap::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuildingMap::mapResized)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BuildingMap::*)(int , const QRegion & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuildingMap::layersUpdated)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BuildingEditor::BuildingMap::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_BuildingEditor__BuildingMap.data,
    qt_meta_data_BuildingEditor__BuildingMap,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BuildingEditor::BuildingMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BuildingEditor::BuildingMap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BuildingEditor__BuildingMap.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BuildingEditor::BuildingMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void BuildingEditor::BuildingMap::aboutToRecreateLayers()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BuildingEditor::BuildingMap::layersRecreated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BuildingEditor::BuildingMap::mapResized()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void BuildingEditor::BuildingMap::layersUpdated(int _t1, const QRegion & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
