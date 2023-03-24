/********************************************************************************
** Form generated from reading UI file 'generatelotsfailuredialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATELOTSFAILUREDIALOG_H
#define UI_GENERATELOTSFAILUREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_GenerateLotsFailureDialog
{
public:
    QListWidget *list;
    QLabel *prompt;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GenerateLotsFailureDialog)
    {
        if (GenerateLotsFailureDialog->objectName().isEmpty())
            GenerateLotsFailureDialog->setObjectName(QString::fromUtf8("GenerateLotsFailureDialog"));
        GenerateLotsFailureDialog->resize(668, 300);
        list = new QListWidget(GenerateLotsFailureDialog);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(10, 30, 651, 234));
        prompt = new QLabel(GenerateLotsFailureDialog);
        prompt->setObjectName(QString::fromUtf8("prompt"));
        prompt->setGeometry(QRect(10, 11, 382, 13));
        prompt->setWordWrap(true);
        buttonBox = new QDialogButtonBox(GenerateLotsFailureDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 270, 651, 23));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        retranslateUi(GenerateLotsFailureDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GenerateLotsFailureDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GenerateLotsFailureDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GenerateLotsFailureDialog);
    } // setupUi

    void retranslateUi(QDialog *GenerateLotsFailureDialog)
    {
        GenerateLotsFailureDialog->setWindowTitle(QApplication::translate("GenerateLotsFailureDialog", "Generate Lots Errors", nullptr));
        prompt->setText(QApplication::translate("GenerateLotsFailureDialog", "Errors occurred during Generate Lots!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GenerateLotsFailureDialog: public Ui_GenerateLotsFailureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATELOTSFAILUREDIALOG_H
