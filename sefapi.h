#ifndef SEFAPI_H
#define SEFAPI_H

#include "BaseWidget.h"

namespace yasem
{

class SefApi: public BaseWidget
{
    Q_OBJECT
public:
    explicit SefApi(Profile *profile, QWidget *parent = 0);

signals:

public slots:


    // BaseWidget interface
public slots:
    QString GetPluginInfo(int infoId);

    // BaseWidget interface
    QString Execute(const QString &cmd);
protected:
    QString group();
};

}

#endif // SEFAPI_H
