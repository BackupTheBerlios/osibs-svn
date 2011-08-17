#include "cSerialParser.h"
#include <QDialog>
#include "ToolBox.h"
#include "settings.h"

TELEMETRIE_0 S_TELE;
COMPASS_CALIB_DATA CALIB;


MESSAGE_DATA S_MESSAGE;

int lengthSettings = 124;
int status;

cSerialParser::cSerialParser()
{
    o_cLogFile      = new cLogFile();
    o_cIniFile      = new cIniFile();
}
cSerialParser::~cSerialParser()
{
}
void cSerialParser::openLog()
{
    o_cLogFile->openLog(); // lets open a logfile here;
}
void cSerialParser::closeLog()
{
    o_cLogFile->closeLog(); // lets close the logfile here;
}

QByteArray cSerialParser::getSettingsRequest(int num)
{    
    QByteArray CMD;
    CMD.append("FC&R");
    CMD.append(num+48);
    CMD.append("#");
    return QByteArray(CMD.data());
}

QByteArray cSerialParser::getDebugRequest(int num)
{
    QByteArray CMD;
    CMD.append("FC&D");
    CMD.append(num+48);
    CMD.append("&#");
    return QByteArray(CMD.data());
}

QByteArray cSerialParser::getFlashSettingRequest()
{
    QByteArray CMD;
    CMD.append("FC&S1#");
    return CMD;

}
QByteArray cSerialParser::getstopAllRequest()
{
    QByteArray CMD;
    return CMD;
}
QByteArray cSerialParser::updateAdcRate(int rate)
{
    QByteArray CMD;
    CMD.append("FC&U0");
    CMD.append(rate);
    CMD.append("#");
    return CMD;
}
QByteArray cSerialParser::getstartAllRequest()
{
    QByteArray CMD;
    return CMD;
}
QByteArray cSerialParser::getstartEngineRequest()
{
    QByteArray CMD;
    return CMD;
}
QByteArray cSerialParser::getupdateYGERequest(int source, int dest)
{
    QByteArray CMD;
    CMD.append("FC&Y");
    CMD.append(source);
    CMD.append(dest);
    CMD.append("#");
    return CMD;
}
QByteArray cSerialParser::getstartYGERequest(int target)
{
    QByteArray CMD;
    CMD.append("FC&y");
    CMD.append(target);
    CMD.append("#");
    return CMD;
}

