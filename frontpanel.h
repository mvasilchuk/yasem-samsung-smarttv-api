#ifndef FRONTPANEL_H
#define FRONTPANEL_H

#include "BaseWidget.h"

namespace yasem
{
class FrontPanel: public BaseWidget
{
    Q_OBJECT
public:
    explicit FrontPanel(Profile *profile, QWidget *parent = 0);

signals:

public slots:
    QString GetPluginInfo(int infoId);



    // BaseWidget interface
protected:
    QString group();
};
}

#endif // FRONTPANEL_H
