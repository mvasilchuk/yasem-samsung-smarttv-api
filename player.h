#ifndef PLAYER_H
#define PLAYER_H

#include "BaseWidget.h"

namespace yasem {

class Player: public BaseWidget
{
    Q_OBJECT
public:
    explicit Player(Profile *profile, QWidget *parent = 0);

signals:

public slots:
    virtual QString GetPluginInfo(int infoId);

    // BaseWidget interface
    void Stop();
protected:
    QString group();
};
}

#endif // PLAYER_H
