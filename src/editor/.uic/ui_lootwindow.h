/********************************************************************************
** Form generated from reading UI file 'lootwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOOTWINDOW_H
#define UI_LOOTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LootWindow
{
public:
    QAction *actionClose;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *gameDirectory;
    QToolButton *gameDirBrowse;
    QTreeWidget *treeWidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LootWindow)
    {
        if (LootWindow->objectName().isEmpty())
            LootWindow->setObjectName(QString::fromUtf8("LootWindow"));
        LootWindow->resize(800, 600);
        actionClose = new QAction(LootWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        centralwidget = new QWidget(LootWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        gameDirectory = new QLineEdit(centralwidget);
        gameDirectory->setObjectName(QString::fromUtf8("gameDirectory"));
        gameDirectory->setReadOnly(true);

        horizontalLayout->addWidget(gameDirectory);

        gameDirBrowse = new QToolButton(centralwidget);
        gameDirBrowse->setObjectName(QString::fromUtf8("gameDirBrowse"));

        horizontalLayout->addWidget(gameDirBrowse);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setColumnCount(2);
        treeWidget->header()->setVisible(false);

        gridLayout->addWidget(treeWidget, 1, 0, 1, 1);

        LootWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LootWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        LootWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LootWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LootWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionClose);

        retranslateUi(LootWindow);

        QMetaObject::connectSlotsByName(LootWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LootWindow)
    {
        LootWindow->setWindowTitle(QApplication::translate("LootWindow", "Loot Inspector", nullptr));
        actionClose->setText(QApplication::translate("LootWindow", "Close", nullptr));
        label->setText(QApplication::translate("LootWindow", "Game Directory:", nullptr));
        gameDirBrowse->setText(QApplication::translate("LootWindow", "...", nullptr));
        menuFile->setTitle(QApplication::translate("LootWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LootWindow: public Ui_LootWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOOTWINDOW_H
