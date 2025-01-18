#include "biomemapgeneratorDialog.h"
#include "ui_biomemapgenerator.h"
#include "preferences.h"
#include "map.h"
#include "world.h"
#include "worlddocument.h"
#include "mainwindow.h"
#include "generatelotsdialog.h"

#include "layer.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>
#include <QDebug>
#include <QPainter>

biomemapgeneratorDialog::biomemapgeneratorDialog(World *world, QWidget* parent)
    : QDialog(parent)
    , ui(new Ui::biomemapgeneratorDialog)
    , imageProcessor(new ImageProcessor())
    , mWorld(world) // Stockage de l'instance WorldDocument
{
    ui->setupUi(this);

    Preferences* prefs = Preferences::instance();

    // Initialiser les champs ou paramètres à partir de mWorldDoc
    const GenerateLotsSettings& settings = mWorld->getGenerateLotsSettings();
    ui->xOrigin->setValue(settings.worldOrigin.x());
    ui->yOrigin->setValue(settings.worldOrigin.y());
    QDir biomeMapExport = settings.exportDir + QLatin1String("/maps/");
    if (!biomeMapExport.exists()) {
        if (!biomeMapExport.mkpath(QLatin1String("."))) {
            qWarning() << "Failed to create directory:" << biomeMapExport.absolutePath();
            // Gérez l'erreur ici, par exemple en affichant un message à l'utilisateur.
        } else {
            qDebug() << "Directory created successfully:" << biomeMapExport.absolutePath();
        }
    }
    ui->outputBiomeMapPath->setText(settings.exportDir + QLatin1String("/maps/"));
    // Connecter les boutons à leurs fonctions
    connect(ui->browseMainImage, &QToolButton::clicked, this, &biomemapgeneratorDialog::browseMainImage);
    connect(ui->browseVegImage, &QToolButton::clicked, this, &biomemapgeneratorDialog::browseVegImage);
    connect(ui->browseBiomeMap, &QToolButton::clicked, this, &biomemapgeneratorDialog::browseOutputPath);
    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &biomemapgeneratorDialog::processImages);
}

biomemapgeneratorDialog::~biomemapgeneratorDialog()
{
    delete ui;
    delete imageProcessor;
}

void biomemapgeneratorDialog::browseMainImage()
{
    QString mapPath = mWorld->getGenerateLotsSettings().exportDir + QLatin1String("/..");
    Preferences *prefs = Preferences::instance();
    QString filePath = QFileDialog::getOpenFileName(this, tr("Select Main Image"), mapPath, tr("Images (*.png *.bmp *.jpg)"));
    if (!filePath.isEmpty()) {
        ui->mainImagePath->setText(filePath);
    }
}

void biomemapgeneratorDialog::browseVegImage()
{
    QString mapPath = mWorld->getGenerateLotsSettings().exportDir + QLatin1String("/..");
    Preferences *prefs = Preferences::instance();
    QString filePath = QFileDialog::getOpenFileName(this, tr("Select Vegetation Image"), mapPath, tr("Images (*.png *.bmp *.jpg)"));
    if (!filePath.isEmpty()) {
        ui->vegImagePath->setText(filePath);
    }
}

void biomemapgeneratorDialog::browseOutputPath()
{
     QString mapPath = mWorld->getGenerateLotsSettings().exportDir + QLatin1String("/..") + QLatin1String("/biome.png");
    Preferences *prefs = Preferences::instance();
    QString filePath = QFileDialog::getSaveFileName(this, tr("Select Output File"), mapPath, tr("PNG Image (*.png)"));
    if (!filePath.isEmpty()) {
        ui->outputBiomeMapPath->setText(filePath + QLatin1String("/biome.png"));
    }
}

void biomemapgeneratorDialog::processImages()
{
    QString mainImagePath = ui->mainImagePath->text();
    QString vegImagePath = ui->vegImagePath->text();
    QString outputPath = ui->outputBiomeMapPath->text();

    if (mainImagePath.isEmpty() || vegImagePath.isEmpty() || outputPath.isEmpty()) {
        QMessageBox::warning(this, tr("Missing Input"), tr("Please specify all input and output paths."));
        return;
    }

    QImage mainImage(mainImagePath);
    QImage vegImage(vegImagePath);

    if (mainImage.isNull() || vegImage.isNull()) {
        QMessageBox::warning(this, tr("Invalid Images"), tr("Could not load one or more images."));
        return;
    }

    if (mainImage.size() != vegImage.size()) {
        QMessageBox::warning(this, tr("Size Mismatch"), tr("The input images must have the same dimensions."));
        return;
    }

    //QImage result = imageProcessor->processImages(mainImage, vegImage);
    QImage simplified = imageProcessor->processAndSimplifyImages(mainImage,vegImage, 8);

    if (!simplified.save(outputPath + QLatin1String("biome.png"))) {
        QMessageBox::warning(this, tr("Save Failed"), tr("Could not save the output image."));
        return;
    }

    QFileInfo fi(outputPath);
    //QMessageBox::information(this, tr("Success"), tr("The output biome map was successfully created."));
    splitImageToTiles(simplified, outputPath, ui->xOrigin->value(), ui->yOrigin->value() );
}

void biomemapgeneratorDialog::splitImageToTiles(const QImage& image, const QString& outputDirectory, int startX, int startY)
{
    if (image.isNull()) {
        qWarning() << "Invalid image provided.";
        QMessageBox::warning(this, tr("Error"), tr("Could not load the generated image for tiling."));
        return;
    }

    int tileWidth = 256;
    int tileHeight = 256;

    int tilesX = (image.width() + tileWidth - 1) / tileWidth; // Nombre de tuiles en X
    int tilesY = (image.height() + tileHeight - 1) / tileHeight; // Nombre de tuiles en Y

    QDir outputDir(outputDirectory);
    if (!outputDir.exists() && !outputDir.mkpath(QLatin1String("."))) {
        qWarning() << "Failed to create output directory:" << outputDirectory;
        QMessageBox::warning(this, tr("Error"), tr("Could not create the output directory for tiles."));
        return;
    }

    for (int y = 0; y < tilesY; ++y) {
        for (int x = 0; x < tilesX; ++x) {
            int startXPos = x * tileWidth;
            int startYPos = y * tileHeight;

            // Définir les dimensions de la partie copiée
            int width = qMin(tileWidth, image.width() - startXPos);
            int height = qMin(tileHeight, image.height() - startYPos);

            // Créer une image de 256x256 remplie en blanc
            QImage tile(tileWidth, tileHeight, QImage::Format_ARGB32);
            tile.fill(Qt::black);

            // Copier la partie de l'image source
            QPainter painter(&tile);
            painter.drawImage(0, 0, image, startXPos, startYPos, width, height);
            painter.end();

            // Générer le nom et le chemin de la tuile
            QString tileFileName = QLatin1String("biomemap_%1_%2.png")
                                       .arg(QString::number(startX + x))
                                       .arg(QString::number(startY + y));
            QString tileFilePath = outputDir.filePath(tileFileName);

            // Sauvegarder la tuile
            if (!tile.save(tileFilePath)) {
                qWarning() << "Failed to save tile:" << tileFilePath;
            } else {
                qDebug() << "Tile saved:" << tileFilePath;
            }
        }
    }

    QMessageBox::information(this, tr("Success"), tr("The image was successfully split into tiles."));
}


