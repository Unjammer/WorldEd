/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionAboutQt;
    QAction *actionOpen;
    QAction *actionEditCell;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionShowGrid;
    QAction *actionHighlightCurrentLevel;
    QAction *actionZoomNormal;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionClose;
    QAction *actionCloseAll;
    QAction *actionProperties;
    QAction *actionTemplates;
    QAction *actionShowCoordinates;
    QAction *actionRemoveLot;
    QAction *actionNew;
    QAction *actionCreateObject;
    QAction *actionRemoveObject;
    QAction *actionSnapToGrid;
    QAction *actionObjectTypes;
    QAction *actionClearCell;
    QAction *actionPreferences;
    QAction *actionShowMiniMap;
    QAction *actionClearMapOnly;
    QAction *actionExtractLots;
    QAction *actionExtractObjects;
    QAction *actionObjectGroups;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionClipboard;
    QAction *actionLevelAbove;
    QAction *actionLevelBelow;
    QAction *actionShowObjectNames;
    QAction *actionGenerateLotsAll;
    QAction *actionGenerateLotsSelected;
    QAction *actionRemoveRoad;
    QAction *actionBMPToTMXAll;
    QAction *actionBMPToTMXSelected;
    QAction *actionRemoveBMP;
    QAction *actionShowBMP;
    QAction *actionResizeWorld;
    QAction *actionLotPackViewer;
    QAction *actionFromToAll;
    QAction *actionFromToSelected;
    QAction *actionHMMesh;
    QAction *actionHMFlat;
    QAction *actionGoToXY;
    QAction *actionEnums;
    QAction *actionLUAObjectDump;
    QAction *actionHighlightRoomUnderPointer;
    QAction *actionBuildingsToPNG;
    QAction *actionLootInspector;
    QAction *actionWriteObjects;
    QAction *actionTMXToBMPAll;
    QAction *actionTMXToBMPSelected;
    QAction *actionShowObjects;
    QAction *actionShowOtherWorlds;
    QAction *actionWriteInGameMapFeaturesXML;
    QAction *actionGenerateInGameMapBuildingFeatures;
    QAction *actionGenerateInGameMapWaterFeatures;
    QAction *actionReadInGameMapFeaturesXML;
    QAction *actionSplitInGameMapPolygon;
    QAction *actionRemoveInGameMapPoints;
    QAction *actionGenerateInGameMapTreeFeatures;
    QAction *actionRemoveInGameMapFeatures;
    QAction *actionCreateImagePyramid;
    QAction *actionAddInGameMapHole;
    QAction *actionRemoveInGameMapHole;
    QAction *actionConvertToPolygon;
    QAction *actionShowZonesInWorldView;
    QAction *actionShowZombieSpawnImage;
    QAction *actionSplitObjectPolygon;
    QAction *actionGenerate_Road_Features;
    QAction *actionShowZonesWorldInWorldView;
    QAction *actionOverwriteInGameMapFeaturesXML;
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QTabWidget *documentTabWidget;
    QWidget *tabWorld;
    QGridLayout *gridLayout_3;
    QGraphicsView *worldView;
    QWidget *tabCell;
    QGridLayout *gridLayout_5;
    QGraphicsView *cellView;
    QFrame *viewTools;
    QHBoxLayout *horizontalLayout;
    QLabel *coordinatesLabel;
    QFrame *line;
    QLabel *worldCoordinatesLabel;
    QFrame *line_4;
    QLabel *currentCellLabel;
    QFrame *line_2;
    QToolButton *currentLevelButton;
    QFrame *line_3;
    QToolButton *objectGroupButton;
    QSpacerItem *horizontalSpacer;
    QComboBox *zoomComboBox;
    QMenuBar *menuBar;
    QMenu *fileMenu;
    QMenu *menuGenerate_Lots;
    QMenu *menuBMP_To_TMX;
    QMenu *menuTMX_To_BMP;
    QMenu *helpMenu;
    QMenu *editMenu;
    QMenu *menuView;
    QMenu *menuWorld;
    QMenu *menuCell;
    QMenu *menuTools;
    QMenu *menuAlias_Fixup;
    QMenu *menuInGameMap;
    QMenu *menuForaging;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1011, 630);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/16x16/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon);
        actionQuit->setMenuRole(QAction::QuitRole);
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QString::fromUtf8("actionAboutQt"));
        actionAboutQt->setMenuRole(QAction::AboutQtRole);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/16x16/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionEditCell = new QAction(MainWindow);
        actionEditCell->setObjectName(QString::fromUtf8("actionEditCell"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionZoomIn = new QAction(MainWindow);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/16x16/zoom-in.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomIn->setIcon(icon2);
        actionZoomOut = new QAction(MainWindow);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/16x16/zoom-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomOut->setIcon(icon3);
        actionShowGrid = new QAction(MainWindow);
        actionShowGrid->setObjectName(QString::fromUtf8("actionShowGrid"));
        actionShowGrid->setCheckable(true);
        actionHighlightCurrentLevel = new QAction(MainWindow);
        actionHighlightCurrentLevel->setObjectName(QString::fromUtf8("actionHighlightCurrentLevel"));
        actionHighlightCurrentLevel->setCheckable(true);
        actionZoomNormal = new QAction(MainWindow);
        actionZoomNormal->setObjectName(QString::fromUtf8("actionZoomNormal"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/16x16/zoom-original.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomNormal->setIcon(icon4);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/16x16/document-save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon5);
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/16x16/document-save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAs->setIcon(icon6);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionCloseAll = new QAction(MainWindow);
        actionCloseAll->setObjectName(QString::fromUtf8("actionCloseAll"));
        actionProperties = new QAction(MainWindow);
        actionProperties->setObjectName(QString::fromUtf8("actionProperties"));
        actionTemplates = new QAction(MainWindow);
        actionTemplates->setObjectName(QString::fromUtf8("actionTemplates"));
        actionShowCoordinates = new QAction(MainWindow);
        actionShowCoordinates->setObjectName(QString::fromUtf8("actionShowCoordinates"));
        actionShowCoordinates->setCheckable(true);
        actionRemoveLot = new QAction(MainWindow);
        actionRemoveLot->setObjectName(QString::fromUtf8("actionRemoveLot"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/16x16/edit-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemoveLot->setIcon(icon7);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/16x16/document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon8);
        actionCreateObject = new QAction(MainWindow);
        actionCreateObject->setObjectName(QString::fromUtf8("actionCreateObject"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/24x24/insert-object.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreateObject->setIcon(icon9);
        actionRemoveObject = new QAction(MainWindow);
        actionRemoveObject->setObjectName(QString::fromUtf8("actionRemoveObject"));
        actionRemoveObject->setIcon(icon7);
        actionSnapToGrid = new QAction(MainWindow);
        actionSnapToGrid->setObjectName(QString::fromUtf8("actionSnapToGrid"));
        actionSnapToGrid->setCheckable(true);
        actionObjectTypes = new QAction(MainWindow);
        actionObjectTypes->setObjectName(QString::fromUtf8("actionObjectTypes"));
        actionClearCell = new QAction(MainWindow);
        actionClearCell->setObjectName(QString::fromUtf8("actionClearCell"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/16x16/edit-clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClearCell->setIcon(icon10);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionPreferences->setMenuRole(QAction::PreferencesRole);
        actionShowMiniMap = new QAction(MainWindow);
        actionShowMiniMap->setObjectName(QString::fromUtf8("actionShowMiniMap"));
        actionShowMiniMap->setCheckable(true);
        actionClearMapOnly = new QAction(MainWindow);
        actionClearMapOnly->setObjectName(QString::fromUtf8("actionClearMapOnly"));
        actionExtractLots = new QAction(MainWindow);
        actionExtractLots->setObjectName(QString::fromUtf8("actionExtractLots"));
        actionExtractObjects = new QAction(MainWindow);
        actionExtractObjects->setObjectName(QString::fromUtf8("actionExtractObjects"));
        actionObjectGroups = new QAction(MainWindow);
        actionObjectGroups->setObjectName(QString::fromUtf8("actionObjectGroups"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/16x16/edit-copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon11);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/16x16/edit-paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon12);
        actionClipboard = new QAction(MainWindow);
        actionClipboard->setObjectName(QString::fromUtf8("actionClipboard"));
        actionLevelAbove = new QAction(MainWindow);
        actionLevelAbove->setObjectName(QString::fromUtf8("actionLevelAbove"));
        actionLevelBelow = new QAction(MainWindow);
        actionLevelBelow->setObjectName(QString::fromUtf8("actionLevelBelow"));
        actionShowObjectNames = new QAction(MainWindow);
        actionShowObjectNames->setObjectName(QString::fromUtf8("actionShowObjectNames"));
        actionShowObjectNames->setCheckable(true);
        actionGenerateLotsAll = new QAction(MainWindow);
        actionGenerateLotsAll->setObjectName(QString::fromUtf8("actionGenerateLotsAll"));
        actionGenerateLotsSelected = new QAction(MainWindow);
        actionGenerateLotsSelected->setObjectName(QString::fromUtf8("actionGenerateLotsSelected"));
        actionRemoveRoad = new QAction(MainWindow);
        actionRemoveRoad->setObjectName(QString::fromUtf8("actionRemoveRoad"));
        actionRemoveRoad->setIcon(icon7);
        actionBMPToTMXAll = new QAction(MainWindow);
        actionBMPToTMXAll->setObjectName(QString::fromUtf8("actionBMPToTMXAll"));
        actionBMPToTMXSelected = new QAction(MainWindow);
        actionBMPToTMXSelected->setObjectName(QString::fromUtf8("actionBMPToTMXSelected"));
        actionRemoveBMP = new QAction(MainWindow);
        actionRemoveBMP->setObjectName(QString::fromUtf8("actionRemoveBMP"));
        actionRemoveBMP->setIcon(icon7);
        actionShowBMP = new QAction(MainWindow);
        actionShowBMP->setObjectName(QString::fromUtf8("actionShowBMP"));
        actionShowBMP->setCheckable(true);
        actionResizeWorld = new QAction(MainWindow);
        actionResizeWorld->setObjectName(QString::fromUtf8("actionResizeWorld"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/16x16/document-page-setup.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionResizeWorld->setIcon(icon13);
        actionLotPackViewer = new QAction(MainWindow);
        actionLotPackViewer->setObjectName(QString::fromUtf8("actionLotPackViewer"));
        actionFromToAll = new QAction(MainWindow);
        actionFromToAll->setObjectName(QString::fromUtf8("actionFromToAll"));
        actionFromToSelected = new QAction(MainWindow);
        actionFromToSelected->setObjectName(QString::fromUtf8("actionFromToSelected"));
        actionHMMesh = new QAction(MainWindow);
        actionHMMesh->setObjectName(QString::fromUtf8("actionHMMesh"));
        actionHMMesh->setCheckable(true);
        actionHMFlat = new QAction(MainWindow);
        actionHMFlat->setObjectName(QString::fromUtf8("actionHMFlat"));
        actionHMFlat->setCheckable(true);
        actionGoToXY = new QAction(MainWindow);
        actionGoToXY->setObjectName(QString::fromUtf8("actionGoToXY"));
        actionEnums = new QAction(MainWindow);
        actionEnums->setObjectName(QString::fromUtf8("actionEnums"));
        actionLUAObjectDump = new QAction(MainWindow);
        actionLUAObjectDump->setObjectName(QString::fromUtf8("actionLUAObjectDump"));
        actionHighlightRoomUnderPointer = new QAction(MainWindow);
        actionHighlightRoomUnderPointer->setObjectName(QString::fromUtf8("actionHighlightRoomUnderPointer"));
        actionHighlightRoomUnderPointer->setCheckable(true);
        actionBuildingsToPNG = new QAction(MainWindow);
        actionBuildingsToPNG->setObjectName(QString::fromUtf8("actionBuildingsToPNG"));
        actionLootInspector = new QAction(MainWindow);
        actionLootInspector->setObjectName(QString::fromUtf8("actionLootInspector"));
        actionWriteObjects = new QAction(MainWindow);
        actionWriteObjects->setObjectName(QString::fromUtf8("actionWriteObjects"));
        actionTMXToBMPAll = new QAction(MainWindow);
        actionTMXToBMPAll->setObjectName(QString::fromUtf8("actionTMXToBMPAll"));
        actionTMXToBMPSelected = new QAction(MainWindow);
        actionTMXToBMPSelected->setObjectName(QString::fromUtf8("actionTMXToBMPSelected"));
        actionShowObjects = new QAction(MainWindow);
        actionShowObjects->setObjectName(QString::fromUtf8("actionShowObjects"));
        actionShowObjects->setCheckable(true);
        actionShowOtherWorlds = new QAction(MainWindow);
        actionShowOtherWorlds->setObjectName(QString::fromUtf8("actionShowOtherWorlds"));
        actionShowOtherWorlds->setCheckable(true);
        actionWriteInGameMapFeaturesXML = new QAction(MainWindow);
        actionWriteInGameMapFeaturesXML->setObjectName(QString::fromUtf8("actionWriteInGameMapFeaturesXML"));
        actionWriteInGameMapFeaturesXML->setIcon(icon6);
        actionGenerateInGameMapBuildingFeatures = new QAction(MainWindow);
        actionGenerateInGameMapBuildingFeatures->setObjectName(QString::fromUtf8("actionGenerateInGameMapBuildingFeatures"));
        actionGenerateInGameMapWaterFeatures = new QAction(MainWindow);
        actionGenerateInGameMapWaterFeatures->setObjectName(QString::fromUtf8("actionGenerateInGameMapWaterFeatures"));
        actionReadInGameMapFeaturesXML = new QAction(MainWindow);
        actionReadInGameMapFeaturesXML->setObjectName(QString::fromUtf8("actionReadInGameMapFeaturesXML"));
        actionReadInGameMapFeaturesXML->setIcon(icon1);
        actionSplitInGameMapPolygon = new QAction(MainWindow);
        actionSplitInGameMapPolygon->setObjectName(QString::fromUtf8("actionSplitInGameMapPolygon"));
        actionRemoveInGameMapPoints = new QAction(MainWindow);
        actionRemoveInGameMapPoints->setObjectName(QString::fromUtf8("actionRemoveInGameMapPoints"));
        actionRemoveInGameMapPoints->setIcon(icon7);
        actionGenerateInGameMapTreeFeatures = new QAction(MainWindow);
        actionGenerateInGameMapTreeFeatures->setObjectName(QString::fromUtf8("actionGenerateInGameMapTreeFeatures"));
        actionRemoveInGameMapFeatures = new QAction(MainWindow);
        actionRemoveInGameMapFeatures->setObjectName(QString::fromUtf8("actionRemoveInGameMapFeatures"));
        actionRemoveInGameMapFeatures->setIcon(icon7);
        actionCreateImagePyramid = new QAction(MainWindow);
        actionCreateImagePyramid->setObjectName(QString::fromUtf8("actionCreateImagePyramid"));
        actionAddInGameMapHole = new QAction(MainWindow);
        actionAddInGameMapHole->setObjectName(QString::fromUtf8("actionAddInGameMapHole"));
        actionRemoveInGameMapHole = new QAction(MainWindow);
        actionRemoveInGameMapHole->setObjectName(QString::fromUtf8("actionRemoveInGameMapHole"));
        actionConvertToPolygon = new QAction(MainWindow);
        actionConvertToPolygon->setObjectName(QString::fromUtf8("actionConvertToPolygon"));
        actionShowZonesInWorldView = new QAction(MainWindow);
        actionShowZonesInWorldView->setObjectName(QString::fromUtf8("actionShowZonesInWorldView"));
        actionShowZonesInWorldView->setCheckable(true);
        actionShowZombieSpawnImage = new QAction(MainWindow);
        actionShowZombieSpawnImage->setObjectName(QString::fromUtf8("actionShowZombieSpawnImage"));
        actionShowZombieSpawnImage->setCheckable(true);
        actionSplitObjectPolygon = new QAction(MainWindow);
        actionSplitObjectPolygon->setObjectName(QString::fromUtf8("actionSplitObjectPolygon"));
        actionGenerate_Road_Features = new QAction(MainWindow);
        actionGenerate_Road_Features->setObjectName(QString::fromUtf8("actionGenerate_Road_Features"));
        actionShowZonesWorldInWorldView = new QAction(MainWindow);
        actionShowZonesWorldInWorldView->setObjectName(QString::fromUtf8("actionShowZonesWorldInWorldView"));
        actionShowZonesWorldInWorldView->setCheckable(true);
        actionShowZonesWorldInWorldView->setEnabled(false);
        actionOverwriteInGameMapFeaturesXML = new QAction(MainWindow);
        actionOverwriteInGameMapFeaturesXML->setObjectName(QString::fromUtf8("actionOverwriteInGameMapFeaturesXML"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(0);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        documentTabWidget = new QTabWidget(centralWidget);
        documentTabWidget->setObjectName(QString::fromUtf8("documentTabWidget"));
        tabWorld = new QWidget();
        tabWorld->setObjectName(QString::fromUtf8("tabWorld"));
        gridLayout_3 = new QGridLayout(tabWorld);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        worldView = new QGraphicsView(tabWorld);
        worldView->setObjectName(QString::fromUtf8("worldView"));
        worldView->setFrameShape(QFrame::NoFrame);
        worldView->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(worldView, 0, 0, 1, 1);

        documentTabWidget->addTab(tabWorld, QString());
        tabCell = new QWidget();
        tabCell->setObjectName(QString::fromUtf8("tabCell"));
        gridLayout_5 = new QGridLayout(tabCell);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        cellView = new QGraphicsView(tabCell);
        cellView->setObjectName(QString::fromUtf8("cellView"));
        cellView->setFrameShape(QFrame::NoFrame);

        gridLayout_5->addWidget(cellView, 0, 0, 1, 1);

        documentTabWidget->addTab(tabCell, QString());

        gridLayout_4->addWidget(documentTabWidget, 0, 0, 1, 1);

        viewTools = new QFrame(centralWidget);
        viewTools->setObjectName(QString::fromUtf8("viewTools"));
        viewTools->setFrameShape(QFrame::StyledPanel);
        viewTools->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(viewTools);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 3, 0, 3);
        coordinatesLabel = new QLabel(viewTools);
        coordinatesLabel->setObjectName(QString::fromUtf8("coordinatesLabel"));
        coordinatesLabel->setMinimumSize(QSize(0, 0));
        coordinatesLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(coordinatesLabel);

        line = new QFrame(viewTools);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        worldCoordinatesLabel = new QLabel(viewTools);
        worldCoordinatesLabel->setObjectName(QString::fromUtf8("worldCoordinatesLabel"));
        worldCoordinatesLabel->setMinimumSize(QSize(0, 0));
        worldCoordinatesLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(worldCoordinatesLabel);

        line_4 = new QFrame(viewTools);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_4);

        currentCellLabel = new QLabel(viewTools);
        currentCellLabel->setObjectName(QString::fromUtf8("currentCellLabel"));

        horizontalLayout->addWidget(currentCellLabel);

        line_2 = new QFrame(viewTools);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        currentLevelButton = new QToolButton(viewTools);
        currentLevelButton->setObjectName(QString::fromUtf8("currentLevelButton"));
        currentLevelButton->setPopupMode(QToolButton::InstantPopup);
        currentLevelButton->setArrowType(Qt::NoArrow);

        horizontalLayout->addWidget(currentLevelButton);

        line_3 = new QFrame(viewTools);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_3);

        objectGroupButton = new QToolButton(viewTools);
        objectGroupButton->setObjectName(QString::fromUtf8("objectGroupButton"));
        objectGroupButton->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(objectGroupButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        zoomComboBox = new QComboBox(viewTools);
        zoomComboBox->setObjectName(QString::fromUtf8("zoomComboBox"));

        horizontalLayout->addWidget(zoomComboBox);


        gridLayout_4->addWidget(viewTools, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1011, 21));
        fileMenu = new QMenu(menuBar);
        fileMenu->setObjectName(QString::fromUtf8("fileMenu"));
        menuGenerate_Lots = new QMenu(fileMenu);
        menuGenerate_Lots->setObjectName(QString::fromUtf8("menuGenerate_Lots"));
        menuBMP_To_TMX = new QMenu(fileMenu);
        menuBMP_To_TMX->setObjectName(QString::fromUtf8("menuBMP_To_TMX"));
        menuTMX_To_BMP = new QMenu(fileMenu);
        menuTMX_To_BMP->setObjectName(QString::fromUtf8("menuTMX_To_BMP"));
        helpMenu = new QMenu(menuBar);
        helpMenu->setObjectName(QString::fromUtf8("helpMenu"));
        editMenu = new QMenu(menuBar);
        editMenu->setObjectName(QString::fromUtf8("editMenu"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuWorld = new QMenu(menuBar);
        menuWorld->setObjectName(QString::fromUtf8("menuWorld"));
        menuCell = new QMenu(menuBar);
        menuCell->setObjectName(QString::fromUtf8("menuCell"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuAlias_Fixup = new QMenu(menuTools);
        menuAlias_Fixup->setObjectName(QString::fromUtf8("menuAlias_Fixup"));
        menuInGameMap = new QMenu(menuBar);
        menuInGameMap->setObjectName(QString::fromUtf8("menuInGameMap"));
        menuForaging = new QMenu(menuBar);
        menuForaging->setObjectName(QString::fromUtf8("menuForaging"));
        menuForaging->setEnabled(false);
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(fileMenu->menuAction());
        menuBar->addAction(editMenu->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuWorld->menuAction());
        menuBar->addAction(menuCell->menuAction());
        menuBar->addAction(menuInGameMap->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(helpMenu->menuAction());
        menuBar->addAction(menuForaging->menuAction());
        fileMenu->addAction(actionNew);
        fileMenu->addAction(actionOpen);
        fileMenu->addAction(actionSave);
        fileMenu->addAction(actionSaveAs);
        fileMenu->addSeparator();
        fileMenu->addAction(menuBMP_To_TMX->menuAction());
        fileMenu->addAction(menuTMX_To_BMP->menuAction());
        fileMenu->addAction(menuGenerate_Lots->menuAction());
        fileMenu->addAction(actionLUAObjectDump);
        fileMenu->addAction(actionWriteObjects);
        fileMenu->addSeparator();
        fileMenu->addAction(actionClose);
        fileMenu->addAction(actionCloseAll);
        fileMenu->addAction(actionQuit);
        menuGenerate_Lots->addAction(actionGenerateLotsAll);
        menuGenerate_Lots->addAction(actionGenerateLotsSelected);
        menuBMP_To_TMX->addAction(actionBMPToTMXAll);
        menuBMP_To_TMX->addAction(actionBMPToTMXSelected);
        menuTMX_To_BMP->addAction(actionTMXToBMPAll);
        menuTMX_To_BMP->addAction(actionTMXToBMPSelected);
        helpMenu->addAction(actionAboutQt);
        editMenu->addSeparator();
        editMenu->addAction(actionCopy);
        editMenu->addAction(actionPaste);
        editMenu->addAction(actionClipboard);
        editMenu->addSeparator();
        editMenu->addAction(actionPreferences);
        menuView->addAction(actionShowCoordinates);
        menuView->addAction(actionShowGrid);
        menuView->addAction(actionShowMiniMap);
        menuView->addAction(actionShowObjects);
        menuView->addAction(actionShowObjectNames);
        menuView->addAction(actionShowOtherWorlds);
        menuView->addAction(actionShowBMP);
        menuView->addAction(actionShowZombieSpawnImage);
        menuView->addAction(actionShowZonesInWorldView);
        menuView->addAction(actionShowZonesWorldInWorldView);
        menuView->addSeparator();
        menuView->addAction(actionHighlightCurrentLevel);
        menuView->addAction(actionHighlightRoomUnderPointer);
        menuView->addAction(actionLevelAbove);
        menuView->addAction(actionLevelBelow);
        menuView->addSeparator();
        menuView->addAction(actionZoomIn);
        menuView->addAction(actionZoomOut);
        menuView->addAction(actionZoomNormal);
        menuView->addSeparator();
        menuWorld->addAction(actionEditCell);
        menuWorld->addAction(actionGoToXY);
        menuWorld->addAction(actionResizeWorld);
        menuWorld->addSeparator();
        menuWorld->addAction(actionObjectGroups);
        menuWorld->addAction(actionObjectTypes);
        menuWorld->addSeparator();
        menuWorld->addAction(actionEnums);
        menuWorld->addAction(actionProperties);
        menuWorld->addAction(actionTemplates);
        menuWorld->addSeparator();
        menuWorld->addAction(actionRemoveRoad);
        menuWorld->addAction(actionRemoveBMP);
        menuCell->addAction(actionRemoveLot);
        menuCell->addAction(actionRemoveObject);
        menuCell->addAction(actionSplitObjectPolygon);
        menuCell->addSeparator();
        menuCell->addAction(actionExtractLots);
        menuCell->addAction(actionExtractObjects);
        menuCell->addSeparator();
        menuCell->addAction(actionClearCell);
        menuCell->addAction(actionClearMapOnly);
        menuTools->addAction(actionLotPackViewer);
        menuTools->addAction(menuAlias_Fixup->menuAction());
        menuTools->addAction(actionBuildingsToPNG);
        menuTools->addAction(actionLootInspector);
        menuAlias_Fixup->addAction(actionFromToAll);
        menuAlias_Fixup->addAction(actionFromToSelected);
        menuInGameMap->addAction(actionRemoveInGameMapFeatures);
        menuInGameMap->addAction(actionRemoveInGameMapPoints);
        menuInGameMap->addAction(actionSplitInGameMapPolygon);
        menuInGameMap->addAction(actionAddInGameMapHole);
        menuInGameMap->addAction(actionRemoveInGameMapHole);
        menuInGameMap->addAction(actionConvertToPolygon);
        menuInGameMap->addSeparator();
        menuInGameMap->addAction(actionGenerateInGameMapTreeFeatures);
        menuInGameMap->addSeparator();
        menuInGameMap->addAction(actionGenerateInGameMapBuildingFeatures);
        menuInGameMap->addAction(actionGenerateInGameMapWaterFeatures);
        menuInGameMap->addAction(actionGenerate_Road_Features);
        menuInGameMap->addSeparator();
        menuInGameMap->addAction(actionReadInGameMapFeaturesXML);
        menuInGameMap->addAction(actionWriteInGameMapFeaturesXML);
        menuInGameMap->addAction(actionOverwriteInGameMapFeaturesXML);
        menuInGameMap->addAction(actionCreateImagePyramid);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSaveAs);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        documentTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PZWorldEd (Unofficial fork by Alree)", nullptr));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", nullptr));
        actionAboutQt->setText(QApplication::translate("MainWindow", "About Qt", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open...", nullptr));
        actionEditCell->setText(QApplication::translate("MainWindow", "Edit Cell", nullptr));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", nullptr));
        actionZoomIn->setText(QApplication::translate("MainWindow", "Zoom In", nullptr));
        actionZoomOut->setText(QApplication::translate("MainWindow", "Zoom Out", nullptr));
        actionShowGrid->setText(QApplication::translate("MainWindow", "Show Grid", nullptr));
#ifndef QT_NO_SHORTCUT
        actionShowGrid->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_NO_SHORTCUT
        actionHighlightCurrentLevel->setText(QApplication::translate("MainWindow", "Highlight Current Level", nullptr));
#ifndef QT_NO_SHORTCUT
        actionHighlightCurrentLevel->setShortcut(QApplication::translate("MainWindow", "H", nullptr));
#endif // QT_NO_SHORTCUT
        actionZoomNormal->setText(QApplication::translate("MainWindow", "Normal Size", nullptr));
#ifndef QT_NO_SHORTCUT
        actionZoomNormal->setShortcut(QApplication::translate("MainWindow", "Ctrl+0", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionSaveAs->setText(QApplication::translate("MainWindow", "Save As...", nullptr));
        actionClose->setText(QApplication::translate("MainWindow", "Close", nullptr));
        actionCloseAll->setText(QApplication::translate("MainWindow", "Close All", nullptr));
        actionProperties->setText(QApplication::translate("MainWindow", "Property Definitions...", nullptr));
        actionTemplates->setText(QApplication::translate("MainWindow", "Templates...", nullptr));
        actionShowCoordinates->setText(QApplication::translate("MainWindow", "Show Coordinates", nullptr));
        actionRemoveLot->setText(QApplication::translate("MainWindow", "Remove Selected Lots", nullptr));
#ifndef QT_NO_TOOLTIP
        actionRemoveLot->setToolTip(QApplication::translate("MainWindow", "Remove Selected Lots", nullptr));
#endif // QT_NO_TOOLTIP
        actionNew->setText(QApplication::translate("MainWindow", "New...", nullptr));
        actionCreateObject->setText(QApplication::translate("MainWindow", "Create Object", nullptr));
        actionRemoveObject->setText(QApplication::translate("MainWindow", "Remove Selected Objects", nullptr));
#ifndef QT_NO_TOOLTIP
        actionRemoveObject->setToolTip(QApplication::translate("MainWindow", "Remove Selected Objects", nullptr));
#endif // QT_NO_TOOLTIP
        actionSnapToGrid->setText(QApplication::translate("MainWindow", "Snap To Grid", nullptr));
        actionObjectTypes->setText(QApplication::translate("MainWindow", "Object Types...", nullptr));
        actionClearCell->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        actionPreferences->setText(QApplication::translate("MainWindow", "Preferences...", nullptr));
        actionShowMiniMap->setText(QApplication::translate("MainWindow", "Show Mini-map", nullptr));
#ifndef QT_NO_SHORTCUT
        actionShowMiniMap->setShortcut(QApplication::translate("MainWindow", "M", nullptr));
#endif // QT_NO_SHORTCUT
        actionClearMapOnly->setText(QApplication::translate("MainWindow", "Clear Map Only", nullptr));
        actionExtractLots->setText(QApplication::translate("MainWindow", "Extract Lots...", nullptr));
        actionExtractObjects->setText(QApplication::translate("MainWindow", "Extract Objects...", nullptr));
        actionObjectGroups->setText(QApplication::translate("MainWindow", "Object Groups...", nullptr));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", nullptr));
        actionClipboard->setText(QApplication::translate("MainWindow", "Show Clipboard", nullptr));
        actionLevelAbove->setText(QApplication::translate("MainWindow", "Select Level Above", nullptr));
#ifndef QT_NO_SHORTCUT
        actionLevelAbove->setShortcut(QApplication::translate("MainWindow", "PgUp", nullptr));
#endif // QT_NO_SHORTCUT
        actionLevelBelow->setText(QApplication::translate("MainWindow", "Select Level Below", nullptr));
#ifndef QT_NO_SHORTCUT
        actionLevelBelow->setShortcut(QApplication::translate("MainWindow", "PgDown", nullptr));
#endif // QT_NO_SHORTCUT
        actionShowObjectNames->setText(QApplication::translate("MainWindow", "Show Object Names", nullptr));
        actionGenerateLotsAll->setText(QApplication::translate("MainWindow", "All Cells...", nullptr));
        actionGenerateLotsSelected->setText(QApplication::translate("MainWindow", "Selected Cells Only...", nullptr));
        actionRemoveRoad->setText(QApplication::translate("MainWindow", "Removed Selected Roads", nullptr));
#ifndef QT_NO_TOOLTIP
        actionRemoveRoad->setToolTip(QApplication::translate("MainWindow", "Remove Selected Roads", nullptr));
#endif // QT_NO_TOOLTIP
        actionBMPToTMXAll->setText(QApplication::translate("MainWindow", "All Cells...", nullptr));
        actionBMPToTMXSelected->setText(QApplication::translate("MainWindow", "Selected Cells Only...", nullptr));
        actionRemoveBMP->setText(QApplication::translate("MainWindow", "Remove Selected BMP Images", nullptr));
        actionShowBMP->setText(QApplication::translate("MainWindow", "Show BMP Images", nullptr));
        actionResizeWorld->setText(QApplication::translate("MainWindow", "Resize World...", nullptr));
        actionLotPackViewer->setText(QApplication::translate("MainWindow", "LotPack Viewer", nullptr));
        actionFromToAll->setText(QApplication::translate("MainWindow", "All Cells...", nullptr));
        actionFromToSelected->setText(QApplication::translate("MainWindow", "Selected Cells Only...", nullptr));
        actionHMMesh->setText(QApplication::translate("MainWindow", "Mesh", nullptr));
        actionHMFlat->setText(QApplication::translate("MainWindow", "Flat", nullptr));
        actionGoToXY->setText(QApplication::translate("MainWindow", "Go To Coordinates...", nullptr));
        actionEnums->setText(QApplication::translate("MainWindow", "Enums...", nullptr));
        actionLUAObjectDump->setText(QApplication::translate("MainWindow", "Write Spawn Points...", nullptr));
        actionHighlightRoomUnderPointer->setText(QApplication::translate("MainWindow", "Highlight Room Under Pointer", nullptr));
#ifndef QT_NO_SHORTCUT
        actionHighlightRoomUnderPointer->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_NO_SHORTCUT
        actionBuildingsToPNG->setText(QApplication::translate("MainWindow", "Buildings To PNG...", nullptr));
        actionLootInspector->setText(QApplication::translate("MainWindow", "Loot Inspector", nullptr));
        actionWriteObjects->setText(QApplication::translate("MainWindow", "Write Objects to Lua...", nullptr));
        actionTMXToBMPAll->setText(QApplication::translate("MainWindow", "All Cells...", nullptr));
        actionTMXToBMPSelected->setText(QApplication::translate("MainWindow", "Selected Cells Only...", nullptr));
        actionShowObjects->setText(QApplication::translate("MainWindow", "Show Objects", nullptr));
        actionShowOtherWorlds->setText(QApplication::translate("MainWindow", "Show Other Worlds", nullptr));
        actionWriteInGameMapFeaturesXML->setText(QApplication::translate("MainWindow", "Write Features XML...", nullptr));
#ifndef QT_NO_TOOLTIP
        actionWriteInGameMapFeaturesXML->setToolTip(QApplication::translate("MainWindow", "Don't forget to do this!", nullptr));
#endif // QT_NO_TOOLTIP
        actionGenerateInGameMapBuildingFeatures->setText(QApplication::translate("MainWindow", "Generate Building Features", nullptr));
#ifndef QT_NO_TOOLTIP
        actionGenerateInGameMapBuildingFeatures->setToolTip(QApplication::translate("MainWindow", "Generate Building Features, only from external TBX Buildings", nullptr));
#endif // QT_NO_TOOLTIP
        actionGenerateInGameMapWaterFeatures->setText(QApplication::translate("MainWindow", "Generate Water Features", nullptr));
        actionReadInGameMapFeaturesXML->setText(QApplication::translate("MainWindow", "Read Features XML...", nullptr));
        actionSplitInGameMapPolygon->setText(QApplication::translate("MainWindow", "Split Polygon", nullptr));
        actionRemoveInGameMapPoints->setText(QApplication::translate("MainWindow", "Remove Selected Points", nullptr));
        actionGenerateInGameMapTreeFeatures->setText(QApplication::translate("MainWindow", "Generate Tree Features", nullptr));
        actionRemoveInGameMapFeatures->setText(QApplication::translate("MainWindow", "Remove Selected Features", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRemoveInGameMapFeatures->setShortcut(QApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_NO_SHORTCUT
        actionCreateImagePyramid->setText(QApplication::translate("MainWindow", "Create Image Pyramid...", nullptr));
        actionAddInGameMapHole->setText(QApplication::translate("MainWindow", "Add Polygon Hole", nullptr));
        actionRemoveInGameMapHole->setText(QApplication::translate("MainWindow", "Remove Polygon Hole", nullptr));
        actionConvertToPolygon->setText(QApplication::translate("MainWindow", "Convert To Polygon", nullptr));
        actionShowZonesInWorldView->setText(QApplication::translate("MainWindow", "Show Zones In World View", nullptr));
        actionShowZombieSpawnImage->setText(QApplication::translate("MainWindow", "Show Zombie Spawn Image", nullptr));
        actionSplitObjectPolygon->setText(QApplication::translate("MainWindow", "Split Object Polygon", nullptr));
        actionGenerate_Road_Features->setText(QApplication::translate("MainWindow", "Generate Road Features", nullptr));
        actionShowZonesWorldInWorldView->setText(QApplication::translate("MainWindow", "Show Zones and World in World View", nullptr));
        actionOverwriteInGameMapFeaturesXML->setText(QApplication::translate("MainWindow", "Overwrite XXX", nullptr));
        documentTabWidget->setTabText(documentTabWidget->indexOf(tabWorld), QApplication::translate("MainWindow", "World", nullptr));
        documentTabWidget->setTabText(documentTabWidget->indexOf(tabCell), QApplication::translate("MainWindow", "Grid", nullptr));
        coordinatesLabel->setText(QApplication::translate("MainWindow", "Cell x,y", nullptr));
        worldCoordinatesLabel->setText(QApplication::translate("MainWindow", "World x,y", nullptr));
        currentCellLabel->setText(QApplication::translate("MainWindow", "Current cell: <none>", nullptr));
        currentLevelButton->setText(QApplication::translate("MainWindow", "Current level: 0", nullptr));
        objectGroupButton->setText(QApplication::translate("MainWindow", "Obj Grp:", nullptr));
        fileMenu->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuGenerate_Lots->setTitle(QApplication::translate("MainWindow", "Generate Lots", nullptr));
        menuBMP_To_TMX->setTitle(QApplication::translate("MainWindow", "BMP To TMX", nullptr));
        menuTMX_To_BMP->setTitle(QApplication::translate("MainWindow", "TMX To BMP", nullptr));
        helpMenu->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        editMenu->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuView->setTitle(QApplication::translate("MainWindow", "View", nullptr));
        menuWorld->setTitle(QApplication::translate("MainWindow", "World", nullptr));
        menuCell->setTitle(QApplication::translate("MainWindow", "Cell", nullptr));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", nullptr));
        menuAlias_Fixup->setTitle(QApplication::translate("MainWindow", "Tiles From -> To", nullptr));
        menuInGameMap->setTitle(QApplication::translate("MainWindow", "InGameMap", nullptr));
        menuForaging->setTitle(QApplication::translate("MainWindow", "Foraging", nullptr));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "Main Toolbar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
