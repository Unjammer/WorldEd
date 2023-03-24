/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[86];
    char stringdata0[1354];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "updateActions"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "openFile"
QT_MOC_LITERAL(4, 35, 8), // "newWorld"
QT_MOC_LITERAL(5, 44, 8), // "editCell"
QT_MOC_LITERAL(6, 53, 6), // "goToXY"
QT_MOC_LITERAL(7, 60, 11), // "setShowGrid"
QT_MOC_LITERAL(8, 72, 4), // "show"
QT_MOC_LITERAL(9, 77, 13), // "documentAdded"
QT_MOC_LITERAL(10, 91, 9), // "Document*"
QT_MOC_LITERAL(11, 101, 3), // "doc"
QT_MOC_LITERAL(12, 105, 20), // "documentAboutToClose"
QT_MOC_LITERAL(13, 126, 5), // "index"
QT_MOC_LITERAL(14, 132, 25), // "currentDocumentTabChanged"
QT_MOC_LITERAL(15, 158, 8), // "tabIndex"
QT_MOC_LITERAL(16, 167, 22), // "currentDocumentChanged"
QT_MOC_LITERAL(17, 190, 22), // "documentCloseRequested"
QT_MOC_LITERAL(18, 213, 10), // "updateZoom"
QT_MOC_LITERAL(19, 224, 16), // "selectLevelAbove"
QT_MOC_LITERAL(20, 241, 16), // "selectLevelBelow"
QT_MOC_LITERAL(21, 258, 6), // "zoomIn"
QT_MOC_LITERAL(22, 265, 7), // "zoomOut"
QT_MOC_LITERAL(23, 273, 10), // "zoomNormal"
QT_MOC_LITERAL(24, 284, 8), // "saveFile"
QT_MOC_LITERAL(25, 293, 10), // "saveFileAs"
QT_MOC_LITERAL(26, 304, 9), // "closeFile"
QT_MOC_LITERAL(27, 314, 13), // "closeAllFiles"
QT_MOC_LITERAL(28, 328, 16), // "WriteSpawnPoints"
QT_MOC_LITERAL(29, 345, 17), // "WriteWorldObjects"
QT_MOC_LITERAL(30, 363, 17), // "updateWindowTitle"
QT_MOC_LITERAL(31, 381, 15), // "generateLotsAll"
QT_MOC_LITERAL(32, 397, 20), // "generateLotsSelected"
QT_MOC_LITERAL(33, 418, 26), // "generateLotSettingsChanged"
QT_MOC_LITERAL(34, 445, 11), // "BMPToTMXAll"
QT_MOC_LITERAL(35, 457, 16), // "BMPToTMXSelected"
QT_MOC_LITERAL(36, 474, 11), // "TMXToBMPAll"
QT_MOC_LITERAL(37, 486, 16), // "TMXToBMPSelected"
QT_MOC_LITERAL(38, 503, 11), // "resizeWorld"
QT_MOC_LITERAL(39, 515, 17), // "preferencesDialog"
QT_MOC_LITERAL(40, 533, 18), // "objectGroupsDialog"
QT_MOC_LITERAL(41, 552, 17), // "objectTypesDialog"
QT_MOC_LITERAL(42, 570, 19), // "propertyEnumsDialog"
QT_MOC_LITERAL(43, 590, 24), // "properyDefinitionsDialog"
QT_MOC_LITERAL(44, 615, 15), // "templatesDialog"
QT_MOC_LITERAL(45, 631, 4), // "copy"
QT_MOC_LITERAL(46, 636, 5), // "paste"
QT_MOC_LITERAL(47, 642, 13), // "showClipboard"
QT_MOC_LITERAL(48, 656, 10), // "removeRoad"
QT_MOC_LITERAL(49, 667, 9), // "removeBMP"
QT_MOC_LITERAL(50, 677, 9), // "removeLot"
QT_MOC_LITERAL(51, 687, 12), // "removeObject"
QT_MOC_LITERAL(52, 700, 18), // "splitObjectPolygon"
QT_MOC_LITERAL(53, 719, 11), // "extractLots"
QT_MOC_LITERAL(54, 731, 14), // "extractObjects"
QT_MOC_LITERAL(55, 746, 10), // "clearCells"
QT_MOC_LITERAL(56, 757, 12), // "clearMapOnly"
QT_MOC_LITERAL(57, 770, 33), // "generateInGameMapBuildingFeat..."
QT_MOC_LITERAL(58, 804, 29), // "generateInGameMapTreeFeatures"
QT_MOC_LITERAL(59, 834, 30), // "generateInGameMapWaterFeatures"
QT_MOC_LITERAL(60, 865, 20), // "generateRoadFeatures"
QT_MOC_LITERAL(61, 886, 23), // "removeInGameMapFeatures"
QT_MOC_LITERAL(62, 910, 21), // "splitInGameMapPolygon"
QT_MOC_LITERAL(63, 932, 33), // "convertInGameMapPolylineToPol..."
QT_MOC_LITERAL(64, 966, 16), // "addInGameMapHole"
QT_MOC_LITERAL(65, 983, 19), // "removeInGameMapHole"
QT_MOC_LITERAL(66, 1003, 20), // "removeInGameMapPoint"
QT_MOC_LITERAL(67, 1024, 24), // "readInGameMapFeaturesXML"
QT_MOC_LITERAL(68, 1049, 25), // "writeInGameMapFeaturesXML"
QT_MOC_LITERAL(69, 1075, 29), // "overwriteInGameMapFeaturesXML"
QT_MOC_LITERAL(70, 1105, 26), // "creaeInGameMapImagePyramid"
QT_MOC_LITERAL(71, 1132, 18), // "setStatusBarCoords"
QT_MOC_LITERAL(72, 1151, 1), // "x"
QT_MOC_LITERAL(73, 1153, 1), // "y"
QT_MOC_LITERAL(74, 1155, 27), // "aboutToShowCurrentLevelMenu"
QT_MOC_LITERAL(75, 1183, 25), // "currentLevelMenuTriggered"
QT_MOC_LITERAL(76, 1209, 8), // "QAction*"
QT_MOC_LITERAL(77, 1218, 6), // "action"
QT_MOC_LITERAL(78, 1225, 21), // "aboutToShowObjGrpMenu"
QT_MOC_LITERAL(79, 1247, 19), // "objGrpMenuTriggered"
QT_MOC_LITERAL(80, 1267, 13), // "lotpackviewer"
QT_MOC_LITERAL(81, 1281, 9), // "FromToAll"
QT_MOC_LITERAL(82, 1291, 14), // "FromToSelected"
QT_MOC_LITERAL(83, 1306, 14), // "BuildingsToPNG"
QT_MOC_LITERAL(84, 1321, 13), // "lootInspector"
QT_MOC_LITERAL(85, 1335, 18) // "readOldWaterDotLua"

    },
    "MainWindow\0updateActions\0\0openFile\0"
    "newWorld\0editCell\0goToXY\0setShowGrid\0"
    "show\0documentAdded\0Document*\0doc\0"
    "documentAboutToClose\0index\0"
    "currentDocumentTabChanged\0tabIndex\0"
    "currentDocumentChanged\0documentCloseRequested\0"
    "updateZoom\0selectLevelAbove\0"
    "selectLevelBelow\0zoomIn\0zoomOut\0"
    "zoomNormal\0saveFile\0saveFileAs\0closeFile\0"
    "closeAllFiles\0WriteSpawnPoints\0"
    "WriteWorldObjects\0updateWindowTitle\0"
    "generateLotsAll\0generateLotsSelected\0"
    "generateLotSettingsChanged\0BMPToTMXAll\0"
    "BMPToTMXSelected\0TMXToBMPAll\0"
    "TMXToBMPSelected\0resizeWorld\0"
    "preferencesDialog\0objectGroupsDialog\0"
    "objectTypesDialog\0propertyEnumsDialog\0"
    "properyDefinitionsDialog\0templatesDialog\0"
    "copy\0paste\0showClipboard\0removeRoad\0"
    "removeBMP\0removeLot\0removeObject\0"
    "splitObjectPolygon\0extractLots\0"
    "extractObjects\0clearCells\0clearMapOnly\0"
    "generateInGameMapBuildingFeatures\0"
    "generateInGameMapTreeFeatures\0"
    "generateInGameMapWaterFeatures\0"
    "generateRoadFeatures\0removeInGameMapFeatures\0"
    "splitInGameMapPolygon\0"
    "convertInGameMapPolylineToPolygon\0"
    "addInGameMapHole\0removeInGameMapHole\0"
    "removeInGameMapPoint\0readInGameMapFeaturesXML\0"
    "writeInGameMapFeaturesXML\0"
    "overwriteInGameMapFeaturesXML\0"
    "creaeInGameMapImagePyramid\0"
    "setStatusBarCoords\0x\0y\0"
    "aboutToShowCurrentLevelMenu\0"
    "currentLevelMenuTriggered\0QAction*\0"
    "action\0aboutToShowObjGrpMenu\0"
    "objGrpMenuTriggered\0lotpackviewer\0"
    "FromToAll\0FromToSelected\0BuildingsToPNG\0"
    "lootInspector\0readOldWaterDotLua"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      75,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  389,    2, 0x0a /* Public */,
       3,    0,  390,    2, 0x0a /* Public */,
       4,    0,  391,    2, 0x0a /* Public */,
       5,    0,  392,    2, 0x0a /* Public */,
       6,    0,  393,    2, 0x0a /* Public */,
       7,    1,  394,    2, 0x0a /* Public */,
       9,    1,  397,    2, 0x0a /* Public */,
      12,    2,  400,    2, 0x0a /* Public */,
      14,    1,  405,    2, 0x0a /* Public */,
      16,    1,  408,    2, 0x0a /* Public */,
      17,    1,  411,    2, 0x0a /* Public */,
      18,    0,  414,    2, 0x0a /* Public */,
      19,    0,  415,    2, 0x0a /* Public */,
      20,    0,  416,    2, 0x0a /* Public */,
      21,    0,  417,    2, 0x0a /* Public */,
      22,    0,  418,    2, 0x0a /* Public */,
      23,    0,  419,    2, 0x0a /* Public */,
      24,    0,  420,    2, 0x0a /* Public */,
      25,    0,  421,    2, 0x0a /* Public */,
      26,    0,  422,    2, 0x0a /* Public */,
      27,    0,  423,    2, 0x0a /* Public */,
      28,    0,  424,    2, 0x0a /* Public */,
      29,    0,  425,    2, 0x0a /* Public */,
      30,    0,  426,    2, 0x0a /* Public */,
      31,    0,  427,    2, 0x0a /* Public */,
      32,    0,  428,    2, 0x0a /* Public */,
      33,    0,  429,    2, 0x0a /* Public */,
      34,    0,  430,    2, 0x0a /* Public */,
      35,    0,  431,    2, 0x0a /* Public */,
      36,    0,  432,    2, 0x0a /* Public */,
      37,    0,  433,    2, 0x0a /* Public */,
      38,    0,  434,    2, 0x0a /* Public */,
      39,    0,  435,    2, 0x0a /* Public */,
      40,    0,  436,    2, 0x0a /* Public */,
      41,    0,  437,    2, 0x0a /* Public */,
      42,    0,  438,    2, 0x0a /* Public */,
      43,    0,  439,    2, 0x0a /* Public */,
      44,    0,  440,    2, 0x0a /* Public */,
      45,    0,  441,    2, 0x0a /* Public */,
      46,    0,  442,    2, 0x0a /* Public */,
      47,    0,  443,    2, 0x0a /* Public */,
      48,    0,  444,    2, 0x0a /* Public */,
      49,    0,  445,    2, 0x0a /* Public */,
      50,    0,  446,    2, 0x0a /* Public */,
      51,    0,  447,    2, 0x0a /* Public */,
      52,    0,  448,    2, 0x0a /* Public */,
      53,    0,  449,    2, 0x0a /* Public */,
      54,    0,  450,    2, 0x0a /* Public */,
      55,    0,  451,    2, 0x0a /* Public */,
      56,    0,  452,    2, 0x0a /* Public */,
      57,    0,  453,    2, 0x0a /* Public */,
      58,    0,  454,    2, 0x0a /* Public */,
      59,    0,  455,    2, 0x0a /* Public */,
      60,    0,  456,    2, 0x0a /* Public */,
      61,    0,  457,    2, 0x0a /* Public */,
      62,    0,  458,    2, 0x0a /* Public */,
      63,    0,  459,    2, 0x0a /* Public */,
      64,    0,  460,    2, 0x0a /* Public */,
      65,    0,  461,    2, 0x0a /* Public */,
      66,    0,  462,    2, 0x0a /* Public */,
      67,    0,  463,    2, 0x0a /* Public */,
      68,    0,  464,    2, 0x0a /* Public */,
      69,    0,  465,    2, 0x0a /* Public */,
      70,    0,  466,    2, 0x0a /* Public */,
      71,    2,  467,    2, 0x0a /* Public */,
      74,    0,  472,    2, 0x0a /* Public */,
      75,    1,  473,    2, 0x0a /* Public */,
      78,    0,  476,    2, 0x0a /* Public */,
      79,    1,  477,    2, 0x0a /* Public */,
      80,    0,  480,    2, 0x0a /* Public */,
      81,    0,  481,    2, 0x0a /* Public */,
      82,    0,  482,    2, 0x0a /* Public */,
      83,    0,  483,    2, 0x0a /* Public */,
      84,    0,  484,    2, 0x0a /* Public */,
      85,    0,  485,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,   13,   11,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   72,   73,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 76,   77,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 76,   77,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateActions(); break;
        case 1: _t->openFile(); break;
        case 2: _t->newWorld(); break;
        case 3: _t->editCell(); break;
        case 4: _t->goToXY(); break;
        case 5: _t->setShowGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->documentAdded((*reinterpret_cast< Document*(*)>(_a[1]))); break;
        case 7: _t->documentAboutToClose((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Document*(*)>(_a[2]))); break;
        case 8: _t->currentDocumentTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->currentDocumentChanged((*reinterpret_cast< Document*(*)>(_a[1]))); break;
        case 10: _t->documentCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->updateZoom(); break;
        case 12: _t->selectLevelAbove(); break;
        case 13: _t->selectLevelBelow(); break;
        case 14: _t->zoomIn(); break;
        case 15: _t->zoomOut(); break;
        case 16: _t->zoomNormal(); break;
        case 17: { bool _r = _t->saveFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->saveFileAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->closeFile(); break;
        case 20: _t->closeAllFiles(); break;
        case 21: _t->WriteSpawnPoints(); break;
        case 22: _t->WriteWorldObjects(); break;
        case 23: _t->updateWindowTitle(); break;
        case 24: _t->generateLotsAll(); break;
        case 25: _t->generateLotsSelected(); break;
        case 26: _t->generateLotSettingsChanged(); break;
        case 27: _t->BMPToTMXAll(); break;
        case 28: _t->BMPToTMXSelected(); break;
        case 29: _t->TMXToBMPAll(); break;
        case 30: _t->TMXToBMPSelected(); break;
        case 31: _t->resizeWorld(); break;
        case 32: _t->preferencesDialog(); break;
        case 33: _t->objectGroupsDialog(); break;
        case 34: _t->objectTypesDialog(); break;
        case 35: _t->propertyEnumsDialog(); break;
        case 36: _t->properyDefinitionsDialog(); break;
        case 37: _t->templatesDialog(); break;
        case 38: _t->copy(); break;
        case 39: _t->paste(); break;
        case 40: _t->showClipboard(); break;
        case 41: _t->removeRoad(); break;
        case 42: _t->removeBMP(); break;
        case 43: _t->removeLot(); break;
        case 44: _t->removeObject(); break;
        case 45: _t->splitObjectPolygon(); break;
        case 46: _t->extractLots(); break;
        case 47: _t->extractObjects(); break;
        case 48: _t->clearCells(); break;
        case 49: _t->clearMapOnly(); break;
        case 50: _t->generateInGameMapBuildingFeatures(); break;
        case 51: _t->generateInGameMapTreeFeatures(); break;
        case 52: _t->generateInGameMapWaterFeatures(); break;
        case 53: _t->generateRoadFeatures(); break;
        case 54: _t->removeInGameMapFeatures(); break;
        case 55: _t->splitInGameMapPolygon(); break;
        case 56: _t->convertInGameMapPolylineToPolygon(); break;
        case 57: _t->addInGameMapHole(); break;
        case 58: _t->removeInGameMapHole(); break;
        case 59: _t->removeInGameMapPoint(); break;
        case 60: _t->readInGameMapFeaturesXML(); break;
        case 61: _t->writeInGameMapFeaturesXML(); break;
        case 62: _t->overwriteInGameMapFeaturesXML(); break;
        case 63: _t->creaeInGameMapImagePyramid(); break;
        case 64: _t->setStatusBarCoords((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 65: _t->aboutToShowCurrentLevelMenu(); break;
        case 66: _t->currentLevelMenuTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 67: _t->aboutToShowObjGrpMenu(); break;
        case 68: _t->objGrpMenuTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 69: _t->lotpackviewer(); break;
        case 70: _t->FromToAll(); break;
        case 71: _t->FromToSelected(); break;
        case 72: _t->BuildingsToPNG(); break;
        case 73: _t->lootInspector(); break;
        case 74: _t->readOldWaterDotLua(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 75)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 75;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 75)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 75;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
