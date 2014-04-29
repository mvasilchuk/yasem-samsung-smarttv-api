#include "video.h"

using namespace yasem;

Video::Video(Profile *profile, QWidget *parent) :
    BaseWidget(profile, parent)
{
    version = "0.1";
}

QString Video::GetPluginInfo(int infoId)
{
    return profile->datasource()->get(group(), "version", "0.1");
}

QString Video::group()
{
    return "Video";
}
