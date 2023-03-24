/********************************************************************************
** Form generated from reading UI file 'writespawnpointsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITESPAWNPOINTSDIALOG_H
#define UI_WRITESPAWNPOINTSDIALOG_H

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

class Ui_WriteSpawnPointsDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *fileName;
    QToolButton *browse;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *WriteSpawnPointsDialog)
    {
        if (WriteSpawnPointsDialog->objectName().isEmpty())
            WriteSpawnPointsDialog->setObjectName(QString::fromUtf8("WriteSpawnPointsDialog"));
        WriteSpawnPointsDialog->resize(418, 151);
        gridLayout = new QGridLayout(WriteSpawnPointsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(WriteSpawnPointsDialog);
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

        buttonBox = new QDialogButtonBox(WriteSpawnPointsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(WriteSpawnPointsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), WriteSpawnPointsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WriteSpawnPointsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(WriteSpawnPointsDialog);
    } // setupUi

    void retranslateUi(QDialog *WriteSpawnPointsDialog)
    {
        WriteSpawnPointsDialog->setWindowTitle(QApplication::translate("WriteSpawnPointsDialog", "Spawn Points", nullptr));
        groupBox->setTitle(QApplication::translate("WriteSpawnPointsDialog", "Spawn Points", nullptr));
        browse->setText(QApplication::translate("WriteSpawnPointsDialog", "...", nullptr));
        label->setText(QApplication::translate("WriteSpawnPointsDialog", "Choose a .lua file to save spawn points into.  Every time this world is saved, the spawn-points file will be updated.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WriteSpawnPointsDialog: public Ui_WriteSpawnPointsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITESPAWNPOINTSDIALOG_H
