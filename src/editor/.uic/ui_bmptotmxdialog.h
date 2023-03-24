/********************************************************************************
** Form generated from reading UI file 'bmptotmxdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BMPTOTMXDIALOG_H
#define UI_BMPTOTMXDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BMPToTMXDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QCheckBox *assignMapCheckBox;
    QCheckBox *warnUnknownColors;
    QRadioButton *replaceExisting;
    QRadioButton *updateExisting;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *exportEdit;
    QToolButton *exportBrowse;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *mapbaseEdit;
    QToolButton *mapbaseBrowse;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *blendsEdit;
    QToolButton *blendsBrowse;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *rulesEdit;
    QToolButton *rulesBrowse;

    void setupUi(QDialog *BMPToTMXDialog)
    {
        if (BMPToTMXDialog->objectName().isEmpty())
            BMPToTMXDialog->setObjectName(QString::fromUtf8("BMPToTMXDialog"));
        BMPToTMXDialog->resize(438, 380);
        gridLayout = new QGridLayout(BMPToTMXDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        assignMapCheckBox = new QCheckBox(BMPToTMXDialog);
        assignMapCheckBox->setObjectName(QString::fromUtf8("assignMapCheckBox"));

        formLayout->setWidget(0, QFormLayout::LabelRole, assignMapCheckBox);

        warnUnknownColors = new QCheckBox(BMPToTMXDialog);
        warnUnknownColors->setObjectName(QString::fromUtf8("warnUnknownColors"));

        formLayout->setWidget(1, QFormLayout::LabelRole, warnUnknownColors);

        replaceExisting = new QRadioButton(BMPToTMXDialog);
        replaceExisting->setObjectName(QString::fromUtf8("replaceExisting"));

        formLayout->setWidget(0, QFormLayout::FieldRole, replaceExisting);

        updateExisting = new QRadioButton(BMPToTMXDialog);
        updateExisting->setObjectName(QString::fromUtf8("updateExisting"));

        formLayout->setWidget(1, QFormLayout::FieldRole, updateExisting);


        gridLayout->addLayout(formLayout, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        buttonBox = new QDialogButtonBox(BMPToTMXDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 7, 0, 1, 1);

        groupBox = new QGroupBox(BMPToTMXDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        exportEdit = new QLineEdit(widget);
        exportEdit->setObjectName(QString::fromUtf8("exportEdit"));
        exportEdit->setReadOnly(true);

        horizontalLayout->addWidget(exportEdit);

        exportBrowse = new QToolButton(widget);
        exportBrowse->setObjectName(QString::fromUtf8("exportBrowse"));

        horizontalLayout->addWidget(exportBrowse);


        verticalLayout->addWidget(widget);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(BMPToTMXDialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        widget_4 = new QWidget(groupBox_4);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        mapbaseEdit = new QLineEdit(widget_4);
        mapbaseEdit->setObjectName(QString::fromUtf8("mapbaseEdit"));
        mapbaseEdit->setReadOnly(true);

        horizontalLayout_4->addWidget(mapbaseEdit);

        mapbaseBrowse = new QToolButton(widget_4);
        mapbaseBrowse->setObjectName(QString::fromUtf8("mapbaseBrowse"));

        horizontalLayout_4->addWidget(mapbaseBrowse);


        verticalLayout_4->addWidget(widget_4);


        gridLayout->addWidget(groupBox_4, 3, 0, 1, 1);

        groupBox_3 = new QGroupBox(BMPToTMXDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_3 = new QWidget(groupBox_3);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        blendsEdit = new QLineEdit(widget_3);
        blendsEdit->setObjectName(QString::fromUtf8("blendsEdit"));
        blendsEdit->setReadOnly(true);

        horizontalLayout_3->addWidget(blendsEdit);

        blendsBrowse = new QToolButton(widget_3);
        blendsBrowse->setObjectName(QString::fromUtf8("blendsBrowse"));

        horizontalLayout_3->addWidget(blendsBrowse);


        verticalLayout_3->addWidget(widget_3);


        gridLayout->addWidget(groupBox_3, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(BMPToTMXDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_2 = new QWidget(groupBox_2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        rulesEdit = new QLineEdit(widget_2);
        rulesEdit->setObjectName(QString::fromUtf8("rulesEdit"));
        rulesEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(rulesEdit);

        rulesBrowse = new QToolButton(widget_2);
        rulesBrowse->setObjectName(QString::fromUtf8("rulesBrowse"));

        horizontalLayout_2->addWidget(rulesBrowse);


        verticalLayout_2->addWidget(widget_2);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);


        retranslateUi(BMPToTMXDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BMPToTMXDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BMPToTMXDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(BMPToTMXDialog);
    } // setupUi

    void retranslateUi(QDialog *BMPToTMXDialog)
    {
        BMPToTMXDialog->setWindowTitle(QApplication::translate("BMPToTMXDialog", "BMP To TMX", nullptr));
        assignMapCheckBox->setText(QApplication::translate("BMPToTMXDialog", "Assign generated maps to the world.", nullptr));
        warnUnknownColors->setText(QApplication::translate("BMPToTMXDialog", "Report unknown colors used in images", nullptr));
        replaceExisting->setText(QApplication::translate("BMPToTMXDialog", "Replace existing maps", nullptr));
        updateExisting->setText(QApplication::translate("BMPToTMXDialog", "Update existing maps", nullptr));
        groupBox->setTitle(QApplication::translate("BMPToTMXDialog", "Export directory:", nullptr));
        label->setText(QApplication::translate("BMPToTMXDialog", "This is the directory .tmx files will be created in.  Be careful because files in this directory may be overwritten!", nullptr));
        exportBrowse->setText(QApplication::translate("BMPToTMXDialog", "...", nullptr));
        groupBox_4->setTitle(QApplication::translate("BMPToTMXDialog", "MapBaseXML.txt file:", nullptr));
        mapbaseBrowse->setText(QApplication::translate("BMPToTMXDialog", "...", nullptr));
        groupBox_3->setTitle(QApplication::translate("BMPToTMXDialog", "Blends.txt file:", nullptr));
        blendsBrowse->setText(QApplication::translate("BMPToTMXDialog", "...", nullptr));
        groupBox_2->setTitle(QApplication::translate("BMPToTMXDialog", "Rules.txt file:", nullptr));
        rulesBrowse->setText(QApplication::translate("BMPToTMXDialog", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BMPToTMXDialog: public Ui_BMPToTMXDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BMPTOTMXDIALOG_H
