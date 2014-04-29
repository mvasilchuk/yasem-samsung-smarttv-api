#ifndef DEVICE_H
#define DEVICE_H

#include "BaseWidget.h"

namespace yasem
{


class Device : public BaseWidget
{
    Q_OBJECT
public:
    explicit Device(Profile *profile, QWidget *parent = 0);

signals:

public slots:

    QString GetPluginInfo(int infoId);
    QString group();
};

}

#endif // DEVICE_H
