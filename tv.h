#ifndef TV_H
#define TV_H

#include "BaseWidget.h"
#include <QWidget>

namespace yasem {
class TV: public BaseWidget
{
    Q_OBJECT
public:
    explicit TV(Profile *profile, QWidget *parent = 0);

signals:

public slots:
    QString GetPluginInfo(int infoId);

    // BaseWidget interface
    QString GetProductType();
    QString GetSource();
protected:
    QString group();
};
}

#endif // TV_H
