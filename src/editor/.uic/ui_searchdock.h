/********************************************************************************
** Form generated from reading UI file 'searchdock.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDOCK_H
#define UI_SEARCHDOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchDock
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QComboBox *combo1;
    QComboBox *combo2;
    QLineEdit *lineEdit;
    QListWidget *listWidget;

    void setupUi(QDockWidget *SearchDock)
    {
        if (SearchDock->objectName().isEmpty())
            SearchDock->setObjectName(QString::fromUtf8("SearchDock"));
        SearchDock->resize(400, 461);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dockWidgetContents->sizePolicy().hasHeightForWidth());
        dockWidgetContents->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        combo1 = new QComboBox(dockWidgetContents);
        combo1->addItem(QString());
        combo1->addItem(QString());
        combo1->setObjectName(QString::fromUtf8("combo1"));

        verticalLayout->addWidget(combo1);

        combo2 = new QComboBox(dockWidgetContents);
        combo2->setObjectName(QString::fromUtf8("combo2"));

        verticalLayout->addWidget(combo2);

        lineEdit = new QLineEdit(dockWidgetContents);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setClearButtonEnabled(true);

        verticalLayout->addWidget(lineEdit);

        listWidget = new QListWidget(dockWidgetContents);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        SearchDock->setWidget(dockWidgetContents);

        retranslateUi(SearchDock);

        QMetaObject::connectSlotsByName(SearchDock);
    } // setupUi

    void retranslateUi(QDockWidget *SearchDock)
    {
        SearchDock->setWindowTitle(QApplication::translate("SearchDock", "Search", nullptr));
        combo1->setItemText(0, QApplication::translate("SearchDock", "Object type", nullptr));
        combo1->setItemText(1, QApplication::translate("SearchDock", "Lot file name", nullptr));

    } // retranslateUi

};

namespace Ui {
    class SearchDock: public Ui_SearchDock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDOCK_H
