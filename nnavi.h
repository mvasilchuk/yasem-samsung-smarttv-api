#ifndef NNAVI_H
#define NNAVI_H

#include "BaseWidget.h"

namespace yasem {
class NNAVI: public BaseWidget
{
    Q_OBJECT
public:
    explicit NNAVI(Profile *profile, QWidget *parent = 0);


signals:

public slots:
    QString GetPluginInfo(int infoId);
    QString GetFirmware();

    void unregistKey(int key);
    void SetBannerState(int state);
protected:
    QString group();
};
}

#endif // NNAVI_H
