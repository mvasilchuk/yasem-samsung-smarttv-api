#include "tvmv.h"
#include "stbpluginobject.h"
#include "datasourcepluginobject.h"
#include "enums.h"
#include "macros.h"

using namespace yasem;

TVMV::TVMV(Profile *profile, QWidget *parent) :
    BaseWidget(profile, parent)
{

}

void TVMV::SetProfile(TVMV::PL_TVMW_PRFID profileID, const QString &value)
{
    STUB();
}

QString TVMV::GetProfile(TVMV::PL_TVMW_PRFID profileID)
{
    STUB();
    return "";
}

QString TVMV::GetSource()
{
    STUB();
    return "";
}

void TVMV::SetMediaSource()
{
    STUB();
}


QString TVMV::GetPluginInfo(int infoId)
{
    return profile->datasource()->get(group(), "version", "0.1");
}

QString TVMV::group()
{
    return "TVMV";
}
