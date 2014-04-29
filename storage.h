#ifndef STORAGE_H
#define STORAGE_H

#include "BaseWidget.h"

namespace yasem
{

class Storage: public BaseWidget
{
    Q_OBJECT
public:
    explicit Storage(Profile *profile, QWidget *parent = 0);

signals:

public slots:

    QString GetPluginInfo(int infoId);
    QString group();
};

}

#endif // STORAGE_H
