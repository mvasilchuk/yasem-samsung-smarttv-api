#include "tv.h"

using namespace yasem;

TV::TV(Profile *profile, QWidget *parent) :
    BaseWidget(profile, parent)
{

}


QString TV::GetPluginInfo(int infoId)
{
    Q_UNUSED(infoId);
    return profile->datasource()->get(group(), "version", "0.1");
}

QString TV::group()
{
    return "TV";
}

QString TV::GetProductType()
{
    STUB();
    return "";
}

QString TV::GetSource()
{
    STUB();
    return "STUB";
}
