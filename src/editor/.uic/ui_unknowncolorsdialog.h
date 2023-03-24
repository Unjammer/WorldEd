/********************************************************************************
** Form generated from reading UI file 'unknowncolorsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNKNOWNCOLORSDIALOG_H
#define UI_UNKNOWNCOLORSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_UnknownColorsDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *prompt;
    QListWidget *list;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *UnknownColorsDialog)
    {
        if (UnknownColorsDialog->objectName().isEmpty())
            UnknownColorsDialog->setObjectName(QString::fromUtf8("UnknownColorsDialog"));
        UnknownColorsDialog->resize(400, 300);
        gridLayout = new QGridLayout(UnknownColorsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        prompt = new QLabel(UnknownColorsDialog);
        prompt->setObjectName(QString::fromUtf8("prompt"));
        prompt->setWordWrap(true);

        gridLayout->addWidget(prompt, 0, 0, 1, 1);

        list = new QListWidget(UnknownColorsDialog);
        list->setObjectName(QString::fromUtf8("list"));

        gridLayout->addWidget(list, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(UnknownColorsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(UnknownColorsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), UnknownColorsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), UnknownColorsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(UnknownColorsDialog);
    } // setupUi

    void retranslateUi(QDialog *UnknownColorsDialog)
    {
        UnknownColorsDialog->setWindowTitle(QApplication::translate("UnknownColorsDialog", "Unknown Colors Used", nullptr));
        prompt->setText(QApplication::translate("UnknownColorsDialog", "Some unknown colors were found in ???", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UnknownColorsDialog: public Ui_UnknownColorsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNKNOWNCOLORSDIALOG_H
