#ifndef VIDEO_H
#define VIDEO_H

#include "BaseWidget.h"

#include <QWidget>


namespace yasem
{
class Video : public BaseWidget
{
    Q_OBJECT
public:
    explicit Video(Profile *profile, QWidget *parent = 0);

signals:

public slots:
    QString GetPluginInfo(int infoId);

    // BaseWidget interface
protected:
    QString group();
};



}

#endif // VIDEO_H
