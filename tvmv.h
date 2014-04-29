#ifndef TVMV_H
#define TVMV_H

#include "BaseWidget.h"
#include <QWidget>

namespace yasem {
class TVMV: public BaseWidget
{
    Q_OBJECT
public:
    explicit TVMV(Profile *profile, QWidget *parent = 0);

    enum PL_TVMW_PRFID
    {
        PL_TVMW_PRFID_TICKER_ID = 0,                //Ticker ID
        PL_TVMW_PRFID_CHILDLOCK_PIN = 1,            //Childlock PIN number
        PL_TVMW_PRFID_HUB_TVID = 2,                 //Hub TV ID
        PL_TVMW_PRFID_TICKER_AUTOBOOT = 3,          //Ticker autoboot
        PL_TVMW_PRFID_TICKER_DURATION = 4,          //Ticker duration
        PL_TVMW_PRFID_WIDGET_DPTIME = 5,            //Widget display time
        PL_TVMW_PRFID_CONTRACT = 6,                 //Contract
        PL_TVMW_PRFID_TICKER_SAFE = 7,              //Ticker safe
        PL_TVMW_PRFID_RESET = 8,                    //Reset
        PL_TVMW_PRFID_PASSWD_RESET = 9,             //Password reset
        PL_TVMW_PRFID_GEOIP_STATUS = 10,            //GeoIP status
        PL_TVMW_PRFID_COUNTRY_CODE = 11,            //Country code
        PL_TVMW_PRFID_WLAN_DEFAULT_NETWORK = 12,    //wired(0) or wiress(-1)
        PL_TVMW_PRFID_AUTO_PROTECTION_TIME  = 13,   //Auto protection time
        PL_TVMW_PRFID_CHANNEL_BOUND_EXECUTE = 14    //Channel bound execute
    };

    Q_PROPERTY(int PL_TVMW_PRFID_TICKER_ID              MEMBER PL_TVMW_PRFID_TICKER_ID              CONSTANT FINAL)
    Q_PROPERTY(int PL_TVMW_PRFID_CHILDLOCK_PIN          MEMBER PL_TVMW_PRFID_CHILDLOCK_PIN          CONSTANT FINAL)
    Q_PROPERTY(int PL_TVMW_PRFID_HUB_TVID               MEMBER PL_TVMW_PRFID_HUB_TVID               CONSTANT FINAL)
    Q_PROPERTY(int PL_TVMW_PRFID_TICKER_AUTOBOOT        MEMBER PL_TVMW_PRFID_TICKER_AUTOBOOT        CONSTANT FINAL)
    Q_PROPERTY(int PL_TVMW_PRFID_TICKER_DURATION        MEMBER PL_TVMW_PRFID_TICKER_DURATION        CONSTANT FINAL)
    Q_PROPERTY(int PL_TVMW_PRFID_WIDGET_DPTIME          MEMBER PL_TVMW_PRFID_WIDGET_DPTIME          CONSTANT FINAL)
    Q_PROPERTY(int PL_TVMW_PRFID_CONTRACT               MEMBER PL_TVMW_PRFID_CONTRACT               CONSTANT FINAL)
    Q_PROPERTY(int PL_TVMW_PRFID_TICKER_SAFE            MEMBER PL_TVMW_PRFID_TICKER_SAFE            CONSTANT FINAL)
    Q_PROPERTY(int PL_TVMW_PRFID_RESET                  MEMBER PL_TVMW_PRFID_RESET                  CONSTANT FINAL)
    Q_PROPERTY(int PL_TVMW_PRFID_PASSWD_RESET           MEMBER PL_TVMW_PRFID_PASSWD_RESET           CONSTANT FINAL)
    Q_PROPERTY(int PL_TVMW_PRFID_GEOIP_STATUS           MEMBER PL_TVMW_PRFID_GEOIP_STATUS           CONSTANT FINAL)
    Q_PROPERTY(int PL_TVMW_PRFID_COUNTRY_CODE           MEMBER PL_TVMW_PRFID_COUNTRY_CODE           CONSTANT FINAL)
    Q_PROPERTY(int PL_TVMW_PRFID_WLAN_DEFAULT_NETWORK   MEMBER PL_TVMW_PRFID_WLAN_DEFAULT_NETWORK   CONSTANT FINAL)
    Q_PROPERTY(int PL_TVMW_PRFID_AUTO_PROTECTION_TIME   MEMBER PL_TVMW_PRFID_AUTO_PROTECTION_TIME   CONSTANT FINAL)
    Q_PROPERTY(int PL_TVMW_PRFID_CHANNEL_BOUND_EXECUTE  MEMBER PL_TVMW_PRFID_CHANNEL_BOUND_EXECUTE  CONSTANT FINAL)
signals:

public slots:

    void SetProfile(PL_TVMW_PRFID profileID, const QString &value);
    QString GetProfile( PL_TVMW_PRFID profileID);
    QString GetSource();
    void SetMediaSource();
    QString GetPluginInfo(int infoId);

    // BaseWidget interface
protected:
    QString group();
};
}

#endif // TVMV_H
