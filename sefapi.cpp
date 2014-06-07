#include "sefapi.h"

using namespace yasem;

SefApi::SefApi(Profile *profile, QWidget *parent) :
    BaseWidget(profile, parent)
{
    version = "0.1";
}

QString SefApi::GetPluginInfo(int infoId)
{
    Q_UNUSED(infoId);
    return profile->datasource()->get(group(), "version", "0.1");
}

QString SefApi::group()
{
    return "Sef";
}

QString SefApi::Execute(const QString &cmd)
{
    STUB();
    return "";
}