QByteArray cSerialParser::getSettingsOutput(SETTINGS transferSettings)
{

    QByteArray tx_data;

    tx_data.append(transferSettings.settingNum);
    tx_data.append(transferSettings.pid_X_GyroACCFactMin);
    tx_data.append(transferSettings.pid_X_GyroACCFactMax);
    tx_data.append(transferSettings.pid_X_IntegralMin);
    tx_data.append(transferSettings.pid_X_IntegralMax);
    tx_data.append(transferSettings.pid_X_AccX_Fact);
    tx_data.append(transferSettings.pid_X_GyroSumFact);
    tx_data.append(transferSettings.pid_X_P);
    tx_data.append(transferSettings.pid_X_I);
    tx_data.append(transferSettings.pid_X_D);
    tx_data.append(transferSettings.pid_X_ACC_P);
    tx_data.append(transferSettings.pid_X_ACC_I);
    tx_data.append(transferSettings.pid_X_ACC_D);
    tx_data.append(transferSettings.pid_X_PitchSumFact);
    tx_data.append(transferSettings.pid_X_SumFact);
    tx_data.append(transferSettings.pid_X_gyroBias);
    tx_data.append(transferSettings.pid_X_gyroBiasNeg);
    tx_data.append(transferSettings.pid_Y_GyroACCFactMin);
    tx_data.append(transferSettings.pid_Y_GyroACCFactMax);
    tx_data.append(transferSettings.pid_Y_IntegralMin);
    tx_data.append(transferSettings.pid_Y_IntegralMax);
    tx_data.append(transferSettings.pid_Y_AccY_Fact);
    tx_data.append(transferSettings.pid_Y_GyroSumFact);
    tx_data.append(transferSettings.pid_Y_P);
    tx_data.append(transferSettings.pid_Y_I);
    tx_data.append(transferSettings.pid_Y_D);
    tx_data.append(transferSettings.pid_Y_ACC_P);
    tx_data.append(transferSettings.pid_Y_ACC_I);
    tx_data.append(transferSettings.pid_Y_ACC_D);
    tx_data.append(transferSettings.pid_Y_PitchSumFact);
    tx_data.append(transferSettings.pid_Y_SumFact);
    tx_data.append(transferSettings.pid_Y_gyroBias);
    tx_data.append(transferSettings.pid_Y_gyroBiasNeg);
    tx_data.append(transferSettings.pid_PitchGyroBias);
    tx_data.append(transferSettings.pid_PitchGyroBiasNeg);
    tx_data.append(transferSettings.pid_GyroPitchFact);
    tx_data.append(transferSettings.pid_NickStickFact);
    tx_data.append(transferSettings.pid_RollStickFact);
    tx_data.append(transferSettings.pid_HeadingHold);
    tx_data.append(transferSettings.pid_PitchStickFact);
    tx_data.append(transferSettings.pid_throttleOffset);
    tx_data.append(transferSettings.pid_PitchThrottleFact);
    tx_data.append(transferSettings.pid_PitchP);
    tx_data.append(transferSettings.pid_PitchI);
    tx_data.append(transferSettings.pid_PitchD);
    tx_data.append(transferSettings.pid_Pitch_IntegralMax);
    tx_data.append(transferSettings.pid_Pitch_IntegralMin);

    tx_data.append(transferSettings.barOn);
    tx_data.append(transferSettings.barChan);
    tx_data.append(transferSettings.baroOffset);

    tx_data.append(transferSettings.compOn);
    tx_data.append(transferSettings.compassBias);
    tx_data.append(transferSettings.compassForce);
    tx_data.append(transferSettings.compassType);

    tx_data.append(transferSettings.gpsOn);

    tx_data.append(transferSettings.nickServoOn);
    tx_data.append(transferSettings.nickServoChan);
    tx_data.append(transferSettings.nickServoInvert);
    tx_data.append(transferSettings.nickServoPos);
    tx_data.append(transferSettings.nickServoForce);
    tx_data.append(transferSettings.nickServoMin);
    tx_data.append(transferSettings.nickServoMax);
    tx_data.append(transferSettings.rollServoOn);
    tx_data.append(transferSettings.rollServoChan);
    tx_data.append(transferSettings.rollServoInvert);
    tx_data.append(transferSettings.rollServoPos);
    tx_data.append(transferSettings.rollServoForce);
    tx_data.append(transferSettings.rollServoMin);
    tx_data.append(transferSettings.rollServoMax);

    tx_data.append(transferSettings.sysGasMin);
    tx_data.append(transferSettings.sysGasMax);

    tx_data.append(transferSettings.sysLowVoltage);
    tx_data.append(transferSettings.sysEmergencyGas);
    tx_data.append(transferSettings.sysEmergencyGasDuration);

    tx_data.append(transferSettings.calcMode);
    tx_data.append(transferSettings.sysMainDirection);

    tx_data.append(transferSettings.escType);
    tx_data.append(transferSettings.escMax);
    tx_data.append(transferSettings.escBaseAdr);
    tx_data.append(transferSettings.escAdrHop);

    tx_data.append(transferSettings.calcCycle);
    tx_data.append(transferSettings.telemetrieCycle);
    tx_data.append(transferSettings.componentCycle);
    tx_data.append(transferSettings.AdcClockDiv);

    tx_data.append(transferSettings.ReceiverType);
    tx_data.append(transferSettings.PPMMode);
    tx_data.append(transferSettings.BTMode);

    tx_data.append(transferSettings.ADCModeNick);
    tx_data.append(transferSettings.ADCModeRoll);
    tx_data.append(transferSettings.ADCModePitch);
    tx_data.append(transferSettings.ADCDriftNick);
    tx_data.append(transferSettings.ADCDriftRoll);
    tx_data.append(transferSettings.ADCDriftPitch);

    tx_data.append(transferSettings.MaxValue);
    tx_data.append(transferSettings.MinValue);
    tx_data.append(transferSettings.MaxMultichannel);
    tx_data.append(transferSettings.mcOffset);
    tx_data.append(transferSettings.mcOffset2);
    tx_data.append(transferSettings.scOffsetBase);

    tx_data.append(transferSettings.HMC5843_Mode);
    tx_data.append(transferSettings.HMC5843_Bias);
    tx_data.append(transferSettings.HMC5843_Delay);
    tx_data.append(transferSettings.HMC5843_Gain);
    tx_data.append(transferSettings.HMC5843_Rate);

    tx_data.append(transferSettings.chan[0]);
    tx_data.append(transferSettings.chan[1]);
    tx_data.append(transferSettings.chan[2]);
    tx_data.append(transferSettings.chan[3]);
    tx_data.append(transferSettings.chan[4]);
    tx_data.append(transferSettings.chan[5]);
    tx_data.append(transferSettings.chan[6]);
    tx_data.append(transferSettings.chan[7]);
    tx_data.append(transferSettings.chan[8]);
    tx_data.append(transferSettings.chan[9]);
    tx_data.append(transferSettings.chan[10]);
    tx_data.append(transferSettings.chan[11]);
    tx_data.append(transferSettings.scOffset[0]);
    tx_data.append(transferSettings.scOffset[1]);
    tx_data.append(transferSettings.scOffset[2]);
    tx_data.append(transferSettings.scOffset[3]);
    tx_data.append(transferSettings.scOffset[4]);
    tx_data.append(transferSettings.scOffset[5]);
    tx_data.append(transferSettings.scOffset[6]);
    tx_data.append(transferSettings.scOffset[7]);
    tx_data.append(transferSettings.scOffset[8]);    

    /*tx_data.append(transferSettings.scOffset[9]);
    tx_data.append(transferSettings.scOffset[10]);
    tx_data.append(transferSettings.scOffset[11]);
    */
    tx_data.append(transferSettings.userSetting[0]);
    tx_data.append(transferSettings.userSetting[1]);
    tx_data.append(transferSettings.userSetting[2]);
    tx_data.append(transferSettings.userSetting[3]);
    tx_data.append(transferSettings.userSetting[4]);
    tx_data.append(transferSettings.userSetting[5]);
    tx_data.append(transferSettings.userSetting[6]);
    tx_data.append(transferSettings.userSetting[7]);
    tx_data.append(transferSettings.userSetting[8]);
    tx_data.append(transferSettings.userSetting[9]);
    tx_data.append(transferSettings.userSetting[10]);
    tx_data.append(transferSettings.userSetting[11]);
    tx_data.append(transferSettings.userSetting[12]);
    tx_data.append(transferSettings.userSetting[13]);
    tx_data.append(transferSettings.userSetting[14]);
    tx_data.append(transferSettings.userSetting[15]);
    tx_data.append(transferSettings.userSetting[16]);
    tx_data.append(transferSettings.userSetting[17]);
    tx_data.append(transferSettings.userSetting[18]);
    tx_data.append(transferSettings.userSetting[19]);
    tx_data.append(int(23));                            // do not change this one. This is a check byte
                                                        // look at initSettings(void) from osiFC codes

    char chk_A = 1;
    char chk_B = 1;

    for (int i=0;i < tx_data.size();i++) {
        chk_A += int(tx_data[i]);
        chk_B += int(chk_A);
    }

    QByteArray out;
    QByteArray chk;

    chk.append(chk_A);
    chk.append(chk_B);

    out.append("F");
    out.append("C");
    out.append("&");
    out.append("S");
    out.append("0");            //S0 is part of a process. S0 sends the
                                //data to the device but its still volatile
                                //S1 will flash the data
    out.append(tx_data.length());
    out.append("&");
    out.append(QByteArray::fromRawData(tx_data.data(),tx_data.length()));
    out.append("&");
    out.append(QByteArray::fromRawData(chk.data(),chk.length()));
    out.append("#");



    return out;

}





