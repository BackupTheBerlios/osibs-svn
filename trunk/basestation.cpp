#include <QtGui>

#include <QLineEdit>
#include <QString>
#include <QTimer>
#include <QIcon>
#include <QToolButton>
#include <QSpinBox>
#include <QAction>
#include <QPalette>
#include <qpainter.h>

#include "basestation.h"
#include "ui_basestation.h"
#include "wdg_settingstab.h"
#include "ui_wdg_settingstab.h"
#include "settings.h"
#include "wdg_serialtab.h"
#include "ui_wdg_serialtab.h"
#include "wdg_i2ctab.h"
#include "ui_wdg_i2ctab.h"

int Plotter_Count                       = 1;

static const int MaxAnalog              = 40;
static const int MaxPlot                = 301;



int analogChannels;

double                                  timeAxis[MaxPlot];
double                                  plotStore[MaxAnalog][MaxPlot];

QString                                 namesArray[MaxAnalog];
QwtPlotCurve                            *Plot[MaxAnalog];

static const QRgb Def_Colors[]          = {0x00FF0000, 0x0000FF00, 0x00FFFF00, 0x000000FF, 0x00FF00FF, 0x0000FFFF, 0x00FFFFFF, 0x00660000, 0x00006600, 0x00666600, 0x00000066, 0x00660066, 0x000066, 0x00666666, 0x00990000, 0x00009900, 0x00999900, 0x00000099, 0x00990099, 0x00009999, 0x00999999, 0x00CC0000, 0x0000CC00, 0x00CCCC00, 0x000000CC, 0x00CC00CC, 0x0000CCCC, 0x00CCCCCC, 0x0066FF99, 0x009966FF, 0x00FF9966, 0x0099FF66};

QList<Point*>                           p_RouteWP;
LineString*                             l_RouteWP;

QList<Point*>                           p_RouteFL;
LineString*                             l_RouteFL;
Point*                                  LastPos;
//    Point* LastPoint;
Point*                                  LastClick;

Point                                   *ClickPoint;
QPointF                                 MapCenter;

QList<sWayPoint>                        l_WayPoint;
QPen*                                   mapPen[2];

QSlider*                                mapSlider;

int zoomValue                           = 2;


void baseStation::initConnection()
{
    connect(actionConnect_osiFC,        SIGNAL(activated()),this,SLOT(slot_connectDevice()));
    connect(actionDisconnect_osiFC,     SIGNAL(activated()),this,SLOT(slot_disConnectDevice()));
    connect(actionCleanSerialOutput,    SIGNAL(triggered()),this,SLOT(slot_cleanOutput()));
    connect(osmAction,                  SIGNAL(triggered()),this,SLOT(slot_osmAction()));

    // this may be a license issue needs to be disabled for public use
    //connect(yahooActionMap,             SIGNAL(triggered()),this,SLOT(slot_yahooActionMap()));
    //connect(yahooActionSatellite,       SIGNAL(triggered()),this,SLOT(slot_yahooActionSatellite()));




    connect(writeSetting,               SIGNAL(clicked()),this,SLOT(slot_writeSetting()));
    connect(resetOsiFC,                 SIGNAL(clicked()),this,SLOT(slot_resetDevice()));
    connect(flashSetting,               SIGNAL(clicked()),this,SLOT(slot_flashSetting()));
    connect(readSetting,                SIGNAL(clicked()),this,SLOT(slot_readSetting()));
    connect(readSetHdd,                 SIGNAL(clicked()),this,SLOT(slot_readSetHdd()));
    connect(writeSetHDD,                SIGNAL(clicked()),this,SLOT(slot_writeSetHdd()));


    connect(wdgSettingsTab->usePIDSimple,          SIGNAL(clicked()),this,SLOT(slot_convertPIDSimple()));
    connect(wdgSettingsTab->readPID,               SIGNAL(clicked()),this,SLOT(slot_updatePIDSimple()));
    connect(wdgSettingsTab->updateAdcRate,         SIGNAL(clicked()),this,SLOT(slot_updateAdcRate()));

    connect(wdgSettingsTab->startCalib,            SIGNAL(clicked()),this,SLOT(slot_startCalib()));
    connect(wdgSettingsTab->stopCalib,             SIGNAL(clicked()),this,SLOT(slot_stopCalib()));

    connect(wdgSettingsTab->readCompassValues,     SIGNAL(clicked()),this,SLOT(slot_readCompassValues()));
    connect(wdgSettingsTab->writeCompassValues,    SIGNAL(clicked()),this,SLOT(slot_writeCompassValues()));


    connect(wdgserialtab->cleanOutput_3,           SIGNAL(clicked()),this,SLOT(slot_cleanOutput()));
    connect(wdgserialtab->writeSetting_2,          SIGNAL(clicked()),this,SLOT(slot_writeSetting()));
    connect(wdgserialtab->requestDebug,            SIGNAL(clicked()),this,SLOT(slot_requestDebug()));
    connect(wdgserialtab->resetOsiFC_2,            SIGNAL(clicked()),this,SLOT(slot_resetDevice()));
    connect(wdgserialtab->flashSetting_2,          SIGNAL(clicked()),this,SLOT(slot_flashSetting()));
    connect(wdgserialtab->readSetting_2,           SIGNAL(clicked()),this,SLOT(slot_readSetting()));

    connect(wdgi2ctab->cleanOutput,                SIGNAL(clicked()),this,SLOT(slot_cleanOutput()));
    connect(wdgi2ctab->startYGE,                   SIGNAL(clicked()),this,SLOT(slot_startYGE()));
    connect(wdgi2ctab->updateYGE,                  SIGNAL(clicked()),this,SLOT(slot_updateYGE()));
    connect(wdgi2ctab->startEngine,                SIGNAL(clicked()),this,SLOT(slot_startEngine()));
    connect(wdgi2ctab->startAll,                   SIGNAL(clicked()),this,SLOT(slot_startAll()));
    connect(wdgi2ctab->stopAll,                    SIGNAL(clicked()),this,SLOT(slot_stopAll()));




    // Diagnostics activate/deactivate lines
    connect(checkADCX,                  SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));
    connect(checkADCY,                  SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));
    connect(checkADCZ,                  SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));
    connect(checkMM3X,                  SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));
    connect(checkMM3Y,                  SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));
    connect(checkMM3Z,                  SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));


    connect(checkADCNick,               SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));
    connect(checkADCRoll,               SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));
    connect(checkADCPitch,              SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));
    connect(checkADCUbat,               SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));
    connect(checkADCBaro,               SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));
    connect(checkEng1,                  SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));
    connect(checkEng2,                  SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));
    connect(checkEng3,                  SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));
    connect(checkEng4,                  SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));
    connect(checkChan1,                 SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));
    connect(checkChan2,                 SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));
    connect(checkChan3,                 SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));
    connect(checkChan4,                 SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));
    connect(checkChan5,                 SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));
    connect(checkChan6,                 SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));
    connect(checkChan7,                 SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));
    connect(checkChan8,                 SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));
    connect(checkCycleCount,            SIGNAL(clicked()),this,SLOT(slot_init_Diagnostics()));

    // Compass Pulldowns
    /*
    connect(HMC5843_Bias,               SIGNAL(changed()),this,SLOT());
    connect(HMC5843_Rate,               SIGNAL(changed()),this,SLOT());
    connect(HMC5843_Gain,               SIGNAL(changed()),this,SLOT());
    connect(HMC5843_Delay,              SIGNAL(changed()),this,SLOT());
    connect(HMC5843_Mode,               SIGNAL(changed()),this,SLOT());
    */
}

void baseStation::initPlotData(void) {

    int i = 0;    
    if(checkADCX->checkState())
        namesArray[i++]                     = "ADC_ACCX";
    if(checkADCY->checkState())
        namesArray[i++]                     = "ADC_ACCY";
    if(checkADCZ->checkState())
        namesArray[i++]                     = "ADC_ACCZ";
    if(checkMM3X->checkState())
        namesArray[i++]                     = "ADC_MM3X";
    if(checkMM3Y->checkState())
        namesArray[i++]                     = "ADC_MM3Y";
    if(checkMM3Z->checkState())
        namesArray[i++]                     = "ADC_MM3Z";
    if(checkADCNick->checkState())
        namesArray[i++]                     = "ADC_NICK";
    if(checkADCPitch->checkState())
        namesArray[i++]                     = "ADC_PITCH";
    if(checkADCRoll->checkState())
        namesArray[i++]                     = "ADC_ROLL";
    if(checkADCUbat->checkState())
        namesArray[i++]                     = "ADC_UBAT";
    if(checkADCBaro->checkState())
        namesArray[i++]                     = "ADC_AIRPRESSURE";
    if(checkEng1->checkState())
        namesArray[i++]                     = "Eng_0";
    if(checkEng2->checkState())
        namesArray[i++]                     = "Eng_1";
    if(checkEng3->checkState())
        namesArray[i++]                     = "Eng_2";
    if(checkEng4->checkState())
        namesArray[i++]                     = "Eng_3";
    if(checkChan1->checkState())
        namesArray[i++]                     = "RC_channel_0";
    if(checkChan2->checkState())
        namesArray[i++]                     = "RC_channel_1";
    if(checkChan3->checkState())
        namesArray[i++]                     = "RC_channel_2";
    if(checkChan4->checkState())
        namesArray[i++]                     = "RC_channel_3";
    if(checkChan5->checkState())
        namesArray[i++]                     = "RC_channel_4";
    if(checkChan6->checkState())
        namesArray[i++]                     = "RC_channel_5";
    if(checkChan7->checkState())
        namesArray[i++]                     = "RC_channel_6";
    if(checkCycleCount->checkState())
        namesArray[i++]                     = "CYCLE_COUNT";

    analogChannels = i;
    for (int a = 0; a < analogChannels; a++)
    {
        for ( int b = 0; b < MaxPlot - 1; b++ )
        {
            plotStore[a][b] = 0;
        }
    }
    for ( int b = 0; b < MaxPlot - 1; b++ )
    {
        timeAxis[b] = b;
    }


}


void baseStation::init_Cockpit(void)
{
    // Cockpit
    QPalette newPalette;
    newPalette                  .setColor(QPalette::Base, Qt::darkBlue);
    newPalette                  .setColor(QPalette::Foreground, QColor(Qt::darkBlue).dark(120));
    newPalette                  .setColor(QPalette::Text, Qt::white);

    QwtCompass *Compass         = new QwtCompass(this);

    Compass                     ->setScaleOptions(QwtDial::ScaleTicks | QwtDial::ScaleLabel);
    Compass                     ->setScaleTicks(0, 0, 3);
    Compass                     ->setScale(36, 5, 0);
    Compass                     ->setNeedle(new QwtDialSimpleNeedle(QwtDialSimpleNeedle::Arrow, true, Qt::red, QColor(Qt::gray).light(130)));
    Compass                     ->setPalette(newPalette);
    //Compass                     ->setMaximumSize(QSize(MeterSize*10, MeterSize*10));
    Compass                     ->setMinimumSize(QSize(MeterSize, MeterSize));
    compassPlace                ->addWidget(Compass);

    QPalette newPalette1;
    newPalette1                 .setColor(QPalette::Base, Qt::darkBlue);
    newPalette1                 .setColor(QPalette::Foreground, QColor(255,128,0).dark(120));
    newPalette1                 .setColor(QPalette::Text, Qt::white);

    Attitude                    = new AttitudeIndicator(this);

    Attitude                    ->setMaximumSize(QSize(MeterSize*10, MeterSize*10));
    Attitude                    ->setMinimumSize(QSize(MeterSize, MeterSize));
    Attitude                    ->setPalette(newPalette1);
    attitudePlace               ->addWidget(Attitude);
    altitudeGainMeter           ->setRange(-10.0, 10.0, 0.1, 0);
    gainX                       ->setRange(-51.0, 51.0, 0.1, 0);
    gainY                       ->setRange(-51.0, 51.0, 0.1, 0);

    newPalette1                 .setColor(QPalette::Foreground, QColor(Qt::darkBlue).dark(120));
    SpeedMeter                  = new SpeedoMeter(this);

    SpeedMeter                  ->setLabel("m/s");
    SpeedMeter                  ->setMaximumSize(QSize(MeterSize*10, MeterSize*10));
    SpeedMeter                  ->setMinimumSize(QSize(MeterSize, MeterSize));
    SpeedMeter                  ->setPalette(newPalette1);
    SpeedMeter                  ->setRange(0.0, 5.0);
    SpeedMeter                  ->setScale(1, 2, 0.5);
    SpeedMeter                  ->setProperty("END", 5);
    speedPlace                  ->addWidget(SpeedMeter);
}




// Click in der Karte
void baseStation::slot_Click(const QMouseEvent* Event, const QPointF Coord)
{
    if ((Event->type() == QEvent::MouseButtonPress) && ((Event->button() == Qt::RightButton) || (Event->button() == Qt::MidButton)))
    {
        mapSlider->setValue(mapAdapter->adaptedZoom());
    }

    // Check ob Karte verschoben wird
    if ((Event->type() == QEvent::MouseButtonPress) && (Event->button() == Qt::LeftButton))
    {
        MapCenter = mapCon->currentCoordinate();
    }

    // Nur wenn nicht Verschoben dann einen Punkt setzen
    if ((Event->type() == QEvent::MouseButtonRelease) && (Event->button() == Qt::LeftButton))
    {
        if (mapCon->currentCoordinate() == MapCenter)
        {
            // pb_Add->setEnabled(true);
            // pb_Goto->setEnabled(true);

            clickMap                       ->removeGeometry(ClickPoint);

            QString number;           
            number                         = QString("%1").arg(Coord.x());            
            wayPointLong                   ->clear();
            wayPointLong                   ->insert(number);
            number                         = QString("%1").arg(Coord.y());
            wayPointLat                    ->clear();
            wayPointLat                    ->insert(number);

            ECEF ecefData = o_cWayPoints->getGeo2ECEF(Coord.x(), Coord.y(),double(wayPointElevation->value()));
            geoDetic geoData = o_cWayPoints->getECEF2Geo(ecefData.ecefX,ecefData.ecefY,ecefData.ecefZ);

            o_cWayPoints->setWayPoint(int(wayPointNum->value()),Coord.x(), Coord.y(),double(wayPointElevation->value()));

            ClickPoint = new CirclePoint(Coord.x(), Coord.y(), 6, "P1", Point::Middle, mapPen[1]);
            //            LastPoint = P;

            LastClick = new Point(Coord.x(), Coord.y());

            ClickPoint                      ->setBaselevel(mapAdapter->adaptedZoom());
            clickMap                        ->addGeometry(ClickPoint);
        }
    }



    mapCon->updateRequestNew();
    //    qDebug(QString("%1").arg(Coord.x()).toLatin1().data());
    //    qDebug(QString("%1").arg(Coord.y()).toLatin1().data());
}

void baseStation::resizeEvent(QResizeEvent * event)
{
    mapCon->resize(QSize(baseStation::size()).operator -=(QSize(180,90)));
}


void baseStation::init_Maps(void)
{
    QString path = QDir::homePath() + "/" + ".osiFCmapCache";

    mapAdapter                  = new OSMMapAdapter();
    map                         = new MapLayer("OpenStreetMap-Layer", mapAdapter);
    clickMap                    = new GeometryLayer("Click", mapAdapter);
    mapSlider                   = new QSlider(Qt::Horizontal);

    mapCon                      = new MapControl(QSize(550,390));
    mapCon                      ->showScale(true);
    mapCon                      ->enablePersistentCache(path);
    mapCon                      ->addLayer(map);
    mapCon                      ->addLayer(clickMap);

    mapSlider                   ->setMinimum(0);
    mapSlider                   ->setMaximum(17);

    mapLayout                   ->addWidget(mapCon);
    mapSliderLayout             ->addWidget(mapSlider);

    connect(mapSlider, SIGNAL(valueChanged(int)),
            mapCon, SLOT(setZoom(int)));

    mapSlider                   ->setValue(zoomValue);

    connect(mapCon, SIGNAL(mouseEventCoordinate(const QMouseEvent*, const QPointF)),
            this, SLOT(slot_Click(const QMouseEvent*, const QPointF)));

    mapPen[0]                      = new QPen(QColor(0,0,255,255));
    mapPen[0]                      ->setWidth(2);
    mapPen[1]                      = new QPen(QColor(255,0,0,255));
    mapPen[1]                      ->setWidth(2);
}


void baseStation::wheelEvent(QWheelEvent *event)
{
    int numDegrees              = event->delta() / 8;
    int numSteps                = numDegrees / 15;
    zoomValue                   += numSteps;

    if (zoomValue < 0) { zoomValue = 0;}
    if (zoomValue > 17) { zoomValue = 17;}

    mapSlider                   ->setValue(zoomValue);
}
void baseStation::slot_init_Diagnostics(void)
{
    init_Diagnostics();
}

void baseStation::init_Diagnostics(void)
{
    NextPlot                    = 0;
    initPlotData();
    qwtPlot->clear();
    qwtPlot                     ->setCanvasBackground(QColor(QRgb(0x00000000)));
    qwtPlot                     ->insertLegend(new QwtLegend(), QwtPlot::RightLegend);
    qwtPlot                     ->setAxisScale(QwtPlot::xBottom,0,MaxPlot-1,0);

    QwtPlotGrid *Grid = new QwtPlotGrid();

    Grid                        ->setMajPen(QPen(Qt::gray, 0, Qt::DotLine));
    Grid                        ->attach(qwtPlot);


    for (int a = 0; a < analogChannels; a++)
    {
        Plot[a]                 = new QwtPlotCurve(namesArray[a]);
        Plot[a]                 ->setPen(QPen(QColor(Def_Colors[a])));
        Plot[a]                 ->setRenderHint(QwtPlotItem::RenderAntialiased);
        Plot[a]                 ->attach(qwtPlot);
        Plot[a]                 ->setRawData(timeAxis, plotStore[a], MaxPlot-1);
    }

    qwtPlot                     ->replot();
}

void baseStation::setTelemetrie(TELEMETRIE_0 S_TELE)
{
    UBat                            ->setValue(int(S_TELE.ADC_UBAT.toInt()));
    UBatText                        ->setText(QString::number(double(S_TELE.ADC_UBAT.toDouble()/10.0)));
    EngineBar_1                     ->setValue(int(S_TELE.PWMEngOut_0.toInt()));
    EngineBar_2                     ->setValue(int(S_TELE.PWMEngOut_1.toInt()));
    EngineBar_3                     ->setValue(int(S_TELE.PWMEngOut_2.toInt()));
    EngineBar_4                     ->setValue(int(S_TELE.PWMEngOut_3.toInt()));

    gainX                           ->setValue(double(S_TELE.ADC_ROLL.toDouble()/10 - 50));
    gainY                           ->setValue(double(S_TELE.ADC_NICK.toDouble()/10 - 50));

    RCChanBar_1                     ->setValue(S_TELE.PWM_channel_0.toInt());
    RCChanText_1                    ->setText(QString::number(S_TELE.PWM_channel_0.toInt() - 120));
    RCChanBar_2                     ->setValue(S_TELE.PWM_channel_1.toInt());
    RCChanText_2                    ->setText(QString::number(S_TELE.PWM_channel_1.toInt() - 120));
    RCChanBar_3                     ->setValue(S_TELE.PWM_channel_2.toInt());
    RCChanText_3                    ->setText(QString::number(S_TELE.PWM_channel_2.toInt() - 120));
    RCChanBar_4                     ->setValue(S_TELE.PWM_channel_3.toInt());
    RCChanText_4                    ->setText(QString::number(S_TELE.PWM_channel_3.toInt() - 120));
    RCChanBar_5                     ->setValue(S_TELE.PWM_channel_4.toInt());
    RCChanText_5                    ->setText(QString::number(S_TELE.PWM_channel_4.toInt() - 120));
    RCChanBar_6                     ->setValue(S_TELE.PWM_channel_5.toInt());
    RCChanText_6                    ->setText(QString::number(S_TELE.PWM_channel_5.toInt() - 120));
    RCChanBar_7                     ->setValue(S_TELE.PWM_channel_6.toInt());
    RCChanText_7                    ->setText(QString::number(S_TELE.PWM_channel_6.toInt() - 120));


    runTime                         ->display(double(QString(S_TELE.RTC_Min.toInt() + "." + S_TELE.RTC_Sec.toInt()).toDouble()));


    // to be activated later remember refactoring
    //RChan_8                   ->setValue(double(S_TELE.PWM_channel_7.toDouble() - 127));
    //RCCok_8                     ->setText(QString(int(S_TELE.PWM_channel_7.toDouble() - 127)));
    //RChan_9                   ->setValue(double(S_TELE.PWM_channel_8.toDouble() - 127));
    //RCCok_9                     ->setText(QString(int(S_TELE.PWM_channel_8.toDouble() - 127)));
    //RChan_10                  ->setValue(double(S_TELE.PWM_channel_9.toDouble() - 127));
    //RCCok_10                     ->setText(QString(int(S_TELE.PWM_channel_9.toDouble() - 127)));
    //RChan_11                  ->setValue(double(S_TELE.PWM_channel_10.toDouble() - 127));
    //RCCok_11                     ->setText(QString(int(S_TELE.PWM_channel_10.toDouble() - 127)));
    //RChan_12                  ->setValue(double(S_TELE.PWM_channel_11.toDouble() - 127));
    //RCCok_12                     ->setText(QString(int(S_TELE.PWM_channel_11.toDouble() - 127)));



    Attitude                    ->setAngle(double(((S_TELE.ADC_ACCX.toDouble()/10)-51)*3));
    Attitude                    ->setGradient(double((((S_TELE.ADC_ACCY.toDouble()/10)-51)/30)));

}

void baseStation::updatePlot(TELEMETRIE_0 S_TELE)
{
    for (int a = 0; a < MaxAnalog; a++)
    {
        for ( int b = 0; b < MaxPlot - 1; b++ )
        {
            plotStore[a][b] = plotStore[a][b+1];
        }
    }
    int i                               = 0;

    if(checkADCX->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.ADC_ACCX.toDouble());
    if(checkADCY->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.ADC_ACCY.toDouble());
    if(checkADCZ->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.ADC_ACCZ.toDouble());
    if(checkADCNick->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.ADC_NICK.toDouble());
    if(checkADCPitch->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.ADC_PITCH.toDouble());
    if(checkADCRoll->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.ADC_ROLL.toDouble());
    if(checkADCUbat->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.ADC_UBAT.toDouble());
    if(checkMM3X->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.MM3_X_axis.toDouble());
    if(checkMM3Y->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.MM3_Y_axis.toDouble());
    if(checkMM3Z->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.MM3_Z_axis.toDouble());



    if(checkADCBaro->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.ADC_AIRPRESSURE.toDouble());
    if(checkEng1->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.PWMEngOut_0.toDouble());
    if(checkEng2->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.PWMEngOut_1.toDouble());
    if(checkEng3->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.PWMEngOut_2.toDouble());
    if(checkEng4->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.PWMEngOut_3.toDouble());
    if(checkChan1->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.PWM_channel_0.toDouble());
    if(checkChan2->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.PWM_channel_1.toDouble());
    if(checkChan3->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.PWM_channel_2.toDouble());
    if(checkChan4->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.PWM_channel_3.toDouble());
    if(checkChan5->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.PWM_channel_4.toDouble());
    if(checkChan6->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.PWM_channel_5.toDouble());
    if(checkChan7->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.PWM_channel_6.toDouble());
    if(checkCycleCount->checkState())
        plotStore[i++][MaxPlot - 1]         = double(S_TELE.LAST_CYCLE_COUNT.toDouble());

    qwtPlot                             ->replot();
}







// reset osiFC this is bouncing rts & dtr also the two flashing jumpers must be activated
void baseStation::slot_resetDevice(void)
{
    if (o_Connection->isOpen()) {
        o_Connection        ->setDtr(true);
        o_Connection        ->setRts(true);
        o_Connection        ->setDtr(false);
        o_Connection        ->setRts(false);
    }
}

// clean output


