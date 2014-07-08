#ifndef SAMSUNGSMARTTVWEBPLUGIN_H
#define SAMSUNGSMARTTVWEBPLUGIN_H

#include "stbplugin.h"

#include "samsungsmarttvwebplugin_global.h"

#include <QObject>
#include <QUrl>
#include <datasourceplugin.h>
#include <guiplugin.h>

namespace yasem
{

class Profile;
class SAMSUNGSMARTTVWEBPLUGINSHARED_EXPORT SamsungSmartTvWebPlugin: public QObject,
        public StbPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.mvas.yasem.SamsungSmartTvWebPlugin/1.0" FILE "metadata.json")
    Q_INTERFACES(yasem::Plugin yasem::StbPlugin)

    Q_CLASSINFO("author", "Maxim Vasilchuk")
    Q_CLASSINFO("description", "Samsung Smart TV plugin for YASEM")
public:
    SamsungSmartTvWebPlugin();

    // Plugin interface
public:
    PLUGIN_ERROR_CODES initialize();
    PLUGIN_ERROR_CODES deinitialize();

    QUrl handleUrl(QUrl &url);

    virtual Profile* createProfile(const QString &id) ;
    QString getProfileClassId();
    QString getIcon(const QSize &size);


public slots:
    bool receiveKeyCode(RC_KEY keyCode);
    QString name();



protected:

    bool created;
    void resetObjects();
    void applyFixes();

    // StbProfilePlugin interface
public:
    void init();

    // StbPlugin interface

};

}

#endif // SAMSUNGSMARTTVWEBPLUGIN_H
