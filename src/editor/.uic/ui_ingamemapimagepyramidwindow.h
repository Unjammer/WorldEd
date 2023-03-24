/********************************************************************************
** Form generated from reading UI file 'ingamemapimagepyramidwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGAMEMAPIMAGEPYRAMIDWINDOW_H
#define UI_INGAMEMAPIMAGEPYRAMIDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InGameMapImagePyramidWindow
{
public:
    QAction *actionClose;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *inputNameEdit;
    QToolButton *inputBrowseButton;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *createZipButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *outputNameEdit;
    QToolButton *outputBrowseButton;
    QPlainTextEdit *logText;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *xMin;
    QLabel *label_5;
    QSpinBox *yMin;
    QLabel *label_6;
    QSpinBox *xMax;
    QLabel *label_7;
    QSpinBox *yMax;
    QLabel *label_3;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *InGameMapImagePyramidWindow)
    {
        if (InGameMapImagePyramidWindow->objectName().isEmpty())
            InGameMapImagePyramidWindow->setObjectName(QString::fromUtf8("InGameMapImagePyramidWindow"));
        InGameMapImagePyramidWindow->resize(590, 360);
        actionClose = new QAction(InGameMapImagePyramidWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        centralwidget = new QWidget(InGameMapImagePyramidWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(75, 0));

        horizontalLayout->addWidget(label);

        inputNameEdit = new QLineEdit(centralwidget);
        inputNameEdit->setObjectName(QString::fromUtf8("inputNameEdit"));

        horizontalLayout->addWidget(inputNameEdit);

        inputBrowseButton = new QToolButton(centralwidget);
        inputBrowseButton->setObjectName(QString::fromUtf8("inputBrowseButton"));

        horizontalLayout->addWidget(inputBrowseButton);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        createZipButton = new QPushButton(centralwidget);
        createZipButton->setObjectName(QString::fromUtf8("createZipButton"));

        horizontalLayout_3->addWidget(createZipButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        gridLayout_3->addLayout(horizontalLayout_3, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(75, 0));

        horizontalLayout_2->addWidget(label_2);

        outputNameEdit = new QLineEdit(centralwidget);
        outputNameEdit->setObjectName(QString::fromUtf8("outputNameEdit"));

        horizontalLayout_2->addWidget(outputNameEdit);

        outputBrowseButton = new QToolButton(centralwidget);
        outputBrowseButton->setObjectName(QString::fromUtf8("outputBrowseButton"));

        horizontalLayout_2->addWidget(outputBrowseButton);


        gridLayout_3->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        logText = new QPlainTextEdit(centralwidget);
        logText->setObjectName(QString::fromUtf8("logText"));

        gridLayout_3->addWidget(logText, 6, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        xMin = new QSpinBox(centralwidget);
        xMin->setObjectName(QString::fromUtf8("xMin"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(xMin->sizePolicy().hasHeightForWidth());
        xMin->setSizePolicy(sizePolicy);
        xMin->setMaximum(500000);

        horizontalLayout_4->addWidget(xMin);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        yMin = new QSpinBox(centralwidget);
        yMin->setObjectName(QString::fromUtf8("yMin"));
        sizePolicy.setHeightForWidth(yMin->sizePolicy().hasHeightForWidth());
        yMin->setSizePolicy(sizePolicy);
        yMin->setMaximum(500000);

        horizontalLayout_4->addWidget(yMin);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        xMax = new QSpinBox(centralwidget);
        xMax->setObjectName(QString::fromUtf8("xMax"));
        sizePolicy.setHeightForWidth(xMax->sizePolicy().hasHeightForWidth());
        xMax->setSizePolicy(sizePolicy);
        xMax->setMaximum(500000);

        horizontalLayout_4->addWidget(xMax);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        yMax = new QSpinBox(centralwidget);
        yMax->setObjectName(QString::fromUtf8("yMax"));
        sizePolicy.setHeightForWidth(yMax->sizePolicy().hasHeightForWidth());
        yMax->setSizePolicy(sizePolicy);
        yMax->setMaximum(500000);

        horizontalLayout_4->addWidget(yMax);


        gridLayout_3->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        InGameMapImagePyramidWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InGameMapImagePyramidWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 590, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        InGameMapImagePyramidWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(InGameMapImagePyramidWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        InGameMapImagePyramidWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionClose);

        retranslateUi(InGameMapImagePyramidWindow);

        QMetaObject::connectSlotsByName(InGameMapImagePyramidWindow);
    } // setupUi

    void retranslateUi(QMainWindow *InGameMapImagePyramidWindow)
    {
        InGameMapImagePyramidWindow->setWindowTitle(QApplication::translate("InGameMapImagePyramidWindow", "Create Image Pyramid", nullptr));
        actionClose->setText(QApplication::translate("InGameMapImagePyramidWindow", "Close", nullptr));
        label->setText(QApplication::translate("InGameMapImagePyramidWindow", "Input PNG:", nullptr));
        inputBrowseButton->setText(QApplication::translate("InGameMapImagePyramidWindow", "...", nullptr));
        createZipButton->setText(QApplication::translate("InGameMapImagePyramidWindow", "Create ZIP File", nullptr));
        label_2->setText(QApplication::translate("InGameMapImagePyramidWindow", "Output ZIP:", nullptr));
        outputBrowseButton->setText(QApplication::translate("InGameMapImagePyramidWindow", "...", nullptr));
        label_4->setText(QApplication::translate("InGameMapImagePyramidWindow", "Left", nullptr));
        label_5->setText(QApplication::translate("InGameMapImagePyramidWindow", "Top", nullptr));
        label_6->setText(QApplication::translate("InGameMapImagePyramidWindow", "Right", nullptr));
        label_7->setText(QApplication::translate("InGameMapImagePyramidWindow", "Bottom", nullptr));
        label_3->setText(QApplication::translate("InGameMapImagePyramidWindow", "Enter the bounds in game-world squares of the input image.  This is the area of the world covered by the image.  This information is saved to pyramid.txt in the zip file, which you may edit later without needing to rebuild the zip file.", nullptr));
        menuFile->setTitle(QApplication::translate("InGameMapImagePyramidWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InGameMapImagePyramidWindow: public Ui_InGameMapImagePyramidWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGAMEMAPIMAGEPYRAMIDWINDOW_H
