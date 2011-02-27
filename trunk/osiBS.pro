# -------------------------------------------------
# Project created by QtCreator 2009-08-01T12:26:06
# -------------------------------------------------
DEPENDPATH += .
INCLUDEPATH += .
include(QMapControl/QMapControl.pri)
include(qwt/qwtconfig.pri)
OBJECTS_DIR = obj
MOC_DIR = moc
TARGET = osiBS
TEMPLATE = app
SOURCES += main.cpp \
    basestation.cpp \
    speedo_meter.cpp \
    attitude_indicator.cpp \
    SerialPort/qextserialbase.cpp \
    SerialPort/qextserialport.cpp \
    SerialPort/win_qextserialport.cpp \
    SerialPort/ManageSerialPort.cpp \
    SerialPort/cConnection.cpp \
    ToolBox.cpp \
    cSerialParser.cpp \
    cWayPoints.cpp \
    cIniFile.cpp \
    cLogFile.cpp \
    ccompass.cpp \
    wdg_settingstab.cpp \
    wdg_serialtab.cpp \
    wdg_i2ctab.cpp
HEADERS += basestation.h \ # ui_basestation.h \
    speedo_meter.h \
    attitude_indicator.h \
    SerialPort/qextserialbase.h \
    SerialPort/qextserialport.h \
    SerialPort/win_qextserialport.h \
    SerialPort/ManageSerialPort.h \
    SerialPort/cConnection.h \
    ToolBox.h \
    global.h \
    cSerialParser.h \
    cWayPoints.h \
    cIniFile.h \
    cLogFile.h \
    ccompass.h \
    settings.h \
    wdg_settingstab.h \
    ui_basestation.h \
    ui_wdg_settingstab.h \
    wdg_serialtab.h \
    ui_wdg_serialtab.h \
    wdg_i2ctab.h \
    ui_wdg_i2ctab.h
FORMS += basestation.ui \
    wdg_settingstab.ui \
    wdg_serialtab.ui \
    wdg_i2ctab.ui
