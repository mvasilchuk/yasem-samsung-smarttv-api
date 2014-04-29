#ifndef IMAGEVIEWER_H
#define IMAGEVIEWER_H

#include "BaseWidget.h"

#include <QWidget>

namespace yasem
{

class ImageViewer : public BaseWidget
{
    Q_OBJECT
public:
    explicit ImageViewer(Profile *profile, QWidget *parent = 0);

public slots:
    QString GetPluginInfo(int infoId);

protected:
    QString group();

};

}

#endif // IMAGEVIEWER_H
