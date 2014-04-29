#ifndef SCREEN_H
#define SCREEN_H

#include "BaseWidget.h"

namespace yasem {
class Screen: public BaseWidget
{
    Q_OBJECT
public:
    explicit Screen(Profile *profile, QWidget *parent = 0);

signals:

public slots:
    QString GetPluginInfo(int infoId);

    // BaseWidget interface
protected:
    QString group();
};
}

#endif // SCREEN_H
