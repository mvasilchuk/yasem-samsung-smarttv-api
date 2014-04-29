#ifndef DOWNLOAD_H
#define DOWNLOAD_H

#include "BaseWidget.h"

namespace yasem
{


class Download : public BaseWidget
{
    Q_OBJECT
public:
    explicit Download(Profile *profile, QWidget *parent = 0);

signals:

public slots:

    QString GetPluginInfo(int infoId);
    QString group();
};

}

#endif // DOWNLOAD_H
