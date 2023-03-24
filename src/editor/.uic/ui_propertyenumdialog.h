/********************************************************************************
** Form generated from reading UI file 'propertyenumdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTYENUMDIALOG_H
#define UI_PROPERTYENUMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PropertyEnumDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QListWidget *choiceList;
    QHBoxLayout *buttonLayout_2;
    QToolButton *addChoice;
    QToolButton *removeChoice;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *multiCheckBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QListWidget *enumList;
    QHBoxLayout *buttonLayout;
    QToolButton *addEnum;
    QToolButton *removeEnum;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *buttonsLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PropertyEnumDialog)
    {
        if (PropertyEnumDialog->objectName().isEmpty())
            PropertyEnumDialog->setObjectName(QString::fromUtf8("PropertyEnumDialog"));
        PropertyEnumDialog->resize(483, 300);
        gridLayout = new QGridLayout(PropertyEnumDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_2 = new QGroupBox(PropertyEnumDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        choiceList = new QListWidget(groupBox_2);
        choiceList->setObjectName(QString::fromUtf8("choiceList"));

        verticalLayout_2->addWidget(choiceList);

        buttonLayout_2 = new QHBoxLayout();
        buttonLayout_2->setObjectName(QString::fromUtf8("buttonLayout_2"));
        addChoice = new QToolButton(groupBox_2);
        addChoice->setObjectName(QString::fromUtf8("addChoice"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/22x22/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addChoice->setIcon(icon);

        buttonLayout_2->addWidget(addChoice);

        removeChoice = new QToolButton(groupBox_2);
        removeChoice->setObjectName(QString::fromUtf8("removeChoice"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/22x22/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeChoice->setIcon(icon1);

        buttonLayout_2->addWidget(removeChoice);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(buttonLayout_2);

        multiCheckBox = new QCheckBox(groupBox_2);
        multiCheckBox->setObjectName(QString::fromUtf8("multiCheckBox"));

        verticalLayout_2->addWidget(multiCheckBox);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox = new QGroupBox(PropertyEnumDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        enumList = new QListWidget(groupBox);
        enumList->setObjectName(QString::fromUtf8("enumList"));

        verticalLayout->addWidget(enumList);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        addEnum = new QToolButton(groupBox);
        addEnum->setObjectName(QString::fromUtf8("addEnum"));
        addEnum->setIcon(icon);

        buttonLayout->addWidget(addEnum);

        removeEnum = new QToolButton(groupBox);
        removeEnum->setObjectName(QString::fromUtf8("removeEnum"));
        removeEnum->setIcon(icon1);

        buttonLayout->addWidget(removeEnum);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(buttonLayout);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        buttonsLayout = new QHBoxLayout();
        buttonsLayout->setObjectName(QString::fromUtf8("buttonsLayout"));
        buttonBox = new QDialogButtonBox(PropertyEnumDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        buttonsLayout->addWidget(buttonBox);


        gridLayout->addLayout(buttonsLayout, 1, 0, 1, 2);


        retranslateUi(PropertyEnumDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PropertyEnumDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PropertyEnumDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PropertyEnumDialog);
    } // setupUi

    void retranslateUi(QDialog *PropertyEnumDialog)
    {
        PropertyEnumDialog->setWindowTitle(QApplication::translate("PropertyEnumDialog", "Property Enums", nullptr));
        groupBox_2->setTitle(QApplication::translate("PropertyEnumDialog", "Choices", nullptr));
        addChoice->setText(QApplication::translate("PropertyEnumDialog", "...", nullptr));
        removeChoice->setText(QApplication::translate("PropertyEnumDialog", "...", nullptr));
        multiCheckBox->setText(QApplication::translate("PropertyEnumDialog", "Multiple selection", nullptr));
        groupBox->setTitle(QApplication::translate("PropertyEnumDialog", "Enums", nullptr));
        addEnum->setText(QApplication::translate("PropertyEnumDialog", "...", nullptr));
        removeEnum->setText(QApplication::translate("PropertyEnumDialog", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PropertyEnumDialog: public Ui_PropertyEnumDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTYENUMDIALOG_H