void baseStation::slot_osmAction(void)
{
    int zoom                = mapAdapter->adaptedZoom();
    mapAdapter              = new OSMMapAdapter();
    mapCon                  ->setZoom(0);
    map                     ->setMapAdapter(mapAdapter);
    mapCon                  ->setZoom(zoom);
    mapCon                  ->updateRequestNew();
}

void baseStation::slot_yahooActionMap(void)
{
    int zoom                = mapAdapter->adaptedZoom();
    mapAdapter              = new YahooMapAdapter();
    mapCon                  ->setZoom(0);
    map                     ->setMapAdapter(mapAdapter);
    mapCon                  ->setZoom(zoom);
    mapCon                  ->updateRequestNew();
}

void baseStation::slot_yahooActionSatellite(void)
{
    int zoom                = mapAdapter->adaptedZoom();
    QPointF a               = mapCon->currentCoordinate();
    mapAdapter              = new YahooMapAdapter("us.maps3.yimg.com", "/aerial.maps.yimg.com/png?v=1.7&t=a&s=256&x=%2&y=%3&z=%1");
    mapCon                  ->setZoom(0);
    map                     ->setMapAdapter(mapAdapter);
    mapCon                  ->setZoom(zoom);
    mapCon                  ->updateRequestNew();
}


void baseStation::slot_connectDevice(void)
{

    actionDisconnect_osiFC  ->setChecked(false);
    actionConnect_osiFC     ->setChecked(true);
    if (o_Connection->isOpen() == false) {
        o_cSerialParser->openLog();
        o_Connection            ->Close();
        o_Connection            = new cConnection();
        connect(o_Connection, SIGNAL(showTerminal(int, QString)), this, SLOT(slot_showTerminal(int, QString)));
        o_Connection            ->Open(1,QString(wdgSettingsTab->comPort->currentText()));
        slot_resetDevice();
    }
}

void baseStation::slot_disConnectDevice(void)
{

    actionConnect_osiFC     ->setChecked(false);
    actionDisconnect_osiFC  ->setChecked(true);
    if (o_Connection->isOpen()) {
        o_Connection            ->Close();
        o_cSerialParser->closeLog();
    }

}

// Request Debug
void baseStation::slot_requestDebug(void)
{
    if (o_Connection->isOpen()) {
        QByteArray CMD          = o_cSerialParser->getDebugRequest(wdgserialtab->rawDebugNumber->currentIndex());
        o_Connection            ->send_Cmd('#',1,CMD,CMD.size(),false);
        wdgserialtab->serialRaw               ->insertPlainText(CMD.data());
        wdgserialtab->serialRaw               ->insertPlainText("\n");
    }
}

void baseStation::slot_startCalib(void)
{
    compassCalib(CMD_START_CALIB_COMPASS);
}
void baseStation::slot_stopCalib(void)
{
    compassCalib(CMD_STOP_CALIB_COMPASS);
}

void baseStation::compassCalib(int com)
{
    if (o_Connection->isOpen()) {
        QByteArray CMD          = o_cSerialParser->getDebugRequest(com);
        o_Connection            ->send_Cmd('#',1,CMD,CMD.size(),false);
        wdgserialtab->serialRaw               ->insertPlainText(CMD.data());
        wdgserialtab->serialRaw               ->insertPlainText("\n");
    }
}

void baseStation::slot_readCompassValues(void)
{
    if (o_Connection->isOpen()) {
        QByteArray CMD          = o_cSerialParser->getDebugRequest(CMD_READ_CALIB_COMPASS);
        o_Connection            ->send_Cmd('#',1,CMD,CMD.size(),false);
        wdgserialtab->serialRaw               ->insertPlainText(CMD.data());
        wdgserialtab->serialRaw               ->insertPlainText("\n");
    }
}
void baseStation::slot_writeCompassValues(void)
{

}

void baseStation::setCompass(COMPASS_CALIB_DATA CALIB)
{
     wdgSettingsTab->X_MIN                 ->setText(QString::number(CALIB.X_MIN.toInt()));
     wdgSettingsTab->X_MAX                 ->setText(QString::number(CALIB.X_MAX.toInt()));
     wdgSettingsTab->X_RANGE               ->setText(QString::number(CALIB.X_RANGE.toInt()));
     wdgSettingsTab->X_OFFSET              ->setText(QString::number(CALIB.X_OFFSET.toInt()));
     wdgSettingsTab->Y_MIN                 ->setText(QString::number(CALIB.Y_MIN.toInt()));
     wdgSettingsTab->Y_MAX                 ->setText(QString::number(CALIB.Y_MAX.toInt()));
     wdgSettingsTab->Y_RANGE               ->setText(QString::number(CALIB.Y_RANGE.toInt()));
     wdgSettingsTab->Y_OFFSET              ->setText(QString::number(CALIB.Y_OFFSET.toInt()));
     wdgSettingsTab->Z_MIN                 ->setText(QString::number(CALIB.Z_MIN.toInt()));
     wdgSettingsTab->Z_MAX                 ->setText(QString::number(CALIB.Z_MAX.toInt()));
     wdgSettingsTab->Z_RANGE               ->setText(QString::number(CALIB.Z_RANGE.toInt()));
     wdgSettingsTab->Z_OFFSET              ->setText(QString::number(CALIB.Z_OFFSET.toInt()));
}


void baseStation::slot_cleanOutput(void)
{
    wdgserialtab->serialRaw            ->clear();
    wdgi2ctab->serialRaw_2             ->clear();
}

void baseStation::slot_showTerminal(int Typ, QString Text)
{
    wdgserialtab->serialRaw               ->insertPlainText(Text);
    wdgserialtab->serialRaw               ->insertPlainText("\n");
    wdgserialtab->serialRaw               ->ensureCursorVisible();

    int status = o_cSerialParser->Parser(Text);
    switch (status) {
        case RX_MESSAGE: {
            messages        ->insertPlainText(o_cSerialParser->getMessage());
            messages        ->ensureCursorVisible();
        break;
        }
        case RX_TELEMETRIE: {
            setTelemetrie(o_cSerialParser->getTelemetrie());
            updatePlot(o_cSerialParser->getTelemetrie());
        break;
        }
        case RX_SETTINGS: {
            setSettings(o_cSerialParser->getSetting());
        break;
        }

        case RX_COMPASS_CALIB: {
            setCompass(o_cSerialParser->getCalib());
        break;
        }
    }
}






// update ADC Rate
void baseStation::slot_updateAdcRate(void)
{
    if (o_Connection->isOpen()) {
        QByteArray CMD          = o_cSerialParser->getFlashSettingRequest();
        o_Connection            ->send_Cmd('#',1,CMD,CMD.size(),false);
        wdgserialtab->serialRaw               ->insertPlainText(CMD.data());
    }
}


// start YGE
void baseStation::slot_startYGE(void)
{
    if (o_Connection->isOpen()) {
        QByteArray CMD          = o_cSerialParser->getstartYGERequest(wdgi2ctab->YGEI2CDestinationAddress->text().toInt());
        o_Connection            ->send_Cmd('#',1,CMD,CMD.size(),false);
        wdgi2ctab->serialRaw_2             ->insertPlainText(CMD.data());
    }
}

// update YGE
void baseStation::slot_updateYGE(void)
{
    if (o_Connection->isOpen()) {
        QByteArray CMD          = o_cSerialParser->getupdateYGERequest(wdgi2ctab->YGEI2CSourceAddress->text().toInt(), wdgi2ctab->YGEI2CDestinationAddress->text().toInt());
        o_Connection            ->send_Cmd('#',1,CMD,CMD.size(),false);
        wdgi2ctab->serialRaw_2             ->insertPlainText(CMD.data());
    }
}

// Start Engine
void baseStation::slot_startEngine(void)
{
    if (o_Connection->isOpen()) {
        QByteArray CMD          = o_cSerialParser->getstartEngineRequest();
        o_Connection            ->send_Cmd('#',1,CMD,CMD.size(),false);
        wdgserialtab->serialRaw               ->insertPlainText(CMD.data());
    }
}

// Start all Engines
void baseStation::slot_startAll(void)
{
    if (o_Connection->isOpen()) {
        QByteArray CMD          = o_cSerialParser->getstartAllRequest();
        o_Connection            ->send_Cmd('#',1,CMD,CMD.size(),false);
        wdgserialtab->serialRaw               ->insertPlainText(CMD.data());
    }
}

// Stop engines
void baseStation::slot_stopAll(void)
{
    if (o_Connection->isOpen()) {
        QByteArray CMD          = o_cSerialParser->getstopAllRequest();
        o_Connection            ->send_Cmd('#',1,CMD,CMD.size(),false);
        wdgserialtab->serialRaw               ->insertPlainText(CMD.data());
    }
}


void baseStation::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        retranslateUi(this);
        break;
    default:
        break;
    }
}


// flash settings
void baseStation::slot_flashSetting(void)
{
    if (o_Connection->isOpen()) {
        QByteArray CMD          = o_cSerialParser->getFlashSettingRequest();
        o_Connection            ->send_Cmd('#',1,CMD,CMD.size(),false);
        wdgserialtab->serialRaw                ->insertPlainText(CMD.data());
    }
}
// read setting
void baseStation::slot_readSetting(void)
{
    if (o_Connection->isOpen()) {
        QByteArray CMD          = o_cSerialParser->getSettingsRequest(int(settingNum->value()));
        o_Connection            ->send_Cmd('#',1,CMD,CMD.size(),false);
        slot_updatePIDSimple();
    }
}

void baseStation::slot_convertPIDSimple(void)
{
    wdgSettingsTab->PIDRollACCForce                 ->setValue(int(wdgSettingsTab->PIDSimpleACCForce->value()));
    wdgSettingsTab->PIDRollGyroForce                ->setValue(int(wdgSettingsTab->PIDSimpleGyroForce->value()));
    wdgSettingsTab->PIDRollP                        ->setValue(int(wdgSettingsTab->PIDSimpleP->value()));
    wdgSettingsTab->PIDRollI                        ->setValue(int(wdgSettingsTab->PIDSimpleI->value()));
    wdgSettingsTab->PIDRollD                        ->setValue(int(wdgSettingsTab->PIDSimpleD->value()));
    wdgSettingsTab->PIDRollACCP                     ->setValue(int(wdgSettingsTab->PIDSimpleACCP->value()));
    wdgSettingsTab->PIDRollACCI                     ->setValue(int(wdgSettingsTab->PIDSimpleACCI->value()));
    wdgSettingsTab->PIDRollACCD                     ->setValue(int(wdgSettingsTab->PIDSimpleACCD->value()));
    wdgSettingsTab->PIDRollPitchForce               ->setValue(int(wdgSettingsTab->PIDSimplePitchForce->value()));
    wdgSettingsTab->PIDRollGyroACCForce             ->setValue(int(wdgSettingsTab->PIDSimpleGyroACCForce->value()));
    wdgSettingsTab->PIDRollGyroACCMin               ->setValue(int(wdgSettingsTab->PIDSimpleGyroACCMin->value()));
    wdgSettingsTab->PIDRollGyroACCMax               ->setValue(int(wdgSettingsTab->PIDSimpleGyroACCMax->value()));
    wdgSettingsTab->PIDRollIntegralMin              ->setValue(int(wdgSettingsTab->PIDSimpleIntegralMin->value()));
    wdgSettingsTab->PIDRollIntegralMax              ->setValue(int(wdgSettingsTab->PIDSimpleIntegralMax->value()));
    wdgSettingsTab->PIDNickACCForce                 ->setValue(int(wdgSettingsTab->PIDSimpleACCForce->value()));
    wdgSettingsTab->PIDNickGyroForce                ->setValue(int(wdgSettingsTab->PIDSimpleGyroForce->value()));
    wdgSettingsTab->PIDNickP                        ->setValue(int(wdgSettingsTab->PIDSimpleP->value()));
    wdgSettingsTab->PIDNickI                        ->setValue(int(wdgSettingsTab->PIDSimpleI->value()));
    wdgSettingsTab->PIDNickD                        ->setValue(int(wdgSettingsTab->PIDSimpleD->value()));
    wdgSettingsTab->PIDNickACCP                     ->setValue(int(wdgSettingsTab->PIDSimpleACCP->value()));
    wdgSettingsTab->PIDNickACCI                     ->setValue(int(wdgSettingsTab->PIDSimpleACCI->value()));
    wdgSettingsTab->PIDNickACCD                     ->setValue(int(wdgSettingsTab->PIDSimpleACCD->value()));
    wdgSettingsTab->PIDNickPitchForce               ->setValue(int(wdgSettingsTab->PIDSimplePitchForce->value()));
    wdgSettingsTab->PIDNickGyroACCForce             ->setValue(int(wdgSettingsTab->PIDSimpleGyroACCForce->value()));
    wdgSettingsTab->PIDNickGyroACCMin               ->setValue(int(wdgSettingsTab->PIDSimpleGyroACCMin->value()));
    wdgSettingsTab->PIDNickGyroACCMax               ->setValue(int(wdgSettingsTab->PIDSimpleGyroACCMax->value()));
    wdgSettingsTab->PIDNickIntegralMin              ->setValue(int(wdgSettingsTab->PIDSimpleIntegralMin->value()));
    wdgSettingsTab->PIDNickIntegralMax              ->setValue(int(wdgSettingsTab->PIDSimpleIntegralMax->value()));
    wdgSettingsTab->PIDThrottleOffset               ->setValue(int(wdgSettingsTab->PIDSimpleThrottleOffset->value()));
    wdgSettingsTab->PIDNickStickForce               ->setValue(int(wdgSettingsTab->PIDSimpleStickForce->value()));
    wdgSettingsTab->PIDRollStickForce               ->setValue(int(wdgSettingsTab->PIDSimpleStickForce->value()));
    wdgSettingsTab->PIDPitchStickForce              ->setValue(int(wdgSettingsTab->PIDSimplePitchForce->value()));
    wdgSettingsTab->PIDPitchP                       ->setValue(int(wdgSettingsTab->PIDSimplePitchP->value()));
    wdgSettingsTab->PIDPitchI                       ->setValue(int(wdgSettingsTab->PIDSimplePitchI->value()));
    wdgSettingsTab->PIDPitchD                       ->setValue(int(wdgSettingsTab->PIDSimplePitchD->value()));
    wdgSettingsTab->PIDPitchIntegralMin             ->setValue(int(wdgSettingsTab->PIDSimplePitchIntegralMin->value()));
    wdgSettingsTab->PIDPitchIntegralMax             ->setValue(int(wdgSettingsTab->PIDSimplePitchIntegralMax->value()));
    wdgSettingsTab->PIDPitchGyroForce               ->setValue(int(wdgSettingsTab->PIDSimplePitchGyroForce->value()));
    wdgSettingsTab->PIDPitchThrottleOffset          ->setValue(int(wdgSettingsTab->PIDSimplePitchThrottleOffset->value()));
    wdgSettingsTab->PIDHeadingHold                  ->setCurrentIndex(int(wdgSettingsTab->PIDSimpleHeadingHold->currentIndex()));
}

void baseStation::slot_updatePIDSimple(void)
{
    wdgSettingsTab->PIDSimpleP                      ->setValue(int(wdgSettingsTab->PIDRollP->value()));
    wdgSettingsTab->PIDSimpleI                      ->setValue(int(wdgSettingsTab->PIDRollI->value()));
    wdgSettingsTab->PIDSimpleD                      ->setValue(int(wdgSettingsTab->PIDRollD->value()));
    wdgSettingsTab->PIDSimpleACCP                   ->setValue(int(wdgSettingsTab->PIDRollACCP->value()));
    wdgSettingsTab->PIDSimpleACCI                   ->setValue(int(wdgSettingsTab->PIDRollACCI->value()));
    wdgSettingsTab->PIDSimpleACCD                   ->setValue(int(wdgSettingsTab->PIDRollACCD->value()));
    wdgSettingsTab->PIDSimpleACCForce               ->setValue(int(wdgSettingsTab->PIDRollACCForce->value()));
    wdgSettingsTab->PIDSimpleGyroForce              ->setValue(int(wdgSettingsTab->PIDRollGyroForce->value()));
    wdgSettingsTab->PIDSimpleGyroACCForce           ->setValue(int(wdgSettingsTab->PIDRollGyroACCForce->value()));
    wdgSettingsTab->PIDSimpleGyroACCMin             ->setValue(int(wdgSettingsTab->PIDRollGyroACCMin->value()));
    wdgSettingsTab->PIDSimpleGyroACCMax             ->setValue(int(wdgSettingsTab->PIDRollGyroACCMax->value()));
    wdgSettingsTab->PIDSimpleIntegralMin            ->setValue(int(wdgSettingsTab->PIDRollIntegralMin->value()));
    wdgSettingsTab->PIDSimpleIntegralMax            ->setValue(int(wdgSettingsTab->PIDRollIntegralMax->value()));
    wdgSettingsTab->PIDSimpleThrottleOffset         ->setValue(int(wdgSettingsTab->PIDThrottleOffset->value()));
    wdgSettingsTab->PIDSimplePitchP                 ->setValue(int(wdgSettingsTab->PIDPitchP->value()));
    wdgSettingsTab->PIDSimplePitchI                 ->setValue(int(wdgSettingsTab->PIDPitchI->value()));
    wdgSettingsTab->PIDSimplePitchD                 ->setValue(int(wdgSettingsTab->PIDPitchD->value()));
    wdgSettingsTab->PIDSimplePitchForce             ->setValue(int(wdgSettingsTab->PIDRollPitchForce->value()));
    wdgSettingsTab->PIDSimplePitchGyroForce         ->setValue(int(wdgSettingsTab->PIDPitchGyroForce->value()));
    wdgSettingsTab->PIDSimpleStickForce             ->setValue(int(wdgSettingsTab->PIDRollStickForce->value()));
    wdgSettingsTab->PIDSimplePitchStickForce        ->setValue(int(wdgSettingsTab->PIDPitchStickForce->value()));
    wdgSettingsTab->PIDSimplePitchIntegralMin       ->setValue(int(wdgSettingsTab->PIDPitchIntegralMin->value()));
    wdgSettingsTab->PIDSimplePitchIntegralMax       ->setValue(int(wdgSettingsTab->PIDPitchIntegralMax->value()));
    wdgSettingsTab->PIDSimplePitchThrottleOffset    ->setValue(int(wdgSettingsTab->PIDPitchThrottleOffset->value()));
    wdgSettingsTab->PIDSimpleHeadingHold            ->setCurrentIndex(int(wdgSettingsTab->PIDHeadingHold->currentIndex()));

}

void baseStation::setRCSettings(SETTINGS s_settings)
{
    wdgSettingsTab->PPMMax                     ->setValue(s_settings.MaxValue.toInt());
    wdgSettingsTab->PPMMin                     ->setValue(s_settings.MinValue.toInt());
    wdgSettingsTab->multiChannelMax            ->setValue(s_settings.MaxMultichannel.toInt());
    wdgSettingsTab->PPMOffset1                 ->setValue(s_settings.mcOffset.toInt());
    wdgSettingsTab->PPMOffset2                 ->setValue(s_settings.mcOffset2.toInt());
    wdgSettingsTab->chanMux1                   ->setValue(s_settings.chan[0].toInt());
    wdgSettingsTab->chanMux2                   ->setValue(s_settings.chan[1].toInt());
    wdgSettingsTab->chanMux3                   ->setValue(s_settings.chan[2].toInt());
    wdgSettingsTab->chanMux4                   ->setValue(s_settings.chan[3].toInt());
    wdgSettingsTab->chanMux5                   ->setValue(s_settings.chan[4].toInt());
    wdgSettingsTab->chanMux6                   ->setValue(s_settings.chan[5].toInt());
    wdgSettingsTab->chanMux7                   ->setValue(s_settings.chan[6].toInt());
    wdgSettingsTab->chanMux8                   ->setValue(s_settings.chan[7].toInt());
    wdgSettingsTab->chanMux9                   ->setValue(s_settings.chan[8].toInt());
    wdgSettingsTab->chanMux10                  ->setValue(s_settings.chan[9].toInt());
    wdgSettingsTab->chanMux11                  ->setValue(s_settings.chan[10].toInt());
    wdgSettingsTab->chanMux12                  ->setValue(s_settings.chan[11].toInt());
    wdgSettingsTab->PPMOffset                  ->setValue(s_settings.scOffsetBase.toInt());
    wdgSettingsTab->chanOff1                   ->setValue(s_settings.scOffset[0].toInt());
    wdgSettingsTab->chanOff2                   ->setValue(s_settings.scOffset[1].toInt());
    wdgSettingsTab->chanOff3                   ->setValue(s_settings.scOffset[2].toInt());
    wdgSettingsTab->chanOff4                   ->setValue(s_settings.scOffset[3].toInt());
    wdgSettingsTab->chanOff5                   ->setValue(s_settings.scOffset[4].toInt());
    wdgSettingsTab->chanOff6                   ->setValue(s_settings.scOffset[5].toInt());
    wdgSettingsTab->chanOff7                   ->setValue(s_settings.scOffset[6].toInt());
    wdgSettingsTab->chanOff8                   ->setValue(s_settings.scOffset[7].toInt());
    wdgSettingsTab->chanOff9                   ->setValue(s_settings.scOffset[8].toInt());

}

void baseStation::setComponents(SETTINGS s_settings)
{
    wdgSettingsTab->enableBaro          	->setCurrentIndex(s_settings.barOn);
    wdgSettingsTab->baroChan               	->setCurrentIndex(s_settings.barChan);
    wdgSettingsTab->baroOffset          	->setValue(s_settings.baroOffset.toInt());

    wdgSettingsTab->enableCompass       	->setCurrentIndex(s_settings.compOn);
    wdgSettingsTab->compassType         	->setCurrentIndex(s_settings.compassType);
    wdgSettingsTab->compassBias           	->setValue(s_settings.compassBias.toInt());
    wdgSettingsTab->compassForce           	->setValue(s_settings.compassForce.toInt());

    wdgSettingsTab->enableGPS           	->setCurrentIndex(s_settings.gpsOn);

    wdgSettingsTab->enableNickServo     	->setCurrentIndex(s_settings.nickServoOn);
    wdgSettingsTab->nickServoChan        	->setCurrentIndex(s_settings.nickServoChan);
    wdgSettingsTab->nickServoInvert     	->setCurrentIndex(s_settings.nickServoInvert);
    wdgSettingsTab->nickServoPos                ->setValue(s_settings.nickServoPos.toInt());
    wdgSettingsTab->nickServoForce              ->setValue(s_settings.nickServoForce.toInt());
    wdgSettingsTab->nickServoMin                ->setValue(s_settings.nickServoMin.toInt());
    wdgSettingsTab->nickServoMax                ->setValue(s_settings.nickServoMax.toInt());

    wdgSettingsTab->enableRollServo     	->setCurrentIndex(s_settings.rollServoOn);
    wdgSettingsTab->rollServoChan        	->setCurrentIndex(s_settings.rollServoChan);
    wdgSettingsTab->rollServoInvert     	->setCurrentIndex(s_settings.rollServoInvert);
    wdgSettingsTab->rollServoPos                ->setValue(s_settings.rollServoPos.toInt());
    wdgSettingsTab->rollServoForce              ->setValue(s_settings.rollServoForce.toInt());
    wdgSettingsTab->rollServoMin                ->setValue(s_settings.rollServoMin.toInt());
    wdgSettingsTab->rollServoMax                ->setValue(s_settings.rollServoMax.toInt());
}



void baseStation::setPIDXaxis(SETTINGS s_settings)
{
    wdgSettingsTab->PIDRollP                	->setValue(s_settings.pid_X_P.toInt());
    wdgSettingsTab->PIDRollI                	->setValue(s_settings.pid_X_I.toInt());
    wdgSettingsTab->PIDRollD                	->setValue(s_settings.pid_X_D.toInt());
    wdgSettingsTab->PIDRollACCP                	->setValue(s_settings.pid_X_ACC_P.toInt());
    wdgSettingsTab->PIDRollACCI                	->setValue(s_settings.pid_X_ACC_I.toInt());
    wdgSettingsTab->PIDRollACCD                	->setValue(s_settings.pid_X_ACC_D.toInt());

    wdgSettingsTab->PIDRollACCForce         	->setValue(s_settings.pid_X_AccX_Fact.toInt());
    wdgSettingsTab->PIDRollGyroForce        	->setValue(s_settings.pid_X_GyroSumFact.toInt());
    wdgSettingsTab->PIDRollPitchForce       	->setValue(s_settings.pid_X_PitchSumFact.toInt());
    wdgSettingsTab->PIDRollGyroACCForce     	->setValue(s_settings.pid_X_SumFact.toInt());
    wdgSettingsTab->PIDRollGyroBias         	->setValue(s_settings.pid_X_gyroBias.toInt());
    wdgSettingsTab->PIDRollGyroBiasNeg         	->setValue(s_settings.pid_X_gyroBiasNeg.toInt() * -1);
    wdgSettingsTab->PIDRollGyroACCMin       	->setValue(s_settings.pid_X_GyroACCFactMin.toInt() * -1);
    wdgSettingsTab->PIDRollGyroACCMax       	->setValue(s_settings.pid_X_GyroACCFactMax.toInt());
    wdgSettingsTab->PIDRollIntegralMin      	->setValue(s_settings.pid_X_IntegralMin.toInt() * -1);
    wdgSettingsTab->PIDRollIntegralMax      	->setValue(s_settings.pid_X_IntegralMax.toInt());
    wdgSettingsTab->PIDRollStickForce      	->setValue(s_settings.pid_RollStickFact.toInt());
    // fill up the simple variables
    wdgSettingsTab->PIDSimpleP             	->setValue(s_settings.pid_X_P.toInt());
    wdgSettingsTab->PIDSimpleI             	->setValue(s_settings.pid_X_I.toInt());
    wdgSettingsTab->PIDSimpleD             	->setValue(s_settings.pid_X_D.toInt());
    wdgSettingsTab->PIDSimpleACCP             	->setValue(s_settings.pid_X_ACC_P.toInt());
    wdgSettingsTab->PIDSimpleACCI             	->setValue(s_settings.pid_X_ACC_I.toInt());
    wdgSettingsTab->PIDSimpleACCD             	->setValue(s_settings.pid_X_ACC_D.toInt());
    wdgSettingsTab->PIDSimpleStickForce         ->setValue(s_settings.pid_RollStickFact.toInt());
    wdgSettingsTab->PIDSimpleACCForce      	->setValue(s_settings.pid_X_AccX_Fact.toInt());
    wdgSettingsTab->PIDSimpleGyroForce     	->setValue(s_settings.pid_X_GyroSumFact.toInt());
    wdgSettingsTab->PIDSimplePitchForce    	->setValue(s_settings.pid_X_PitchSumFact.toInt());
    wdgSettingsTab->PIDSimpleGyroACCForce  	->setValue(s_settings.pid_X_SumFact.toInt());
    wdgSettingsTab->PIDSimpleGyroACCMin    	->setValue(s_settings.pid_X_GyroACCFactMin.toInt() * -1);
    wdgSettingsTab->PIDSimpleGyroACCMax    	->setValue(s_settings.pid_X_GyroACCFactMax.toInt());
    wdgSettingsTab->PIDSimpleIntegralMin   	->setValue(s_settings.pid_X_IntegralMin.toInt() * -1);
    wdgSettingsTab->PIDSimpleIntegralMax   	->setValue(s_settings.pid_X_IntegralMax.toInt());


}

void baseStation::setPIDYaxis(SETTINGS s_settings)
{
    wdgSettingsTab->PIDNickP                        ->setValue(s_settings.pid_Y_P.toInt());
    wdgSettingsTab->PIDNickI                        ->setValue(s_settings.pid_Y_I.toInt());
    wdgSettingsTab->PIDNickD                        ->setValue(s_settings.pid_Y_D.toInt());
    wdgSettingsTab->PIDNickACCP                     ->setValue(s_settings.pid_Y_ACC_P.toInt());
    wdgSettingsTab->PIDNickACCI                     ->setValue(s_settings.pid_Y_ACC_I.toInt());
    wdgSettingsTab->PIDNickACCD                     ->setValue(s_settings.pid_Y_ACC_D.toInt());
    wdgSettingsTab->PIDNickACCForce                 ->setValue(s_settings.pid_Y_AccY_Fact.toInt());
    wdgSettingsTab->PIDNickGyroForce                ->setValue(s_settings.pid_Y_GyroSumFact.toInt());
    wdgSettingsTab->PIDNickPitchForce               ->setValue(s_settings.pid_Y_PitchSumFact.toInt());
    wdgSettingsTab->PIDNickGyroACCForce             ->setValue(s_settings.pid_Y_SumFact.toInt());
    wdgSettingsTab->PIDNickGyroBias                 ->setValue(s_settings.pid_Y_gyroBias.toInt());
    wdgSettingsTab->PIDNickGyroBiasNeg              ->setValue(s_settings.pid_Y_gyroBiasNeg.toInt() * -1);
    wdgSettingsTab->PIDNickGyroACCMin               ->setValue(s_settings.pid_Y_GyroACCFactMin.toInt() * -1);
    wdgSettingsTab->PIDNickGyroACCMax               ->setValue(s_settings.pid_Y_GyroACCFactMax.toInt());
    wdgSettingsTab->PIDNickIntegralMin              ->setValue(s_settings.pid_Y_IntegralMin.toInt() * -1);
    wdgSettingsTab->PIDNickIntegralMax              ->setValue(s_settings.pid_Y_IntegralMax.toInt());
    wdgSettingsTab->PIDNickStickForce               ->setValue(s_settings.pid_NickStickFact.toInt());
}

void baseStation::setPIDPitch(SETTINGS s_settings)
{
    wdgSettingsTab->PIDPitchP                       ->setValue(s_settings.pid_PitchP.toInt());
    wdgSettingsTab->PIDPitchI                       ->setValue(s_settings.pid_PitchI.toInt());
    wdgSettingsTab->PIDPitchD                       ->setValue(s_settings.pid_PitchD.toInt());
    wdgSettingsTab->PIDPitchGyroBias                ->setValue(s_settings.pid_PitchGyroBias.toInt());
    wdgSettingsTab->PIDPitchGyroBiasNeg             ->setValue(s_settings.pid_PitchGyroBiasNeg.toInt() * -1);
    wdgSettingsTab->PIDPitchGyroForce               ->setValue(s_settings.pid_GyroPitchFact.toInt());
    wdgSettingsTab->PIDPitchIntegralMin             ->setValue(s_settings.pid_Pitch_IntegralMin.toInt() * -1);
    wdgSettingsTab->PIDPitchIntegralMax             ->setValue(s_settings.pid_Pitch_IntegralMax.toInt());
    wdgSettingsTab->PIDPitchStickForce              ->setValue(s_settings.pid_PitchStickFact.toInt());
     wdgSettingsTab->PIDPitchThrottleOffset         ->setValue(s_settings.pid_PitchThrottleFact.toInt());
    // fill up the simple variables
    wdgSettingsTab->PIDSimplePitchGyroForce         ->setValue(s_settings.pid_GyroPitchFact.toInt());
    wdgSettingsTab->PIDSimplePitchStickForce        ->setValue(s_settings.pid_PitchStickFact.toInt());
    wdgSettingsTab->PIDSimplePitchP                 ->setValue(s_settings.pid_PitchP.toInt());
    wdgSettingsTab->PIDSimplePitchI                 ->setValue(s_settings.pid_PitchI.toInt());
    wdgSettingsTab->PIDSimplePitchD                 ->setValue(s_settings.pid_PitchD.toInt());
    wdgSettingsTab->PIDSimplePitchIntegralMin       ->setValue(s_settings.pid_Pitch_IntegralMin.toInt() * -1);
    wdgSettingsTab->PIDSimplePitchIntegralMax       ->setValue(s_settings.pid_Pitch_IntegralMax.toInt());
}

void baseStation::setPID(SETTINGS s_settings)
{
    wdgSettingsTab->PIDThrottleOffset               ->setValue(s_settings.pid_throttleOffset.toInt());
    wdgSettingsTab->PIDThrottleOffset               ->setValue(s_settings.pid_throttleOffset.toInt());
    wdgSettingsTab->PIDHeadingHold                  ->setCurrentIndex(s_settings.pid_HeadingHold);

    // fill up the simple variables
    wdgSettingsTab->PIDSimpleThrottleOffset         ->setValue(s_settings.pid_throttleOffset.toInt());
    wdgSettingsTab->PIDSimpleHeadingHold            ->setCurrentIndex(s_settings.pid_HeadingHold);
    wdgSettingsTab->PIDSimpleStickForce             ->setValue(s_settings.pid_RollStickFact.toInt());
}

void baseStation::setSystem(SETTINGS s_settings)
{
    settingNum                                      ->setValue(s_settings.settingNum.toInt());
    wdgSettingsTab->sysGasMin                       ->setValue(s_settings.sysGasMin.toInt());

    wdgSettingsTab->emgGas                          ->setValue(s_settings.sysEmergencyGas.toInt());
    wdgSettingsTab->emgGasDur                       ->setValue(s_settings.sysEmergencyGasDuration.toInt());
    wdgSettingsTab->lowVoltage                      ->setValue(s_settings.sysLowVoltage.toInt());
    wdgSettingsTab->mainDirection                   ->setCurrentIndex(s_settings.sysMainDirection);
    wdgSettingsTab->sysGasMax                       ->setValue(s_settings.sysGasMax.toInt());

    wdgSettingsTab->ReceiverType                    ->setCurrentIndex(s_settings.ReceiverType);
    wdgSettingsTab->PPMMode                         ->setCurrentIndex(s_settings.PPMMode);

    wdgSettingsTab->calcMode                        ->setCurrentIndex(s_settings.calcMode);

    wdgSettingsTab->ESCType                         ->setCurrentIndex(s_settings.escType);
    wdgSettingsTab->ESCMax                          ->setValue(s_settings.escMax.toInt());
    wdgSettingsTab->ESCBaseAddress                  ->setValue(s_settings.escBaseAdr.toInt());
    wdgSettingsTab->ESCAddressHop                   ->setValue(s_settings.escAdrHop.toInt());

    wdgSettingsTab->calcWait                        ->setValue(s_settings.calcCycle.toInt());
    wdgSettingsTab->telemetrieWait                  ->setValue(s_settings.telemetrieCycle.toInt());
    wdgSettingsTab->componentWait                   ->setValue(s_settings.componentCycle.toInt());

    wdgSettingsTab->ADCClockDiv                     ->setValue(s_settings.AdcClockDiv.toInt());

    wdgSettingsTab->GyroDriftNick                   ->setValue(s_settings.ADCDriftNick.toInt());
    wdgSettingsTab->GyroDriftRoll                   ->setValue(s_settings.ADCDriftRoll.toInt());
    wdgSettingsTab->GyroDriftPitch                  ->setValue(s_settings.ADCDriftPitch.toInt());
    wdgSettingsTab->GyroModeNick                    ->setCurrentIndex(s_settings.ADCModeNick);
    wdgSettingsTab->GyroModeRoll                    ->setCurrentIndex(s_settings.ADCModeRoll);
    wdgSettingsTab->GyroModePitch                   ->setCurrentIndex(s_settings.ADCModePitch);

    wdgSettingsTab->BTMode                          ->setCurrentIndex(s_settings.BTMode);
}

void baseStation::setHMC5843Settings(SETTINGS s_settings)
{
    wdgSettingsTab->HMC5843_Mode                    ->setCurrentIndex(s_settings.HMC5843_Mode);
    wdgSettingsTab->HMC5843_Bias                    ->setCurrentIndex(s_settings.HMC5843_Bias);
    wdgSettingsTab->HMC5843_Delay                   ->setCurrentIndex(s_settings.HMC5843_Delay);
    wdgSettingsTab->HMC5843_Gain                    ->setCurrentIndex(s_settings.HMC5843_Gain);
    wdgSettingsTab->HMC5843_Rate                    ->setCurrentIndex(s_settings.HMC5843_Rate);

}


