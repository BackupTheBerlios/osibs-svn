#ifndef BASESTATION_H
#define BASESTATION_H

#include <QMainWindow>
#include <QSettings>
#include <QString>
#include <QTimer>
#include <QComboBox>
#include <QIcon>
#include <QProcess>
#include <QWidget>

#include "settings.h"

#include "qwt_dial.h"
#include "attitude_indicator.h"
#include "speedo_meter.h"
#include <qwt_plot_curve.h>
#include <qwt_plot_grid.h>
#include <qwt_legend.h>
#include <qwt_plot.h>
#include <qwt_compass.h>
#include <qwt_compass_rose.h>
#include <qwt_dial_needle.h>


#include "ToolBox.h"
#include "SerialPort/cConnection.h"
#include "cSerialParser.h"
#include "cWayPoints.h"


#include "ui_basestation.h"
#include "QMapControl/qmapcontrol.h"
#include "ccompass.h"

#include "wdg_settingstab.h"
#include "wdg_serialtab.h"
#include "wdg_i2ctab.h"

using namespace qmapcontrol;


class baseStation : public QMainWindow , public Ui::baseStation
{
    Q_OBJECT
public:

    baseStation();
    ~baseStation();

    wdg_settingsTab     *wdgSettingsTab;
    wdg_serialtab       *wdgserialtab;
    wdg_i2ctab          *wdgi2ctab;


protected:

    virtual void wheelEvent(QWheelEvent *event);
    virtual void resizeEvent(QResizeEvent * event);
    void changeEvent(QEvent *e);

    void initPlotData();
    void init_Cockpit();
    void init_Diagnostics();
    void init_Maps();
    void initConnection();
    void setTelemetrie(TELEMETRIE_0 S_TELE);


    void updatePlot(TELEMETRIE_0 S_TELE);
    void setSettings(SETTINGS s_settings);
    void getSetupString();

private:


    #define CMD_READ_CALIB_COMPASS 6
    #define CMD_WRITE_CALIB_COMPASS 7
    #define CMD_START_CALIB_COMPASS 8
    #define CMD_STOP_CALIB_COMPASS 9


    int NextPlot;
    MapAdapter*         mapAdapter;
    Layer*              map;
    Layer*              clickMap;
    MapControl*         mapCon;

    cConnection         *o_Connection;
    cSerialParser       *o_cSerialParser;
    cWayPoints          *o_cWayPoints;


    c_settings          *o_cSettings;

    AttitudeIndicator   *Attitude;
    SpeedoMeter         *SpeedMeter;

    //c_settings          *csettings;

    void setRCSettings(SETTINGS);
    void setComponents(SETTINGS);
    void setPIDXaxis(SETTINGS);
    void setPIDYaxis(SETTINGS);
    void setPIDPitch(SETTINGS);
    void setPID(SETTINGS);
    /*
    void setPDXaxis(SETTINGS);
    void setPDYaxis(SETTINGS);
    void setPD(SETTINGS);
    void setPDPitch(SETTINGS);
    */
    void setHMC5843Settings(SETTINGS);
    void setSystem(SETTINGS);
    void setUserSetings(SETTINGS);
    void compassCalib(int);
    void setCompass(COMPASS_CALIB_DATA);
private slots:


    void slot_Click(const QMouseEvent* Event, const QPointF Coord);


    void slot_osmAction(void);
    void slot_yahooActionMap(void);
    void slot_yahooActionSatellite(void);


    void slot_cleanOutput(void);
    void slot_startEngine(void);
    void slot_startAll(void);
    void slot_stopAll(void);
    void slot_resetDevice(void);

    void slot_startCalib(void);
    void slot_stopCalib(void);

    void slot_readCompassValues(void);
    void slot_writeCompassValues(void);


    void slot_requestDebug(void);
    void slot_startYGE(void);
    void slot_updateYGE(void);
    void slot_connectDevice(void);
    void slot_disConnectDevice(void);
    void slot_updateAdcRate(void);
    void slot_readSetting(void);
    void slot_flashSetting(void);

    void slot_init_Diagnostics(void);

    void slot_showTerminal(int Typ, QString Text);

    void slot_updatePIDSimple(void);
    void slot_convertPIDSimple(void);
    void slot_writeSetting(void);
    void slot_readSetHdd(void);
    void slot_writeSetHdd(void);


 signals:




};

#endif // BASESTATION_H
