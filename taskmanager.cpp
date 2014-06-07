#include "taskmanager.h"

using namespace yasem;

TaskManager::TaskManager(Profile *profile, QWidget *parent) :
    BaseWidget(profile, parent)
{
}

QString TaskManager::GetPluginInfo(int infoId)
{
    Q_UNUSED(infoId);
    return profile->datasource()->get(group(), "version", "TaskManager-00011");
}

QString TaskManager::group()
{
    return "TaskManager";
}
