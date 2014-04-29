#include "device.h"

using namespace yasem;

Device::Device(Profile *profile, QWidget *parent) :
    BaseWidget(profile, parent)
{
}

QString Device::GetPluginInfo(int infoId)
{
    return profile->datasource()->get(group(), "version", "Device-00011");
}

QString Device::group()
{
    return "Device";
}
