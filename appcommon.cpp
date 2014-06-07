
#include "appcommon.h"
#include "macros.h"
#include "browserplugin.h"

using namespace yasem;

AppCommon::AppCommon(Profile *profile, QWidget *parent) :
    BaseWidget(profile, parent)
{

}

QString AppCommon::GetPluginInfo(int infoId)
{
    Q_UNUSED(infoId);
    return profile->datasource()->get(group(), "version", "0.1");
}

void AppCommon::SubscribeEvent(int event)
{
    STUB_WITH_PARAMS(event);
}

QString AppCommon::group()
{
    return "AppCommon";
}

void AppCommon::RegisterAllKey()
{
    STUB();
}

void AppCommon::UnregisterAllKey()
{
    STUB();
}
