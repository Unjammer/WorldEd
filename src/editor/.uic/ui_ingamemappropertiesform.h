/********************************************************************************
** Form generated from reading UI file 'ingamemappropertiesform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGAMEMAPPROPERTIESFORM_H
#define UI_INGAMEMAPPROPERTIESFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InGameMapPropertiesForm
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *addButton;
    QToolButton *editButton;
    QToolButton *deleteButton;
    QToolButton *copyButton;
    QToolButton *pasteButton;

    void setupUi(QWidget *InGameMapPropertiesForm)
    {
        if (InGameMapPropertiesForm->objectName().isEmpty())
            InGameMapPropertiesForm->setObjectName(QString::fromUtf8("InGameMapPropertiesForm"));
        InGameMapPropertiesForm->resize(276, 240);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InGameMapPropertiesForm->sizePolicy().hasHeightForWidth());
        InGameMapPropertiesForm->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(InGameMapPropertiesForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(InGameMapPropertiesForm);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addButton = new QToolButton(InGameMapPropertiesForm);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(addButton);

        editButton = new QToolButton(InGameMapPropertiesForm);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        sizePolicy1.setHeightForWidth(editButton->sizePolicy().hasHeightForWidth());
        editButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(editButton);

        deleteButton = new QToolButton(InGameMapPropertiesForm);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        sizePolicy1.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(deleteButton);

        copyButton = new QToolButton(InGameMapPropertiesForm);
        copyButton->setObjectName(QString::fromUtf8("copyButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/16x16/edit-copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        copyButton->setIcon(icon);

        horizontalLayout->addWidget(copyButton);

        pasteButton = new QToolButton(InGameMapPropertiesForm);
        pasteButton->setObjectName(QString::fromUtf8("pasteButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/16x16/edit-paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton->setIcon(icon1);

        horizontalLayout->addWidget(pasteButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(InGameMapPropertiesForm);
        QObject::connect(addButton, SIGNAL(clicked()), InGameMapPropertiesForm, SLOT(onAddButton()));
        QObject::connect(listWidget, SIGNAL(itemSelectionChanged()), InGameMapPropertiesForm, SLOT(onSelectionChanged()));
        QObject::connect(editButton, SIGNAL(clicked()), InGameMapPropertiesForm, SLOT(onEditButton()));
        QObject::connect(deleteButton, SIGNAL(clicked()), InGameMapPropertiesForm, SLOT(onDeleteButton()));
        QObject::connect(copyButton, SIGNAL(clicked()), InGameMapPropertiesForm, SLOT(onCopy()));
        QObject::connect(pasteButton, SIGNAL(clicked()), InGameMapPropertiesForm, SLOT(onPaste()));

        QMetaObject::connectSlotsByName(InGameMapPropertiesForm);
    } // setupUi

    void retranslateUi(QWidget *InGameMapPropertiesForm)
    {
        InGameMapPropertiesForm->setWindowTitle(QApplication::translate("InGameMapPropertiesForm", "Form", nullptr));
        addButton->setText(QApplication::translate("InGameMapPropertiesForm", "Add", nullptr));
        editButton->setText(QApplication::translate("InGameMapPropertiesForm", "Edit", nullptr));
        deleteButton->setText(QApplication::translate("InGameMapPropertiesForm", "Delete", nullptr));
        copyButton->setText(QApplication::translate("InGameMapPropertiesForm", "...", nullptr));
        pasteButton->setText(QApplication::translate("InGameMapPropertiesForm", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InGameMapPropertiesForm: public Ui_InGameMapPropertiesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGAMEMAPPROPERTIESFORM_H
