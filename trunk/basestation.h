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
#include "settings.h"

#include "ui_basestation.h"
#include "QMapControl/qmapcontrol.h"
#include "ccompass.h"

#include "wdg_settingstab.h"
#include "wdg_serialtab.h"
#include "wdg_i2ctab.h"

using namespace qmapcontrol;


//namespace Ui {
    //class baseStation;
//    class baseStation: public Ui_baseStation {};
//}

//class baseStation : public QMainWindow {

class baseStation : public QMainWindow , public Ui::baseStation
{
    Q_OBJECT
public:
   //baseStation(QWidget *parent = 0);
    baseStation();

    ~baseStation();
    //Ui::baseStation *ui;

protected:

    virtual void wheelEvent(QWheelEvent *event);
    virtual void resizeEvent(QResizeEvent * event);
    void changeEvent(QEvent *e);

    void initPlotData();
    void init_Cockpit();
    void init_Diagnostics();
    void init_Maps();
    void initConnection();
    void setRCSettings(SETTINGS s_settings);
    void setComponents(SETTINGS s_settings);
    void setPIDXaxis(SETTINGS s_settings);
    void setPIDYaxis(SETTINGS s_settings);
    void setPIDPitch(SETTINGS s_settings);
    void setPID(SETTINGS s_settings);
    void setPDXaxis(SETTINGS s_settings);
    void setPDYaxis(SETTINGS s_settings);
    void setPD(SETTINGS s_settings);
    void setPDPitch(SETTINGS s_settings);
    void setHMC5843Settings(SETTINGS s_settings);
    void setSystem(SETTINGS s_settings);
    void setUserSetings(SETTINGS s_settings);
    void setTelemetrie(TELEMETRIE_0 S_TELE);
    void setSettings(SETTINGS s_settings);
    void getSetupString();
    void updatePlot(TELEMETRIE_0 S_TELE);



private:

    int NextPlot;
    MapAdapter*         mapAdapter;
    Layer*              map;
    Layer*              clickMap;
    MapControl*         mapCon;

    cConnection         *o_Connection;
    cSerialParser       *o_cSerialParser;
    cWayPoints          *o_cWayPoints;
    cIniFile            *o_cIniFile;

    wdg_settingsTab     *wdgSettingsTab;
    wdg_serialtab       *wdgserialtab;
    wdg_i2ctab          *wdgi2ctab;

    AttitudeIndicator   *Attitude;
    SpeedoMeter         *SpeedMeter;



    SETTINGS            transferSettings;
    SETTINGS            writeSettings;

private slots:


    void slot_Click(const QMouseEvent* Event, const QPointF Coord);


    void slot_osmAction();
    void slot_yahooActionMap();
    void slot_yahooActionSatellite();

    void slot_updatePIDSimple();
    void slot_convertPIDSimple();
    void slot_cleanOutput();
    void slot_startEngine();
    void slot_startAll();
    void slot_stopAll();
    void slot_resetDevice();
    void slot_readSetting();
    void slot_writeSetting();
    void slot_flashSetting();
    void slot_requestDebug();
    void slot_startYGE();
    void slot_updateYGE();
    void slot_connectDevice();
    void slot_disConnectDevice();
    void slot_updateAdcRate();
    void slot_readSetHdd();
    void slot_writeSetHdd();

    void slot_init_Diagnostics();

    void slot_showTerminal(int Typ, QString Text);

 signals:




};

#endif // BASESTATION_H
