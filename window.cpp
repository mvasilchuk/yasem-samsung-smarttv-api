#include "window.h"

using namespace yasem;

Window::Window(Profile *profile, QWidget *parent) :
    BaseWidget(profile, parent)
{

}


QString Window::GetPluginInfo(int infoId)
{
    return profile->datasource()->get(group(), "version", "0.1");
}

int Window::GetSource()
{
    return profile->datasource()->get(group(), "source", (int)source);
}

void Window::SetSource(int src)
{
    source = (Window::PL_WINDOW_SOURCE) src;
    profile->datasource()->set(group(), "source", (int)source);
}

QString Window::group()
{
    return "Window";
}
