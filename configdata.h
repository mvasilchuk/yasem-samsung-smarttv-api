#ifndef CONFIGDATA_H
#define CONFIGDATA_H

#include <QObject>

class ConfigData : public QObject
{
    Q_OBJECT
public:
    explicit ConfigData(QObject *parent = 0);

    void loadConfig(const QString &path);

    void parseConfigFile(QString name);

    /**
     * @brief An icon image displayed in the Application Manager.
     * It is used in case of no focus and its size is 106 x 86 pixel.
     *
     * @value: File path
     */
    QString ThumbIcon;
    /**
     * @brief An icon image displayed in the Application Manager.
     * It is used in case the focus is placed on an image and its size is 115 x 95 pixel.
     *
     * @value: File path
     */
    QString BigThumbIcon;
    /**
     * @brief An icon image displayed in the Application Manager.
     * The size is 85 x 70 pixel.
     *
     * @value: File path
     */
    QString ListIcon;
    /**
     * @brief An icon image displayed in the Application Manager.
     * The size is 95 x 78 pixel.
     *
     * @value: File path
     */
    QString BigListIcon;
    /**
     * @brief The category to distinguish applications. Available items are video, sports, game, lifestyle, information, education.
     *
     * @value: String
     */
    QString category;
    /**
     * @brief Decides whether to synchronize with the hub site. For an application that does not need synchronization, select ‘n’.
     *
     * @value: y | n
     */
    bool autoUpdate;
    /**
     * @brief Shows information on contents type.
        11: HTML + Javascript + Flash Player Object
        12: Adobe SWF ( Ver. Flash Lite 3.1 )
        13: Adobe SWF ( Ver. Flash 10.1 )
        14: Lua Script

        @value: Nummber
     */
    int apptype;
    /**
     * @brief File path and name at the initial execution of contents
            Only the following application types need contents tag:
            12: Adobe SWF (Ver. Flash Lite 3.1)
            13: Adobe SWF (Ver. Flash 10.1)
            14: Lua Script
       @value: Number
     */
    QString contents;
    /**
     * @brief Channel-bound Service Type (optional)
     *
     * @value: root | child
     */
    QString channelType;
    /**
     * @brief Confirms the relations with root-child clarifying root application ID.
     * Optional, only used when the channel-bound service type is child). When connected to more than one root,
     * roots are distinguished by ‘::’.
     *
     * @value: Application ID
     */
    QString channelRoot;
    /**
     * @brief Channel information to be executed for channel-bound service
     *  (Distinguish each channel using ‘::’ for example: AAA::BBB::CCC)
     * (Optional, only used when channel-bound service type is the root)
     *
     * @value: String
     */
    QString channelName;
    /**
     * @brief Decides whether the installed channel-bound service is displayed on the first main screen or not.
     * If you want to hide the service in the first main screen, select ‘n’.
     *
     * @value: y | n
     */
    bool channelDisplay;
    /**
     * @brief Enter the application provider in this tag.
     *
     * @value: String
     */
    QString cpname;
    /**
     * @brief The name of the JavaScript file that allows you to confirm account information of application providers.
     * This file has to be written in a defined format.
     */
    QString cpauthjs;
    /**
     * @brief Decides whether a service is available for login or not.
     * Select ‘y’, to enter ID and password in the Integrated Sign-in site of the Application Manager for login.
     * Validity verification should be preceded in JavaScript file corresponding to <cpauthjs> tag value.
     *
     * @value: y | n
     */
    bool login;
    /**
     * @brief Indicates the application version. The server computer updates the corresponding application depending on the version information.
     *
     * @value: x.xxx
     */
    QString ver;
    /**
     * @brief Indicates the Application Manager version that is required to run an application having the config.xml file.
     */
    QString mgrver;
    /**
     * @brief Indicates whether the application is a full-screen or a single-wide one.
     *  Display type affects the audio policy of the application when it’s run.
     * See <a href="http://www.samsungdforum.com/Guide/art00046/index.html">Handling Remote Control Key Events</a> for details.
     */
    bool fullwidget;
    /**
     * @brief If ‘y’ is selected, the TV source automatically switches from the current TV channel
     * or external input to the internal media player, and back again when the application is completed.
     * If source conversion is needed, set this tag to y. (ex. YouTube application).
     */
    bool srcctl;
    /**
     * @brief Determines whether to use the childLock function. This function enables the user to lock an application.
     */
    bool childlock;
    /**
     * @brief Turns on or mutes the audio. If ‘y’ is selected, TV broadcasting sound is muted when entering the application.
     * Select ‘y’ if the application occupies the full screen, and select ‘n’ if the application occupies a part of the screen.
     */
    bool audiomute;
    /**
     * @brief Turns on or turns off the video. If ‘y’ is selected,
     * TV broadcasting is not displayed on the screen when entering the application.
     */
    bool videomute;
    /**
     * @brief Sets the Disable dynamic contrast function.
     * Dynamic contrast is the function to adjust TV contrast ratio and brighten TV screen
     * by darkening the dark screen and lightening the light screen. The screen might get lighter or
     * darker when application is on with Dynamic contrast.
     * Selecting ‘y’ turns off the Dynamic contrast, and selecting ‘n’ turns on the Dynamic contrast.
     * If the application occupies the full screen, select ‘y’ to remove sparkling. If the application occupies
     * a part of the screen, select ‘n’.
     */
    bool dcont;
    /**
     * @brief Applications playing video files can cause problems as stated below:
     *
     * - If a video file is played on a device connected to the HDMI port, such as a
     * DVD Player, sounds can get mixed, when executing an application converting sources (for example, YouTube).
     * - Sparkling can happen at the entry of the application, due to the difference of frame rate between the TV image and video file.
     *
     * Such problems can be avoided by selecting ‘y’ - the HDMI device is stopped, or the frame rate is fixed.
     */
    bool movie;
    /**
     * @brief Enter name of the application.
     */
    QString widgetname;
    /**
     * @brief Enter a brief description of the application.
     */
    QString description;
    /**
     * @brief Screen area that the application will occupy. It is recommended to enter 960 * 540 pixels, the digital TV specification.
     */
    int width;
    int height;
    /**
     * @brief The name of the author.
     */
    QString author;
    /**
     * @brief This tag is used to check the network while operating an application.
     *  If the tag value is ‘y’ and the network test result is ‘fail’, entry for the application
     * can be blocked with a message indicating the failure. Without any set value, default is ‘y’.
     */
    bool network;
    /**
     * @brief This tag is used to check whether the hubsite has been authorized or not while operating an application.
     *  If the tag value is ‘y’, and the hubsite has not been authorized, entry for the application can be blocked with
     * a message indicating the failure. Without any set value, default is ‘n’.
     */
    bool hubsite;
    /**
     * @brief Indicates whether the application provides Push Notification Service. Without any set value, default is ‘n’.
     */
    bool pushNotice;
    /**
     * @brief This tag is reserved for former Push Notification Service. Without any set value, default is ‘n’.
     */
    bool pushControl;
    /**
     * @brief Indicates whether Push Notification Service is provided for a specific user. Without any set value, default is ‘n’.
     */
    bool pushUerbinding;
    /**
     * @brief This tag is enabled for applications that use embedded Flash player objects, or a stand-alone Flash player.
     */
    bool flashplayer;


};

#endif // CONFIGDATA_H
