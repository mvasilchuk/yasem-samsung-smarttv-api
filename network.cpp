#include "network.h"

using namespace yasem;

Network::Network(Profile *profile, QWidget *parent) :
    BaseWidget(profile, parent)
{

}


QString Network::GetPluginInfo(int infoId = 0)
{
    Q_UNUSED(infoId);
    return profile->datasource()->get("Network", "version", "0.1");
}

QString Network::GetMAC()
{
    return profile->get("MAC", "00:00:00:00:00:00");
}

QString Network::group()
{
    return "Network";
}

QString Network::CreatePlugin()
{
    STUB();
    return "CreatePlugin";
}
