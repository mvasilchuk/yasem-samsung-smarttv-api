#include "storage.h"

using namespace yasem;

Storage::Storage(Profile *profile, QWidget *parent) :
    BaseWidget(profile, parent)
{
}

QString Storage::GetPluginInfo(int infoId)
{
    return profile->datasource()->get(group(), "version", "STORAGE-00011");
}

QString Storage::group()
{
    return "Storage";
}
