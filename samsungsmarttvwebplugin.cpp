
#include "stbprofile.h"
#include "plugin.h"
#include "browserplugin.h"
#include "samsungsmarttvwebplugin.h"
#include "audio.h"
#include "tvmv.h"
#include "frontpanel.h"
#include "nnavi.h"
#include "tv.h"
#include "network.h"
#include "imageviewer.h"
#include "screen.h"
#include "player.h"
#include "video.h"
#include "window.h"
#include "appcommon.h"
#include "timeapi.h"
#include "pluginmanager.h"
#include "sefapi.h"
#include "filesystem.h"
#include "samsungprofile.h"
#include "profilemanager.h"
#include "pluginmanager.h"
#include "storage.h"
#include "taskmanager.h"
#include "device.h"
#include "download.h"



#include <QHash>
#include <QDebug>
#include <QKeyEvent>

using namespace yasem;

SamsungSmartTvWebPlugin::SamsungSmartTvWebPlugin()
    : StbPlugin()
{
    STUB();
    this->browser(NULL);
    created = false;

    QList<StbSubmodel> subModels = getSubmodels();

    subModels.append(StbSubmodel("UE65F8000ATXUA"));
    subModels.append(StbSubmodel("UE55F8500ATXUA"));
    subModels.append(StbSubmodel("UE55F8000ATXUA"));
    subModels.append(StbSubmodel("UE46F8500ATXUA"));
    subModels.append(StbSubmodel("UE46F8000ATXUA"));
    subModels.append(StbSubmodel("UE40F8000ATXUA"));

    subModels.append(StbSubmodel("UE60F7000ATXUA"));
    subModels.append(StbSubmodel("UE55F7000ATXUA"));
    subModels.append(StbSubmodel("UE46F7000ATXUA"));
    subModels.append(StbSubmodel("UE40F7000ATXUA"));

    subModels.append(StbSubmodel("UE60F6100AKXUA"));
    subModels.append(StbSubmodel("UE55F6800ABXUA"));
    subModels.append(StbSubmodel("UE55F6650ABXUA"));
    subModels.append(StbSubmodel("UE55F6500ABXUA"));
    subModels.append(StbSubmodel("UE55F6400AKXUA"));
    subModels.append(StbSubmodel("UE55F6100AKXUA"));
    subModels.append(StbSubmodel("UE50F6500ABXUA"));
    subModels.append(StbSubmodel("UE50F6400AKXUA"));

    subModels.append(StbSubmodel("UE50F6330AKXUA"));
    subModels.append(StbSubmodel("UE50F6200AKXUA"));
    subModels.append(StbSubmodel("UE50F6100AKXUA"));
    subModels.append(StbSubmodel("UE46F6650ABXUA"));
    subModels.append(StbSubmodel("UE46F6510ABXUA"));
    subModels.append(StbSubmodel("UE46F6500ABXUA"));
    subModels.append(StbSubmodel("UE46F6400AKXUA"));
    subModels.append(StbSubmodel("UE46F6330AKXUA"));
    subModels.append(StbSubmodel("UE46F6200AKXUA"));
    subModels.append(StbSubmodel("UE46F6100AKXUA"));
    subModels.append(StbSubmodel("UE40F6800ABXUA"));
    subModels.append(StbSubmodel("UE40F6650ABXUA"));
    subModels.append(StbSubmodel("UE40F6510ABXUA"));
    subModels.append(StbSubmodel("UE40F6500ABXUA"));
    subModels.append(StbSubmodel("UE40F6400AKXUA"));
    subModels.append(StbSubmodel("UE40F6330AKXUA"));
    subModels.append(StbSubmodel("UE40F6200AKXUA"));
    subModels.append(StbSubmodel("UE40F6100AKXUA"));
    subModels.append(StbSubmodel("UE32F6800ABXUA"));
    subModels.append(StbSubmodel("UE32F6510ABXUA"));
    subModels.append(StbSubmodel("UE32F6400AKXUA"));
    subModels.append(StbSubmodel("UE32F6330AKXUA"));
    subModels.append(StbSubmodel("UE32F6200AKXUA"));
    subModels.append(StbSubmodel("UE32F6100AKXUA"));
}


PLUGIN_ERROR_CODES SamsungSmartTvWebPlugin::initialize()
{
    STUB();
    browser(dynamic_cast<BrowserPlugin*>(PluginManager::instance()->getByRole(ROLE_BROWSER)));
    Q_ASSERT(browser() != NULL);
    return PLUGIN_ERROR_NO_ERROR;
}

PLUGIN_ERROR_CODES SamsungSmartTvWebPlugin::deinitialize()
{
    return PLUGIN_ERROR_NO_ERROR;
}

QUrl SamsungSmartTvWebPlugin::handleUrl(QUrl &url)
{
    //STUB();
    QString urlString = url.url();

    if(browser()->url().toString() == "")
    {
        QUrl newUrl(urlString);
        newUrl.setQuery("country=US&lang=en&modelid=13_FOXP&server=1&area=USA&product=0&mgrver=0.1&id=cp_id&pw=cp_pass");
        return newUrl;
    }

    if(urlString.contains("$MANAGER_WIDGET/"))
    {
        urlString = urlString.replace(QRegExp("(?:.*)\\$MANAGER_WIDGET/"), "qrc:///samsung/");
        QUrl u = QUrl(urlString);
        DEBUG() << u.url();
        return u;
    }

    return url;
}

