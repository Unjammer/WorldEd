#include "ImageProcessor.h"
#include "preferences.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QDir>

ImageProcessor::ImageProcessor() {
    // Initialisation de m_colorSwaps
    m_colorSwaps = {
        {qRgb(0, 138, 255), qRgb(0, 0, 0)},          // Water
        {qRgb(100, 100, 100), qRgb(64, 64, 64)},     // ForagingNav
        {qRgb(120, 120, 120), qRgb(115, 115, 115)},  // TownZone
        {qRgb(165, 160, 140), qRgb(115, 115, 115)},  // TownZone
        {qRgb(145, 135, 60), qRgb(171, 171, 171)},   // Vegitation
                {qRgb(145, 135, 61), qRgb(171, 171, 171)},   // Vegitation
        {qRgb(90, 100, 35), qRgb(171, 171, 171)},    // Vegitation
        {qRgb(117, 117, 47), qRgb(171, 171, 171)},   // Vegitation
        {qRgb(120, 70, 20), qRgb(141, 141, 141)},    // FarmLand
        {qRgb(0, 255, 0), qRgb(204, 204, 204)},      // farm_forest
        {qRgb(64, 0, 0), qRgb(153, 153, 153)},       // ph_forest
        {qRgb(255, 0, 0), qRgb(153, 153, 153)},       // ph_forest
        {qRgb(127, 0, 0), qRgb(255, 255, 255)},      // DeepForest
        {qRgb(255, 0, 255), qRgb(192, 192, 192)},    // farmmix_forest
        {qRgb(210, 200, 160), qRgb(102, 102, 102)},  // TrailerPark
        {qRgb(140, 70, 15), qRgb(102, 102, 102)},  // TrailerPark
        {qRgb(255, 128, 0), qRgb(128, 128, 128)},    // Farm
        {qRgb(220, 100, 0), qRgb(128, 128, 128)}     // Farm
    };
}

QImage ImageProcessor::replaceColors(const QImage &inputImage) {
    QImage result(inputImage.size(), QImage::Format_ARGB32);

    for (int y = 0; y < inputImage.height(); ++y) {
        for (int x = 0; x < inputImage.width(); ++x) {
            QRgb originalColor = inputImage.pixel(x, y);

            // Remplace la couleur si elle correspond, sinon garde la couleur d'origine
            QRgb newColor = m_colorSwaps.value(originalColor, originalColor);
            result.setPixel(x, y, newColor);
        }
    }

    return result;
}

QImage ImageProcessor::processAndSimplifyImages(const QImage &image1, const QImage &image2, int blockSize) {
    if (image1.size() != image2.size()) {
        qWarning() << "Images must have the same size!";
        return QImage();
    }

    // Fusion des deux images
    QImage fusedImage(image1.size(), QImage::Format_ARGB32);
    for (int y = 0; y < image1.height(); ++y) {
        for (int x = 0; x < image1.width(); ++x) {
            QColor color1 = image1.pixelColor(x, y);
            QColor color2 = image2.pixelColor(x, y);

            // Si le pixel de l'image 2 est noir, on garde celui de l'image 1
            QColor finalColor = (color2 == QColor(0, 0, 0)) ? color1 : color2;

            fusedImage.setPixelColor(x, y, finalColor);
        }
    }

    // Simplification de l'image fusionnée en blocs de `blockSize` x `blockSize`
    QImage result(fusedImage.size(), QImage::Format_ARGB32);
    for (int y = 0; y < fusedImage.height(); y += blockSize) {
        for (int x = 0; x < fusedImage.width(); x += blockSize) {
            QColor topLeftColor = fusedImage.pixelColor(x, y);

            // Appliquer cette couleur à tous les pixels du bloc
            for (int dy = 0; dy < blockSize; ++dy) {
                for (int dx = 0; dx < blockSize; ++dx) {
                    int px = x + dx;
                    int py = y + dy;

                    if (px < fusedImage.width() && py < fusedImage.height()) {
                        result.setPixelColor(px, py, topLeftColor);
                    }
                }
            }
        }
    }

    return replaceColors(result);
}
