#include "nnavi.h"
#include "macros.h"

using namespace yasem;

NNAVI::NNAVI(Profile *profile, QWidget *parent) :
    BaseWidget(profile, parent)
{

}


QString NNAVI::GetPluginInfo(int infoId)
{
    Q_UNUSED(infoId);
    return profile->datasource()->get(group(), "version", "0.1");
}

QString NNAVI::GetFirmware()
{
    STUB();
    return profile->datasource()->get(group(), "firmware", "T-INFOLINK2011");
}

QString NNAVI::group()
{
    return "NNavi";
}

void NNAVI::unregistKey(int key)
{
    STUB() << key;
}

void NNAVI::SetBannerState(int state)
{
    STUB() << state;
}