void baseStation::setUserSetings(SETTINGS s_settings)
{
    /*
    userSet1                        ->setValue(s_settings.userSetting[0].toInt());
    userSet2                        ->setValue(s_settings.userSetting[1].toInt());
    userSet3                        ->setValue(s_settings.userSetting[2].toInt());
    userSet4                        ->setValue(s_settings.userSetting[3].toInt());
    userSet5                        ->setValue(s_settings.userSetting[4].toInt());
    userSet6                        ->setValue(s_settings.userSetting[5].toInt());
    userSet7                        ->setValue(s_settings.userSetting[6].toInt());
    userSet8                        ->setValue(s_settings.userSetting[7].toInt());
    userSet9                        ->setValue(s_settings.userSetting[8].toInt());
    userSet10                       ->setValue(s_settings.userSetting[9].toInt());
    userSet11                       ->setValue(s_settings.userSetting[10].toInt());
    userSet12                       ->setValue(s_settings.userSetting[11].toInt());
    userSet13                       ->setValue(s_settings.userSetting[12].toInt());
    userSet14                       ->setValue(s_settings.userSetting[13].toInt());
    userSet15                       ->setValue(s_settings.userSetting[14].toInt());
    userSet16                       ->setValue(s_settings.userSetting[15].toInt());
    userSet17                       ->setValue(s_settings.userSetting[16].toInt());
    userSet18                       ->setValue(s_settings.userSetting[17].toInt());
    userSet19                       ->setValue(s_settings.userSetting[18].toInt());
    userSet20                       ->setValue(s_settings.userSetting[19].toInt());
    userSet21                       ->setValue(s_settings.userSetting[20].toInt());
    */
}


void baseStation::setSettings(SETTINGS s_settings)
{
    setSystem(s_settings);
    setRCSettings(s_settings);
    setComponents(s_settings);
    setPIDXaxis(s_settings);
    setPIDYaxis(s_settings);
    setPIDPitch(s_settings);
    setPID(s_settings);
    setHMC5843Settings(s_settings);
    //setUserSetings(s_settings);
}

// write Setting
void baseStation::slot_writeSetting(void)
{
    if (o_Connection->isOpen()) {
        getSetupString();
        o_cSettings->do_storeSettings(o_cSettings->writeSettings.settingNum.toInt(), o_cSettings->writeSettings);
        QByteArray out          = o_cSerialParser->getSettingsOutput(o_cSettings->transferSettings);
        wdgserialtab->serialRaw               ->insertPlainText(out.data());
        wdgserialtab->serialRaw               ->insertPlainText("\n");
        o_Connection            ->send_Cmd('#',1,out,out.size(),false);
    }
}

