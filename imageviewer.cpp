#include "imageviewer.h"

using namespace yasem;

ImageViewer::ImageViewer(Profile *profile, QWidget *parent) :
    BaseWidget(profile, parent)
{
}

QString ImageViewer::group()
{
    return "ImageViewer";
}

QString ImageViewer::GetPluginInfo(int infoId)
{
    return profile->datasource()->get(group(), "version", "0.1");
}
