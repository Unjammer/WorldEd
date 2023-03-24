/********************************************************************************
** Form generated from reading UI file 'loadthumbnailsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADTHUMBNAILSDIALOG_H
#define UI_LOADTHUMBNAILSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoadThumbnailsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *LoadThumbnailsDialog)
    {
        if (LoadThumbnailsDialog->objectName().isEmpty())
            LoadThumbnailsDialog->setObjectName(QString::fromUtf8("LoadThumbnailsDialog"));
        LoadThumbnailsDialog->resize(237, 81);
        LoadThumbnailsDialog->setModal(true);
        verticalLayout = new QVBoxLayout(LoadThumbnailsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(LoadThumbnailsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(LoadThumbnailsDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(LoadThumbnailsDialog);

        QMetaObject::connectSlotsByName(LoadThumbnailsDialog);
    } // setupUi

    void retranslateUi(QDialog *LoadThumbnailsDialog)
    {
        LoadThumbnailsDialog->setWindowTitle(QApplication::translate("LoadThumbnailsDialog", "Load Thumbnails", nullptr));
        label->setText(QApplication::translate("LoadThumbnailsDialog", "Loading (x / y)", nullptr));
        pushButton->setText(QApplication::translate("LoadThumbnailsDialog", "Stop Loading Thumbnails", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadThumbnailsDialog: public Ui_LoadThumbnailsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADTHUMBNAILSDIALOG_H
