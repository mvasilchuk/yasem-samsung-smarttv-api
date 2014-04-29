#include "audio.h"
#include "stbplugin.h"
#include "datasource.h"
#include "pluginmanager.h"

using namespace yasem;

Audio::Audio(Profile *profile, QWidget *parent) :
    BaseWidget(profile, parent)
{
}


QString Audio::GetPluginInfo(int infoId)
{
    return profile->datasource()->get(group(), "version", "AUDIO-00011");
}

bool Audio::GetMute()
{
    return profile->getProfilePlugin()->player()->mute();
}

int Audio::GetVolume()
{
    return 0;
}

QString Audio::group()
{
    return "Audio";
}

bool Audio::GetUserMute()
{
    return false;
}
