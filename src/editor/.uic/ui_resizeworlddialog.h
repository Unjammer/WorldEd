/********************************************************************************
** Form generated from reading UI file 'resizeworlddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESIZEWORLDDIALOG_H
#define UI_RESIZEWORLDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ResizeWorldDialog
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *oldWidth;
    QLabel *label_2;
    QLabel *oldHeight;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QSpinBox *widthSpinBox;
    QLabel *label_5;
    QSpinBox *heightSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ResizeWorldDialog)
    {
        if (ResizeWorldDialog->objectName().isEmpty())
            ResizeWorldDialog->setObjectName(QString::fromUtf8("ResizeWorldDialog"));
        ResizeWorldDialog->resize(314, 126);
        gridLayout_3 = new QGridLayout(ResizeWorldDialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(ResizeWorldDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        oldWidth = new QLabel(groupBox);
        oldWidth->setObjectName(QString::fromUtf8("oldWidth"));
        oldWidth->setMinimumSize(QSize(50, 0));

        gridLayout->addWidget(oldWidth, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        oldHeight = new QLabel(groupBox);
        oldHeight->setObjectName(QString::fromUtf8("oldHeight"));
        oldHeight->setMinimumSize(QSize(50, 0));

        gridLayout->addWidget(oldHeight, 1, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(ResizeWorldDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        widthSpinBox = new QSpinBox(groupBox_2);
        widthSpinBox->setObjectName(QString::fromUtf8("widthSpinBox"));
        widthSpinBox->setMinimumSize(QSize(80, 0));
        widthSpinBox->setMinimum(1);
        widthSpinBox->setMaximum(512);

        gridLayout_2->addWidget(widthSpinBox, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        heightSpinBox = new QSpinBox(groupBox_2);
        heightSpinBox->setObjectName(QString::fromUtf8("heightSpinBox"));
        heightSpinBox->setMinimumSize(QSize(80, 0));
        heightSpinBox->setMinimum(1);
        heightSpinBox->setMaximum(512);

        gridLayout_2->addWidget(heightSpinBox, 1, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(ResizeWorldDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 1, 0, 1, 2);


        retranslateUi(ResizeWorldDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ResizeWorldDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ResizeWorldDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ResizeWorldDialog);
    } // setupUi

    void retranslateUi(QDialog *ResizeWorldDialog)
    {
        ResizeWorldDialog->setWindowTitle(QApplication::translate("ResizeWorldDialog", "Resize World", nullptr));
        groupBox->setTitle(QApplication::translate("ResizeWorldDialog", "Old size", nullptr));
        label->setText(QApplication::translate("ResizeWorldDialog", "Width:", nullptr));
        oldWidth->setText(QApplication::translate("ResizeWorldDialog", "999", nullptr));
        label_2->setText(QApplication::translate("ResizeWorldDialog", "Height:", nullptr));
        oldHeight->setText(QApplication::translate("ResizeWorldDialog", "999", nullptr));
        groupBox_2->setTitle(QApplication::translate("ResizeWorldDialog", "New size", nullptr));
        label_6->setText(QApplication::translate("ResizeWorldDialog", "Width:", nullptr));
        widthSpinBox->setSuffix(QApplication::translate("ResizeWorldDialog", " cells", nullptr));
        label_5->setText(QApplication::translate("ResizeWorldDialog", "Height:", nullptr));
        heightSpinBox->setSuffix(QApplication::translate("ResizeWorldDialog", " cells", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResizeWorldDialog: public Ui_ResizeWorldDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESIZEWORLDDIALOG_H
