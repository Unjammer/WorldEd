/****************************************************************************
** Meta object code from reading C++ file 'preferences.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../preferences.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preferences.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Preferences_t {
    QByteArrayData data[66];
    char stringdata0[1134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Preferences_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Preferences_t qt_meta_stringdata_Preferences = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Preferences"
QT_MOC_LITERAL(1, 12, 17), // "snapToGridChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 10), // "snapToGrid"
QT_MOC_LITERAL(4, 42, 22), // "showCoordinatesChanged"
QT_MOC_LITERAL(5, 65, 8), // "showGrid"
QT_MOC_LITERAL(6, 74, 20), // "showWorldGridChanged"
QT_MOC_LITERAL(7, 95, 19), // "showCellGridChanged"
QT_MOC_LITERAL(8, 115, 16), // "gridColorChanged"
QT_MOC_LITERAL(9, 132, 9), // "gridColor"
QT_MOC_LITERAL(10, 142, 16), // "useOpenGLChanged"
QT_MOC_LITERAL(11, 159, 9), // "useOpenGL"
QT_MOC_LITERAL(12, 169, 22), // "worldThumbnailsChanged"
QT_MOC_LITERAL(13, 192, 6), // "thumbs"
QT_MOC_LITERAL(14, 199, 18), // "showObjectsChanged"
QT_MOC_LITERAL(15, 218, 4), // "show"
QT_MOC_LITERAL(16, 223, 22), // "showObjectNamesChanged"
QT_MOC_LITERAL(17, 246, 15), // "showBMPsChanged"
QT_MOC_LITERAL(18, 262, 27), // "showZombieSpawnImageChanged"
QT_MOC_LITERAL(19, 290, 30), // "zombieSpawnImageOpacityChanged"
QT_MOC_LITERAL(20, 321, 7), // "opacity"
QT_MOC_LITERAL(21, 329, 27), // "showZonesInWorldViewChanged"
QT_MOC_LITERAL(22, 357, 32), // "showZonesWorldInWorldViewChanged"
QT_MOC_LITERAL(23, 390, 18), // "gridOpacityChanged"
QT_MOC_LITERAL(24, 409, 10), // "newOpacity"
QT_MOC_LITERAL(25, 420, 16), // "gridWidthChanged"
QT_MOC_LITERAL(26, 437, 8), // "newWidth"
QT_MOC_LITERAL(27, 446, 17), // "thumbWidthChanged"
QT_MOC_LITERAL(28, 464, 18), // "showMiniMapChanged"
QT_MOC_LITERAL(29, 483, 19), // "miniMapWidthChanged"
QT_MOC_LITERAL(30, 503, 5), // "width"
QT_MOC_LITERAL(31, 509, 28), // "highlightCurrentLevelChanged"
QT_MOC_LITERAL(32, 538, 9), // "highlight"
QT_MOC_LITERAL(33, 548, 20), // "mapsDirectoryChanged"
QT_MOC_LITERAL(34, 569, 21), // "tilesDirectoryChanged"
QT_MOC_LITERAL(35, 591, 23), // "showAdjacentMapsChanged"
QT_MOC_LITERAL(36, 615, 20), // "LoadLastActivProject"
QT_MOC_LITERAL(37, 636, 15), // "enableDarkTheme"
QT_MOC_LITERAL(38, 652, 13), // "HsThresholdHP"
QT_MOC_LITERAL(39, 666, 9), // "threshold"
QT_MOC_LITERAL(40, 676, 8), // "HsSizeHP"
QT_MOC_LITERAL(41, 685, 4), // "size"
QT_MOC_LITERAL(42, 690, 13), // "HsThresholdHT"
QT_MOC_LITERAL(43, 704, 8), // "HsSizeHT"
QT_MOC_LITERAL(44, 713, 12), // "HsThresholdR"
QT_MOC_LITERAL(45, 726, 7), // "HsSizeR"
QT_MOC_LITERAL(46, 734, 32), // "highlightRoomUnderPointerChanged"
QT_MOC_LITERAL(47, 767, 22), // "showOtherWorldsChanged"
QT_MOC_LITERAL(48, 790, 13), // "setSnapToGrid"
QT_MOC_LITERAL(49, 804, 18), // "setShowCoordinates"
QT_MOC_LITERAL(50, 823, 10), // "showCoords"
QT_MOC_LITERAL(51, 834, 16), // "setShowWorldGrid"
QT_MOC_LITERAL(52, 851, 15), // "setShowCellGrid"
QT_MOC_LITERAL(53, 867, 12), // "setGridColor"
QT_MOC_LITERAL(54, 880, 14), // "setShowMiniMap"
QT_MOC_LITERAL(55, 895, 15), // "setMiniMapWidth"
QT_MOC_LITERAL(56, 911, 14), // "setShowObjects"
QT_MOC_LITERAL(57, 926, 18), // "setShowObjectNames"
QT_MOC_LITERAL(58, 945, 11), // "setShowBMPs"
QT_MOC_LITERAL(59, 957, 23), // "setShowZombieSpawnImage"
QT_MOC_LITERAL(60, 981, 26), // "setZombieSpawnImageOpacity"
QT_MOC_LITERAL(61, 1008, 23), // "setShowZonesInWorldView"
QT_MOC_LITERAL(62, 1032, 28), // "setShowZonesWorldInWorldView"
QT_MOC_LITERAL(63, 1061, 24), // "setHighlightCurrentLevel"
QT_MOC_LITERAL(64, 1086, 28), // "setHighlightRoomUnderPointer"
QT_MOC_LITERAL(65, 1115, 18) // "setShowOtherWorlds"

    },
    "Preferences\0snapToGridChanged\0\0"
    "snapToGrid\0showCoordinatesChanged\0"
    "showGrid\0showWorldGridChanged\0"
    "showCellGridChanged\0gridColorChanged\0"
    "gridColor\0useOpenGLChanged\0useOpenGL\0"
    "worldThumbnailsChanged\0thumbs\0"
    "showObjectsChanged\0show\0showObjectNamesChanged\0"
    "showBMPsChanged\0showZombieSpawnImageChanged\0"
    "zombieSpawnImageOpacityChanged\0opacity\0"
    "showZonesInWorldViewChanged\0"
    "showZonesWorldInWorldViewChanged\0"
    "gridOpacityChanged\0newOpacity\0"
    "gridWidthChanged\0newWidth\0thumbWidthChanged\0"
    "showMiniMapChanged\0miniMapWidthChanged\0"
    "width\0highlightCurrentLevelChanged\0"
    "highlight\0mapsDirectoryChanged\0"
    "tilesDirectoryChanged\0showAdjacentMapsChanged\0"
    "LoadLastActivProject\0enableDarkTheme\0"
    "HsThresholdHP\0threshold\0HsSizeHP\0size\0"
    "HsThresholdHT\0HsSizeHT\0HsThresholdR\0"
    "HsSizeR\0highlightRoomUnderPointerChanged\0"
    "showOtherWorldsChanged\0setSnapToGrid\0"
    "setShowCoordinates\0showCoords\0"
    "setShowWorldGrid\0setShowCellGrid\0"
    "setGridColor\0setShowMiniMap\0setMiniMapWidth\0"
    "setShowObjects\0setShowObjectNames\0"
    "setShowBMPs\0setShowZombieSpawnImage\0"
    "setZombieSpawnImageOpacity\0"
    "setShowZonesInWorldView\0"
    "setShowZonesWorldInWorldView\0"
    "setHighlightCurrentLevel\0"
    "setHighlightRoomUnderPointer\0"
    "setShowOtherWorlds"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Preferences[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      33,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  264,    2, 0x06 /* Public */,
       4,    1,  267,    2, 0x06 /* Public */,
       6,    1,  270,    2, 0x06 /* Public */,
       7,    1,  273,    2, 0x06 /* Public */,
       8,    1,  276,    2, 0x06 /* Public */,
      10,    1,  279,    2, 0x06 /* Public */,
      12,    1,  282,    2, 0x06 /* Public */,
      14,    1,  285,    2, 0x06 /* Public */,
      16,    1,  288,    2, 0x06 /* Public */,
      17,    1,  291,    2, 0x06 /* Public */,
      18,    1,  294,    2, 0x06 /* Public */,
      19,    1,  297,    2, 0x06 /* Public */,
      21,    1,  300,    2, 0x06 /* Public */,
      22,    1,  303,    2, 0x06 /* Public */,
      23,    1,  306,    2, 0x06 /* Public */,
      25,    1,  309,    2, 0x06 /* Public */,
      27,    1,  312,    2, 0x06 /* Public */,
      28,    1,  315,    2, 0x06 /* Public */,
      29,    1,  318,    2, 0x06 /* Public */,
      31,    1,  321,    2, 0x06 /* Public */,
      33,    0,  324,    2, 0x06 /* Public */,
      34,    0,  325,    2, 0x06 /* Public */,
      35,    1,  326,    2, 0x06 /* Public */,
      36,    1,  329,    2, 0x06 /* Public */,
      37,    1,  332,    2, 0x06 /* Public */,
      38,    1,  335,    2, 0x06 /* Public */,
      40,    1,  338,    2, 0x06 /* Public */,
      42,    1,  341,    2, 0x06 /* Public */,
      43,    1,  344,    2, 0x06 /* Public */,
      44,    1,  347,    2, 0x06 /* Public */,
      45,    1,  350,    2, 0x06 /* Public */,
      46,    1,  353,    2, 0x06 /* Public */,
      47,    1,  356,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      48,    1,  359,    2, 0x0a /* Public */,
      49,    1,  362,    2, 0x0a /* Public */,
      51,    1,  365,    2, 0x0a /* Public */,
      52,    1,  368,    2, 0x0a /* Public */,
      53,    1,  371,    2, 0x0a /* Public */,
      54,    1,  374,    2, 0x0a /* Public */,
      55,    1,  377,    2, 0x0a /* Public */,
      56,    1,  380,    2, 0x0a /* Public */,
      57,    1,  383,    2, 0x0a /* Public */,
      58,    1,  386,    2, 0x0a /* Public */,
      59,    1,  389,    2, 0x0a /* Public */,
      60,    1,  392,    2, 0x0a /* Public */,
      61,    1,  395,    2, 0x0a /* Public */,
      62,    1,  398,    2, 0x0a /* Public */,
      63,    1,  401,    2, 0x0a /* Public */,
      64,    1,  404,    2, 0x0a /* Public */,
      65,    1,  407,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QColor,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::QReal,   20,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::Bool,   15,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,   50,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QColor,    9,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::QReal,   20,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::Bool,   15,

       0        // eod
};

