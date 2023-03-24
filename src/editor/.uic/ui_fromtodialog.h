/********************************************************************************
** Form generated from reading UI file 'fromtodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FROMTODIALOG_H
#define UI_FROMTODIALOG_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FromToDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *destBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *dest;
    QToolButton *destBrowse;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *fileName;
    QToolButton *browse;
    QGroupBox *backupBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *backup;
    QToolButton *backupBrowse;

    void setupUi(QDialog *FromToDialog)
    {
        if (FromToDialog->objectName().isEmpty())
            FromToDialog->setObjectName(QString::fromUtf8("FromToDialog"));
        FromToDialog->resize(400, 322);
        gridLayout = new QGridLayout(FromToDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        destBox = new QGroupBox(FromToDialog);
        destBox->setObjectName(QString::fromUtf8("destBox"));
        destBox->setEnabled(false);
        destBox->setCheckable(true);
        destBox->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(destBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(destBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        dest = new QLineEdit(destBox);
        dest->setObjectName(QString::fromUtf8("dest"));

        horizontalLayout_2->addWidget(dest);

        destBrowse = new QToolButton(destBox);
        destBrowse->setObjectName(QString::fromUtf8("destBrowse"));

        horizontalLayout_2->addWidget(destBrowse);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout->addWidget(destBox, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(FromToDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 1);

        groupBox = new QGroupBox(FromToDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        fileName = new QLineEdit(groupBox);
        fileName->setObjectName(QString::fromUtf8("fileName"));

        horizontalLayout->addWidget(fileName);

        browse = new QToolButton(groupBox);
        browse->setObjectName(QString::fromUtf8("browse"));

        horizontalLayout->addWidget(browse);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        backupBox = new QGroupBox(FromToDialog);
        backupBox->setObjectName(QString::fromUtf8("backupBox"));
        backupBox->setEnabled(false);
        backupBox->setCheckable(true);
        backupBox->setChecked(false);
        verticalLayout_3 = new QVBoxLayout(backupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(backupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        backup = new QLineEdit(backupBox);
        backup->setObjectName(QString::fromUtf8("backup"));

        horizontalLayout_3->addWidget(backup);

        backupBrowse = new QToolButton(backupBox);
        backupBrowse->setObjectName(QString::fromUtf8("backupBrowse"));

        horizontalLayout_3->addWidget(backupBrowse);


        verticalLayout_3->addLayout(horizontalLayout_3);


        gridLayout->addWidget(backupBox, 2, 0, 1, 1);


        retranslateUi(FromToDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FromToDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FromToDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FromToDialog);
    } // setupUi

    void retranslateUi(QDialog *FromToDialog)
    {
        FromToDialog->setWindowTitle(QApplication::translate("FromToDialog", "Alias Fixup", nullptr));
        destBox->setTitle(QApplication::translate("FromToDialog", "Write changed files to another directory", nullptr));
        label_2->setText(QApplication::translate("FromToDialog", "Leave unchecked to overwrite existing maps.", nullptr));
        destBrowse->setText(QApplication::translate("FromToDialog", "...", nullptr));
        groupBox->setTitle(QApplication::translate("FromToDialog", "From/To File", nullptr));
        label->setText(QApplication::translate("FromToDialog", "Choose the file containing the \"fromto\" definitions.", nullptr));
        browse->setText(QApplication::translate("FromToDialog", "...", nullptr));
        backupBox->setTitle(QApplication::translate("FromToDialog", "Backup changed files to a directory", nullptr));
        label_3->setText(QApplication::translate("FromToDialog", "Leave unchecked not to create backups.  Backups end with .bak.", nullptr));
        backupBrowse->setText(QApplication::translate("FromToDialog", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FromToDialog: public Ui_FromToDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FROMTODIALOG_H