int cSerialParser::Parser(QString text)
{
    int status;
    QRegExp rx(QString("FC(..);(.*);00#"));

    rx.setCaseSensitivity(Qt::CaseSensitive);
    rx.setMinimal(false);
    rx.setPatternSyntax(QRegExp::PatternSyntax(QRegExp::RegExp2));

    int tmp = rx.indexIn(text);
    QString check = rx.cap(1);

    if (check == "m0")
    {
        text = QString("\n"+rx.cap(2));
        S_MESSAGE.message = text;
        status = RX_MESSAGE;
    }

    if (check == "t0")
    {
        text = QString(rx.cap(2))+"#";
        cSerialParser::t0Parser(text);
        status = RX_TELEMETRIE;
    }

    if (check == "se")
    {
        text = QString(rx.cap(2))+"#";
        cSerialParser::s0Parser(text);
        status = RX_SETTINGS;
    }

    if (check == "c0")
    {
        text = QString(rx.cap(2))+"#";
        cSerialParser::c0Parser(text);
        status = RX_COMPASS_CALIB;
    }
    tmp = 0;

    return status;
}
void cSerialParser::c0Parser(QString text)
{
    o_cLogFile->writeLog(text);
    status = 0;


    QRegExp regEx(QString("(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*)#"));

    regEx.setCaseSensitivity(Qt::CaseSensitive);
    regEx.setMinimal(true);
    regEx.setPatternSyntax(QRegExp::PatternSyntax(QRegExp::RegExp2));
    int tmp = regEx.indexIn(text);
    QString check = regEx.cap(0);
    int i = 1;
CALIB.X_MIN = "100";
    if (regEx.numCaptures() == 12) {
        CALIB.X_MIN          			=   regEx.cap(i++);
        CALIB.X_MAX          			=   regEx.cap(i++);
        CALIB.X_RANGE          			=   regEx.cap(i++);
        CALIB.X_OFFSET         			=   regEx.cap(i++);
        CALIB.Y_MIN          			=   regEx.cap(i++);
        CALIB.Y_MAX          			=   regEx.cap(i++);
        CALIB.Y_RANGE          			=   regEx.cap(i++);
        CALIB.Y_OFFSET         			=   regEx.cap(i++);
        CALIB.Z_MIN          			=   regEx.cap(i++);
        CALIB.Z_MAX          			=   regEx.cap(i++);
        CALIB.Z_RANGE          			=   regEx.cap(i++);
        CALIB.Z_OFFSET         			=   regEx.cap(i++);

        status = 1;
    }
    tmp = 0;

    //CALIB.X_MAX = "100";

}

void cSerialParser::t0Parser(QString text2)
{

    o_cLogFile->writeLog(text2);

    status = 0;

    QRegExp regEx(QString("(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*)#"));

    regEx.setCaseSensitivity(Qt::CaseSensitive);
    regEx.setMinimal(true);
    regEx.setPatternSyntax(QRegExp::PatternSyntax(QRegExp::RegExp2));

    int tmp = regEx.indexIn(text2);
    QString check = regEx.cap(0);
    int i = 1;
    if (regEx.numCaptures() == 26) {
        S_TELE.RTC_Min          			=   regEx.cap(i++);
        S_TELE.RTC_Sec          			=   regEx.cap(i++);
        S_TELE.LAST_CYCLE_COUNT 			=   regEx.cap(i++);
        S_TELE.ADC_NICK         			=   regEx.cap(i++);
        S_TELE.ADC_ROLL         			=   regEx.cap(i++);
        S_TELE.ADC_PITCH        			=   regEx.cap(i++);
        S_TELE.ADC_ACCX         			=   regEx.cap(i++);
        S_TELE.ADC_ACCY         			=   regEx.cap(i++);
        S_TELE.ADC_ACCZ         			=   regEx.cap(i++);
        S_TELE.ADC_AIRPRESSURE  			=   regEx.cap(i++);
        S_TELE.ADC_UBAT         			=   regEx.cap(i++);
        S_TELE.PWMEngOut_0      			=   regEx.cap(i++);
        S_TELE.PWMEngOut_1      			=   regEx.cap(i++);
        S_TELE.PWMEngOut_2      			=   regEx.cap(i++);
        S_TELE.PWMEngOut_3      			=   regEx.cap(i++);
        S_TELE.heading          			=   regEx.cap(i++);
        S_TELE.MM3_X_axis       			=   regEx.cap(i++);
        S_TELE.MM3_Y_axis       			=   regEx.cap(i++);
        S_TELE.MM3_Z_axis       			=   regEx.cap(i++);
        S_TELE.PWM_channel_0    			=   regEx.cap(i++);
        S_TELE.PWM_channel_1    			=   regEx.cap(i++);
        S_TELE.PWM_channel_2    			=   regEx.cap(i++);
        S_TELE.PWM_channel_3    			=   regEx.cap(i++);
        S_TELE.PWM_channel_4    			=   regEx.cap(i++);
        S_TELE.PWM_channel_5    			=   regEx.cap(i++);
        S_TELE.PWM_channel_6    			=   regEx.cap(i++);

        status = 1;
    }
    tmp = 0;
}



void cSerialParser::s0Parser(QString text)
{
   status = 0;

   QRegExp regEx(QString("(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*);(.*)"));

    regEx.setCaseSensitivity(Qt::CaseSensitive);
    regEx.setMinimal(false);
    regEx.setPatternSyntax(QRegExp::PatternSyntax(QRegExp::RegExp));

    int tmp                                             = regEx.indexIn(text);
    QString check                                       = regEx.cap(0);
    int i                                               = 1;

    if (check.length() > 0) {

        S_TRANSET.settingNum            		=  regEx.cap(i++);
        S_TRANSET.barOn                 		=  regEx.cap(i++).toInt();
        S_TRANSET.barChan                 		=  regEx.cap(i++).toInt();
        S_TRANSET.baroOffset                 		=  regEx.cap(i++);
        S_TRANSET.compOn                		=  regEx.cap(i++).toInt();
        S_TRANSET.compassBias               		=  regEx.cap(i++);
        S_TRANSET.compassForce                		=  regEx.cap(i++);
        S_TRANSET.compassType                		=  regEx.cap(i++).toInt();
        S_TRANSET.gpsOn                 		=  regEx.cap(i++).toInt();
        S_TRANSET.nickServoOn           		=  regEx.cap(i++).toInt();
        S_TRANSET.nickServoChan                 	=  regEx.cap(i++).toInt();
        S_TRANSET.nickServoInvert                	=  regEx.cap(i++).toInt();
        S_TRANSET.nickServoPos                 		=  regEx.cap(i++);
        S_TRANSET.nickServoForce           		=  regEx.cap(i++);
        S_TRANSET.nickServoMin                 		=  regEx.cap(i++);
        S_TRANSET.nickServoMax           		=  regEx.cap(i++);
        S_TRANSET.rollServoOn           		=  regEx.cap(i++).toInt();
        S_TRANSET.rollServoChan                 	=  regEx.cap(i++).toInt();
        S_TRANSET.rollServoInvert                	=  regEx.cap(i++).toInt();
        S_TRANSET.rollServoPos                 		=  regEx.cap(i++);
        S_TRANSET.rollServoForce           		=  regEx.cap(i++);
        S_TRANSET.rollServoMin                 		=  regEx.cap(i++);
        S_TRANSET.rollServoMax           		=  regEx.cap(i++);
        S_TRANSET.pid_PitchStickFact    		=  regEx.cap(i++);
        S_TRANSET.pid_throttleOffset    		=  regEx.cap(i++);
        S_TRANSET.sysGasMin             		=  regEx.cap(i++);
        S_TRANSET.sysEmergencyGas       		=  regEx.cap(i++);
        S_TRANSET.sysEmergencyGasDuration               =  regEx.cap(i++);
        S_TRANSET.sysLowVoltage         		=  regEx.cap(i++);
        S_TRANSET.sysMainDirection      		=  regEx.cap(i++).toInt();
        S_TRANSET.sysGasMax             		=  regEx.cap(i++);
        S_TRANSET.ReceiverType               		=  regEx.cap(i++).toInt();
        S_TRANSET.PPMMode               		=  regEx.cap(i++).toInt();
        S_TRANSET.BTMode                 		=  regEx.cap(i++).toInt();
        S_TRANSET.ADCModeNick               		=  regEx.cap(i++).toInt();
        S_TRANSET.ADCModeRoll               		=  regEx.cap(i++).toInt();
        S_TRANSET.ADCModePitch               		=  regEx.cap(i++).toInt();
        S_TRANSET.ADCDriftNick               		=  regEx.cap(i++);
        S_TRANSET.ADCDriftRoll               		=  regEx.cap(i++);
        S_TRANSET.ADCDriftPitch               		=  regEx.cap(i++);
        S_TRANSET.calcMode              		=  regEx.cap(i++).toInt();
        S_TRANSET.pid_X_AccX_Fact       		=  regEx.cap(i++);
        S_TRANSET.pid_X_GyroSumFact     		=  regEx.cap(i++);
        S_TRANSET.pid_X_P               		=  regEx.cap(i++);
        S_TRANSET.pid_X_D               		=  regEx.cap(i++);
        S_TRANSET.pid_X_I               		=  regEx.cap(i++);
        S_TRANSET.pid_X_ACC_P               		=  regEx.cap(i++);
        S_TRANSET.pid_X_ACC_D               		=  regEx.cap(i++);
        S_TRANSET.pid_X_ACC_I               		=  regEx.cap(i++);
        S_TRANSET.pid_X_PitchSumFact    		=  regEx.cap(i++);
        S_TRANSET.pid_X_SumFact         		=  regEx.cap(i++);
        S_TRANSET.pid_X_gyroBias        		=  regEx.cap(i++);
        S_TRANSET.pid_X_gyroBiasNeg        		=  regEx.cap(i++);
        S_TRANSET.pid_Y_AccY_Fact       		=  regEx.cap(i++);
        S_TRANSET.pid_Y_GyroSumFact     		=  regEx.cap(i++);
        S_TRANSET.pid_Y_P               		=  regEx.cap(i++);
        S_TRANSET.pid_Y_D               		=  regEx.cap(i++);
        S_TRANSET.pid_Y_I               		=  regEx.cap(i++);
        S_TRANSET.pid_Y_ACC_P               		=  regEx.cap(i++);
        S_TRANSET.pid_Y_ACC_D               		=  regEx.cap(i++);
        S_TRANSET.pid_Y_ACC_I               		=  regEx.cap(i++);
        S_TRANSET.pid_Y_PitchSumFact    		=  regEx.cap(i++);
        S_TRANSET.pid_Y_SumFact         		=  regEx.cap(i++);
        S_TRANSET.pid_Y_gyroBias        		=  regEx.cap(i++);
        S_TRANSET.pid_Y_gyroBiasNeg        		=  regEx.cap(i++);
        S_TRANSET.pid_GyroPitchFact     		=  regEx.cap(i++);
        S_TRANSET.pid_NickStickFact         		=  regEx.cap(i++);
        S_TRANSET.pid_RollStickFact         		=  regEx.cap(i++);
        S_TRANSET.pid_HeadingHold         		=  regEx.cap(i++).toInt();
        S_TRANSET.pid_PitchP            		=  regEx.cap(i++);
        S_TRANSET.pid_PitchI            		=  regEx.cap(i++);
        S_TRANSET.pid_PitchD            		=  regEx.cap(i++);
        S_TRANSET.pid_PitchGyroBias     		=  regEx.cap(i++);
        S_TRANSET.pid_PitchGyroBiasNeg     		=  regEx.cap(i++);
        S_TRANSET.pid_PitchThrottleFact     		=  regEx.cap(i++);
        S_TRANSET.pid_X_GyroACCFactMin  		=  regEx.cap(i++);
        S_TRANSET.pid_X_GyroACCFactMax  		=  regEx.cap(i++);
        S_TRANSET.pid_X_IntegralMin     		=  regEx.cap(i++);
        S_TRANSET.pid_X_IntegralMax     		=  regEx.cap(i++);
        S_TRANSET.pid_Y_GyroACCFactMin  		=  regEx.cap(i++);
        S_TRANSET.pid_Y_GyroACCFactMax  		=  regEx.cap(i++);
        S_TRANSET.pid_Y_IntegralMin     		=  regEx.cap(i++);
        S_TRANSET.pid_Y_IntegralMax     		=  regEx.cap(i++);
        S_TRANSET.pid_Pitch_IntegralMin 		=  regEx.cap(i++);
        S_TRANSET.pid_Pitch_IntegralMax 		=  regEx.cap(i++);
        S_TRANSET.escType               		=  regEx.cap(i++).toInt();
        S_TRANSET.escMax                		=  regEx.cap(i++);
        S_TRANSET.escBaseAdr            		=  regEx.cap(i++);
        S_TRANSET.escAdrHop             		=  regEx.cap(i++);
        S_TRANSET.calcCycle             		=  regEx.cap(i++);
        S_TRANSET.telemetrieCycle       		=  regEx.cap(i++);
        S_TRANSET.componentCycle        		=  regEx.cap(i++);
        S_TRANSET.AdcClockDiv           		=  regEx.cap(i++);
        S_TRANSET.MaxValue              		=  regEx.cap(i++);
        S_TRANSET.MinValue              		=  regEx.cap(i++);
        S_TRANSET.MaxMultichannel       		=  regEx.cap(i++);
        S_TRANSET.mcOffset              		=  regEx.cap(i++);
        S_TRANSET.mcOffset2             		=  regEx.cap(i++);
        S_TRANSET.scOffsetBase          		=  regEx.cap(i++);       

        S_TRANSET.HMC5843_Mode                          =  regEx.cap(i++).toInt();
        S_TRANSET.HMC5843_Bias              		=  regEx.cap(i++).toInt();
        S_TRANSET.HMC5843_Delay             		=  regEx.cap(i++).toInt();
        S_TRANSET.HMC5843_Gain          		=  regEx.cap(i++).toInt();
        S_TRANSET.HMC5843_Rate               		=  regEx.cap(i++).toInt();

        S_TRANSET.chan[0]               		=  regEx.cap(i++);
        S_TRANSET.chan[1]               		=  regEx.cap(i++);
        S_TRANSET.chan[2]               		=  regEx.cap(i++);
        S_TRANSET.chan[3]               		=  regEx.cap(i++);
        S_TRANSET.chan[4]               		=  regEx.cap(i++);
        S_TRANSET.chan[5]               		=  regEx.cap(i++);
        S_TRANSET.chan[6]               		=  regEx.cap(i++);
        S_TRANSET.chan[7]               		=  regEx.cap(i++);
        S_TRANSET.chan[8]               		=  regEx.cap(i++);
        S_TRANSET.chan[9]               		=  regEx.cap(i++);
        S_TRANSET.chan[10]              		=  regEx.cap(i++);
        S_TRANSET.chan[11]              		=  regEx.cap(i++);
        S_TRANSET.scOffset[0]           		=  regEx.cap(i++);
        S_TRANSET.scOffset[1]           		=  regEx.cap(i++);
        S_TRANSET.scOffset[2]           		=  regEx.cap(i++);
        S_TRANSET.scOffset[3]           		=  regEx.cap(i++);
        S_TRANSET.scOffset[4]           		=  regEx.cap(i++);
        S_TRANSET.scOffset[5]           		=  regEx.cap(i++);
        S_TRANSET.scOffset[6]           		=  regEx.cap(i++);
        S_TRANSET.scOffset[7]           		=  regEx.cap(i++);
        S_TRANSET.scOffset[8]           		=  regEx.cap(i++);
       /* S_TRANSET.scOffset[9]           		=  regEx.cap(i++);
        S_TRANSET.scOffset[10]           		=  regEx.cap(i++);
        S_TRANSET.scOffset[11]           		=  regEx.cap(i++);
        */
        S_TRANSET.userSetting[0]        		=  regEx.cap(i++);
        S_TRANSET.userSetting[1]        		=  regEx.cap(i++);
        S_TRANSET.userSetting[2]        		=  regEx.cap(i++);
        S_TRANSET.userSetting[3]        		=  regEx.cap(i++);
        S_TRANSET.userSetting[4]        		=  regEx.cap(i++);
        S_TRANSET.userSetting[5]        		=  regEx.cap(i++);
        S_TRANSET.userSetting[6]        		=  regEx.cap(i++);
        S_TRANSET.userSetting[7]        		=  regEx.cap(i++);
        S_TRANSET.userSetting[8]        		=  regEx.cap(i++);
        S_TRANSET.userSetting[9]        		=  regEx.cap(i++);        
        S_TRANSET.userSetting[10]       		=  regEx.cap(i++);
        S_TRANSET.userSetting[11]       		=  regEx.cap(i++);
        S_TRANSET.userSetting[12]       		=  regEx.cap(i++);
        S_TRANSET.userSetting[13]       		=  regEx.cap(i++);
        S_TRANSET.userSetting[14]       		=  regEx.cap(i++);
        S_TRANSET.userSetting[15]       		=  regEx.cap(i++);
        S_TRANSET.userSetting[16]       		=  regEx.cap(i++);
        S_TRANSET.userSetting[17]       		=  regEx.cap(i++);
        S_TRANSET.userSetting[18]       		=  regEx.cap(i++);
        S_TRANSET.userSetting[19]       		=  regEx.cap(i++);
        S_TRANSET.userSetting[20]       		=  regEx.cap(i++);

        status = 1;
    }
    tmp = 0;

}

int cSerialParser::getStatus()
{
    return status;
}

QString cSerialParser::getMessage()
{
    return QString(S_MESSAGE.message.toAscii());
}

TELEMETRIE_0 cSerialParser::getTelemetrie()
{
    return S_TELE;
}

SETTINGS cSerialParser::getSetting()
{
    return S_TRANSET;
}

COMPASS_CALIB_DATA cSerialParser::getCalib()
{
    return CALIB;
}

