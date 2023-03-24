/********************************************************************************
** Form generated from reading UI file 'generatelotsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATELOTSDIALOG_H
#define UI_GENERATELOTSDIALOG_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GenerateLotsDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *exportEdit;
    QToolButton *exportBrowse;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *spawnEdit;
    QToolButton *spawnBrowse;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *xOrigin;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *yOrigin;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *tiledefEdit;
    QToolButton *tiledefBrowse;

    void setupUi(QDialog *GenerateLotsDialog)
    {
        if (GenerateLotsDialog->objectName().isEmpty())
            GenerateLotsDialog->setObjectName(QString::fromUtf8("GenerateLotsDialog"));
        GenerateLotsDialog->resize(400, 350);
        gridLayout = new QGridLayout(GenerateLotsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(GenerateLotsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        exportEdit = new QLineEdit(groupBox);
        exportEdit->setObjectName(QString::fromUtf8("exportEdit"));
        exportEdit->setReadOnly(true);

        horizontalLayout->addWidget(exportEdit);

        exportBrowse = new QToolButton(groupBox);
        exportBrowse->setObjectName(QString::fromUtf8("exportBrowse"));

        horizontalLayout->addWidget(exportBrowse);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(GenerateLotsDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        spawnEdit = new QLineEdit(groupBox_2);
        spawnEdit->setObjectName(QString::fromUtf8("spawnEdit"));
        spawnEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(spawnEdit);

        spawnBrowse = new QToolButton(groupBox_2);
        spawnBrowse->setObjectName(QString::fromUtf8("spawnBrowse"));

        horizontalLayout_2->addWidget(spawnBrowse);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(GenerateLotsDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        xOrigin = new QSpinBox(groupBox_3);
        xOrigin->setObjectName(QString::fromUtf8("xOrigin"));
        xOrigin->setMinimumSize(QSize(80, 0));
        xOrigin->setMinimum(-1000);
        xOrigin->setMaximum(1000);

        horizontalLayout_3->addWidget(xOrigin);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        yOrigin = new QSpinBox(groupBox_3);
        yOrigin->setObjectName(QString::fromUtf8("yOrigin"));
        yOrigin->setMinimumSize(QSize(80, 0));
        yOrigin->setMinimum(-1000);
        yOrigin->setMaximum(1000);

        horizontalLayout_4->addWidget(yOrigin);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_5);


        gridLayout->addWidget(groupBox_3, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        buttonBox = new QDialogButtonBox(GenerateLotsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 1);

        groupBox_4 = new QGroupBox(GenerateLotsDialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_4->addWidget(label_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        tiledefEdit = new QLineEdit(groupBox_4);
        tiledefEdit->setObjectName(QString::fromUtf8("tiledefEdit"));
        tiledefEdit->setReadOnly(true);

        horizontalLayout_6->addWidget(tiledefEdit);

        tiledefBrowse = new QToolButton(groupBox_4);
        tiledefBrowse->setObjectName(QString::fromUtf8("tiledefBrowse"));

        horizontalLayout_6->addWidget(tiledefBrowse);


        verticalLayout_4->addLayout(horizontalLayout_6);


        gridLayout->addWidget(groupBox_4, 2, 0, 1, 1);


        retranslateUi(GenerateLotsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GenerateLotsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GenerateLotsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GenerateLotsDialog);
    } // setupUi

    void retranslateUi(QDialog *GenerateLotsDialog)
    {
        GenerateLotsDialog->setWindowTitle(QApplication::translate("GenerateLotsDialog", "Generate Lots", nullptr));
        groupBox->setTitle(QApplication::translate("GenerateLotsDialog", "Lots directory:", nullptr));
        label->setText(QApplication::translate("GenerateLotsDialog", "This is the directory that .lot files will be created in.", nullptr));
        exportBrowse->setText(QApplication::translate("GenerateLotsDialog", "...", nullptr));
        groupBox_2->setTitle(QApplication::translate("GenerateLotsDialog", "Zombie Spawn Map image:", nullptr));
        spawnBrowse->setText(QApplication::translate("GenerateLotsDialog", "...", nullptr));
        groupBox_3->setTitle(QApplication::translate("GenerateLotsDialog", "World Origin", nullptr));
        label_2->setText(QApplication::translate("GenerateLotsDialog", "The world origin affects the names of generated files.", nullptr));
        label_3->setText(QApplication::translate("GenerateLotsDialog", "X:", nullptr));
        label_4->setText(QApplication::translate("GenerateLotsDialog", "Y:", nullptr));
        groupBox_4->setTitle(QApplication::translate("GenerateLotsDialog", "Tile Definitions (.tiles) Folder", nullptr));
        label_5->setText(QApplication::translate("GenerateLotsDialog", "The folder containing newtiledefinitions.tiles.", nullptr));
        tiledefBrowse->setText(QApplication::translate("GenerateLotsDialog", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GenerateLotsDialog: public Ui_GenerateLotsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATELOTSDIALOG_H
