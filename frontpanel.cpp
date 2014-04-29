#include "frontpanel.h"
#include "stbplugin.h"


using namespace yasem;

FrontPanel::FrontPanel(Profile *profile, QWidget *parent) :
    BaseWidget(profile, parent)
{

}


QString FrontPanel::GetPluginInfo(int infoId)
{
    return profile->datasource()->get(group(), "version", "0.1");
}

QString FrontPanel::group()
{
    return "FrontPanel";
}

