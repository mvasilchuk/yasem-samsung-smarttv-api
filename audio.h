#ifndef INFOLINKAUDIO_H
#define INFOLINKAUDIO_H

#include "BaseWidget.h"
#include "mediaplayerplugin.h"

namespace yasem {

class StbPlugin;
class Audio: public BaseWidget
{
    Q_OBJECT
public:
    explicit Audio(Profile *profile, QWidget *parent = 0);

signals:

public slots:
    QString GetPluginInfo(int infoId);
    bool GetMute();

    int GetVolume();
    bool GetUserMute();
protected:
    QString group();

friend class SamsungSmartTvWebPlugin;
};

}

#endif // INFOLINKAUDIO_H
