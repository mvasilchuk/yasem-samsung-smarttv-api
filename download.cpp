#include "download.h"

using namespace yasem;

Download::Download(Profile *profile, QWidget *parent) :
    BaseWidget(profile, parent)
{
}

QString Download::GetPluginInfo(int infoId)
{
    return profile->datasource()->get(group(), "version", "Download-00011");
}

QString Download::group()
{
    return "Download";
}
