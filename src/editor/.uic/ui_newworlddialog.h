/********************************************************************************
** Form generated from reading UI file 'newworlddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWWORLDDIALOG_H
#define UI_NEWWORLDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_NewWorldDialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *widthSpinBox;
    QLabel *label_2;
    QSpinBox *heightSpinBox;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *NewWorldDialog)
    {
        if (NewWorldDialog->objectName().isEmpty())
            NewWorldDialog->setObjectName(QString::fromUtf8("NewWorldDialog"));
        NewWorldDialog->resize(212, 132);
        gridLayout_2 = new QGridLayout(NewWorldDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(NewWorldDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        widthSpinBox = new QSpinBox(groupBox);
        widthSpinBox->setObjectName(QString::fromUtf8("widthSpinBox"));
        widthSpinBox->setMinimumSize(QSize(80, 0));
        widthSpinBox->setMinimum(1);
        widthSpinBox->setMaximum(512);
        widthSpinBox->setValue(10);

        gridLayout->addWidget(widthSpinBox, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        heightSpinBox = new QSpinBox(groupBox);
        heightSpinBox->setObjectName(QString::fromUtf8("heightSpinBox"));
        heightSpinBox->setMinimumSize(QSize(80, 0));
        heightSpinBox->setMinimum(1);
        heightSpinBox->setMaximum(512);
        heightSpinBox->setValue(10);

        gridLayout->addWidget(heightSpinBox, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(NewWorldDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(NewWorldDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewWorldDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewWorldDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewWorldDialog);
    } // setupUi

    void retranslateUi(QDialog *NewWorldDialog)
    {
        NewWorldDialog->setWindowTitle(QApplication::translate("NewWorldDialog", "New World", nullptr));
        groupBox->setTitle(QApplication::translate("NewWorldDialog", "World size", nullptr));
        label->setText(QApplication::translate("NewWorldDialog", "Width:", nullptr));
        widthSpinBox->setSuffix(QApplication::translate("NewWorldDialog", " cells", nullptr));
        label_2->setText(QApplication::translate("NewWorldDialog", "Height:", nullptr));
        heightSpinBox->setSuffix(QApplication::translate("NewWorldDialog", " cells", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewWorldDialog: public Ui_NewWorldDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWWORLDDIALOG_H
