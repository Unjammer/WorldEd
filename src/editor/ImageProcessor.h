#ifndef IMAGEPROCESSOR_H
#define IMAGEPROCESSOR_H

#include <QImage>
#include <QMap>
#include <QRgb>

class ImageProcessor {
public:
    ImageProcessor();

    /**
     * @brief Fusionne deux images, simplifie la fusion en blocs de taille donnée et applique les remplacements de couleurs.
     * @param image1 Première image (prioritaire pour les pixels noirs dans l'image 2).
     * @param image2 Deuxième image.
     * @param blockSize Taille des blocs pour la simplification.
     * @return L'image fusionnée, simplifiée et avec les couleurs remplacées.
     */
    QImage processAndSimplifyImages(const QImage &image1, const QImage &image2, int blockSize = 8);

    /**
     * @brief Remplace les couleurs de l'image d'entrée selon les correspondances définies.
     * @param inputImage L'image d'entrée.
     * @return Une nouvelle image avec les couleurs remplacées.
     */
    QImage replaceColors(const QImage &inputImage);

private:
    QMap<QRgb, QRgb> m_colorSwaps; ///< Correspondances des couleurs pour les remplacements.
};

#endif // IMAGEPROCESSOR_H