Profile* SamsungSmartTvWebPlugin::createProfile(const QString &id = "")
{
    STUB();
    return new SamsungProfile(this, id);
}

QString SamsungSmartTvWebPlugin::getProfileClassId()
{
    return "samsung";
}

bool SamsungSmartTvWebPlugin::receiveKeyCode(RC_KEY keyCode)
{
    qDebug() << keyCode;
    return false;
}

QString SamsungSmartTvWebPlugin::name()
{
    return "Samsung API";
}


void SamsungSmartTvWebPlugin::resetObjects(AbstractWebPage* page)
{
    STUB();
    Profile* profile = ProfileManager::instance()->getActiveProfile();
    //Q_ASSERT(this->datasource() != NULL);

    QString mimeType = "application/x-qt-plugin";

    getWebObjects().clear();
    addWebObject("Audio",       mimeType, "clsid:SAMSUNG-INFOLINK-AUDIO",       "Samsung Audio API",        [=]() { return new Audio(profile);      });
    addWebObject("TVMV",        mimeType, "clsid:SAMSUNG-INFOLINK-TVMW",        "Samsung TVMV API",         [=]() { return new TVMV(profile);       });
    addWebObject("FrontPanel",  mimeType, "clsid:SAMSUNG-INFOLINK-FRONTPANEL",  "Samsung FrontPanel API",   [=]() { return new FrontPanel(profile); });
    addWebObject("NNAVI",       mimeType, "clsid:SAMSUNG-INFOLINK-NNAVI",       "Samsung NNAVI API",        [=]() { return new NNAVI(profile);      });
    addWebObject("TV",          mimeType, "clsid:SAMSUNG-INFOLINK-TV",          "Samsung TV API",           [=]() { return new TV(profile);         });
    addWebObject("Network",     mimeType, "clsid:SAMSUNG-INFOLINK-NETWORK",     "Samsung Network API",      [=]() { return new Network(profile);    });
    addWebObject("Screen",      mimeType, "clsid:SAMSUNG-INFOLINK-SCREEN",      "Samsung Screen API",       [=]() { return new Screen(profile);     });

    addWebObject("Player",      mimeType, "clsid:D27CDB6E-444553540000",        "Samsung Player API",       [=]() { return new Player(profile);     });
    addWebObject("Player",      mimeType, "clsid:SAMSUNG-INFOLINK-PLAYER",      "Samsung Player API",       [=]() { return new Player(profile);     });

    addWebObject("Video",       mimeType, "clsid:SAMSUNG-INFOLINK-VIDEO",       "Samsung Video API",        [=]() { return new Video(profile);      });
    addWebObject("Window",      mimeType, "clsid:SAMSUNG-INFOLINK-WINDOW",      "Samsung Window API",       [=]() { return new Window(profile);     });


    addWebObject("TimeApi",     mimeType, "clsid:SAMSUNG-INFOLINK-TIME",        "Samsung Time API",         [=]() { return new TimeApi(profile);    });
    addWebObject("SefApi",      mimeType, "clsid:SAMSUNG-INFOLINK-SEF",         "Samsung Sef API",          [=]() { return new SefApi(profile);     });
    addWebObject("ImageViewer", mimeType, "clsid:SAMSUNG-INFOLINK-IMAGEVIEWER", "Samsung Image Viewer API", [=]() { return new ImageViewer(profile); });
    addWebObject("Storage",     mimeType, "clsid:SAMSUNG-INFOLINK-STORAGE",     "Samsung Storage API",      [=]() { return new Storage(profile);    });
    addWebObject("TaskManager", mimeType, "clsid:SAMSUNG-INFOLINK-TASKMANAGER", "Samsung Task Manager API", [=]() { return new TaskManager(profile); });
    addWebObject("Device",      mimeType, "clsid:SAMSUNG-INFOLINK-DEVICE",      "Samsung Device API",       [=]() { return new Device(profile);     });
    addWebObject("Download",    mimeType, "clsid:SAMSUNG-INFOLINK-DOWNLOAD",    "Samsung Download API",     [=]() { return new Download(profile);   });

    FileSystem* fs =            new FileSystem(profile);
    addWebObject("FileSystem",  fs,                         mimeType, "clsid:SAMSUNG-INFOLINK-FILESYSTEM",  "Samsung FileSystem API");

    AppCommon* appCommon = new AppCommon(profile);
    addWebObject("AppCommon",   appCommon,                  mimeType, "clsid:SAMSUNG-INFOLINK-APPCOMMON",   "Samsung AppCommon API");

    getApi().clear();
    qDebug() << "__FileSystem__: " << fs;
    getApi().insert("__FileSystem__", fs);
    //api.insert("__AppCommon__", sappCommon);
}

void SamsungSmartTvWebPlugin::applyFixes()
{

}

void SamsungSmartTvWebPlugin::init(AbstractWebPage* page)
{
    resetObjects(page);
}


QString SamsungSmartTvWebPlugin::getIcon(const QSize &size = QSize())
{
    return "";
}


void yasem::SamsungSmartTvWebPlugin::register_dependencies()
{
    add_dependency(ROLE_BROWSER);
    add_dependency(ROLE_DATASOURCE);
    add_dependency(ROLE_MEDIA);
}

void yasem::SamsungSmartTvWebPlugin::register_roles()
{
    register_role(ROLE_STB_API);
}
