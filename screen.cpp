#include "screen.h"

using namespace yasem;

Screen::Screen(Profile *profile, QWidget *parent) :
    BaseWidget(profile, parent)
{

}


QString Screen::GetPluginInfo(int infoId)
{
    return profile->datasource()->get(group(), "version", "0.1");
}

QString Screen::group()
{
    return "Screen";
}
