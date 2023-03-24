/********************************************************************************
** Form generated from reading UI file 'objectgroupsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJECTGROUPSDIALOG_H
#define UI_OBJECTGROUPSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <colorbutton.h>

QT_BEGIN_NAMESPACE

class Ui_ObjectGroupsDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QListWidget *view;
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
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *moveUp;
    QToolButton *moveDown;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    Tiled::Internal::ColorButton *colorButton;
    QFrame *line;
    QFrame *line_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *objectTypeCombo;
    QSpacerItem *horizontalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ObjectGroupsDialog)
    {
        if (ObjectGroupsDialog->objectName().isEmpty())
            ObjectGroupsDialog->setObjectName(QString::fromUtf8("ObjectGroupsDialog"));
        ObjectGroupsDialog->resize(323, 358);
        gridLayout = new QGridLayout(ObjectGroupsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(ObjectGroupsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        view = new QListWidget(groupBox);
        view->setObjectName(QString::fromUtf8("view"));

        gridLayout_2->addWidget(view, 0, 0, 1, 1);

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


        gridLayout_2->addWidget(frame_2, 5, 0, 1, 1);

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


        gridLayout_2->addWidget(frame, 6, 0, 1, 1);

        frame_3 = new QFrame(groupBox);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        moveUp = new QToolButton(frame_3);
        moveUp->setObjectName(QString::fromUtf8("moveUp"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/16x16/go-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveUp->setIcon(icon);

        horizontalLayout_3->addWidget(moveUp);

        moveDown = new QToolButton(frame_3);
        moveDown->setObjectName(QString::fromUtf8("moveDown"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/16x16/go-down.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveDown->setIcon(icon1);

        horizontalLayout_3->addWidget(moveDown);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        colorButton = new Tiled::Internal::ColorButton(frame_3);
        colorButton->setObjectName(QString::fromUtf8("colorButton"));

        horizontalLayout_3->addWidget(colorButton);


        gridLayout_2->addWidget(frame_3, 1, 0, 1, 1);

        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 2, 0, 1, 1);

        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 4, 0, 1, 1);

        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        objectTypeCombo = new QComboBox(widget);
        objectTypeCombo->setObjectName(QString::fromUtf8("objectTypeCombo"));

        horizontalLayout_4->addWidget(objectTypeCombo);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        gridLayout_2->addWidget(widget, 3, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ObjectGroupsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(ObjectGroupsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ObjectGroupsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ObjectGroupsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ObjectGroupsDialog);
    } // setupUi

    void retranslateUi(QDialog *ObjectGroupsDialog)
    {
        ObjectGroupsDialog->setWindowTitle(QApplication::translate("ObjectGroupsDialog", "Object Types", nullptr));
        groupBox->setTitle(QApplication::translate("ObjectGroupsDialog", "Object Groups", nullptr));
        label->setText(QApplication::translate("ObjectGroupsDialog", "Name:", nullptr));
        nameEdit->setPlaceholderText(QApplication::translate("ObjectGroupsDialog", "Enter a name for the object group", nullptr));
        addButton->setText(QApplication::translate("ObjectGroupsDialog", "Add", nullptr));
        updateButton->setText(QApplication::translate("ObjectGroupsDialog", "Update", nullptr));
        removeButton->setText(QApplication::translate("ObjectGroupsDialog", "Remove", nullptr));
        moveUp->setText(QApplication::translate("ObjectGroupsDialog", "...", nullptr));
        moveDown->setText(QApplication::translate("ObjectGroupsDialog", "...", nullptr));
        label_2->setText(QApplication::translate("ObjectGroupsDialog", "Color:", nullptr));
        colorButton->setText(QApplication::translate("ObjectGroupsDialog", "...", nullptr));
        label_3->setText(QApplication::translate("ObjectGroupsDialog", "Default Type:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ObjectGroupsDialog: public Ui_ObjectGroupsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJECTGROUPSDIALOG_H
