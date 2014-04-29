#ifndef WINDOW_H
#define WINDOW_H

#include "BaseWidget.h"

namespace yasem {
class Window: public BaseWidget
{
    Q_OBJECT
public:
    explicit Window(Profile *profile, QWidget *parent = 0);

    enum PL_WINDOW_SOURCE {

        PL_WINDOW_SOURCE_TV = 0, // The TV source
        PL_WINDOW_SOURCE_ATV = 1, // The ATV source
        PL_WINDOW_SOURCE_DTV = 2, // The DTV source
        PL_WINDOW_SOURCE_CATV = 3, // The CATV source
        PL_WINDOW_SOURCE_CDTV = 4, // The CDTV source
        PL_WINDOW_SOURCE_PATV = 5, // The PATV source
        PL_WINDOW_SOURCE_PDTV = 6, // The PDTV source
        PL_WINDOW_SOURCE_SDTV = 7, // The SDTV source
        PL_WINDOW_SOURCE_ATV1 = 11, // The ATV1 source
        PL_WINDOW_SOURCE_ATV2 = 12, // The ATV2 source
        PL_WINDOW_SOURCE_DTV1 = 13, // The DTV1 source
        PL_WINDOW_SOURCE_DTV2 = 14, // The DTV2 source
        PL_WINDOW_SOURCE_AV1 = 15, // The AV1 source
        PL_WINDOW_SOURCE_AV2 = 16, // The AV2 source
        PL_WINDOW_SOURCE_AV3 = 17, // The AV3 source
        PL_WINDOW_SOURCE_AV4 = 18, // The AV4 source
        PL_WINDOW_SOURCE_SVIDEO1 = 19, // The SVIDEO1 source
        PL_WINDOW_SOURCE_SVIDEO2 = 20, // The SVIDEO2 source
        PL_WINDOW_SOURCE_SVIDEO3 = 21, // The SVIDEO3 source
        PL_WINDOW_SOURCE_SVIDEO4 = 22, // The SVIDEO4 source
        PL_WINDOW_SOURCE_COMP1 = 23, // The COMP1 source
        PL_WINDOW_SOURCE_COMP2 = 24, // The COMP2 source
        PL_WINDOW_SOURCE_COMP3 = 25, // The COMP3 source
        PL_WINDOW_SOURCE_COMP4 = 26, // The COMP4 source
        PL_WINDOW_SOURCE_PC1 = 27, // The PC1 source
        PL_WINDOW_SOURCE_PC2 = 28, // The PC2 source
        PL_WINDOW_SOURCE_PC3 = 29, // The PC3 source
        PL_WINDOW_SOURCE_PC4 = 30, // The PC4 source
        PL_WINDOW_SOURCE_HDMI1 = 31, // The HDMI1 source
        PL_WINDOW_SOURCE_HDMI2 = 32, // The HDMI2 source
        PL_WINDOW_SOURCE_HDMI3 = 33, // The HDMI3 source
        PL_WINDOW_SOURCE_HDMI4 = 34, // The HDMI4 source
        PL_WINDOW_SOURCE_SCART1 = 35, // The SCART1 source
        PL_WINDOW_SOURCE_SCART2 = 36, // The SCART2 source
        PL_WINDOW_SOURCE_SCART3 = 37, // The SCART3 source
        PL_WINDOW_SOURCE_SCART4 = 38, // The SCART4 source
        PL_WINDOW_SOURCE_DVI1 = 39, // The DVI1 source
        PL_WINDOW_SOURCE_DVI2 = 40, // The DVI2 source
        PL_WINDOW_SOURCE_DVI3 = 41, // The DVI3 source
        PL_WINDOW_SOURCE_DVI4 = 42, // The DVI4 source
        PL_WINDOW_SOURCE_MEDIA = 43, // The media source
        PL_WINDOW_SOURCE_HOMING = 44, // The DCR HOMING source
        PL_WINDOW_SOURCE_NONE = 45, // No source
    };

signals:

public slots:
    QString GetPluginInfo(int infoId);
    int GetSource();
    void SetSource(int src);
protected:
    PL_WINDOW_SOURCE source;


    // BaseWidget interface
protected:
    QString group();
};

}

#endif // WINDOW_H
