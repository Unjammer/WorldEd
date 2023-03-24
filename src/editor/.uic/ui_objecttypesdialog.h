/********************************************************************************
** Form generated from reading UI file 'objecttypesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJECTTYPESDIALOG_H
#define UI_OBJECTTYPESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ObjectTypesDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QListWidget *typesView;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *nameEdit;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *updateButton;
    QPushButton *removeButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ObjectTypesDialog)
    {
        if (ObjectTypesDialog->objectName().isEmpty())
            ObjectTypesDialog->setObjectName(QString::fromUtf8("ObjectTypesDialog"));
        ObjectTypesDialog->resize(323, 358);
        gridLayout = new QGridLayout(ObjectTypesDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(ObjectTypesDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        typesView = new QListWidget(groupBox);
        typesView->setObjectName(QString::fromUtf8("typesView"));

        gridLayout_2->addWidget(typesView, 0, 0, 1, 1);

        frame_2 = new QFrame(groupBox);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        nameEdit = new QLineEdit(frame_2);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        horizontalLayout_2->addWidget(nameEdit);


        gridLayout_2->addWidget(frame_2, 1, 0, 1, 1);

        frame = new QFrame(groupBox);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addButton = new QPushButton(frame);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setAutoDefault(false);

        horizontalLayout->addWidget(addButton);

        updateButton = new QPushButton(frame);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        updateButton->setAutoDefault(false);

        horizontalLayout->addWidget(updateButton);

        removeButton = new QPushButton(frame);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setAutoDefault(false);

        horizontalLayout->addWidget(removeButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_2->addWidget(frame, 2, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ObjectTypesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(ObjectTypesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ObjectTypesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ObjectTypesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ObjectTypesDialog);
    } // setupUi

    void retranslateUi(QDialog *ObjectTypesDialog)
    {
        ObjectTypesDialog->setWindowTitle(QApplication::translate("ObjectTypesDialog", "Object Types", nullptr));
        groupBox->setTitle(QApplication::translate("ObjectTypesDialog", "Object Types", nullptr));
        label->setText(QApplication::translate("ObjectTypesDialog", "Name:", nullptr));
        nameEdit->setPlaceholderText(QApplication::translate("ObjectTypesDialog", "Enter a name for the object type", nullptr));
        addButton->setText(QApplication::translate("ObjectTypesDialog", "Add", nullptr));
        updateButton->setText(QApplication::translate("ObjectTypesDialog", "Update", nullptr));
        removeButton->setText(QApplication::translate("ObjectTypesDialog", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ObjectTypesDialog: public Ui_ObjectTypesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJECTTYPESDIALOG_H
