/********************************************************************************
** Form generated from reading UI file 'ingamemappropertydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGAMEMAPPROPERTYDIALOG_H
#define UI_INGAMEMAPPROPERTYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_InGameMapPropertyDialog
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *keyEdit;
    QLabel *label_2;
    QLineEdit *valueEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *InGameMapPropertyDialog)
    {
        if (InGameMapPropertyDialog->objectName().isEmpty())
            InGameMapPropertyDialog->setObjectName(QString::fromUtf8("InGameMapPropertyDialog"));
        InGameMapPropertyDialog->resize(238, 93);
        formLayout = new QFormLayout(InGameMapPropertyDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(InGameMapPropertyDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        keyEdit = new QLineEdit(InGameMapPropertyDialog);
        keyEdit->setObjectName(QString::fromUtf8("keyEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, keyEdit);

        label_2 = new QLabel(InGameMapPropertyDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        valueEdit = new QLineEdit(InGameMapPropertyDialog);
        valueEdit->setObjectName(QString::fromUtf8("valueEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, valueEdit);

        buttonBox = new QDialogButtonBox(InGameMapPropertyDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(2, QFormLayout::SpanningRole, buttonBox);


        retranslateUi(InGameMapPropertyDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), InGameMapPropertyDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), InGameMapPropertyDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(InGameMapPropertyDialog);
    } // setupUi

    void retranslateUi(QDialog *InGameMapPropertyDialog)
    {
        InGameMapPropertyDialog->setWindowTitle(QApplication::translate("InGameMapPropertyDialog", "Edit InGameMap Property", nullptr));
        label->setText(QApplication::translate("InGameMapPropertyDialog", "Key:", nullptr));
        label_2->setText(QApplication::translate("InGameMapPropertyDialog", "Value:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InGameMapPropertyDialog: public Ui_InGameMapPropertyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGAMEMAPPROPERTYDIALOG_H
