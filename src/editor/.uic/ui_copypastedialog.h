/********************************************************************************
** Form generated from reading UI file 'copypastedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COPYPASTEDIALOG_H
#define UI_COPYPASTEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CopyPasteDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QListWidget *worldCat;
    QStackedWidget *stackedWidget;
    QWidget *pageList;
    QVBoxLayout *verticalLayout;
    QTreeWidget *worldTree;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *worldCheckAll;
    QToolButton *worldCheckNone;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *cellCat;
    QStackedWidget *stackedWidget_2;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *cellTree;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *cellCheckAll;
    QToolButton *cellCheckNone;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *copyReplaceRadio;
    QRadioButton *copyMergeRadio;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *pasteReplaceRadio;
    QRadioButton *pasteMergeRadio;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CopyPasteDialog)
    {
        if (CopyPasteDialog->objectName().isEmpty())
            CopyPasteDialog->setObjectName(QString::fromUtf8("CopyPasteDialog"));
        CopyPasteDialog->resize(555, 362);
        verticalLayout_3 = new QVBoxLayout(CopyPasteDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tabWidget = new QTabWidget(CopyPasteDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        worldCat = new QListWidget(tab);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(worldCat);
        __qlistwidgetitem->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(worldCat);
        __qlistwidgetitem1->setCheckState(Qt::Checked);
        __qlistwidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(worldCat);
        __qlistwidgetitem2->setCheckState(Qt::Checked);
        __qlistwidgetitem2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(worldCat);
        __qlistwidgetitem3->setCheckState(Qt::Checked);
        __qlistwidgetitem3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(worldCat);
        __qlistwidgetitem4->setCheckState(Qt::Checked);
        __qlistwidgetitem4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        worldCat->setObjectName(QString::fromUtf8("worldCat"));
        worldCat->setMaximumSize(QSize(180, 16777215));

        horizontalLayout->addWidget(worldCat);

        stackedWidget = new QStackedWidget(tab);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        pageList = new QWidget();
        pageList->setObjectName(QString::fromUtf8("pageList"));
        verticalLayout = new QVBoxLayout(pageList);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        worldTree = new QTreeWidget(pageList);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        worldTree->setHeaderItem(__qtreewidgetitem);
        worldTree->setObjectName(QString::fromUtf8("worldTree"));
        worldTree->setRootIsDecorated(false);
        worldTree->setHeaderHidden(true);
        worldTree->setColumnCount(2);

        verticalLayout->addWidget(worldTree);

        widget = new QWidget(pageList);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        worldCheckAll = new QToolButton(widget);
        worldCheckAll->setObjectName(QString::fromUtf8("worldCheckAll"));

        horizontalLayout_2->addWidget(worldCheckAll);

        worldCheckNone = new QToolButton(widget);
        worldCheckNone->setObjectName(QString::fromUtf8("worldCheckNone"));

        horizontalLayout_2->addWidget(worldCheckNone);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        stackedWidget->addWidget(pageList);

        horizontalLayout->addWidget(stackedWidget);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalLayout_3 = new QHBoxLayout(tab_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        cellCat = new QListWidget(tab_2);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(cellCat);
        __qlistwidgetitem5->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(cellCat);
        __qlistwidgetitem6->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(cellCat);
        __qlistwidgetitem7->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(cellCat);
        __qlistwidgetitem8->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(cellCat);
        __qlistwidgetitem9->setCheckState(Qt::Checked);
        cellCat->setObjectName(QString::fromUtf8("cellCat"));
        cellCat->setMaximumSize(QSize(180, 16777215));

        horizontalLayout_3->addWidget(cellCat);

        stackedWidget_2 = new QStackedWidget(tab_2);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        cellTree = new QTreeWidget(page);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem1->setText(0, QString::fromUtf8("1"));
        cellTree->setHeaderItem(__qtreewidgetitem1);
        cellTree->setObjectName(QString::fromUtf8("cellTree"));
        cellTree->setHeaderHidden(true);
        cellTree->setColumnCount(2);

        verticalLayout_2->addWidget(cellTree);

        widget_2 = new QWidget(page);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_4 = new QHBoxLayout(widget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        cellCheckAll = new QToolButton(widget_2);
        cellCheckAll->setObjectName(QString::fromUtf8("cellCheckAll"));

        horizontalLayout_4->addWidget(cellCheckAll);

        cellCheckNone = new QToolButton(widget_2);
        cellCheckNone->setObjectName(QString::fromUtf8("cellCheckNone"));

        horizontalLayout_4->addWidget(cellCheckNone);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget_2);

        stackedWidget_2->addWidget(page);

        horizontalLayout_3->addWidget(stackedWidget_2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_6 = new QVBoxLayout(tab_3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        copyReplaceRadio = new QRadioButton(groupBox);
        copyReplaceRadio->setObjectName(QString::fromUtf8("copyReplaceRadio"));
        copyReplaceRadio->setChecked(true);

        verticalLayout_4->addWidget(copyReplaceRadio);

        copyMergeRadio = new QRadioButton(groupBox);
        copyMergeRadio->setObjectName(QString::fromUtf8("copyMergeRadio"));

        verticalLayout_4->addWidget(copyMergeRadio);


        verticalLayout_6->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        pasteReplaceRadio = new QRadioButton(groupBox_2);
        pasteReplaceRadio->setObjectName(QString::fromUtf8("pasteReplaceRadio"));
        pasteReplaceRadio->setChecked(true);

        verticalLayout_5->addWidget(pasteReplaceRadio);

        pasteMergeRadio = new QRadioButton(groupBox_2);
        pasteMergeRadio->setObjectName(QString::fromUtf8("pasteMergeRadio"));

        verticalLayout_5->addWidget(pasteMergeRadio);


        verticalLayout_6->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        tabWidget->addTab(tab_3, QString());

        verticalLayout_3->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(CopyPasteDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(CopyPasteDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CopyPasteDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CopyPasteDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CopyPasteDialog);
    } // setupUi

    void retranslateUi(QDialog *CopyPasteDialog)
    {
        CopyPasteDialog->setWindowTitle(QApplication::translate("CopyPasteDialog", "Clipboard", nullptr));

        const bool __sortingEnabled = worldCat->isSortingEnabled();
        worldCat->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = worldCat->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("CopyPasteDialog", "Enums", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = worldCat->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("CopyPasteDialog", "Property Definitions", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = worldCat->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("CopyPasteDialog", "Templates", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = worldCat->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("CopyPasteDialog", "Object Types", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = worldCat->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("CopyPasteDialog", "Object Groups", nullptr));
        worldCat->setSortingEnabled(__sortingEnabled);

        worldCheckAll->setText(QApplication::translate("CopyPasteDialog", "Check All", nullptr));
        worldCheckNone->setText(QApplication::translate("CopyPasteDialog", "Check None", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("CopyPasteDialog", "World", nullptr));

        const bool __sortingEnabled1 = cellCat->isSortingEnabled();
        cellCat->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem5 = cellCat->item(0);
        ___qlistwidgetitem5->setText(QApplication::translate("CopyPasteDialog", "Properties", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = cellCat->item(1);
        ___qlistwidgetitem6->setText(QApplication::translate("CopyPasteDialog", "Templates", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = cellCat->item(2);
        ___qlistwidgetitem7->setText(QApplication::translate("CopyPasteDialog", "Lots", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = cellCat->item(3);
        ___qlistwidgetitem8->setText(QApplication::translate("CopyPasteDialog", "Objects", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = cellCat->item(4);
        ___qlistwidgetitem9->setText(QApplication::translate("CopyPasteDialog", "Map", nullptr));
        cellCat->setSortingEnabled(__sortingEnabled1);

        cellCheckAll->setText(QApplication::translate("CopyPasteDialog", "Check All", nullptr));
        cellCheckNone->setText(QApplication::translate("CopyPasteDialog", "Check None", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("CopyPasteDialog", "Cells", nullptr));
        groupBox->setTitle(QApplication::translate("CopyPasteDialog", "Copying", nullptr));
        copyReplaceRadio->setText(QApplication::translate("CopyPasteDialog", "Replace clipboard contents with stuff being copied", nullptr));
        copyMergeRadio->setText(QApplication::translate("CopyPasteDialog", "Merge clipboard contents with stuff being copied", nullptr));
        groupBox_2->setTitle(QApplication::translate("CopyPasteDialog", "Pasting", nullptr));
        pasteReplaceRadio->setText(QApplication::translate("CopyPasteDialog", "Replace cell contents with stuff being pasted", nullptr));
        pasteMergeRadio->setText(QApplication::translate("CopyPasteDialog", "Merge cell contents with stuff being pasted", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("CopyPasteDialog", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CopyPasteDialog: public Ui_CopyPasteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COPYPASTEDIALOG_H
