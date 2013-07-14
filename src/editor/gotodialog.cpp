/*
 * Copyright 2013, Tim Baker <treectrl@users.sf.net>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "gotodialog.h"
#include "ui_gotodialog.h"

#include "world.h"

GoToDialog::GoToDialog(World *world, const QPoint &initial, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GoToDialog),
    mSynching(0)
{
    ui->setupUi(this);

    ui->worldX->setMaximum(world->width() * 300);
    ui->worldY->setMaximum(world->height() * 300);

    ui->rangeX->setText(tr("Min: %1    Max: %2").arg(ui->worldX->minimum()).arg(ui->worldX->maximum()));
    ui->rangeY->setText(tr("Min: %1    Max: %2").arg(ui->worldY->minimum()).arg(ui->worldY->maximum()));

    ui->cellX->setRange(0, world->width());
    ui->cellY->setRange(0, world->height());

    ui->posX->setRange(0, 299);
    ui->posY->setRange(0, 299);

    mSynching++;
    ui->worldX->setValue(initial.x());
    ui->worldY->setValue(initial.y());
    ui->cellX->setValue(initial.x() / 300);
    ui->cellY->setValue(initial.y() / 300);
    ui->posX->setValue(initial.x() % 300);
    ui->posY->setValue(initial.y() % 300);
    mSynching--;

    connect(ui->worldX, SIGNAL(valueChanged(int)), SLOT(worldXChanged(int)));
    connect(ui->worldY, SIGNAL(valueChanged(int)), SLOT(worldYChanged(int)));
    connect(ui->cellX, SIGNAL(valueChanged(int)), SLOT(cellXChanged(int)));
    connect(ui->cellY, SIGNAL(valueChanged(int)), SLOT(cellYChanged(int)));
    connect(ui->posX, SIGNAL(valueChanged(int)), SLOT(posXChanged(int)));
    connect(ui->posY, SIGNAL(valueChanged(int)), SLOT(posYChanged(int)));
}

GoToDialog::~GoToDialog()
{
    delete ui;
}

int GoToDialog::worldX() const
{
    return ui->worldX->value();
}

int GoToDialog::worldY() const
{
    return ui->worldY->value();
}

void GoToDialog::worldXChanged(int val)
{
    if (mSynching) return;
    mSynching++;
    ui->cellX->setValue(val / 300);
    ui->posX->setValue(val % 300);
    mSynching--;
}

void GoToDialog::worldYChanged(int val)
{
    if (mSynching) return;
    mSynching++;
    ui->cellY->setValue(val / 300);
    ui->posY->setValue(val % 300);
    mSynching--;
}

void GoToDialog::cellXChanged(int val)
{
    if (mSynching) return;
    mSynching++;
    ui->worldX->setValue(val * 300 + ui->posX->value());
    mSynching--;
}

void GoToDialog::cellYChanged(int val)
{
    if (mSynching) return;
    mSynching++;
    ui->worldY->setValue(val * 300 + ui->posY->value());
    mSynching--;
}

void GoToDialog::posXChanged(int val)
{
    if (mSynching) return;
    mSynching++;
    ui->worldX->setValue(ui->cellX->value() * 300 + val);
    mSynching--;
}

void GoToDialog::posYChanged(int val)
{
    if (mSynching) return;
    mSynching++;
    ui->worldY->setValue(ui->cellY->value() * 300 + val);
    mSynching--;
}
