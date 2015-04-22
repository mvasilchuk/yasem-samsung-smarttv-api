#include "frontpanel.h"
#include "stbpluginobject.h"


using namespace yasem;

FrontPanel::FrontPanel(Profile *profile, QWidget *parent) :
    BaseWidget(profile, parent)
{

}


QString FrontPanel::GetPluginInfo(int infoId)
{
    Q_UNUSED(infoId);
    return profile->datasource()->get(group(), "version", "0.1");
}

QString FrontPanel::group()
{
    return "FrontPanel";
}

