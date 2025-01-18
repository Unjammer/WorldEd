#ifndef BIOMEMAPGENERATORDIALOG_H
#define BIOMEMAPGENERATORDIALOG_H

#include <QDialog>
#include "ImageProcessor.h"
#include "worlddocument.h"

namespace Ui { class biomemapgeneratorDialog; }

class biomemapgeneratorDialog : public QDialog
{
    Q_OBJECT

public:
    explicit biomemapgeneratorDialog(World *world, QWidget *parent = nullptr);
    ~biomemapgeneratorDialog();

private slots:
    void browseMainImage();
    void browseVegImage();
    void browseOutputPath();
    void processImages();

private:
    void splitImageToTiles(const QImage& inputFilePath, const QString& outputDirectory, int startX, int startY);

    Ui::biomemapgeneratorDialog *ui;
    ImageProcessor *imageProcessor;
    World *mWorld;
};

#endif // BIOMEMAPGENERATORDIALOG_H
