/********************************************************************************
** Form generated from reading UI file 'propertiesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIESDIALOG_H
#define UI_PROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PropertyDefinitionsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTreeWidget *definitionsList;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *removeDefButton;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabWidget_2;
    QWidget *tab1;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *defNameEdit;
    QLabel *label_2;
    QLineEdit *defDefaultEdit;
    QLabel *label_3;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *clearDefButton;
    QPushButton *addDefButton;
    QPushButton *updateDefButton;
    QSpacerItem *horizontalSpacer_2;
    QPlainTextEdit *defDescEdit;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *enumCombo;
    QToolButton *enumEdit;
    QWidget *tab2;
    QVBoxLayout *verticalLayout_3;
    QTreeView *usageView;
    QHBoxLayout *buttonsLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PropertyDefinitionsDialog)
    {
        if (PropertyDefinitionsDialog->objectName().isEmpty())
            PropertyDefinitionsDialog->setObjectName(QString::fromUtf8("PropertyDefinitionsDialog"));
        PropertyDefinitionsDialog->resize(400, 567);
        verticalLayout_2 = new QVBoxLayout(PropertyDefinitionsDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(PropertyDefinitionsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        definitionsList = new QTreeWidget(groupBox);
        definitionsList->setObjectName(QString::fromUtf8("definitionsList"));
        definitionsList->setMinimumSize(QSize(0, 200));
        definitionsList->setSelectionMode(QAbstractItemView::SingleSelection);
        definitionsList->setSelectionBehavior(QAbstractItemView::SelectRows);
        definitionsList->setIndentation(0);
        definitionsList->header()->setDefaultSectionSize(180);

        verticalLayout->addWidget(definitionsList);

        frame = new QFrame(groupBox);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        removeDefButton = new QPushButton(frame);
        removeDefButton->setObjectName(QString::fromUtf8("removeDefButton"));
        removeDefButton->setAutoDefault(false);

        horizontalLayout->addWidget(removeDefButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(frame);


        verticalLayout_2->addWidget(groupBox);

        tabWidget_2 = new QTabWidget(PropertyDefinitionsDialog);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        formLayout = new QFormLayout(tab1);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(tab1);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        defNameEdit = new QLineEdit(tab1);
        defNameEdit->setObjectName(QString::fromUtf8("defNameEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, defNameEdit);

        label_2 = new QLabel(tab1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        defDefaultEdit = new QLineEdit(tab1);
        defDefaultEdit->setObjectName(QString::fromUtf8("defDefaultEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, defDefaultEdit);

        label_3 = new QLabel(tab1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        frame_2 = new QFrame(tab1);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(0, 0));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        clearDefButton = new QPushButton(frame_2);
        clearDefButton->setObjectName(QString::fromUtf8("clearDefButton"));
        clearDefButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(clearDefButton);

        addDefButton = new QPushButton(frame_2);
        addDefButton->setObjectName(QString::fromUtf8("addDefButton"));
        addDefButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(addDefButton);

        updateDefButton = new QPushButton(frame_2);
        updateDefButton->setObjectName(QString::fromUtf8("updateDefButton"));
        updateDefButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(updateDefButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        formLayout->setWidget(6, QFormLayout::SpanningRole, frame_2);

        defDescEdit = new QPlainTextEdit(tab1);
        defDescEdit->setObjectName(QString::fromUtf8("defDescEdit"));
        defDescEdit->setMaximumSize(QSize(16777215, 72));
        defDescEdit->setTabChangesFocus(true);

        formLayout->setWidget(5, QFormLayout::SpanningRole, defDescEdit);

        label_4 = new QLabel(tab1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        enumCombo = new QComboBox(tab1);
        enumCombo->setObjectName(QString::fromUtf8("enumCombo"));

        horizontalLayout_3->addWidget(enumCombo);

        enumEdit = new QToolButton(tab1);
        enumEdit->setObjectName(QString::fromUtf8("enumEdit"));

        horizontalLayout_3->addWidget(enumEdit);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);

        tabWidget_2->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QString::fromUtf8("tab2"));
        verticalLayout_3 = new QVBoxLayout(tab2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        usageView = new QTreeView(tab2);
        usageView->setObjectName(QString::fromUtf8("usageView"));

        verticalLayout_3->addWidget(usageView);

        tabWidget_2->addTab(tab2, QString());

        verticalLayout_2->addWidget(tabWidget_2);

        buttonsLayout = new QHBoxLayout();
        buttonsLayout->setObjectName(QString::fromUtf8("buttonsLayout"));
        buttonBox = new QDialogButtonBox(PropertyDefinitionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        buttonsLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(buttonsLayout);

        QWidget::setTabOrder(definitionsList, removeDefButton);
        QWidget::setTabOrder(removeDefButton, tabWidget_2);
        QWidget::setTabOrder(tabWidget_2, defNameEdit);
        QWidget::setTabOrder(defNameEdit, defDefaultEdit);
        QWidget::setTabOrder(defDefaultEdit, defDescEdit);
        QWidget::setTabOrder(defDescEdit, clearDefButton);
        QWidget::setTabOrder(clearDefButton, addDefButton);
        QWidget::setTabOrder(addDefButton, updateDefButton);
        QWidget::setTabOrder(updateDefButton, usageView);

        retranslateUi(PropertyDefinitionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PropertyDefinitionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PropertyDefinitionsDialog, SLOT(reject()));

        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PropertyDefinitionsDialog);
    } // setupUi

    void retranslateUi(QDialog *PropertyDefinitionsDialog)
    {
        PropertyDefinitionsDialog->setWindowTitle(QApplication::translate("PropertyDefinitionsDialog", "Property Definitions", nullptr));
        groupBox->setTitle(QApplication::translate("PropertyDefinitionsDialog", "Property Definitions", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = definitionsList->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("PropertyDefinitionsDialog", "Default Value", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("PropertyDefinitionsDialog", "Name", nullptr));
        removeDefButton->setText(QApplication::translate("PropertyDefinitionsDialog", "Remove", nullptr));
        label->setText(QApplication::translate("PropertyDefinitionsDialog", "Name:", nullptr));
        defNameEdit->setPlaceholderText(QApplication::translate("PropertyDefinitionsDialog", "Enter a property name here", nullptr));
        label_2->setText(QApplication::translate("PropertyDefinitionsDialog", "Default value:", nullptr));
        defDefaultEdit->setPlaceholderText(QApplication::translate("PropertyDefinitionsDialog", "Enter the default value here", nullptr));
        label_3->setText(QApplication::translate("PropertyDefinitionsDialog", "Description:", nullptr));
        clearDefButton->setText(QApplication::translate("PropertyDefinitionsDialog", "Clear", nullptr));
        addDefButton->setText(QApplication::translate("PropertyDefinitionsDialog", "Add", nullptr));
        updateDefButton->setText(QApplication::translate("PropertyDefinitionsDialog", "Update", nullptr));
        label_4->setText(QApplication::translate("PropertyDefinitionsDialog", "Choices:", nullptr));
        enumEdit->setText(QApplication::translate("PropertyDefinitionsDialog", "Edit...", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab1), QApplication::translate("PropertyDefinitionsDialog", "Details", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab2), QApplication::translate("PropertyDefinitionsDialog", "Used By", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PropertyDefinitionsDialog: public Ui_PropertyDefinitionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIESDIALOG_H
