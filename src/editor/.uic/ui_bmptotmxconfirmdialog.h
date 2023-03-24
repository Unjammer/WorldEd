/********************************************************************************
** Form generated from reading UI file 'bmptotmxconfirmdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BMPTOTMXCONFIRMDIALOG_H
#define UI_BMPTOTMXCONFIRMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_BMPToTMXConfirmDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BMPToTMXConfirmDialog)
    {
        if (BMPToTMXConfirmDialog->objectName().isEmpty())
            BMPToTMXConfirmDialog->setObjectName(QString::fromUtf8("BMPToTMXConfirmDialog"));
        BMPToTMXConfirmDialog->resize(400, 300);
        gridLayout = new QGridLayout(BMPToTMXConfirmDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(BMPToTMXConfirmDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        treeWidget = new QTreeWidget(BMPToTMXConfirmDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->header()->setVisible(false);

        gridLayout->addWidget(treeWidget, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(BMPToTMXConfirmDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(BMPToTMXConfirmDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BMPToTMXConfirmDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BMPToTMXConfirmDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(BMPToTMXConfirmDialog);
    } // setupUi

    void retranslateUi(QDialog *BMPToTMXConfirmDialog)
    {
        BMPToTMXConfirmDialog->setWindowTitle(QApplication::translate("BMPToTMXConfirmDialog", "BMP To TMX Sanity Check", nullptr));
        label->setText(QApplication::translate("BMPToTMXConfirmDialog", "The files in the list below already exist and will be overwritten!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BMPToTMXConfirmDialog: public Ui_BMPToTMXConfirmDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BMPTOTMXCONFIRMDIALOG_H
