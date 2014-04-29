#ifndef SAMSUNGPROFILE_H
#define SAMSUNGPROFILE_H

#include "stbprofile.h"
#include "configdata.h"
#include "samsungsmarttvwebplugin.h"

#include <QObject>

namespace yasem
{

class SamsungProfile : public QObject, public Profile
{
    Q_OBJECT
public:
    explicit SamsungProfile(StbPlugin *plugin, const QString &id);


    ConfigData configData;
signals:

public slots:


    // Profile interface
public:
    void start();
    void stop();
    void initDefaults();
    void configureKeyMap();

    // Profile interface
public:
    QString portal();
};

}

#endif // SAMSUNGPROFILE_H
