#include "samsungprofile.h"
#include "browserplugin.h"
#include "profilemanager.h"
#include "appcommon.h"
#include "window.h"

#include <QFileInfo>
#include <QDir>

using namespace yasem;

SamsungProfile::SamsungProfile(StbPlugin *profilePlugin, const QString &id = "") :
    Profile(profilePlugin, id)
{
    userAgents.insert("UN46ES7100F", "Mozilla/5.0 (SMART-TV; X11; Linux i686) AppleWebKit/534.7 (KHTML, like Gecko) Version/5.0 Safari/534.7");

    portalResolutions.insert("qHD", QSize(960, 540));
    videoResolutions.insert("1080p", QSize(1920, 1080));
}

void SamsungProfile::start()
{
    STUB();

    QString defaultUrlString = "file://~/Dropbox/src/NetTvPlus_1.1_Europe_20121011/index.html";

    configureKeyMap();
    profilePlugin->browser()->stb(profilePlugin);

    QString userAgent = get(CONFIG_SUBMODEL, "UN46ES7100F");
    profilePlugin->browser()->setUserAgent(userAgents.value(userAgent));

    QString urlString = portal();
    DEBUG(urlString);
    QUrl portalUrl = QUrl(urlString.replace("~", QDir::homePath()));
    configData.parseConfigFile(portalUrl.toString(QUrl::RemoveFilename));

    if(configData.width > 0 && configData.height > 0)
    {
        profilePlugin->browser()->setInnerSize(configData.width, configData.height);
    }
    else
    {
        QString portalSize = get(CONFIG_PORTAL_SIZE, "qHD");
        profilePlugin->browser()->setInnerSize(portalResolutions.value(portalSize));
    }

    profilePlugin->browser()->load(portalUrl);
}

void SamsungProfile::stop()
{
    STUB();
}

void SamsungProfile::initDefaults()
{
    datasource()->set("AppCommon", "version", "0.1");
    datasource()->set("Audio", "version", "AUDIO-00011");
    datasource()->set("FileSystem", "version", "0.1");
    datasource()->set("Network", "version", "0.1");
    datasource()->set("NNavi", "version", "0.1");
    datasource()->set("Player", "version", "0.1");
    datasource()->set("Screen", "version", "0.1");
    datasource()->set("Sef", "version", "0.1");
    datasource()->set("Time", "version", "0.1");
    datasource()->set("TV", "version", "0.1");
    datasource()->set("TVMV", "version", "0.1");
    datasource()->set("Video", "version", "0.1");
    datasource()->set("Window", "version", "0.1");

    datasource()->set("Window", "source", (int)Window::PL_WINDOW_SOURCE_HDMI1);
    datasource()->set("NNavi", "firmware", "T-INFOLINK2011");
    datasource()->set("Network", "MAC", "00:00:00:00:00:00");
}

void SamsungProfile::configureKeyMap()
{
    STUB();
    BrowserPlugin* browser = profilePlugin->browser();

    browser->clearKeyEvents();

    browser->registerKeyEvent(RC_KEY_OK, AppCommon::KEY_ENTER, AppCommon::KEY_ENTER);
    browser->registerKeyEvent(RC_KEY_LEFT, AppCommon::KEY_LEFT, AppCommon::KEY_LEFT);
    browser->registerKeyEvent(RC_KEY_RIGHT, AppCommon::KEY_RIGHT, AppCommon::KEY_RIGHT);
    browser->registerKeyEvent(RC_KEY_UP, AppCommon::KEY_UP, AppCommon::KEY_UP);
    browser->registerKeyEvent(RC_KEY_DOWN, AppCommon::KEY_DOWN, AppCommon::KEY_DOWN);

    browser->registerKeyEvent(RC_KEY_NUMBER_0, AppCommon::KEY_0, AppCommon::KEY_0);
    browser->registerKeyEvent(RC_KEY_NUMBER_1, AppCommon::KEY_1, AppCommon::KEY_1);
    browser->registerKeyEvent(RC_KEY_NUMBER_2, AppCommon::KEY_2, AppCommon::KEY_2);
    browser->registerKeyEvent(RC_KEY_NUMBER_3, AppCommon::KEY_3, AppCommon::KEY_3);
    browser->registerKeyEvent(RC_KEY_NUMBER_4, AppCommon::KEY_4, AppCommon::KEY_4);
    browser->registerKeyEvent(RC_KEY_NUMBER_5, AppCommon::KEY_5, AppCommon::KEY_5);
    browser->registerKeyEvent(RC_KEY_NUMBER_6, AppCommon::KEY_6, AppCommon::KEY_6);
    browser->registerKeyEvent(RC_KEY_NUMBER_7, AppCommon::KEY_7, AppCommon::KEY_7);
    browser->registerKeyEvent(RC_KEY_NUMBER_8, AppCommon::KEY_8, AppCommon::KEY_8);
    browser->registerKeyEvent(RC_KEY_NUMBER_9, AppCommon::KEY_9, AppCommon::KEY_9);

    /*browser->registerKeyEvent(RC_KEY_BACK, AppCommon::KEY_RETURN, AppCommon::KEY_RETURN);
    browser->registerKeyEvent(RC_KEY_PAGE_UP, AppCommon::KEY_, AppCommon::KEY_DOWN);
    browser->registerKeyEvent(RC_KEY_PAGE_DOWN, AppCommon::KEY_DOWN, AppCommon::KEY_DOWN);

    browser->registerKeyEvent(RC_KEY_FAST_FORWARD, AppCommon::KEY_DOWN, AppCommon::KEY_DOWN);
    browser->registerKeyEvent(RC_KEY_REWIND, AppCommon::KEY_DOWN, AppCommon::KEY_DOWN);
    browser->registerKeyEvent(RC_KEY_STOP, AppCommon::KEY_DOWN, AppCommon::KEY_DOWN);
    browser->registerKeyEvent(RC_KEY_PLAY_PAUSE, AppCommon::KEY_DOWN, AppCommon::KEY_DOWN);

    browser->registerKeyEvent(RC_KEY_EXIT, AppCommon::KEY_DOWN, AppCommon::KEY_DOWN);
    browser->registerKeyEvent(RC_KEY_MENU, AppCommon::KEY_DOWN, AppCommon::KEY_DOWN);
    browser->registerKeyEvent(RC_KEY_REFRESH, AppCommon::KEY_DOWN, AppCommon::KEY_DOWN);

    browser->registerKeyEvent(RC_KEY_RED, AppCommon::KEY_DOWN, AppCommon::KEY_DOWN);
    browser->registerKeyEvent(RC_KEY_GREEN, AppCommon::KEY_DOWN, AppCommon::KEY_DOWN);
    browser->registerKeyEvent(RC_KEY_YELLOW, AppCommon::KEY_DOWN, AppCommon::KEY_DOWN);
    browser->registerKeyEvent(RC_KEY_BLUE, AppCommon::KEY_DOWN, AppCommon::KEY_DOWN);*/
}

QString SamsungProfile::portal()
{
    return datasource()->get(DB_TAG_PROFILE, CONFIG_PORTAL_URL);
}
