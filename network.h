#ifndef NETWORK_H
#define NETWORK_H

#include "BaseWidget.h"

namespace yasem
{
class Network: public BaseWidget
{
    Q_OBJECT
public:
    explicit Network(Profile *profile, QWidget *parent = 0);

public slots:
    QString GetPluginInfo(int infoId);
    QString GetMAC();
    QString CreatePlugin();
protected:
    QString group();
};
}

#endif // NETWORK_H
