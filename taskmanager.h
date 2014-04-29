#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include "BaseWidget.h"

namespace yasem
{

class TaskManager : public BaseWidget
{
    Q_OBJECT
public:
    explicit TaskManager(Profile *profile, QWidget *parent = 0);

signals:

public slots:

    QString GetPluginInfo(int infoId);
    QString group();
};

}

#endif // TASKMANAGER_H
