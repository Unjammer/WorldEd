/********************************************************************************
** Form generated from reading UI file 'lotpackwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOTPACKWINDOW_H
#define UI_LOTPACKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "lotpackwindow.h"

QT_BEGIN_NAMESPACE

class Ui_LotPackWindow
{
public:
    QAction *actionOpen_World;
    QAction *actionClose;
    QAction *actionSaveScreenshot;
    QAction *actionStartMapping;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionZoomNormal;
    QAction *actionShowRoomDefs;
    QAction *actionCenterOnCell;
    QAction *actionHighlightCurrentLevel;
    QAction *actionLevelUp;
    QAction *actionLevelDown;
    QAction *actionRecent;
    QAction *actionShowMiniMap;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    LotPackView *view;
    QHBoxLayout *statusBarLayout;
    QLabel *coords;
    QLabel *mappingStatus;
    QLabel *label;
    QSpinBox *cellStartX;
    QLabel *label1;
    QSpinBox *cellStartY;
    QLabel *label2;
    QSpinBox *numCellX;
    QLabel *label3;
    QSpinBox *numCellY;
    QSpacerItem *horizontalSpacer;
    QComboBox *scaleCombo;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuView;

    void setupUi(QMainWindow *LotPackWindow)
    {
        if (LotPackWindow->objectName().isEmpty())
            LotPackWindow->setObjectName(QString::fromUtf8("LotPackWindow"));
        LotPackWindow->resize(800, 600);
        actionOpen_World = new QAction(LotPackWindow);
        actionOpen_World->setObjectName(QString::fromUtf8("actionOpen_World"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/16x16/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_World->setIcon(icon);
        actionClose = new QAction(LotPackWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionSaveScreenshot = new QAction(LotPackWindow);
        actionSaveScreenshot->setObjectName(QString::fromUtf8("actionSaveScreenshot"));
        actionStartMapping = new QAction(LotPackWindow);
        actionStartMapping->setObjectName(QString::fromUtf8("actionStartMapping"));
        actionZoomIn = new QAction(LotPackWindow);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/16x16/zoom-in.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomIn->setIcon(icon1);
        actionZoomOut = new QAction(LotPackWindow);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/16x16/zoom-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomOut->setIcon(icon2);
        actionZoomNormal = new QAction(LotPackWindow);
        actionZoomNormal->setObjectName(QString::fromUtf8("actionZoomNormal"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/16x16/zoom-original.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomNormal->setIcon(icon3);
        actionShowRoomDefs = new QAction(LotPackWindow);
        actionShowRoomDefs->setObjectName(QString::fromUtf8("actionShowRoomDefs"));
        actionShowRoomDefs->setCheckable(true);
        actionCenterOnCell = new QAction(LotPackWindow);
        actionCenterOnCell->setObjectName(QString::fromUtf8("actionCenterOnCell"));
        actionHighlightCurrentLevel = new QAction(LotPackWindow);
        actionHighlightCurrentLevel->setObjectName(QString::fromUtf8("actionHighlightCurrentLevel"));
        actionHighlightCurrentLevel->setCheckable(true);
        actionLevelUp = new QAction(LotPackWindow);
        actionLevelUp->setObjectName(QString::fromUtf8("actionLevelUp"));
        actionLevelDown = new QAction(LotPackWindow);
        actionLevelDown->setObjectName(QString::fromUtf8("actionLevelDown"));
        actionRecent = new QAction(LotPackWindow);
        actionRecent->setObjectName(QString::fromUtf8("actionRecent"));
        actionShowMiniMap = new QAction(LotPackWindow);
        actionShowMiniMap->setObjectName(QString::fromUtf8("actionShowMiniMap"));
        actionShowMiniMap->setCheckable(true);
        centralwidget = new QWidget(LotPackWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        view = new LotPackView(centralwidget);
        view->setObjectName(QString::fromUtf8("view"));

        gridLayout->addWidget(view, 0, 0, 1, 1);

        statusBarLayout = new QHBoxLayout();
        statusBarLayout->setObjectName(QString::fromUtf8("statusBarLayout"));
        coords = new QLabel(centralwidget);
        coords->setObjectName(QString::fromUtf8("coords"));

        statusBarLayout->addWidget(coords);

        mappingStatus = new QLabel(centralwidget);
        mappingStatus->setObjectName(QString::fromUtf8("mappingStatus"));

        statusBarLayout->addWidget(mappingStatus);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        statusBarLayout->addWidget(label);

        cellStartX = new QSpinBox(centralwidget);
        cellStartX->setObjectName(QString::fromUtf8("cellStartX"));
        cellStartX->setMinimumSize(QSize(80, 0));
        cellStartX->setMinimum(0);
        cellStartX->setMaximum(1000);
        cellStartX->setValue(0);

        statusBarLayout->addWidget(cellStartX);

        label1 = new QLabel(centralwidget);
        label1->setObjectName(QString::fromUtf8("label1"));

        statusBarLayout->addWidget(label1);

        cellStartY = new QSpinBox(centralwidget);
        cellStartY->setObjectName(QString::fromUtf8("cellStartY"));
        cellStartY->setMinimumSize(QSize(80, 0));
        cellStartY->setMinimum(0);
        cellStartY->setMaximum(1000);
        cellStartY->setValue(0);

        statusBarLayout->addWidget(cellStartY);

        label2 = new QLabel(centralwidget);
        label2->setObjectName(QString::fromUtf8("label2"));

        statusBarLayout->addWidget(label2);

        numCellX = new QSpinBox(centralwidget);
        numCellX->setObjectName(QString::fromUtf8("numCellX"));
        numCellX->setMinimumSize(QSize(80, 0));
        numCellX->setMinimum(1);
        numCellX->setMaximum(1000);
        numCellX->setValue(3);

        statusBarLayout->addWidget(numCellX);

        label3 = new QLabel(centralwidget);
        label3->setObjectName(QString::fromUtf8("label3"));

        statusBarLayout->addWidget(label3);

        numCellY = new QSpinBox(centralwidget);
        numCellY->setObjectName(QString::fromUtf8("numCellY"));
        numCellY->setMinimumSize(QSize(80, 0));
        numCellY->setMinimum(1);
        numCellY->setMaximum(1000);
        numCellY->setValue(20);

        statusBarLayout->addWidget(numCellY);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        statusBarLayout->addItem(horizontalSpacer);

        scaleCombo = new QComboBox(centralwidget);
        scaleCombo->setObjectName(QString::fromUtf8("scaleCombo"));
        scaleCombo->setEditable(true);

        statusBarLayout->addWidget(scaleCombo);


        gridLayout->addLayout(statusBarLayout, 1, 0, 1, 1);

        LotPackWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LotPackWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        LotPackWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menuFile->addAction(actionOpen_World);
        menuFile->addSeparator();
        menuFile->addAction(actionRecent);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuView->addAction(actionCenterOnCell);
        menuView->addSeparator();
        menuView->addAction(actionShowMiniMap);
        menuView->addAction(actionShowRoomDefs);
        menuView->addSeparator();
        menuView->addAction(actionHighlightCurrentLevel);
        menuView->addAction(actionLevelUp);
        menuView->addAction(actionLevelDown);
        menuView->addSeparator();
        menuView->addAction(actionZoomIn);
        menuView->addAction(actionZoomOut);
        menuView->addAction(actionZoomNormal);
        menuView->addSeparator();
        menuView->addAction(actionSaveScreenshot);
        menuView->addAction(actionStartMapping);

        retranslateUi(LotPackWindow);

        QMetaObject::connectSlotsByName(LotPackWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LotPackWindow)
    {
        LotPackWindow->setWindowTitle(QApplication::translate("LotPackWindow", "LotPack Viewer", nullptr));
        actionOpen_World->setText(QApplication::translate("LotPackWindow", "Open World...", nullptr));
        actionClose->setText(QApplication::translate("LotPackWindow", "Close", nullptr));
        actionSaveScreenshot->setText(QApplication::translate("LotPackWindow", "Save Screenshot", nullptr));
        actionStartMapping->setText(QApplication::translate("LotPackWindow", "Start Mapping", nullptr));
        actionZoomIn->setText(QApplication::translate("LotPackWindow", "Zoom In", nullptr));
        actionZoomOut->setText(QApplication::translate("LotPackWindow", "Zoom Out", nullptr));
        actionZoomNormal->setText(QApplication::translate("LotPackWindow", "Normal Size", nullptr));
#ifndef QT_NO_SHORTCUT
        actionZoomNormal->setShortcut(QApplication::translate("LotPackWindow", "Ctrl+0", nullptr));
#endif // QT_NO_SHORTCUT
        actionShowRoomDefs->setText(QApplication::translate("LotPackWindow", "Show RoomDefs", nullptr));
#ifndef QT_NO_SHORTCUT
        actionShowRoomDefs->setShortcut(QApplication::translate("LotPackWindow", "R", nullptr));
#endif // QT_NO_SHORTCUT
        actionCenterOnCell->setText(QApplication::translate("LotPackWindow", "Center On Cell...", nullptr));
        actionHighlightCurrentLevel->setText(QApplication::translate("LotPackWindow", "Highlight Current Level", nullptr));
#ifndef QT_NO_SHORTCUT
        actionHighlightCurrentLevel->setShortcut(QApplication::translate("LotPackWindow", "H", nullptr));
#endif // QT_NO_SHORTCUT
        actionLevelUp->setText(QApplication::translate("LotPackWindow", "Select Level Above", nullptr));
#ifndef QT_NO_SHORTCUT
        actionLevelUp->setShortcut(QApplication::translate("LotPackWindow", "PgUp", nullptr));
#endif // QT_NO_SHORTCUT
        actionLevelDown->setText(QApplication::translate("LotPackWindow", "Select Level Below", nullptr));
#ifndef QT_NO_SHORTCUT
        actionLevelDown->setShortcut(QApplication::translate("LotPackWindow", "PgDown", nullptr));
#endif // QT_NO_SHORTCUT
        actionRecent->setText(QApplication::translate("LotPackWindow", "Recent", nullptr));
        actionShowMiniMap->setText(QApplication::translate("LotPackWindow", "Show MiniMap", nullptr));
#ifndef QT_NO_SHORTCUT
        actionShowMiniMap->setShortcut(QApplication::translate("LotPackWindow", "M", nullptr));
#endif // QT_NO_SHORTCUT
        coords->setText(QApplication::translate("LotPackWindow", "Cell X,Y", nullptr));
        mappingStatus->setText(QApplication::translate("LotPackWindow", "Mapping", nullptr));
        label->setText(QApplication::translate("LotPackWindow", "Startcell X:", nullptr));
        label1->setText(QApplication::translate("LotPackWindow", "Y:", nullptr));
        label2->setText(QApplication::translate("LotPackWindow", "Width:", nullptr));
        label3->setText(QApplication::translate("LotPackWindow", "Height:", nullptr));
        menuFile->setTitle(QApplication::translate("LotPackWindow", "File", nullptr));
        menuView->setTitle(QApplication::translate("LotPackWindow", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LotPackWindow: public Ui_LotPackWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOTPACKWINDOW_H
