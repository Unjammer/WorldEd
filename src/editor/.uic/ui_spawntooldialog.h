/********************************************************************************
** Form generated from reading UI file 'spawntooldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPAWNTOOLDIALOG_H
#define UI_SPAWNTOOLDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_SpawnToolDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *add;
    QToolButton *remove;
    QSpacerItem *horizontalSpacer;
    QListWidget *list;
    QLabel *label;

    void setupUi(QDialog *SpawnToolDialog)
    {
        if (SpawnToolDialog->objectName().isEmpty())
            SpawnToolDialog->setObjectName(QString::fromUtf8("SpawnToolDialog"));
        SpawnToolDialog->resize(194, 274);
        gridLayout = new QGridLayout(SpawnToolDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(4, 4, 4, 4);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        add = new QToolButton(SpawnToolDialog);
        add->setObjectName(QString::fromUtf8("add"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/22x22/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        add->setIcon(icon);
        add->setAutoRaise(true);

        horizontalLayout->addWidget(add);

        remove = new QToolButton(SpawnToolDialog);
        remove->setObjectName(QString::fromUtf8("remove"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/22x22/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        remove->setIcon(icon1);
        remove->setAutoRaise(true);

        horizontalLayout->addWidget(remove);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        list = new QListWidget(SpawnToolDialog);
        list->setObjectName(QString::fromUtf8("list"));

        gridLayout->addWidget(list, 1, 0, 1, 1);

        label = new QLabel(SpawnToolDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(SpawnToolDialog);

        QMetaObject::connectSlotsByName(SpawnToolDialog);
    } // setupUi

    void retranslateUi(QDialog *SpawnToolDialog)
    {
        SpawnToolDialog->setWindowTitle(QApplication::translate("SpawnToolDialog", "Spawn Point", nullptr));
#ifndef QT_NO_TOOLTIP
        add->setToolTip(QApplication::translate("SpawnToolDialog", "Add Profession", nullptr));
#endif // QT_NO_TOOLTIP
        add->setText(QApplication::translate("SpawnToolDialog", "Add", nullptr));
#ifndef QT_NO_TOOLTIP
        remove->setToolTip(QApplication::translate("SpawnToolDialog", "Remove Profession", nullptr));
#endif // QT_NO_TOOLTIP
        remove->setText(QApplication::translate("SpawnToolDialog", "Remove", nullptr));
        label->setText(QApplication::translate("SpawnToolDialog", "N Objects Selected", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpawnToolDialog: public Ui_SpawnToolDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPAWNTOOLDIALOG_H
