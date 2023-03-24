/********************************************************************************
** Form generated from reading UI file 'templatesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPLATESDIALOG_H
#define UI_TEMPLATESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "propertiesdock.h"

QT_BEGIN_NAMESPACE

class Ui_TemplatesDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    PropertiesView *propertiesView;
    QPlainTextEdit *propertyDesc;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QListWidget *templatesView;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *removeTemplate;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *templateName;
    QLabel *label_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *clearTemplate;
    QPushButton *addTemplate;
    QPushButton *updateTemplate;
    QSpacerItem *horizontalSpacer_2;
    QPlainTextEdit *templateDesc;
    QWidget *tab_2;
    QHBoxLayout *buttonsLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TemplatesDialog)
    {
        if (TemplatesDialog->objectName().isEmpty())
            TemplatesDialog->setObjectName(QString::fromUtf8("TemplatesDialog"));
        TemplatesDialog->resize(621, 452);
        gridLayout = new QGridLayout(TemplatesDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_2 = new QGroupBox(TemplatesDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        propertiesView = new PropertiesView(groupBox_2);
        propertiesView->setObjectName(QString::fromUtf8("propertiesView"));

        verticalLayout->addWidget(propertiesView);

        propertyDesc = new QPlainTextEdit(groupBox_2);
        propertyDesc->setObjectName(QString::fromUtf8("propertyDesc"));
        propertyDesc->setMaximumSize(QSize(16777215, 64));
        propertyDesc->setReadOnly(true);

        verticalLayout->addWidget(propertyDesc);


        gridLayout->addWidget(groupBox_2, 0, 1, 2, 1);

        groupBox = new QGroupBox(TemplatesDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(276, 16777215));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        templatesView = new QListWidget(groupBox);
        templatesView->setObjectName(QString::fromUtf8("templatesView"));

        gridLayout_2->addWidget(templatesView, 0, 0, 1, 1);

        frame_2 = new QFrame(groupBox);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(100, 0));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        removeTemplate = new QPushButton(frame_2);
        removeTemplate->setObjectName(QString::fromUtf8("removeTemplate"));
        removeTemplate->setAutoDefault(false);

        horizontalLayout_2->addWidget(removeTemplate);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_2->addWidget(frame_2, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        tabWidget = new QTabWidget(TemplatesDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMaximumSize(QSize(276, 16777215));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        formLayout = new QFormLayout(tab);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        templateName = new QLineEdit(tab);
        templateName->setObjectName(QString::fromUtf8("templateName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, templateName);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        frame = new QFrame(tab);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(100, 0));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        clearTemplate = new QPushButton(frame);
        clearTemplate->setObjectName(QString::fromUtf8("clearTemplate"));
        clearTemplate->setAutoDefault(false);

        horizontalLayout->addWidget(clearTemplate);

        addTemplate = new QPushButton(frame);
        addTemplate->setObjectName(QString::fromUtf8("addTemplate"));
        addTemplate->setAutoDefault(false);

        horizontalLayout->addWidget(addTemplate);

        updateTemplate = new QPushButton(frame);
        updateTemplate->setObjectName(QString::fromUtf8("updateTemplate"));
        updateTemplate->setAutoDefault(false);

        horizontalLayout->addWidget(updateTemplate);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        formLayout->setWidget(3, QFormLayout::SpanningRole, frame);

        templateDesc = new QPlainTextEdit(tab);
        templateDesc->setObjectName(QString::fromUtf8("templateDesc"));
        templateDesc->setMaximumSize(QSize(16777215, 64));
        templateDesc->setTabChangesFocus(true);

        formLayout->setWidget(2, QFormLayout::SpanningRole, templateDesc);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        buttonsLayout = new QHBoxLayout();
        buttonsLayout->setObjectName(QString::fromUtf8("buttonsLayout"));
        buttonBox = new QDialogButtonBox(TemplatesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        buttonsLayout->addWidget(buttonBox);


        gridLayout->addLayout(buttonsLayout, 4, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(templateName);
        label_2->setBuddy(templateDesc);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(templatesView, removeTemplate);
        QWidget::setTabOrder(removeTemplate, tabWidget);
        QWidget::setTabOrder(tabWidget, templateName);
        QWidget::setTabOrder(templateName, templateDesc);
        QWidget::setTabOrder(templateDesc, clearTemplate);
        QWidget::setTabOrder(clearTemplate, addTemplate);
        QWidget::setTabOrder(addTemplate, updateTemplate);
        QWidget::setTabOrder(updateTemplate, propertiesView);
        QWidget::setTabOrder(propertiesView, propertyDesc);

        retranslateUi(TemplatesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TemplatesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TemplatesDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TemplatesDialog);
    } // setupUi

    void retranslateUi(QDialog *TemplatesDialog)
    {
        TemplatesDialog->setWindowTitle(QApplication::translate("TemplatesDialog", "Templates", nullptr));
        groupBox_2->setTitle(QApplication::translate("TemplatesDialog", "Edit selected template here", nullptr));
        groupBox->setTitle(QApplication::translate("TemplatesDialog", "Templates in the world", nullptr));
        removeTemplate->setText(QApplication::translate("TemplatesDialog", "Remove", nullptr));
        label->setText(QApplication::translate("TemplatesDialog", "Name:", nullptr));
        templateName->setPlaceholderText(QApplication::translate("TemplatesDialog", "Enter a template name here", nullptr));
        label_2->setText(QApplication::translate("TemplatesDialog", "Description:", nullptr));
        clearTemplate->setText(QApplication::translate("TemplatesDialog", "Clear", nullptr));
        addTemplate->setText(QApplication::translate("TemplatesDialog", "Add", nullptr));
        updateTemplate->setText(QApplication::translate("TemplatesDialog", "Update", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("TemplatesDialog", "Details", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("TemplatesDialog", "Used By", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TemplatesDialog: public Ui_TemplatesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPLATESDIALOG_H
