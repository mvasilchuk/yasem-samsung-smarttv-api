#include "timeapi.h"

using namespace yasem;

TimeApi::TimeApi(Profile *profile, QWidget *parent) :
    BaseWidget(profile, parent)
{
    version = "0.1";
}

QString TimeApi::GetPluginInfo(int infoId)
{
    return profile->datasource()->get(group(), "version", "0.1");
}

QString TimeApi::group()
{
    return "Time";
}
