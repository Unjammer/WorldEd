/*
 * Copyright 2012, Tim Baker <treectrl@users.sf.net>
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

#include "preferencesdialog.h"
#include "ui_preferencesdialog.h"

#include "preferences.h"
#include "tilemetainfomgr.h"

#include <QFileDialog>
#include <QStringList>

PreferencesDialog::PreferencesDialog(WorldDocument* worldDoc, QWidget* parent)
    : QDialog(parent)
    , ui(new Ui::PreferencesDialog)
    , mWorldDoc(worldDoc)
{
    ui->setupUi(this);

    Preferences* prefs = Preferences::instance();

    mTilesDirectory = prefs->tilesDirectory();
    ui->tilesDirectory->setText(QDir::toNativeSeparators(mTilesDirectory));
    connect(ui->browseTilesDirectory, &QAbstractButton::clicked,
        this, &PreferencesDialog::browseTilesDirectory);

    QString configPath = prefs->configPath();
    ui->configDirectory->setText(QDir::toNativeSeparators(configPath));

    mGridColor = prefs->gridColor();
    ui->gridColor->setColor(mGridColor);
    connect(ui->gridColor, &Tiled::Internal::ColorButton::colorChanged,
        this, &PreferencesDialog::gridColorChanged);

    ui->openGL->setChecked(prefs->useOpenGL());
    ui->thumbnails->setChecked(prefs->worldThumbnails());
    ui->showAdjacent->setChecked(prefs->showAdjacentMaps());
    ui->LoadLastActiv->setChecked(prefs->LoadLastActivProject());
    ui->enableDarkTheme->setChecked(prefs->enableDarkTheme());
    ui->zombieSpawnImageOpacity->setValue(int(prefs->zombieSpawnImageOpacity() * 100));
    ui->hsThresholdHP->setValue(int(prefs->hsThresholdHP()));
    ui->lblThresholdHP->setText(QString::number(int(prefs->hsThresholdHP())));
    ui->hsThresholdHT->setValue(int(prefs->hsThresholdHT()));
    ui->lblThresholdHT->setText(QString::number(int(prefs->hsThresholdHT())));
    ui->hsThresholdR->setValue(int(prefs->hsThresholdR()));
    ui->lblThresholdR->setText(QString::number(int(prefs->hsThresholdR())));
    ui->hsSizeHP->setValue(int(prefs->hsSizeHP()));
    ui->lblSizeHP->setText(QString::number(int(prefs->hsSizeHP())));
    ui->hsSizeHT->setValue(int(prefs->hsSizeHT()));
    ui->lblSizeHT->setText(QString::number(int(prefs->hsSizeHT())));
    ui->hsSizeR->setValue(int(prefs->hsSizeR()));
    ui->lblSizeR->setText(QString::number(int(prefs->hsSizeR())));

    ui->gridOpacity->setValue(int(prefs->GridOpacity()));
    ui->gridWidth->setValue(int(prefs->GridWidth()));
    ui->thumbWidth->setValue(int(prefs->ThumbWidth()));

    connect(ui->gridOpacity, qOverload<int>(&QSpinBox::valueChanged), Preferences::instance(), &Preferences::setGridOpacity);
    connect(ui->gridWidth, qOverload<int>(&QSpinBox::valueChanged), Preferences::instance(), &Preferences::setGridWidth);
    connect(ui->thumbWidth, qOverload<int>(&QSpinBox::valueChanged), Preferences::instance(), &Preferences::setThumbWidth);
  
}



void PreferencesDialog::browseTilesDirectory()
{
    QString f = QFileDialog::getExistingDirectory(this, tr("Tiles Directory"),
                                                  ui->tilesDirectory->text());
    if (!f.isEmpty()) {
        mTilesDirectory = f;
        ui->tilesDirectory->setText(QDir::toNativeSeparators(f));
    }
}

void PreferencesDialog::gridColorChanged(const QColor &gridColor)
{
    mGridColor = gridColor;
}

void PreferencesDialog::accept()
{
    QDialog::accept();

    Preferences *prefs = Preferences::instance();
    Tiled::TileMetaInfoMgr::instance()->changeTilesDirectory(mTilesDirectory);
    prefs->setUseOpenGL(ui->openGL->isChecked());
    prefs->setWorldThumbnails(ui->thumbnails->isChecked());
    prefs->setGridColor(mGridColor);
    prefs->setShowAdjacentMaps(ui->showAdjacent->isChecked());
    prefs->setZombieSpawnImageOpacity(ui->zombieSpawnImageOpacity->value() / 100.0);
    prefs->setHsThresholdHP(ui->hsThresholdHP->value());
    prefs->setHsSizeHP(ui->hsSizeHP->value());
    prefs->setHsThresholdHT(ui->hsThresholdHT->value());
    prefs->setHsSizeHT(ui->hsSizeHT->value());
    prefs->setHsThresholdR(ui->hsThresholdR->value());
    prefs->setHsSizeR(ui->hsSizeR->value());

    prefs->setGridOpacity(ui->gridOpacity->value());
    prefs->setGridWidth(ui->gridWidth->value());
    prefs->setThumbWidth(ui->thumbWidth->value());

    prefs->setLoadLastActivProject(ui->LoadLastActiv->isChecked());
    prefs->setenableDarkTheme(ui->enableDarkTheme->isChecked());
}
