#include "player.h"
#include "macros.h"

using namespace yasem;

Player::Player(Profile *profile, QWidget *parent) :
    BaseWidget(profile, parent)
{

}


QString Player::GetPluginInfo(int infoId)
{
    return profile->datasource()->get(group(), "version", "0.1");
}


QString Player::group()
{
    return "Player";
}

void Player::Stop()
{
    STUB();
}

