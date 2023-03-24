/********************************************************************************
** Form generated from reading UI file 'propertiesview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIESVIEW_H
#define UI_PROPERTIESVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PropertiesView
{
public:
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout_5;
    QCheckBox *randomTreesCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *mapNameEdit;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *zombieAttractionValue;
    QCheckBox *defZombieAttractionCheckBox;
    QGroupBox *groupBox_6;
    QFormLayout *formLayout_6;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_6;
    QSpinBox *startZombiesValue;
    QCheckBox *defStartZombiesCheckBox;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpinBox *indoorZombiesValue;
    QCheckBox *defIndoorZombiesCheckBox;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QSpinBox *survivorSpawnsValue;
    QCheckBox *defSurvivorSpawnsCheckBox;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QSpinBox *survivorRemotenessValue;
    QCheckBox *defSurvivorRemotenessCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QScrollArea *PropertiesView)
    {
        if (PropertiesView->objectName().isEmpty())
            PropertiesView->setObjectName(QString::fromUtf8("PropertiesView"));
        PropertiesView->resize(400, 562);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PropertiesView->sizePolicy().hasHeightForWidth());
        PropertiesView->setSizePolicy(sizePolicy);
        PropertiesView->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 398, 560));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout_5 = new QFormLayout(groupBox);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        randomTreesCheckBox = new QCheckBox(groupBox);
        randomTreesCheckBox->setObjectName(QString::fromUtf8("randomTreesCheckBox"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, randomTreesCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        mapNameEdit = new QLineEdit(groupBox);
        mapNameEdit->setObjectName(QString::fromUtf8("mapNameEdit"));
        mapNameEdit->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mapNameEdit->sizePolicy().hasHeightForWidth());
        mapNameEdit->setSizePolicy(sizePolicy1);
        mapNameEdit->setReadOnly(true);

        horizontalLayout->addWidget(mapNameEdit);


        formLayout_5->setLayout(0, QFormLayout::SpanningRole, horizontalLayout);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout_4 = new QFormLayout(groupBox_2);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        zombieAttractionValue = new QDoubleSpinBox(groupBox_2);
        zombieAttractionValue->setObjectName(QString::fromUtf8("zombieAttractionValue"));
        zombieAttractionValue->setMaximum(1.000000000000000);
        zombieAttractionValue->setSingleStep(0.100000000000000);
        zombieAttractionValue->setValue(0.100000000000000);

        horizontalLayout_2->addWidget(zombieAttractionValue);


        formLayout_4->setLayout(0, QFormLayout::LabelRole, horizontalLayout_2);

        defZombieAttractionCheckBox = new QCheckBox(groupBox_2);
        defZombieAttractionCheckBox->setObjectName(QString::fromUtf8("defZombieAttractionCheckBox"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, defZombieAttractionCheckBox);


        verticalLayout->addWidget(groupBox_2);

        groupBox_6 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        formLayout_6 = new QFormLayout(groupBox_6);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        formLayout_6->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_6 = new QLabel(groupBox_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_11->addWidget(label_6);

        startZombiesValue = new QSpinBox(groupBox_6);
        startZombiesValue->setObjectName(QString::fromUtf8("startZombiesValue"));
        startZombiesValue->setMaximum(200);
        startZombiesValue->setValue(1);

        horizontalLayout_11->addWidget(startZombiesValue);


        formLayout_6->setLayout(0, QFormLayout::LabelRole, horizontalLayout_11);

        defStartZombiesCheckBox = new QCheckBox(groupBox_6);
        defStartZombiesCheckBox->setObjectName(QString::fromUtf8("defStartZombiesCheckBox"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, defStartZombiesCheckBox);


        verticalLayout->addWidget(groupBox_6);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        formLayout_3 = new QFormLayout(groupBox_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        indoorZombiesValue = new QSpinBox(groupBox_3);
        indoorZombiesValue->setObjectName(QString::fromUtf8("indoorZombiesValue"));
        indoorZombiesValue->setValue(2);

        horizontalLayout_4->addWidget(indoorZombiesValue);


        formLayout_3->setLayout(0, QFormLayout::LabelRole, horizontalLayout_4);

        defIndoorZombiesCheckBox = new QCheckBox(groupBox_3);
        defIndoorZombiesCheckBox->setObjectName(QString::fromUtf8("defIndoorZombiesCheckBox"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, defIndoorZombiesCheckBox);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        formLayout_2 = new QFormLayout(groupBox_4);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_9->addWidget(label_4);

        survivorSpawnsValue = new QSpinBox(groupBox_4);
        survivorSpawnsValue->setObjectName(QString::fromUtf8("survivorSpawnsValue"));
        survivorSpawnsValue->setValue(0);

        horizontalLayout_9->addWidget(survivorSpawnsValue);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, horizontalLayout_9);

        defSurvivorSpawnsCheckBox = new QCheckBox(groupBox_4);
        defSurvivorSpawnsCheckBox->setObjectName(QString::fromUtf8("defSurvivorSpawnsCheckBox"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, defSurvivorSpawnsCheckBox);


        verticalLayout->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        formLayout = new QFormLayout(groupBox_5);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_10->addWidget(label_5);

        survivorRemotenessValue = new QSpinBox(groupBox_5);
        survivorRemotenessValue->setObjectName(QString::fromUtf8("survivorRemotenessValue"));
        survivorRemotenessValue->setMaximum(30000);
        survivorRemotenessValue->setValue(30000);

        horizontalLayout_10->addWidget(survivorRemotenessValue);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout_10);

        defSurvivorRemotenessCheckBox = new QCheckBox(groupBox_5);
        defSurvivorRemotenessCheckBox->setObjectName(QString::fromUtf8("defSurvivorRemotenessCheckBox"));

        formLayout->setWidget(1, QFormLayout::LabelRole, defSurvivorRemotenessCheckBox);


        verticalLayout->addWidget(groupBox_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        PropertiesView->setWidget(scrollAreaWidgetContents);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(mapNameEdit);
        label_2->setBuddy(zombieAttractionValue);
        label_6->setBuddy(survivorRemotenessValue);
        label_3->setBuddy(indoorZombiesValue);
        label_4->setBuddy(survivorSpawnsValue);
        label_5->setBuddy(survivorRemotenessValue);
#endif // QT_NO_SHORTCUT

        retranslateUi(PropertiesView);

        QMetaObject::connectSlotsByName(PropertiesView);
    } // setupUi

    void retranslateUi(QScrollArea *PropertiesView)
    {
        PropertiesView->setWindowTitle(QApplication::translate("PropertiesView", "ScrollArea", nullptr));
        groupBox->setTitle(QApplication::translate("PropertiesView", "Main Cell Lot", nullptr));
        randomTreesCheckBox->setText(QApplication::translate("PropertiesView", "Random trees", nullptr));
        label->setText(QApplication::translate("PropertiesView", "Map name:", nullptr));
        groupBox_2->setTitle(QApplication::translate("PropertiesView", "Zombie Attraction Factor", nullptr));
        label_2->setText(QApplication::translate("PropertiesView", "Value (0.0-1.0):", nullptr));
        defZombieAttractionCheckBox->setText(QApplication::translate("PropertiesView", "Default", nullptr));
        groupBox_6->setTitle(QApplication::translate("PropertiesView", "Start Zombies", nullptr));
        label_6->setText(QApplication::translate("PropertiesView", "Value (0-200):", nullptr));
        defStartZombiesCheckBox->setText(QApplication::translate("PropertiesView", "Default", nullptr));
        groupBox_3->setTitle(QApplication::translate("PropertiesView", "Start Indoor Zombies", nullptr));
        label_3->setText(QApplication::translate("PropertiesView", "Value (0-99):", nullptr));
        defIndoorZombiesCheckBox->setText(QApplication::translate("PropertiesView", "Default", nullptr));
        groupBox_4->setTitle(QApplication::translate("PropertiesView", "Survivor Spawns", nullptr));
        label_4->setText(QApplication::translate("PropertiesView", "Value (0-5):", nullptr));
        defSurvivorSpawnsCheckBox->setText(QApplication::translate("PropertiesView", "Default", nullptr));
        groupBox_5->setTitle(QApplication::translate("PropertiesView", "Survivor Remoteness", nullptr));
        label_5->setText(QApplication::translate("PropertiesView", "Value (0-30000):", nullptr));
        defSurvivorRemotenessCheckBox->setText(QApplication::translate("PropertiesView", "Default", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PropertiesView: public Ui_PropertiesView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIESVIEW_H
