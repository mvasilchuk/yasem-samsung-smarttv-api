#ifndef BASEWIDGET_H
#define BASEWIDGET_H

#include "stbprofile.h"

#include <QString>
#include <QWidget>

namespace yasem {

class SamsungSmartTvWebPlugin;

class BaseWidget: public QWidget
{
    Q_OBJECT
public:
    BaseWidget(Profile *profile, QWidget* parent = 0): QWidget(parent)
    {
        Q_ASSERT(profile != NULL);
        this->profile = profile;
    }
    virtual ~BaseWidget(){}
    virtual QString GetPluginInfo(int infoId) = 0;

protected:
    virtual QString group() = 0;
    QString profileGroup() { return "Profile"; }

protected:
    Profile *profile;
    QString version;

friend class SamsungSmartTvWebPlugin;
};

}

#endif // BASEWIDGET_H