void baseStation::getSetupString(void)
{
    o_cSettings->transferSettings.settingNum             	= int(settingNum->text().toInt());
    o_cSettings->transferSettings.pid_X_GyroACCFactMin   	= int(wdgSettingsTab->PIDRollGyroACCMin->text().toInt()*-1);
    o_cSettings->transferSettings.pid_X_GyroACCFactMax   	= int(wdgSettingsTab->PIDRollGyroACCMax->text().toInt());
    o_cSettings->transferSettings.pid_X_IntegralMin      	= int(wdgSettingsTab->PIDRollIntegralMin->text().toInt()*-1);
    o_cSettings->transferSettings.pid_X_IntegralMax      	= int(wdgSettingsTab->PIDRollIntegralMax->text().toInt());
    o_cSettings->transferSettings.pid_X_AccX_Fact        	= int(wdgSettingsTab->PIDRollACCForce->text().toInt());
    o_cSettings->transferSettings.pid_X_GyroSumFact      	= int(wdgSettingsTab->PIDRollGyroForce->text().toInt());
    o_cSettings->transferSettings.pid_X_P                	= int(wdgSettingsTab->PIDRollP->text().toInt());
    o_cSettings->transferSettings.pid_X_I                	= int(wdgSettingsTab->PIDRollI->text().toInt());
    o_cSettings->transferSettings.pid_X_D                	= int(wdgSettingsTab->PIDRollD->text().toInt());
    o_cSettings->transferSettings.pid_X_ACC_P                   = int(wdgSettingsTab->PIDRollACCP->text().toInt());
    o_cSettings->transferSettings.pid_X_ACC_I                   = int(wdgSettingsTab->PIDRollACCI->text().toInt());
    o_cSettings->transferSettings.pid_X_ACC_D                   = int(wdgSettingsTab->PIDRollACCD->text().toInt());
    o_cSettings->transferSettings.pid_X_PitchSumFact     	= int(wdgSettingsTab->PIDRollPitchForce->text().toInt());
    o_cSettings->transferSettings.pid_X_SumFact          	= int(wdgSettingsTab->PIDRollGyroACCForce->text().toInt());
    o_cSettings->transferSettings.pid_X_gyroBias         	= int(wdgSettingsTab->PIDRollGyroBias->text().toInt());
    o_cSettings->transferSettings.pid_X_gyroBiasNeg         	= int(wdgSettingsTab->PIDRollGyroBiasNeg->text().toInt()*-1);

    o_cSettings->transferSettings.pid_Y_GyroACCFactMin   	= int(wdgSettingsTab->PIDNickGyroACCMin->text().toInt()*-1);
    o_cSettings->transferSettings.pid_Y_GyroACCFactMax   	= int(wdgSettingsTab->PIDNickGyroACCMax->text().toInt());
    o_cSettings->transferSettings.pid_Y_IntegralMin      	= int(wdgSettingsTab->PIDNickIntegralMin->text().toInt()*-1);
    o_cSettings->transferSettings.pid_Y_IntegralMax      	= int(wdgSettingsTab->PIDNickIntegralMax->text().toInt());
    o_cSettings->transferSettings.pid_Y_AccY_Fact        	= int(wdgSettingsTab->PIDNickACCForce->text().toInt());
    o_cSettings->transferSettings.pid_Y_GyroSumFact      	= int(wdgSettingsTab->PIDNickGyroForce->text().toInt());
    o_cSettings->transferSettings.pid_Y_P                	= int(wdgSettingsTab->PIDNickP->text().toInt());
    o_cSettings->transferSettings.pid_Y_I                	= int(wdgSettingsTab->PIDNickI->text().toInt());
    o_cSettings->transferSettings.pid_Y_D                	= int(wdgSettingsTab->PIDNickD->text().toInt());
    o_cSettings->transferSettings.pid_Y_ACC_P                   = int(wdgSettingsTab->PIDNickACCP->text().toInt());
    o_cSettings->transferSettings.pid_Y_ACC_I                   = int(wdgSettingsTab->PIDNickACCI->text().toInt());
    o_cSettings->transferSettings.pid_Y_ACC_D                   = int(wdgSettingsTab->PIDNickACCD->text().toInt());
    o_cSettings->transferSettings.pid_Y_PitchSumFact     	= int(wdgSettingsTab->PIDNickPitchForce->text().toInt());
    o_cSettings->transferSettings.pid_Y_SumFact          	= int(wdgSettingsTab->PIDNickGyroACCForce->text().toInt());
    o_cSettings->transferSettings.pid_Y_gyroBias         	= int(wdgSettingsTab->PIDNickGyroBias->text().toInt());
    o_cSettings->transferSettings.pid_Y_gyroBiasNeg             = int(wdgSettingsTab->PIDNickGyroBiasNeg->text().toInt()*-1);

    o_cSettings->transferSettings.pid_PitchGyroBias      	= int(wdgSettingsTab->PIDPitchGyroBias->text().toInt());
    o_cSettings->transferSettings.pid_PitchGyroBiasNeg      	= int(wdgSettingsTab->PIDPitchGyroBiasNeg->text().toInt()*-1);
    o_cSettings->transferSettings.pid_GyroPitchFact      	= int(wdgSettingsTab->PIDPitchGyroForce->text().toInt());
    o_cSettings->transferSettings.pid_NickStickFact          	= int(wdgSettingsTab->PIDNickStickForce->text().toInt());
    o_cSettings->transferSettings.pid_RollStickFact          	= int(wdgSettingsTab->PIDRollStickForce->text().toInt());
    o_cSettings->transferSettings.pid_HeadingHold          	= int(wdgSettingsTab->PIDHeadingHold->currentIndex());
    o_cSettings->transferSettings.pid_PitchStickFact     	= int(wdgSettingsTab->PIDPitchStickForce->text().toInt());
    o_cSettings->transferSettings.pid_throttleOffset     	= int(wdgSettingsTab->PIDThrottleOffset->text().toInt());
    o_cSettings->transferSettings.pid_PitchThrottleFact  	= int(wdgSettingsTab->PIDPitchThrottleOffset->text().toInt());
    o_cSettings->transferSettings.pid_PitchP             	= int(wdgSettingsTab->PIDPitchP->text().toInt());
    o_cSettings->transferSettings.pid_PitchI             	= int(wdgSettingsTab->PIDPitchI->text().toInt());
    o_cSettings->transferSettings.pid_PitchD             	= int(wdgSettingsTab->PIDPitchD->text().toInt());
    o_cSettings->transferSettings.pid_Pitch_IntegralMax  	= int(wdgSettingsTab->PIDPitchIntegralMax->text().toInt());
    o_cSettings->transferSettings.pid_Pitch_IntegralMin  	= int(wdgSettingsTab->PIDPitchIntegralMin->text().toInt()*-1);

    o_cSettings->transferSettings.barOn                  	= int(wdgSettingsTab->enableBaro->currentIndex());
    o_cSettings->transferSettings.barChan                  	= int(wdgSettingsTab->baroChan->currentIndex());
    o_cSettings->transferSettings.baroOffset                	= int(wdgSettingsTab->baroOffset->text().toInt());

    o_cSettings->transferSettings.compOn                 	= int(wdgSettingsTab->enableCompass->currentIndex());
    o_cSettings->transferSettings.compassBias               	= int(wdgSettingsTab->compassBias->text().toInt());
    o_cSettings->transferSettings.compassForce              	= int(wdgSettingsTab->compassForce->text().toInt());
    o_cSettings->transferSettings.compassType               	= int(wdgSettingsTab->compassType->currentIndex());

    o_cSettings->transferSettings.HMC5843_Mode                  = int(wdgSettingsTab->HMC5843_Mode->currentIndex());
    o_cSettings->transferSettings.HMC5843_Bias                  = int(wdgSettingsTab->HMC5843_Bias->currentIndex());
    o_cSettings->transferSettings.HMC5843_Delay                 = int(wdgSettingsTab->HMC5843_Delay->currentIndex());
    o_cSettings->transferSettings.HMC5843_Rate                  = int(wdgSettingsTab->HMC5843_Rate->currentIndex());
    o_cSettings->transferSettings.HMC5843_Gain                  = int(wdgSettingsTab->HMC5843_Gain->currentIndex());

    o_cSettings->transferSettings.gpsOn                  	= int(wdgSettingsTab->enableGPS->currentIndex());

    o_cSettings->transferSettings.nickServoOn            	= int(wdgSettingsTab->enableNickServo->currentIndex());
    o_cSettings->transferSettings.nickServoChan            	= int(wdgSettingsTab->nickServoChan->currentIndex());
    o_cSettings->transferSettings.nickServoInvert               = int(wdgSettingsTab->nickServoInvert->currentIndex());
    o_cSettings->transferSettings.nickServoPos              	= int(wdgSettingsTab->nickServoPos->text().toInt());
    o_cSettings->transferSettings.nickServoForce                = int(wdgSettingsTab->nickServoForce->text().toInt());
    o_cSettings->transferSettings.nickServoMin           	= int(wdgSettingsTab->nickServoMin->text().toInt());
    o_cSettings->transferSettings.nickServoMax                  = int(wdgSettingsTab->nickServoMax->text().toInt());
    o_cSettings->transferSettings.rollServoOn            	= int(wdgSettingsTab->enableRollServo->currentIndex());
    o_cSettings->transferSettings.rollServoChan            	= int(wdgSettingsTab->rollServoChan->currentIndex());
    o_cSettings->transferSettings.rollServoInvert               = int(wdgSettingsTab->rollServoInvert->currentIndex());
    o_cSettings->transferSettings.rollServoPos              	= int(wdgSettingsTab->rollServoPos->text().toInt());
    o_cSettings->transferSettings.rollServoForce                = int(wdgSettingsTab->rollServoForce->text().toInt());
    o_cSettings->transferSettings.rollServoMin           	= int(wdgSettingsTab->rollServoMin->text().toInt());
    o_cSettings->transferSettings.rollServoMax                  = int(wdgSettingsTab->rollServoMax->text().toInt());

    o_cSettings->transferSettings.sysGasMin              	= int(wdgSettingsTab->sysGasMin->text().toInt());
    o_cSettings->transferSettings.sysGasMax              	= int(wdgSettingsTab->sysGasMax->text().toInt());

    o_cSettings->transferSettings.sysLowVoltage          	= int(wdgSettingsTab->lowVoltage->text().toInt());
    o_cSettings->transferSettings.sysEmergencyGas        	= int(wdgSettingsTab->emgGas->text().toInt());
    o_cSettings->transferSettings.sysEmergencyGasDuration 	= int(wdgSettingsTab->emgGasDur->text().toInt());

    o_cSettings->transferSettings.calcMode               	= int(wdgSettingsTab->calcMode->currentIndex());

    o_cSettings->transferSettings.sysMainDirection       	= int(wdgSettingsTab->mainDirection->currentIndex());

    o_cSettings->transferSettings.escType                	= int(wdgSettingsTab->ESCType->currentIndex());
    o_cSettings->transferSettings.escMax                 	= int(wdgSettingsTab->ESCMax->text().toInt());
    o_cSettings->transferSettings.escBaseAdr             	= int(wdgSettingsTab->ESCBaseAddress->text().toInt());
    o_cSettings->transferSettings.escAdrHop              	= int(wdgSettingsTab->ESCAddressHop->text().toInt());

    o_cSettings->transferSettings.calcCycle              	= int(wdgSettingsTab->calcWait->text().toInt());
    o_cSettings->transferSettings.telemetrieCycle        	= int(wdgSettingsTab->telemetrieWait->text().toInt());
    o_cSettings->transferSettings.componentCycle         	= int(wdgSettingsTab->componentWait->text().toInt());
    o_cSettings->transferSettings.AdcClockDiv            	= int(wdgSettingsTab->ADCClockDiv->text().toInt());

    o_cSettings->transferSettings.ADCDriftNick                  = int(wdgSettingsTab->GyroDriftNick->text().toInt());
    o_cSettings->transferSettings.ADCDriftRoll                  = int(wdgSettingsTab->GyroDriftRoll->text().toInt());
    o_cSettings->transferSettings.ADCDriftPitch                 = int(wdgSettingsTab->GyroDriftPitch->text().toInt());
    o_cSettings->transferSettings.ADCModeNick                   = int(wdgSettingsTab->GyroModeNick->currentIndex());
    o_cSettings->transferSettings.ADCModeRoll                   = int(wdgSettingsTab->GyroModeRoll->currentIndex());
    o_cSettings->transferSettings.ADCModePitch                  = int(wdgSettingsTab->GyroModePitch->currentIndex());

    o_cSettings->transferSettings.ReceiverType                	= int(wdgSettingsTab->ReceiverType->currentIndex());
    o_cSettings->transferSettings.PPMMode                	= int(wdgSettingsTab->PPMMode->currentIndex());

    o_cSettings->transferSettings.BTMode                        = int(wdgSettingsTab->BTMode->currentIndex());

    o_cSettings->transferSettings.MaxValue               	= int(wdgSettingsTab->PPMMax->text().toInt());
    o_cSettings->transferSettings.MinValue               	= int(wdgSettingsTab->PPMMin->text().toInt());
    o_cSettings->transferSettings.MaxMultichannel        	= int(wdgSettingsTab->multiChannelMax->text().toInt());
    o_cSettings->transferSettings.mcOffset               	= int(wdgSettingsTab->PPMOffset1->text().toInt());
    o_cSettings->transferSettings.mcOffset2              	= int(wdgSettingsTab->PPMOffset2->text().toInt());
    o_cSettings->transferSettings.scOffsetBase           	= int(wdgSettingsTab->PPMOffset->text().toInt());

    o_cSettings->transferSettings.chan[0]                	= int(wdgSettingsTab->chanMux1->text().toInt());
    o_cSettings->transferSettings.chan[1]                	= int(wdgSettingsTab->chanMux2->text().toInt());
    o_cSettings->transferSettings.chan[2]                	= int(wdgSettingsTab->chanMux3->text().toInt());
    o_cSettings->transferSettings.chan[3]                	= int(wdgSettingsTab->chanMux4->text().toInt());
    o_cSettings->transferSettings.chan[4]                	= int(wdgSettingsTab->chanMux5->text().toInt());
    o_cSettings->transferSettings.chan[5]                	= int(wdgSettingsTab->chanMux6->text().toInt());
    o_cSettings->transferSettings.chan[6]                	= int(wdgSettingsTab->chanMux7->text().toInt());
    o_cSettings->transferSettings.chan[7]                	= int(wdgSettingsTab->chanMux8->text().toInt());
    o_cSettings->transferSettings.chan[8]                	= int(wdgSettingsTab->chanMux9->text().toInt());
    o_cSettings->transferSettings.chan[9]                	= int(wdgSettingsTab->chanMux10->text().toInt());
    o_cSettings->transferSettings.chan[10]               	= int(wdgSettingsTab->chanMux11->text().toInt());
    o_cSettings->transferSettings.chan[11]               	= int(wdgSettingsTab->chanMux12->text().toInt());
    o_cSettings->transferSettings.scOffset[0]            	= int(wdgSettingsTab->chanOff1->text().toInt());
    o_cSettings->transferSettings.scOffset[1]            	= int(wdgSettingsTab->chanOff2->text().toInt());
    o_cSettings->transferSettings.scOffset[2]            	= int(wdgSettingsTab->chanOff3->text().toInt());
    o_cSettings->transferSettings.scOffset[3]            	= int(wdgSettingsTab->chanOff4->text().toInt());
    o_cSettings->transferSettings.scOffset[4]            	= int(wdgSettingsTab->chanOff5->text().toInt());
    o_cSettings->transferSettings.scOffset[5]            	= int(wdgSettingsTab->chanOff6->text().toInt());
    o_cSettings->transferSettings.scOffset[6]            	= int(wdgSettingsTab->chanOff7->text().toInt());
    o_cSettings->transferSettings.scOffset[7]            	= int(wdgSettingsTab->chanOff8->text().toInt());
    o_cSettings->transferSettings.scOffset[8]            	= int(wdgSettingsTab->chanOff9->text().toInt());





    for (int ii = 0;ii<20;ii++) {
        o_cSettings->transferSettings.userSetting[ii]        = int(QString('0').toInt());
    }

    //    transferSettings.userSetting[i++]         = int(userSet1->text().toInt());
    //    transferSettings.userSetting[i++]         = int(userSet2->text().toInt());
    //    transferSettings.userSetting[i++]         = int(userSet3->text().toInt());
    //    transferSettings.userSetting[i++]         = int(userSet4->text().toInt());
    //    transferSettings.userSetting[i++]         = int(userSet5->text().toInt());
    //    transferSettings.userSetting[i++]         = int(userSet6->text().toInt());
    //    transferSettings.userSetting[i++]         = int(userSet7->text().toInt());
    //    transferSettings.userSetting[i++]         = int(userSet8->text().toInt());
    //    transferSettings.userSetting[i++]         = int(userSet9->text().toInt());
    //    transferSettings.userSetting[i++]         = int(userSet10->text().toInt());
    //    transferSettings.userSetting[i++]         = int(userSet11->text().toInt());
    //    transferSettings.userSetting[i++]         = int(userSet12->text().toInt());
    //    transferSettings.userSetting[i++]         = int(userSet13->text().toInt());
    //    transferSettings.userSetting[i++]         = int(userSet14->text().toInt());
    //    transferSettings.userSetting[i++]         = int(userSet15->text().toInt());
    //    transferSettings.userSetting[i++]         = int(userSet16->text().toInt());
    //    transferSettings.userSetting[i++]         = int(userSet17->text().toInt());
    //    transferSettings.userSetting[i++]         = int(userSet18->text().toInt());
    //    transferSettings.userSetting[i++]         = int(userSet19->text().toInt());
    //    transferSettings.userSetting[i++]         = int(userSet20->text().toInt());
    //    transferSettings.userSetting[i++]         = int(userSet21->text().toInt());

    o_cSettings->writeSettings.settingNum             	= settingNum->text();
    o_cSettings->writeSettings.pid_X_GyroACCFactMin   	= QString::number(wdgSettingsTab->PIDRollGyroACCMin->value()*-1);
    o_cSettings->writeSettings.pid_X_GyroACCFactMax   	= wdgSettingsTab->PIDRollGyroACCMax->text();
    o_cSettings->writeSettings.pid_X_IntegralMin      	= QString::number(wdgSettingsTab->PIDRollIntegralMin->value()*-1);
    o_cSettings->writeSettings.pid_X_IntegralMax      	= wdgSettingsTab->PIDRollIntegralMax->text();
    o_cSettings->writeSettings.pid_X_AccX_Fact        	= wdgSettingsTab->PIDRollACCForce->text();
    o_cSettings->writeSettings.pid_X_GyroSumFact      	= wdgSettingsTab->PIDRollGyroForce->text();
    o_cSettings->writeSettings.pid_X_P                	= wdgSettingsTab->PIDRollP->text();
    o_cSettings->writeSettings.pid_X_I                	= wdgSettingsTab->PIDRollI->text();
    o_cSettings->writeSettings.pid_X_D                	= wdgSettingsTab->PIDRollD->text();
    o_cSettings->writeSettings.pid_X_ACC_P              = wdgSettingsTab->PIDRollACCP->text();
    o_cSettings->writeSettings.pid_X_ACC_I              = wdgSettingsTab->PIDRollACCI->text();
    o_cSettings->writeSettings.pid_X_ACC_D              = wdgSettingsTab->PIDRollACCD->text();
    o_cSettings->writeSettings.pid_X_PitchSumFact     	= wdgSettingsTab->PIDRollPitchForce->text();
    o_cSettings->writeSettings.pid_X_SumFact          	= wdgSettingsTab->PIDRollGyroACCForce->text();
    o_cSettings->writeSettings.pid_X_gyroBias         	= wdgSettingsTab->PIDRollGyroBias->text();
    o_cSettings->writeSettings.pid_X_gyroBiasNeg        = QString::number(wdgSettingsTab->PIDRollGyroBiasNeg->value()*-1);
    o_cSettings->writeSettings.pid_Y_GyroACCFactMin   	= QString::number(wdgSettingsTab->PIDNickGyroACCMin->value()*-1);
    o_cSettings->writeSettings.pid_Y_GyroACCFactMax   	= wdgSettingsTab->PIDNickGyroACCMax->text();
    o_cSettings->writeSettings.pid_Y_IntegralMin      	= QString::number(wdgSettingsTab->PIDNickIntegralMin->value()*-1);
    o_cSettings->writeSettings.pid_Y_IntegralMax      	= wdgSettingsTab->PIDNickIntegralMax->text();
    o_cSettings->writeSettings.pid_Y_AccY_Fact        	= wdgSettingsTab->PIDNickACCForce->text();
    o_cSettings->writeSettings.pid_Y_GyroSumFact      	= wdgSettingsTab->PIDNickGyroForce->text();
    o_cSettings->writeSettings.pid_Y_P                	= wdgSettingsTab->PIDNickP->text();
    o_cSettings->writeSettings.pid_Y_I                	= wdgSettingsTab->PIDNickI->text();
    o_cSettings->writeSettings.pid_Y_D                	= wdgSettingsTab->PIDNickD->text();
    o_cSettings->writeSettings.pid_Y_ACC_P              = wdgSettingsTab->PIDNickACCP->text();
    o_cSettings->writeSettings.pid_Y_ACC_I              = wdgSettingsTab->PIDNickACCI->text();
    o_cSettings->writeSettings.pid_Y_ACC_D              = wdgSettingsTab->PIDNickACCD->text();

    o_cSettings->writeSettings.pid_Y_PitchSumFact     	= wdgSettingsTab->PIDNickPitchForce->text();
    o_cSettings->writeSettings.pid_Y_SumFact          	= wdgSettingsTab->PIDNickGyroACCForce->text();
    o_cSettings->writeSettings.pid_Y_gyroBias         	= wdgSettingsTab->PIDNickGyroBias->text();
    o_cSettings->writeSettings.pid_Y_gyroBiasNeg        = QString::number(wdgSettingsTab->PIDNickGyroBiasNeg->value()*-1);
    o_cSettings->writeSettings.pid_PitchGyroBias      	= wdgSettingsTab->PIDPitchGyroBias->text();
    o_cSettings->writeSettings.pid_PitchGyroBiasNeg     = QString::number(wdgSettingsTab->PIDPitchGyroBiasNeg->value()*-1);
    o_cSettings->writeSettings.pid_GyroPitchFact      	= wdgSettingsTab->PIDPitchGyroForce->text();
    o_cSettings->writeSettings.pid_NickStickFact        = wdgSettingsTab->PIDNickStickForce->text();
    o_cSettings->writeSettings.pid_RollStickFact        = wdgSettingsTab->PIDRollStickForce->text();
    o_cSettings->writeSettings.pid_HeadingHold          = wdgSettingsTab->PIDHeadingHold->currentIndex();
    o_cSettings->writeSettings.pid_PitchStickFact     	= wdgSettingsTab->PIDPitchStickForce->text();
    o_cSettings->writeSettings.pid_throttleOffset     	= wdgSettingsTab->PIDThrottleOffset->text();
    o_cSettings->writeSettings.pid_PitchThrottleFact  	= wdgSettingsTab->PIDPitchThrottleOffset->text();
    o_cSettings->writeSettings.pid_PitchP             	= wdgSettingsTab->PIDPitchP->text();
    o_cSettings->writeSettings.pid_PitchI             	= wdgSettingsTab->PIDPitchI->text();
    o_cSettings->writeSettings.pid_PitchD             	= wdgSettingsTab->PIDPitchD->text();
    o_cSettings->writeSettings.pid_Pitch_IntegralMax  	= wdgSettingsTab->PIDPitchIntegralMax->text();
    o_cSettings->writeSettings.pid_Pitch_IntegralMin  	= QString::number(wdgSettingsTab->PIDPitchIntegralMin->value()*-1);


    o_cSettings->writeSettings.barOn                  	= wdgSettingsTab->enableBaro->currentIndex();
    o_cSettings->writeSettings.barChan                  = wdgSettingsTab->baroChan->currentIndex();
    o_cSettings->writeSettings.baroOffset               = wdgSettingsTab->baroOffset->text();

    o_cSettings->writeSettings.compOn                 	= wdgSettingsTab->enableCompass->currentIndex();
    o_cSettings->writeSettings.compassBias              = wdgSettingsTab->compassBias->text();
    o_cSettings->writeSettings.compassForce             = wdgSettingsTab->compassForce->text();
    o_cSettings->writeSettings.compassType              = wdgSettingsTab->compassType->currentIndex();
    o_cSettings->writeSettings.HMC5843_Mode             = wdgSettingsTab->HMC5843_Mode->currentIndex();
    o_cSettings->writeSettings.HMC5843_Bias             = wdgSettingsTab->HMC5843_Bias->currentIndex();
    o_cSettings->writeSettings.HMC5843_Delay            = wdgSettingsTab->HMC5843_Delay->currentIndex();
    o_cSettings->writeSettings.HMC5843_Gain             = wdgSettingsTab->HMC5843_Gain->currentIndex();
    o_cSettings->writeSettings.HMC5843_Rate             = wdgSettingsTab->HMC5843_Rate->currentIndex();

    o_cSettings->writeSettings.gpsOn                  	= wdgSettingsTab->enableGPS->currentIndex();

    o_cSettings->writeSettings.nickServoOn            	= wdgSettingsTab->enableNickServo->currentIndex();
    o_cSettings->writeSettings.nickServoChan            = wdgSettingsTab->nickServoChan->currentIndex();
    o_cSettings->writeSettings.nickServoInvert          = wdgSettingsTab->nickServoInvert->currentIndex();
    o_cSettings->writeSettings.nickServoPos             = wdgSettingsTab->nickServoPos->text();
    o_cSettings->writeSettings.nickServoForce           = wdgSettingsTab->nickServoForce->text();
    o_cSettings->writeSettings.nickServoMin           	= wdgSettingsTab->nickServoMin->value();
    o_cSettings->writeSettings.nickServoMax             = wdgSettingsTab->nickServoMax->text();

    o_cSettings->writeSettings.rollServoOn            	= wdgSettingsTab->enableRollServo->currentIndex();
    o_cSettings->writeSettings.rollServoChan            = wdgSettingsTab->rollServoChan->currentIndex();
    o_cSettings->writeSettings.rollServoInvert          = wdgSettingsTab->rollServoInvert->currentIndex();
    o_cSettings->writeSettings.rollServoPos             = wdgSettingsTab->rollServoPos->text();
    o_cSettings->writeSettings.rollServoForce           = wdgSettingsTab->rollServoForce->text();
    o_cSettings->writeSettings.rollServoMin           	= wdgSettingsTab->rollServoMin->value();
    o_cSettings->writeSettings.rollServoMax             = wdgSettingsTab->rollServoMax->text();

    o_cSettings->writeSettings.sysGasMin              	= wdgSettingsTab->sysGasMin->text();
    o_cSettings->writeSettings.sysGasMax              	= wdgSettingsTab->sysGasMax->text();

    o_cSettings->writeSettings.sysLowVoltage          	= wdgSettingsTab->lowVoltage->text();
    o_cSettings->writeSettings.sysEmergencyGas        	= wdgSettingsTab->emgGas->text();
    o_cSettings->writeSettings.sysEmergencyGasDuration 	= wdgSettingsTab->emgGasDur->text();
    o_cSettings->writeSettings.calcMode               	= wdgSettingsTab->calcMode->currentIndex();
    o_cSettings->writeSettings.sysMainDirection       	= wdgSettingsTab->mainDirection->currentIndex();
    o_cSettings->writeSettings.escType                	= wdgSettingsTab->ESCType->currentIndex();
    o_cSettings->writeSettings.escMax                 	= wdgSettingsTab->ESCMax->text();
    o_cSettings->writeSettings.escBaseAdr             	= wdgSettingsTab->ESCBaseAddress->text();
    o_cSettings->writeSettings.escAdrHop              	= wdgSettingsTab->ESCAddressHop->text();
    o_cSettings->writeSettings.calcCycle              	= wdgSettingsTab->calcWait->text();
    o_cSettings->writeSettings.telemetrieCycle        	= wdgSettingsTab->telemetrieWait->text();
    o_cSettings->writeSettings.componentCycle         	= wdgSettingsTab->componentWait->text();
    o_cSettings->writeSettings.AdcClockDiv            	= wdgSettingsTab->ADCClockDiv->text();
    o_cSettings->writeSettings.ADCDriftNick             = wdgSettingsTab->GyroDriftNick->text();
    o_cSettings->writeSettings.ADCDriftRoll             = wdgSettingsTab->GyroDriftRoll->text();
    o_cSettings->writeSettings.ADCDriftPitch            = wdgSettingsTab->GyroDriftPitch->text();

    o_cSettings->writeSettings.ReceiverType             = wdgSettingsTab->ReceiverType->currentIndex();
    o_cSettings->writeSettings.PPMMode                	= wdgSettingsTab->PPMMode->currentIndex();
    o_cSettings->writeSettings.BTMode                   = wdgSettingsTab->BTMode->currentIndex();
    o_cSettings->writeSettings.ADCModeNick              = wdgSettingsTab->GyroModeNick->currentIndex();
    o_cSettings->writeSettings.ADCModeRoll              = wdgSettingsTab->GyroModeRoll->currentIndex();
    o_cSettings->writeSettings.ADCModePitch             = wdgSettingsTab->GyroModePitch->currentIndex();

    o_cSettings->writeSettings.MaxValue               	= wdgSettingsTab->PPMMax->text();
    o_cSettings->writeSettings.MinValue               	= wdgSettingsTab->PPMMin->text();
    o_cSettings->writeSettings.MaxMultichannel        	= wdgSettingsTab->multiChannelMax->text();
    o_cSettings->writeSettings.mcOffset               	= wdgSettingsTab->PPMOffset1->text();
    o_cSettings->writeSettings.mcOffset2              	= wdgSettingsTab->PPMOffset2->text();
    o_cSettings->writeSettings.scOffsetBase           	= wdgSettingsTab->PPMOffset->text();

    o_cSettings->writeSettings.chan[0]                	= wdgSettingsTab->chanMux1->text();
    o_cSettings->writeSettings.chan[1]                	= wdgSettingsTab->chanMux2->text();
    o_cSettings->writeSettings.chan[2]                	= wdgSettingsTab->chanMux3->text();
    o_cSettings->writeSettings.chan[3]                	= wdgSettingsTab->chanMux4->text();
    o_cSettings->writeSettings.chan[4]                	= wdgSettingsTab->chanMux5->text();
    o_cSettings->writeSettings.chan[5]                	= wdgSettingsTab->chanMux6->text();
    o_cSettings->writeSettings.chan[6]                	= wdgSettingsTab->chanMux7->text();
    o_cSettings->writeSettings.chan[7]                	= wdgSettingsTab->chanMux8->text();
    o_cSettings->writeSettings.chan[8]                	= wdgSettingsTab->chanMux9->text();
    o_cSettings->writeSettings.chan[9]                	= wdgSettingsTab->chanMux10->text();
    o_cSettings->writeSettings.chan[10]               	= wdgSettingsTab->chanMux11->text();
    o_cSettings->writeSettings.chan[11]               	= wdgSettingsTab->chanMux12->text();

    o_cSettings->writeSettings.scOffset[0]            	= wdgSettingsTab->chanOff1->text();
    o_cSettings->writeSettings.scOffset[1]            	= wdgSettingsTab->chanOff2->text();
    o_cSettings->writeSettings.scOffset[2]            	= wdgSettingsTab->chanOff3->text();
    o_cSettings->writeSettings.scOffset[3]            	= wdgSettingsTab->chanOff4->text();
    o_cSettings->writeSettings.scOffset[4]            	= wdgSettingsTab->chanOff5->text();
    o_cSettings->writeSettings.scOffset[5]            	= wdgSettingsTab->chanOff6->text();
    o_cSettings->writeSettings.scOffset[6]            	= wdgSettingsTab->chanOff7->text();
    o_cSettings->writeSettings.scOffset[7]            	= wdgSettingsTab->chanOff8->text();
    o_cSettings->writeSettings.scOffset[8]            	= wdgSettingsTab->chanOff9->text();


}

