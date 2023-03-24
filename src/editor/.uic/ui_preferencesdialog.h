/********************************************************************************
** Form generated from reading UI file 'preferencesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOG_H
#define UI_PREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <colorbutton.h>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tabGeneral;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    Tiled::Internal::ColorButton *gridColor;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QSpinBox *gridOpacity;
    QToolButton *btn_GridOpacityDefault;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QSpinBox *gridWidth;
    QToolButton *btn_GridWidthDefault;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QSpinBox *thumbWidth;
    QToolButton *btn_ThumbDefault;
    QSpacerItem *horizontalSpacer;
    QCheckBox *openGL;
    QCheckBox *thumbnails;
    QCheckBox *showAdjacent;
    QCheckBox *LoadLastActiv;
    QCheckBox *enableDarkTheme;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QSlider *zombieSpawnImageOpacity;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *configDirectory;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *tilesDirectory;
    QToolButton *browseTilesDirectory;
    QSpacerItem *verticalSpacer;
    QWidget *tab;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSlider *hsThresholdHP;
    QLabel *lblThresholdHP;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSlider *hsSizeHP;
    QLabel *lblSizeHP;
    QGroupBox *groupBox_5;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSlider *hsThresholdHT;
    QLabel *lblThresholdHT;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QSlider *hsSizeHT;
    QLabel *lblSizeHT;
    QGroupBox *groupBox_6;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QSlider *hsThresholdR;
    QLabel *lblThresholdR;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QSlider *hsSizeR;
    QLabel *lblSizeR;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QString::fromUtf8("PreferencesDialog"));
        PreferencesDialog->resize(523, 632);
        gridLayout = new QGridLayout(PreferencesDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(PreferencesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

        tabWidget = new QTabWidget(PreferencesDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabGeneral = new QWidget();
        tabGeneral->setObjectName(QString::fromUtf8("tabGeneral"));
        gridLayout_2 = new QGridLayout(tabGeneral);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_3 = new QGroupBox(tabGeneral);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        widget = new QWidget(groupBox_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        gridColor = new Tiled::Internal::ColorButton(widget);
        gridColor->setObjectName(QString::fromUtf8("gridColor"));

        horizontalLayout_2->addWidget(gridColor);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_5->addWidget(widget);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, 0, -1, -1);
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_12->addWidget(label_12);

        gridOpacity = new QSpinBox(groupBox_3);
        gridOpacity->setObjectName(QString::fromUtf8("gridOpacity"));
        gridOpacity->setMaximum(255);
        gridOpacity->setValue(128);

        horizontalLayout_12->addWidget(gridOpacity);

        btn_GridOpacityDefault = new QToolButton(groupBox_3);
        btn_GridOpacityDefault->setObjectName(QString::fromUtf8("btn_GridOpacityDefault"));
        btn_GridOpacityDefault->setEnabled(false);

        horizontalLayout_12->addWidget(btn_GridOpacityDefault);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_3);


        verticalLayout_5->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(-1, 0, -1, -1);
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_13->addWidget(label_13);

        gridWidth = new QSpinBox(groupBox_3);
        gridWidth->setObjectName(QString::fromUtf8("gridWidth"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gridWidth->sizePolicy().hasHeightForWidth());
        gridWidth->setSizePolicy(sizePolicy);
        gridWidth->setMinimum(1);
        gridWidth->setMaximum(6);

        horizontalLayout_13->addWidget(gridWidth);

        btn_GridWidthDefault = new QToolButton(groupBox_3);
        btn_GridWidthDefault->setObjectName(QString::fromUtf8("btn_GridWidthDefault"));
        btn_GridWidthDefault->setEnabled(false);

        horizontalLayout_13->addWidget(btn_GridWidthDefault);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_13);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_11->setContentsMargins(-1, 0, -1, -1);
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);

        horizontalLayout_11->addWidget(label_11);

        thumbWidth = new QSpinBox(groupBox_3);
        thumbWidth->setObjectName(QString::fromUtf8("thumbWidth"));
        sizePolicy.setHeightForWidth(thumbWidth->sizePolicy().hasHeightForWidth());
        thumbWidth->setSizePolicy(sizePolicy);
        thumbWidth->setMinimum(64);
        thumbWidth->setMaximum(16384);
        thumbWidth->setSingleStep(64);
        thumbWidth->setValue(512);

        horizontalLayout_11->addWidget(thumbWidth);

        btn_ThumbDefault = new QToolButton(groupBox_3);
        btn_ThumbDefault->setObjectName(QString::fromUtf8("btn_ThumbDefault"));
        btn_ThumbDefault->setEnabled(false);

        horizontalLayout_11->addWidget(btn_ThumbDefault);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);


        verticalLayout_5->addLayout(horizontalLayout_11);

        openGL = new QCheckBox(groupBox_3);
        openGL->setObjectName(QString::fromUtf8("openGL"));

        verticalLayout_5->addWidget(openGL);

        thumbnails = new QCheckBox(groupBox_3);
        thumbnails->setObjectName(QString::fromUtf8("thumbnails"));

        verticalLayout_5->addWidget(thumbnails);

        showAdjacent = new QCheckBox(groupBox_3);
        showAdjacent->setObjectName(QString::fromUtf8("showAdjacent"));

        verticalLayout_5->addWidget(showAdjacent);

        LoadLastActiv = new QCheckBox(groupBox_3);
        LoadLastActiv->setObjectName(QString::fromUtf8("LoadLastActiv"));

        verticalLayout_5->addWidget(LoadLastActiv);

        enableDarkTheme = new QCheckBox(groupBox_3);
        enableDarkTheme->setObjectName(QString::fromUtf8("enableDarkTheme"));

        verticalLayout_5->addWidget(enableDarkTheme);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        zombieSpawnImageOpacity = new QSlider(groupBox_3);
        zombieSpawnImageOpacity->setObjectName(QString::fromUtf8("zombieSpawnImageOpacity"));
        zombieSpawnImageOpacity->setMaximum(100);
        zombieSpawnImageOpacity->setSingleStep(10);
        zombieSpawnImageOpacity->setOrientation(Qt::Horizontal);
        zombieSpawnImageOpacity->setTickInterval(0);

        horizontalLayout->addWidget(zombieSpawnImageOpacity);


        verticalLayout_5->addLayout(horizontalLayout);


        gridLayout_2->addWidget(groupBox_3, 2, 0, 1, 1);

        groupBox_4 = new QGroupBox(tabGeneral);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_2 = new QVBoxLayout(groupBox_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        configDirectory = new QLineEdit(groupBox_4);
        configDirectory->setObjectName(QString::fromUtf8("configDirectory"));
        configDirectory->setReadOnly(true);

        horizontalLayout_4->addWidget(configDirectory);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout_2->addWidget(groupBox_4, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(tabGeneral);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tilesDirectory = new QLineEdit(groupBox_2);
        tilesDirectory->setObjectName(QString::fromUtf8("tilesDirectory"));
        tilesDirectory->setReadOnly(true);

        horizontalLayout_3->addWidget(tilesDirectory);

        browseTilesDirectory = new QToolButton(groupBox_2);
        browseTilesDirectory->setObjectName(QString::fromUtf8("browseTilesDirectory"));

        horizontalLayout_3->addWidget(browseTilesDirectory);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout_2->addWidget(groupBox_2, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 1);

        tabWidget->addTab(tabGeneral, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setEnabled(true);
        tab->setCursor(QCursor(Qt::ArrowCursor));
        verticalLayoutWidget = new QWidget(tab);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 481, 441));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 20, 461, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        hsThresholdHP = new QSlider(horizontalLayoutWidget);
        hsThresholdHP->setObjectName(QString::fromUtf8("hsThresholdHP"));
        hsThresholdHP->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(7);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(hsThresholdHP->sizePolicy().hasHeightForWidth());
        hsThresholdHP->setSizePolicy(sizePolicy1);
        hsThresholdHP->setMinimum(1);
        hsThresholdHP->setMaximum(4000);
        hsThresholdHP->setValue(10);
        hsThresholdHP->setOrientation(Qt::Horizontal);
        hsThresholdHP->setTickPosition(QSlider::TicksBelow);
        hsThresholdHP->setTickInterval(100);

        horizontalLayout_5->addWidget(hsThresholdHP);

        lblThresholdHP = new QLabel(horizontalLayoutWidget);
        lblThresholdHP->setObjectName(QString::fromUtf8("lblThresholdHP"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblThresholdHP->sizePolicy().hasHeightForWidth());
        lblThresholdHP->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(lblThresholdHP);

        horizontalLayoutWidget_2 = new QWidget(groupBox);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 60, 461, 41));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        hsSizeHP = new QSlider(horizontalLayoutWidget_2);
        hsSizeHP->setObjectName(QString::fromUtf8("hsSizeHP"));
        sizePolicy1.setHeightForWidth(hsSizeHP->sizePolicy().hasHeightForWidth());
        hsSizeHP->setSizePolicy(sizePolicy1);
        hsSizeHP->setMinimum(1);
        hsSizeHP->setMaximum(100);
        hsSizeHP->setValue(2);
        hsSizeHP->setSliderPosition(2);
        hsSizeHP->setOrientation(Qt::Horizontal);
        hsSizeHP->setTickPosition(QSlider::TicksBelow);
        hsSizeHP->setTickInterval(2);

        horizontalLayout_6->addWidget(hsSizeHP);

        lblSizeHP = new QLabel(horizontalLayoutWidget_2);
        lblSizeHP->setObjectName(QString::fromUtf8("lblSizeHP"));
        sizePolicy2.setHeightForWidth(lblSizeHP->sizePolicy().hasHeightForWidth());
        lblSizeHP->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(lblSizeHP);


        verticalLayout_3->addWidget(groupBox);

        groupBox_5 = new QGroupBox(verticalLayoutWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        horizontalLayoutWidget_3 = new QWidget(groupBox_5);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 20, 461, 41));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        hsThresholdHT = new QSlider(horizontalLayoutWidget_3);
        hsThresholdHT->setObjectName(QString::fromUtf8("hsThresholdHT"));
        hsThresholdHT->setEnabled(true);
        sizePolicy1.setHeightForWidth(hsThresholdHT->sizePolicy().hasHeightForWidth());
        hsThresholdHT->setSizePolicy(sizePolicy1);
        hsThresholdHT->setMinimum(1);
        hsThresholdHT->setMaximum(4000);
        hsThresholdHT->setValue(100);
        hsThresholdHT->setOrientation(Qt::Horizontal);
        hsThresholdHT->setTickPosition(QSlider::TicksBelow);
        hsThresholdHT->setTickInterval(100);

        horizontalLayout_7->addWidget(hsThresholdHT);

        lblThresholdHT = new QLabel(horizontalLayoutWidget_3);
        lblThresholdHT->setObjectName(QString::fromUtf8("lblThresholdHT"));
        sizePolicy2.setHeightForWidth(lblThresholdHT->sizePolicy().hasHeightForWidth());
        lblThresholdHT->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(lblThresholdHT);

        horizontalLayoutWidget_4 = new QWidget(groupBox_5);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(10, 60, 461, 41));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(horizontalLayoutWidget_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        hsSizeHT = new QSlider(horizontalLayoutWidget_4);
        hsSizeHT->setObjectName(QString::fromUtf8("hsSizeHT"));
        sizePolicy1.setHeightForWidth(hsSizeHT->sizePolicy().hasHeightForWidth());
        hsSizeHT->setSizePolicy(sizePolicy1);
        hsSizeHT->setMinimum(1);
        hsSizeHT->setMaximum(100);
        hsSizeHT->setValue(40);
        hsSizeHT->setOrientation(Qt::Horizontal);
        hsSizeHT->setTickPosition(QSlider::TicksBelow);
        hsSizeHT->setTickInterval(2);

        horizontalLayout_8->addWidget(hsSizeHT);

        lblSizeHT = new QLabel(horizontalLayoutWidget_4);
        lblSizeHT->setObjectName(QString::fromUtf8("lblSizeHT"));
        sizePolicy2.setHeightForWidth(lblSizeHT->sizePolicy().hasHeightForWidth());
        lblSizeHT->setSizePolicy(sizePolicy2);

        horizontalLayout_8->addWidget(lblSizeHT);


        verticalLayout_3->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(verticalLayoutWidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        horizontalLayoutWidget_5 = new QWidget(groupBox_6);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(10, 20, 461, 41));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(horizontalLayoutWidget_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        hsThresholdR = new QSlider(horizontalLayoutWidget_5);
        hsThresholdR->setObjectName(QString::fromUtf8("hsThresholdR"));
        hsThresholdR->setEnabled(true);
        sizePolicy1.setHeightForWidth(hsThresholdR->sizePolicy().hasHeightForWidth());
        hsThresholdR->setSizePolicy(sizePolicy1);
        hsThresholdR->setMinimum(1);
        hsThresholdR->setMaximum(4000);
        hsThresholdR->setValue(10);
        hsThresholdR->setOrientation(Qt::Horizontal);
        hsThresholdR->setTickPosition(QSlider::TicksBelow);
        hsThresholdR->setTickInterval(100);

        horizontalLayout_9->addWidget(hsThresholdR);

        lblThresholdR = new QLabel(horizontalLayoutWidget_5);
        lblThresholdR->setObjectName(QString::fromUtf8("lblThresholdR"));
        sizePolicy2.setHeightForWidth(lblThresholdR->sizePolicy().hasHeightForWidth());
        lblThresholdR->setSizePolicy(sizePolicy2);

        horizontalLayout_9->addWidget(lblThresholdR);

        horizontalLayoutWidget_6 = new QWidget(groupBox_6);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(10, 60, 461, 41));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(horizontalLayoutWidget_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_10->addWidget(label_10);

        hsSizeR = new QSlider(horizontalLayoutWidget_6);
        hsSizeR->setObjectName(QString::fromUtf8("hsSizeR"));
        hsSizeR->setEnabled(true);
        sizePolicy1.setHeightForWidth(hsSizeR->sizePolicy().hasHeightForWidth());
        hsSizeR->setSizePolicy(sizePolicy1);
        hsSizeR->setMinimum(1);
        hsSizeR->setMaximum(100);
        hsSizeR->setValue(4);
        hsSizeR->setTracking(false);
        hsSizeR->setOrientation(Qt::Horizontal);
        hsSizeR->setTickPosition(QSlider::TicksBelow);
        hsSizeR->setTickInterval(2);

        horizontalLayout_10->addWidget(hsSizeR);

        lblSizeR = new QLabel(horizontalLayoutWidget_6);
        lblSizeR->setObjectName(QString::fromUtf8("lblSizeR"));
        sizePolicy2.setHeightForWidth(lblSizeR->sizePolicy().hasHeightForWidth());
        lblSizeR->setSizePolicy(sizePolicy2);

        horizontalLayout_10->addWidget(lblSizeR);


        verticalLayout_3->addWidget(groupBox_6);

        tabWidget->addTab(tab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        QWidget::setTabOrder(tabWidget, buttonBox);

        retranslateUi(PreferencesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferencesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferencesDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QApplication::translate("PreferencesDialog", "Preferences", nullptr));
        groupBox_3->setTitle(QApplication::translate("PreferencesDialog", "Interface", nullptr));
        label->setText(QApplication::translate("PreferencesDialog", "Grid color:", nullptr));
        gridColor->setText(QApplication::translate("PreferencesDialog", "...", nullptr));
        label_12->setText(QApplication::translate("PreferencesDialog", "Grid Opacity :        ", nullptr));
        btn_GridOpacityDefault->setText(QApplication::translate("PreferencesDialog", "Default", nullptr));
        label_13->setText(QApplication::translate("PreferencesDialog", "Grid Width :           ", nullptr));
        btn_GridWidthDefault->setText(QApplication::translate("PreferencesDialog", "Default", nullptr));
        label_11->setText(QApplication::translate("PreferencesDialog", "Thumbnails Width :  ", nullptr));
        btn_ThumbDefault->setText(QApplication::translate("PreferencesDialog", "Default", nullptr));
        openGL->setText(QApplication::translate("PreferencesDialog", "Use hardware-accelerated drawing (OpenGL)", nullptr));
        thumbnails->setText(QApplication::translate("PreferencesDialog", "Display map thumbnail images in the world view.\n"
"Don't check this if you are low on disk space or system memory.", nullptr));
        showAdjacent->setText(QApplication::translate("PreferencesDialog", "Show adjacent maps.  Reopen a cell to see changes.", nullptr));
        LoadLastActiv->setText(QApplication::translate("PreferencesDialog", "Load last active Project", nullptr));
        enableDarkTheme->setText(QApplication::translate("PreferencesDialog", "Enable Dark Theme", nullptr));
        label_4->setText(QApplication::translate("PreferencesDialog", "Spawn Image Opacity:", nullptr));
        groupBox_4->setTitle(QApplication::translate("PreferencesDialog", "Config Directory", nullptr));
        label_3->setText(QApplication::translate("PreferencesDialog", "This is the same directory used by TileZed.  Change it with the 'config' program.", nullptr));
        groupBox_2->setTitle(QApplication::translate("PreferencesDialog", "Tiles Directory", nullptr));
        label_2->setText(QApplication::translate("PreferencesDialog", "This is the same directory you set in TileZed in the Tilesets dialog.", nullptr));
        browseTilesDirectory->setText(QApplication::translate("PreferencesDialog", "...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabGeneral), QApplication::translate("PreferencesDialog", "General", nullptr));
        groupBox->setTitle(QApplication::translate("PreferencesDialog", "Highway Primary/Secondary/Tertiary", nullptr));
        label_5->setText(QApplication::translate("PreferencesDialog", "Threshold :", nullptr));
        lblThresholdHP->setText(QApplication::translate("PreferencesDialog", "...", nullptr));
        label_6->setText(QApplication::translate("PreferencesDialog", "Size          :", nullptr));
        lblSizeHP->setText(QApplication::translate("PreferencesDialog", "...", nullptr));
        groupBox_5->setTitle(QApplication::translate("PreferencesDialog", "Highway Trail", nullptr));
        label_7->setText(QApplication::translate("PreferencesDialog", "Threshold :", nullptr));
        lblThresholdHT->setText(QApplication::translate("PreferencesDialog", "...", nullptr));
        label_8->setText(QApplication::translate("PreferencesDialog", "Size          :", nullptr));
        lblSizeHT->setText(QApplication::translate("PreferencesDialog", "...", nullptr));
        groupBox_6->setTitle(QApplication::translate("PreferencesDialog", "Railway", nullptr));
        label_9->setText(QApplication::translate("PreferencesDialog", "Threshold :", nullptr));
        lblThresholdR->setText(QApplication::translate("PreferencesDialog", "...", nullptr));
        label_10->setText(QApplication::translate("PreferencesDialog", "Size          :", nullptr));
        lblSizeR->setText(QApplication::translate("PreferencesDialog", "...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PreferencesDialog", "InGameMap", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOG_H
