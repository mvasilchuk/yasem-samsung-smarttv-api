#-------------------------------------------------
#
# Project created by QtCreator 2014-02-11T14:37:09
#
#-------------------------------------------------

VERSION = 1.0.0

QT       = core gui widgets xml

CONFIG += c++11

TARGET = yasem-samsung-smarttv-api
TEMPLATE = lib

DEFINES += SAMSUNGSMARTTVWEBPLUGIN_LIBRARY

INCLUDEPATH += ../yasem-core

SOURCES += samsungsmarttvwebplugin.cpp \
    audio.cpp \
    tvmv.cpp \
    frontpanel.cpp \
    nnavi.cpp \
    tv.cpp \
    network.cpp \
    screen.cpp \
    player.cpp \
    filesystem.cpp \
    video.cpp \
    window.cpp \
    appcommon.cpp \
    timeapi.cpp \
    sefapi.cpp \
    samsungprofile.cpp \
    configdata.cpp \
    imageviewer.cpp \
    storage.cpp \
    taskmanager.cpp \
    device.cpp \
    download.cpp

HEADERS += samsungsmarttvwebplugin.h\
        samsungsmarttvwebplugin_global.h \
    audio.h \
    tvmv.h \
    frontpanel.h \
    nnavi.h \
    tv.h \
    network.h \
    screen.h \
    BaseWidget.h \
    player.h \
    filesystem.h \
    video.h \
    window.h \
    appcommon.h \
    timeapi.h \
    sefapi.h \
    samsungprofile.h \
    configdata.h \
    imageviewer.h \
    storage.h \
    taskmanager.h \
    device.h \
    download.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

include(../common.pri)
DESTDIR = $$DEFAULT_PLUGIN_DIR

OTHER_FILES += \
    metadata.json \
    js/ime2.js \
    js/Include.js \
    js/Define.js \
    js/Plugin.js \
    js/TVKeyValue.js \
    js/CM_AVSetting.js \
    js/Widget.js \
    html/ime.html \
    js/Language.js \
    js/jquery-2.1.0.min.js \
    js/Common_core.js \
    LICENSE \
    README.md

RESOURCES += \
    resources.qrc