// Read Settings from HDD
void baseStation::slot_readSetHdd(void)
{
   o_cSettings->transferSettings = o_cSettings->readSettings(int(settingNum->text().toInt()));
   setSettings(o_cSettings->transferSettings);
   slot_updatePIDSimple();
}

// Write Settings to HDD
void baseStation::slot_writeSetHdd(void)
{
    getSetupString();
    o_cSettings->do_storeSettings(o_cSettings->writeSettings.settingNum.toInt(), o_cSettings->writeSettings);

}



baseStation::baseStation(void)

{
    setupUi(this);

    o_cSettings             = new c_settings();

    wdgSettingsTab = new wdg_settingsTab(this);
    setupGrid->addWidget(wdgSettingsTab,0,0,0,0,0);

    wdgserialtab = new wdg_serialtab(this);
    serialGrid->addWidget(wdgserialtab,0,0,0,0,0);

    wdgi2ctab = new wdg_i2ctab(this);
    i2cGrid->addWidget(wdgi2ctab,0,0,0,0,0);


    
    actionDisconnect_osiFC  ->setChecked(true);
    initConnection();


    o_Connection            = new cConnection();
    o_cSerialParser         = new cSerialParser();
    o_cWayPoints            = new cWayPoints();


    init_Cockpit();
    init_Diagnostics();
    init_Maps();



}




baseStation::~baseStation()
{

}
