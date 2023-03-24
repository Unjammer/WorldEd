/********************************************************************************
** Form generated from reading UI file 'writeworldobjectsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITEWORLDOBJECTSDIALOG_H
#define UI_WRITEWORLDOBJECTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_WriteWorldObjectsDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *fileName;
    QToolButton *browse;
    QLabel *label;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *WriteWorldObjectsDialog)
    {
        if (WriteWorldObjectsDialog->objectName().isEmpty())
            WriteWorldObjectsDialog->setObjectName(QString::fromUtf8("WriteWorldObjectsDialog"));
        WriteWorldObjectsDialog->resize(400, 150);
        gridLayout = new QGridLayout(WriteWorldObjectsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(WriteWorldObjectsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        groupBox = new QGroupBox(WriteWorldObjectsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        fileName = new QLineEdit(groupBox);
        fileName->setObjectName(QString::fromUtf8("fileName"));
        fileName->setReadOnly(true);

        horizontalLayout->addWidget(fileName);

        browse = new QToolButton(groupBox);
        browse->setObjectName(QString::fromUtf8("browse"));

        horizontalLayout->addWidget(browse);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(WriteWorldObjectsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), WriteWorldObjectsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WriteWorldObjectsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(WriteWorldObjectsDialog);
    } // setupUi

    void retranslateUi(QDialog *WriteWorldObjectsDialog)
    {
        WriteWorldObjectsDialog->setWindowTitle(QApplication::translate("WriteWorldObjectsDialog", "Write World Objects", nullptr));
        groupBox->setTitle(QApplication::translate("WriteWorldObjectsDialog", "World Objects", nullptr));
        browse->setText(QApplication::translate("WriteWorldObjectsDialog", "...", nullptr));
        label->setText(QApplication::translate("WriteWorldObjectsDialog", "Choose a .lua file to save the objects into.  Every time this world is saved, the lua file will be updated.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WriteWorldObjectsDialog: public Ui_WriteWorldObjectsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITEWORLDOBJECTSDIALOG_H
