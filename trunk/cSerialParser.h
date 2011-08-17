#ifndef SERIALPARSER_H
#define SERIALPARSER_H
#include <QObject>
#include "settings.h"
#include "cLogFile.h"
#include "cIniFile.h"

#define RX_MESSAGE 0
#define RX_TELEMETRIE 1
#define RX_SETTINGS 2
#define RX_COMPASS_CALIB 3

struct TELEMETRIE_0 {
    QString RTC_Min;
    QString RTC_Sec;
    QString LAST_CYCLE_COUNT;
    QString ADC_NICK;
    QString ADC_ROLL;
    QString ADC_PITCH;
    QString ADC_ACCX;
    QString ADC_ACCY;
    QString ADC_ACCZ;
    QString ADC_AIRPRESSURE;
    QString ADC_UBAT;
    QString PWMEngOut_0;
    QString PWMEngOut_1;
    QString PWMEngOut_2;
    QString PWMEngOut_3;
    QString heading;
    QString MM3_X_axis;
    QString MM3_Y_axis;
    QString MM3_Z_axis;
    QString PWM_channel_0;
    QString PWM_channel_1;
    QString PWM_channel_2;
    QString PWM_channel_3;
    QString PWM_channel_4;
    QString PWM_channel_5;
    QString PWM_channel_6;
};

struct COMPASS_CALIB_DATA
{
    QString X_MIN;
    QString X_MAX;
    QString X_RANGE;
    QString X_OFFSET;
    QString Y_MIN;
    QString Y_MAX;
    QString Y_RANGE;
    QString Y_OFFSET;
    QString Z_MIN;
    QString Z_MAX;
    QString Z_RANGE;
    QString Z_OFFSET;

};




struct MESSAGE_DATA
{
    QString message;
};

class cSerialParser
{


public:
    cSerialParser();
    ~cSerialParser();



    int Parser(QString rx);

    TELEMETRIE_0 getTelemetrie();
    SETTINGS getSetting();
    COMPASS_CALIB_DATA getCalib();
    QString getMessage();
    QByteArray getSettingsOutput(SETTINGS transferSettings);
    QByteArray getSettingsRequest(int num);
    QByteArray getDebugRequest(int num);
    QByteArray getFlashSettingRequest();
    QByteArray getstopAllRequest();
    QByteArray getstartAllRequest();
    QByteArray getstartEngineRequest();
    QByteArray getupdateYGERequest(int source, int dest);
    QByteArray getstartYGERequest(int target);
    QByteArray updateAdcRate(int rate);




    int getStatus();
    void openLog();
    void closeLog();

private:
    SETTINGS S_TRANSET;

    void t0Parser(QString text);
    void s0Parser(QString text);
    void c0Parser(QString text);


    cLogFile            *o_cLogFile;
    cIniFile            *o_cIniFile;

private slots:

signals:


};

#endif // SERIALPARSER_H
