#ifndef TIME_H
#define TIME_H

#include "BaseWidget.h"


namespace yasem
{
class TimeApi: public BaseWidget
{
    Q_OBJECT
public:
    explicit TimeApi(Profile *profile, QWidget *parent = 0);

signals:

public slots:


    // BaseWidget interface
public slots:
    QString GetPluginInfo(int infoId);

    // BaseWidget interface
protected:
    QString group();
};

}

#endif // TIME_H
