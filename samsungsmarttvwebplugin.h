#ifndef SAMSUNGSMARTTVWEBPLUGIN_H
#define SAMSUNGSMARTTVWEBPLUGIN_H

#include "stbpluginobject.h"

#include "samsungsmarttvwebplugin_global.h"

#include <QObject>
#include <QUrl>
#include <datasourcefactory.h>
#include <gui.h>

namespace yasem
{

class Profile;
class AbstractWebPage;

class SAMSUNGSMARTTVWEBPLUGINSHARED_EXPORT SamsungSmartTvWebPlugin: public PluginQObject, public Plugin,
        public StbPluginObject
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.mvas.yasem.SamsungSmartTvWebPlugin/1.0" FILE "metadata.json")
    Q_INTERFACES(yasem::Plugin yasem::StbPluginObject)

    Q_CLASSINFO("author", "Maxim Vasilchuk")
    Q_CLASSINFO("description", "Samsung Smart TV plugin for YASEM")
public:
    SamsungSmartTvWebPlugin();

    // Plugin interface
public:
    PluginErrorCodes initialize();
    PluginErrorCodes deinitialize();

    QUrl handleUrl(QUrl &url);

    virtual Profile* createProfile(const QString &id) ;
    QString getProfileClassId();
    QString getIcon(const QSize &size);


public slots:
    bool receiveKeyCode(RC_KEY keyCode);
    QString name();



protected:

    bool created;
    void resetObjects(AbstractWebPage* page);
    void applyFixes();

    // StbProfilePlugin interface
public:
    void initObject(AbstractWebPage* page);

    // StbPlugin interface


    // Plugin interface
public:
    void register_dependencies();
    void register_roles();
};

}

#endif // SAMSUNGSMARTTVWEBPLUGIN_H
