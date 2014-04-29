console.log("TVKeyValue.js loaded!");

/*
if(typeof Common !== 'object') Common =  {};
if(typeof Common.API !== 'object') Common.API = {};
if(typeof Common.API.TVKeyValue === 'undefined')
{

    Common.API.TVKeyValue = (function()
        {
           var TVKeyValue = function()
           {

           };

           TVKeyValue.prototype =  {
                KEY_TOOLS: 0,
                KEY_MUTE: 1,
                KEY_RETURN: 2,
                KEY_UP: 3,
                KEY_DOWN: 4,
                KEY_LEFT: 5,
                KEY_RIGHT: 6,
                KEY_WHEELDOWN: 7,
                KEY_WHEELUP: 8,
                KEY_ENTER: 9,
                KEY_INFO: 10,
                KEY_EXIT: 11,
                KEY_RED: 12,
                KEY_GREEN: 13,
                KEY_YELLOW: 14,
                KEY_BLUE: 15,
                KEY_INFOLINK: 16,
                KEY_RW: 17,
                KEY_PAUSE: 18,
                KEY_FF: 19,
                KEY_PLAY: 20,
                KEY_STOP: 21,
                KEY_1: 22,
                KEY_2: 23,
                KEY_3: 24,
                KEY_4: 25,
                KEY_5: 26,
                KEY_6: 27,
                KEY_7: 28,
                KEY_8: 29,
                KEY_9: 30,
                KEY_0: 31,
                KEY_EMPTY: 32,
                KEY_PRECH: 33,
                KEY_SOURCE: 34,
                KEY_CHLIST: 35,
                KEY_MENU: 36,
                KEY_WLINK: 37,
                KEY_CC: 38,
                KEY_CONTENT: 39,
                KEY_FAVCH: 40,
                KEY_REC: 41,
                KEY_EMODE: 42,
                KEY_DMA: 43,
                KEY_PANEL_CH_UP: 44,
                KEY_PANEL_CH_DOWN: 45,
                KEY_PANEL_VOL_UP: 46,
                KEY_PANEL_VOL_DOWN: 47,
                KEY_PANEL_ENTER: 48,
                KEY_PANEL_SOURCE: 49,
                KEY_PANEL_MENU: 50,
                KEY_PANEL_POWER: 51
            };

            return TVKeyValue;

        })();
}

PL_TVMW_LANGUAGE_THA = {};

*/

/**
 *@file            TVKeyValue.js
 *@brief         TV key 값을 저장한 파일
 *@author      삼성 SDS, ESDM개발, 김성태선임
 *@date         2009.02.18
 */
if (this.Common == null) {
    this.Common = new Object();
}
if (this.Common.API == null) {
    this.Common.API = new Object();
}

Common.API.TVKeyValue = function(){
    var $THIS$ = this;

    // 위젯에서 키 처리시 실제 사용하는 값
    this.KEY_TOOLS = 75;
    this.KEY_MUTE = 27;
    this.KEY_RETURN = 88;
    this.KEY_UP = 29460;
    this.KEY_DOWN = 29461;
    this.KEY_LEFT = 4;
    this.KEY_RIGHT = 5;
    this.KEY_WHEELDOWN = 29469;
    this.KEY_WHEELUP = 29468;
    this.KEY_ENTER = 29443;
    this.KEY_INFO = 31;
    this.KEY_EXIT = 45;
    this.KEY_RED = 108;
    this.KEY_GREEN = 20;
    this.KEY_YELLOW = 21;
    this.KEY_BLUE = 22;
    this.KEY_INFOLINK = 147;
    this.KEY_RW = 69;
    this.KEY_PAUSE = 74;
    this.KEY_FF = 72;
    this.KEY_PLAY = 71;
    this.KEY_STOP = 70;
    this.KEY_1 = 101;
    this.KEY_2 = 98;
    this.KEY_3 = 6;
    this.KEY_4 = 8;
    this.KEY_5 = 9;
    this.KEY_6 = 10;
    this.KEY_7 = 12;
    this.KEY_8 = 13;
    this.KEY_9 = 14;
    this.KEY_0 = 17;
    this.KEY_EMPTY = 0;

    this.KEY_PRECH = 259;
    this.KEY_SOURCE = 222;
    this.KEY_CHLIST = 84;
    this.KEY_MENU = 262;
    this.KEY_WLINK = 115;
    this.KEY_CC = 118;
    this.KEY_CONTENT = 261;
    this.KEY_FAVCH = 256;
    this.KEY_REC = 192;
    this.KEY_EMODE = 148;
    this.KEY_DMA = 260;

    this.KEY_PANEL_CH_UP= 105;
    this.KEY_PANEL_CH_DOWN = 106;
    this.KEY_PANEL_VOL_UP = 203;
    this.KEY_PANEL_VOL_DOWN = 204;
    this.KEY_PANEL_ENTER = 309;
    this.KEY_PANEL_SOURCE = 612;
    this.KEY_PANEL_MENU = 613;
    this.KEY_PANEL_POWER = 614;

    // Added by ck1.seo@samsung.com
    // For all key regist
    // 3 April 2009
    this.KEY_POWER = 76;
    this.KEY_TV = 77;
    this.KEY_VOL_UP = 7;
    this.KEY_VOL_DOWN = 11;
    this.KEY_CH_UP = 68;
    this.KEY_CH_DOWN = 65;
    this.KEY_TTX_MIX = 650;
    this.KEY_GUIDE = 651;
    this.KEY_SUBTITLE = 652;
    this.KEY_ASPECT = 653;
    this.KEY_DOLBY_SRR = 654;
    this.KEY_MTS = 655;
    this.KEY_12 = 1057;
    this.KEY_DISC_MENU = 1086;
    this.KEY_3D = 1219;
    this.KEY_PIP_ONOFF = 1032;
    this.KEY_AD = 1039;
    this.KEY_PMODE = 1040;
    this.KEY_SMODE = 1043;
    this.KEY_PIP_CHUP = 1050;
    this.KEY_PIP_CHDOWN = 1051;
    this.KEY_FF_ = 1078;
    this.KEY_REWIND_ = 1080;
    this.KEY_SUB_TITLE = 1089;
    this.KEY_SLEEP = 1097;
    this.KEY_D_AUDIO = 1236;
    this.KEY_D_VIEW_MODE = 1249;
    this.KEY_STEP = 1023;			// REC PAUSE(BD)
    this.KEY_CALLER_ID = 1128;		// FULL SCREEN (BD)
    this.KEY_ZOOM1 = 1083;
}





