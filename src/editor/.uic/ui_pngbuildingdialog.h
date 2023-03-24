/********************************************************************************
** Form generated from reading UI file 'pngbuildingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PNGBUILDINGDIALOG_H
#define UI_PNGBUILDINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include "colorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_PNGBuildingDialog
{
public:
    QGridLayout *gridLayout;
    QCheckBox *buildingsCheckBox;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *pngEdit;
    QToolButton *pngBrowse;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    Tiled::Internal::ColorButton *color;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QCheckBox *treesCheckBox;
    QCheckBox *onlyTreesCheckBox;

    void setupUi(QDialog *PNGBuildingDialog)
    {
        if (PNGBuildingDialog->objectName().isEmpty())
            PNGBuildingDialog->setObjectName(QString::fromUtf8("PNGBuildingDialog"));
        PNGBuildingDialog->resize(458, 227);
        gridLayout = new QGridLayout(PNGBuildingDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buildingsCheckBox = new QCheckBox(PNGBuildingDialog);
        buildingsCheckBox->setObjectName(QString::fromUtf8("buildingsCheckBox"));
        buildingsCheckBox->setChecked(true);

        gridLayout->addWidget(buildingsCheckBox, 1, 0, 1, 1);

        groupBox = new QGroupBox(PNGBuildingDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pngEdit = new QLineEdit(groupBox);
        pngEdit->setObjectName(QString::fromUtf8("pngEdit"));
        pngEdit->setReadOnly(true);

        horizontalLayout->addWidget(pngEdit);

        pngBrowse = new QToolButton(groupBox);
        pngBrowse->setObjectName(QString::fromUtf8("pngBrowse"));

        horizontalLayout->addWidget(pngBrowse);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(PNGBuildingDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 7, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(PNGBuildingDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        color = new Tiled::Internal::ColorButton(PNGBuildingDialog);
        color->setObjectName(QString::fromUtf8("color"));

        horizontalLayout_2->addWidget(color);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        treesCheckBox = new QCheckBox(PNGBuildingDialog);
        treesCheckBox->setObjectName(QString::fromUtf8("treesCheckBox"));
        treesCheckBox->setChecked(true);

        gridLayout->addWidget(treesCheckBox, 4, 0, 1, 1);

        onlyTreesCheckBox = new QCheckBox(PNGBuildingDialog);
        onlyTreesCheckBox->setObjectName(QString::fromUtf8("onlyTreesCheckBox"));

        gridLayout->addWidget(onlyTreesCheckBox, 5, 0, 1, 1);


        retranslateUi(PNGBuildingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PNGBuildingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PNGBuildingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PNGBuildingDialog);
    } // setupUi

    void retranslateUi(QDialog *PNGBuildingDialog)
    {
        PNGBuildingDialog->setWindowTitle(QApplication::translate("PNGBuildingDialog", "Buildings To PNG", nullptr));
        buildingsCheckBox->setText(QApplication::translate("PNGBuildingDialog", "Buildings", nullptr));
        groupBox->setTitle(QApplication::translate("PNGBuildingDialog", "PNG Output File:", nullptr));
        pngBrowse->setText(QApplication::translate("PNGBuildingDialog", "...", nullptr));
        label->setText(QApplication::translate("PNGBuildingDialog", "Building Color:", nullptr));
        color->setText(QApplication::translate("PNGBuildingDialog", "...", nullptr));
        treesCheckBox->setText(QApplication::translate("PNGBuildingDialog", "Trees", nullptr));
        onlyTreesCheckBox->setText(QApplication::translate("PNGBuildingDialog", "Only Trees", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PNGBuildingDialog: public Ui_PNGBuildingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PNGBUILDINGDIALOG_H
