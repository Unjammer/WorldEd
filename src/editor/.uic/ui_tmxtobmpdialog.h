/********************************************************************************
** Form generated from reading UI file 'tmxtobmpdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TMXTOBMPDIALOG_H
#define UI_TMXTOBMPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TMXToBMPDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QCheckBox *updateMain;
    QSpacerItem *verticalSpacer;
    QGroupBox *buildingGroupBox;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *buildingEdit;
    QToolButton *buildingBrowse;
    QCheckBox *updateVeg;

    void setupUi(QDialog *TMXToBMPDialog)
    {
        if (TMXToBMPDialog->objectName().isEmpty())
            TMXToBMPDialog->setObjectName(QString::fromUtf8("TMXToBMPDialog"));
        TMXToBMPDialog->resize(463, 128);
        gridLayout = new QGridLayout(TMXToBMPDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(TMXToBMPDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 1, 1, 1);

        updateMain = new QCheckBox(TMXToBMPDialog);
        updateMain->setObjectName(QString::fromUtf8("updateMain"));

        gridLayout->addWidget(updateMain, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        buildingGroupBox = new QGroupBox(TMXToBMPDialog);
        buildingGroupBox->setObjectName(QString::fromUtf8("buildingGroupBox"));
        buildingGroupBox->setCheckable(true);
        verticalLayout_4 = new QVBoxLayout(buildingGroupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        widget_4 = new QWidget(buildingGroupBox);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        buildingEdit = new QLineEdit(widget_4);
        buildingEdit->setObjectName(QString::fromUtf8("buildingEdit"));
        buildingEdit->setReadOnly(true);

        horizontalLayout_4->addWidget(buildingEdit);

        buildingBrowse = new QToolButton(widget_4);
        buildingBrowse->setObjectName(QString::fromUtf8("buildingBrowse"));

        horizontalLayout_4->addWidget(buildingBrowse);


        verticalLayout_4->addWidget(widget_4);


        gridLayout->addWidget(buildingGroupBox, 2, 0, 1, 2);

        updateVeg = new QCheckBox(TMXToBMPDialog);
        updateVeg->setObjectName(QString::fromUtf8("updateVeg"));

        gridLayout->addWidget(updateVeg, 1, 0, 1, 1);


        retranslateUi(TMXToBMPDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TMXToBMPDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TMXToBMPDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TMXToBMPDialog);
    } // setupUi

    void retranslateUi(QDialog *TMXToBMPDialog)
    {
        TMXToBMPDialog->setWindowTitle(QApplication::translate("TMXToBMPDialog", "TMX To BMP", nullptr));
        updateMain->setText(QApplication::translate("TMXToBMPDialog", "Update 'main' image", nullptr));
        buildingGroupBox->setTitle(QApplication::translate("TMXToBMPDialog", "Buildings Image:", nullptr));
        buildingBrowse->setText(QApplication::translate("TMXToBMPDialog", "...", nullptr));
        updateVeg->setText(QApplication::translate("TMXToBMPDialog", "Update 'vegetation' image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TMXToBMPDialog: public Ui_TMXToBMPDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TMXTOBMPDIALOG_H