void Preferences::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Preferences *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->snapToGridChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->showCoordinatesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->showWorldGridChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->showCellGridChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->gridColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 5: _t->useOpenGLChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->worldThumbnailsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->showObjectsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->showObjectNamesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->showBMPsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->showZombieSpawnImageChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->zombieSpawnImageOpacityChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 12: _t->showZonesInWorldViewChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->showZonesWorldInWorldViewChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->gridOpacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->gridWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->thumbWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->showMiniMapChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->miniMapWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->highlightCurrentLevelChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->mapsDirectoryChanged(); break;
        case 21: _t->tilesDirectoryChanged(); break;
        case 22: _t->showAdjacentMapsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->LoadLastActivProject((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->enableDarkTheme((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->HsThresholdHP((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->HsSizeHP((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->HsThresholdHT((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->HsSizeHT((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->HsThresholdR((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->HsSizeR((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->highlightRoomUnderPointerChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->showOtherWorldsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->setSnapToGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->setShowCoordinates((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->setShowWorldGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->setShowCellGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->setGridColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 38: _t->setShowMiniMap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->setMiniMapWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->setShowObjects((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->setShowObjectNames((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->setShowBMPs((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->setShowZombieSpawnImage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->setZombieSpawnImageOpacity((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 45: _t->setShowZonesInWorldView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->setShowZonesWorldInWorldView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->setHighlightCurrentLevel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->setHighlightRoomUnderPointer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->setShowOtherWorlds((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Preferences::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::snapToGridChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::showCoordinatesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::showWorldGridChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::showCellGridChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::gridColorChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::useOpenGLChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::worldThumbnailsChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::showObjectsChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::showObjectNamesChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::showBMPsChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::showZombieSpawnImageChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::zombieSpawnImageOpacityChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::showZonesInWorldViewChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::showZonesWorldInWorldViewChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::gridOpacityChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::gridWidthChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::thumbWidthChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::showMiniMapChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::miniMapWidthChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::highlightCurrentLevelChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Preferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::mapsDirectoryChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Preferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::tilesDirectoryChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::showAdjacentMapsChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::LoadLastActivProject)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::enableDarkTheme)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::HsThresholdHP)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::HsSizeHP)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::HsThresholdHT)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::HsSizeHT)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::HsThresholdR)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::HsSizeR)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::highlightRoomUnderPointerChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Preferences::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Preferences::showOtherWorldsChanged)) {
                *result = 32;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Preferences::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Preferences.data,
    qt_meta_data_Preferences,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Preferences::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Preferences::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Preferences.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Preferences::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 50)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 50;
    }
    return _id;
}

// SIGNAL 0
void Preferences::snapToGridChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Preferences::showCoordinatesChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Preferences::showWorldGridChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Preferences::showCellGridChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Preferences::gridColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Preferences::useOpenGLChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Preferences::worldThumbnailsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Preferences::showObjectsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Preferences::showObjectNamesChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Preferences::showBMPsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Preferences::showZombieSpawnImageChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Preferences::zombieSpawnImageOpacityChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Preferences::showZonesInWorldViewChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Preferences::showZonesWorldInWorldViewChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Preferences::gridOpacityChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Preferences::gridWidthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Preferences::thumbWidthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Preferences::showMiniMapChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Preferences::miniMapWidthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Preferences::highlightCurrentLevelChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Preferences::mapsDirectoryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void Preferences::tilesDirectoryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void Preferences::showAdjacentMapsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Preferences::LoadLastActivProject(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Preferences::enableDarkTheme(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Preferences::HsThresholdHP(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Preferences::HsSizeHP(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void Preferences::HsThresholdHT(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Preferences::HsSizeHT(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Preferences::HsThresholdR(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void Preferences::HsSizeR(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void Preferences::highlightRoomUnderPointerChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void Preferences::showOtherWorldsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
