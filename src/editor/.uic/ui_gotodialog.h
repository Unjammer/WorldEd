/********************************************************************************
** Form generated from reading UI file 'gotodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOTODIALOG_H
#define UI_GOTODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_GoToDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *rangeY;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelX_4;
    QSpinBox *posY;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelX_2;
    QSpinBox *cellX;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *horizontalLayout;
    QLabel *labelX;
    QSpinBox *worldX;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelY;
    QSpinBox *worldY;
    QLabel *rangeX;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelY_2;
    QSpinBox *cellY;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelX_3;
    QSpinBox *posX;
    QFrame *line;

    void setupUi(QDialog *GoToDialog)
    {
        if (GoToDialog->objectName().isEmpty())
            GoToDialog->setObjectName(QString::fromUtf8("GoToDialog"));
        GoToDialog->resize(327, 166);
        gridLayout = new QGridLayout(GoToDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        rangeY = new QLabel(GoToDialog);
        rangeY->setObjectName(QString::fromUtf8("rangeY"));

        gridLayout->addWidget(rangeY, 1, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        labelX_4 = new QLabel(GoToDialog);
        labelX_4->setObjectName(QString::fromUtf8("labelX_4"));

        horizontalLayout_6->addWidget(labelX_4);

        posY = new QSpinBox(GoToDialog);
        posY->setObjectName(QString::fromUtf8("posY"));
        posY->setMaximum(300000);

        horizontalLayout_6->addWidget(posY);

        horizontalLayout_6->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout_6, 4, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelX_2 = new QLabel(GoToDialog);
        labelX_2->setObjectName(QString::fromUtf8("labelX_2"));

        horizontalLayout_3->addWidget(labelX_2);

        cellX = new QSpinBox(GoToDialog);
        cellX->setObjectName(QString::fromUtf8("cellX"));
        cellX->setMaximum(300000);

        horizontalLayout_3->addWidget(cellX);

        horizontalLayout_3->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        buttonBox = new QDialogButtonBox(GoToDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelX = new QLabel(GoToDialog);
        labelX->setObjectName(QString::fromUtf8("labelX"));

        horizontalLayout->addWidget(labelX);

        worldX = new QSpinBox(GoToDialog);
        worldX->setObjectName(QString::fromUtf8("worldX"));
        worldX->setMaximum(300000);

        horizontalLayout->addWidget(worldX);

        horizontalLayout->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelY = new QLabel(GoToDialog);
        labelY->setObjectName(QString::fromUtf8("labelY"));

        horizontalLayout_2->addWidget(labelY);

        worldY = new QSpinBox(GoToDialog);
        worldY->setObjectName(QString::fromUtf8("worldY"));
        worldY->setMaximum(300000);

        horizontalLayout_2->addWidget(worldY);

        horizontalLayout_2->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        rangeX = new QLabel(GoToDialog);
        rangeX->setObjectName(QString::fromUtf8("rangeX"));

        gridLayout->addWidget(rangeX, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelY_2 = new QLabel(GoToDialog);
        labelY_2->setObjectName(QString::fromUtf8("labelY_2"));

        horizontalLayout_4->addWidget(labelY_2);

        cellY = new QSpinBox(GoToDialog);
        cellY->setObjectName(QString::fromUtf8("cellY"));
        cellY->setMaximum(300000);

        horizontalLayout_4->addWidget(cellY);

        horizontalLayout_4->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout_4, 3, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelX_3 = new QLabel(GoToDialog);
        labelX_3->setObjectName(QString::fromUtf8("labelX_3"));

        horizontalLayout_5->addWidget(labelX_3);

        posX = new QSpinBox(GoToDialog);
        posX->setObjectName(QString::fromUtf8("posX"));
        posX->setMaximum(300000);

        horizontalLayout_5->addWidget(posX);

        horizontalLayout_5->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        line = new QFrame(GoToDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 2);

        QWidget::setTabOrder(worldX, worldY);
        QWidget::setTabOrder(worldY, cellX);
        QWidget::setTabOrder(cellX, cellY);
        QWidget::setTabOrder(cellY, posX);
        QWidget::setTabOrder(posX, posY);
        QWidget::setTabOrder(posY, buttonBox);

        retranslateUi(GoToDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GoToDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GoToDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GoToDialog);
    } // setupUi

    void retranslateUi(QDialog *GoToDialog)
    {
        GoToDialog->setWindowTitle(QApplication::translate("GoToDialog", "Go To Coordinates", nullptr));
        rangeY->setText(QApplication::translate("GoToDialog", "Min: X Max: X", nullptr));
        labelX_4->setText(QApplication::translate("GoToDialog", "Pos Y:", nullptr));
        labelX_2->setText(QApplication::translate("GoToDialog", "Cell X:", nullptr));
        labelX->setText(QApplication::translate("GoToDialog", "World X:", nullptr));
        labelY->setText(QApplication::translate("GoToDialog", "World Y:", nullptr));
        rangeX->setText(QApplication::translate("GoToDialog", "Min: X Max: X", nullptr));
        labelY_2->setText(QApplication::translate("GoToDialog", "Cell Y:", nullptr));
        labelX_3->setText(QApplication::translate("GoToDialog", "Pos X:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GoToDialog: public Ui_GoToDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOTODIALOG_H
