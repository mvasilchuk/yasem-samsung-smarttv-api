#ifndef APPCOMMON_H
#define APPCOMMON_H

#include "BaseWidget.h"

namespace yasem
{

class AppCommon: public BaseWidget
{
    Q_OBJECT
public:
    explicit AppCommon(Profile *profile, QWidget *parent = 0);

    enum TVKeyValue {
        KEY_TOOLS = 75,
        KEY_MUTE = 27,
        KEY_RETURN = 88,
        KEY_UP = 29460,
        KEY_DOWN = 29461,
        KEY_LEFT = 4,
        KEY_RIGHT = 5,
        KEY_WHEELDOWN = 29469,
        KEY_WHEELUP = 29468,
        KEY_ENTER = 29443,
        KEY_INFO = 31,
        KEY_EXIT = 45,
        KEY_RED = 108,
        KEY_GREEN = 20,
        KEY_YELLOW = 21,
        KEY_BLUE = 22,
        KEY_INFOLINK = 147,
        KEY_RW = 69,
        KEY_PAUSE = 74,
        KEY_FF = 72,
        KEY_PLAY = 71,
        KEY_STOP = 70,
        KEY_1 = 101,
        KEY_2 = 98,
        KEY_3 = 6,
        KEY_4 = 8,
        KEY_5 = 9,
        KEY_6 = 10,
        KEY_7 = 12,
        KEY_8 = 13,
        KEY_9 = 14,
        KEY_0 = 17,
        KEY_EMPTY = 0,

        KEY_PRECH = 259,
        KEY_SOURCE = 222,
        KEY_CHLIST = 84,
        KEY_MENU = 262,
        KEY_WLINK = 115,
        KEY_CC = 118,
        KEY_CONTENT = 261,
        KEY_FAVCH = 256,
        KEY_REC = 192,
        KEY_EMODE = 148,
        KEY_DMA = 148,

        KEY_PANEL_CH_UP = 105,
        KEY_PANEL_CH_DOWN = 106,
        KEY_PANEL_VOL_UP = 203,
        KEY_PANEL_VOL_DOWN = 204,
        KEY_PANEL_ENTER = 309,
        KEY_PANEL_SOURCE = 612,
        KEY_PANEL_MENU = 613,
        KEY_PANEL_POWER = 614,

        KEY_POWER = 76,
        KEY_TV = 77,
        KEY_VOL_UP = 7,
        KEY_VOL_DOWN = 11,
        KEY_CH_UP = 68,
        KEY_CH_DOWN = 65,
        KEY_TTX_MIX = 650,
        KEY_GUIDE = 651,
        KEY_SUBTITLE = 652,
        KEY_ASPECT = 653,
        KEY_DOLBY_SRR = 654,
        KEY_MTS = 655,
        KEY_12 = 1057,
        KEY_DISC_MENU = 1086,
        KEY_3D = 1219,
        KEY_PIP_ONOFF = 1032,
        KEY_AD = 1039,
        KEY_PMODE = 1040,
        KEY_SMODE = 1043,
        KEY_PIP_CHUP = 1050,
        KEY_PIP_CHDOWN = 1051,
        KEY_FF_ = 1078,
        KEY_REWIND_ = 1080,
        KEY_SUB_TITLE = 1089,
        KEY_SLEEP = 1097,
        KEY_D_AUDIO = 1236,
        KEY_D_VIEW_MODE = 1249,
        KEY_STEP = 1023,			// REC PAUSE(BD)
        KEY_CALLER_ID = 1128,		// FULL SCREEN (BD)
        KEY_ZOOM1 = 1083
    };
public slots:
    QString GetPluginInfo(int infoId);
    void SubscribeEvent(int event);

    void RegisterAllKey();
    void UnregisterAllKey();
protected:
    QString group();
    QHash<RC_KEY, int> keyMap;
};

}

#endif // APPCOMMON_H
