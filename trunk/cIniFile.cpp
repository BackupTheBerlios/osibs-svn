
#include "cIniFile.h"
#include "settings.h"
#include "qsettings.h"
#include "ui_basestation.h"

QString iniFilename;


cIniFile::cIniFile()
{

}


SETTINGS cIniFile::readSettings(int num)
{
    SETTINGS setup;

    QSettings inifile(iniFilename,QSettings::IniFormat);
    QString setupString                                    = "fcSetup" + QString(num+48);
    inifile.beginGroup(setupString);


    setup.settingNum                        =                     inifile.value("settingNum").toString();
    setup.pid_X_GyroACCFactMin              =                     inifile.value("pid_X_GyroACCFactMin").toString();
    setup.pid_X_GyroACCFactMax              =                     inifile.value("pid_X_GyroACCFactMax").toString();
    setup.pid_X_IntegralMin                 =                     inifile.value("pid_X_IntegralMin").toString();
    setup.pid_X_IntegralMax                 =                     inifile.value("pid_X_IntegralMax").toString();
    setup.pid_X_AccX_Fact                   =                     inifile.value("pid_X_AccX_Fact").toString();
    setup.pid_X_GyroSumFact                 =                     inifile.value("pid_X_GyroSumFact").toString();
    setup.pid_X_P                           =                     inifile.value("pid_X_P").toString();
    setup.pid_X_I                           =                     inifile.value("pid_X_I").toString();
    setup.pid_X_D                           =                     inifile.value("pid_X_D").toString();
    setup.pid_X_ACC_P                       =                     inifile.value("pid_X_ACC_P").toString();
    setup.pid_X_ACC_I                       =                     inifile.value("pid_X_ACC_I").toString();
    setup.pid_X_ACC_D                       =                     inifile.value("pid_X_ACC_D").toString();
    setup.pid_X_PitchSumFact                =                     inifile.value("pid_X_PitchSumFact").toString();
    setup.pid_X_SumFact                     =                     inifile.value("pid_X_SumFact").toString();
    setup.pid_X_gyroBias                    =                     inifile.value("pid_X_gyroBias").toString();
    setup.pid_Y_GyroACCFactMin              =                     inifile.value("pid_Y_GyroACCFactMin").toString();
    setup.pid_Y_GyroACCFactMax              =                     inifile.value("pid_Y_GyroACCFactMax").toString();
    setup.pid_Y_IntegralMin                 =                     inifile.value("pid_Y_IntegralMin").toString();
    setup.pid_Y_IntegralMax                 =                     inifile.value("pid_Y_IntegralMax").toString();
    setup.pid_Y_AccY_Fact                   =                     inifile.value("pid_Y_AccY_Fact").toString();
    setup.pid_Y_GyroSumFact                 =                     inifile.value("pid_Y_GyroSumFact").toString();
    setup.pid_Y_P                           =                     inifile.value("pid_Y_P").toString();
    setup.pid_Y_I                           =                     inifile.value("pid_Y_I").toString();
    setup.pid_Y_D                           =                     inifile.value("pid_Y_D").toString();
    setup.pid_Y_ACC_P                       =                     inifile.value("pid_Y_ACC_P").toString();
    setup.pid_Y_ACC_I                       =                     inifile.value("pid_Y_ACC_I").toString();
    setup.pid_Y_ACC_D                       =                     inifile.value("pid_Y_ACC_D").toString();
    setup.pid_Y_PitchSumFact                =                     inifile.value("pid_Y_PitchSumFact").toString();
    setup.pid_Y_SumFact                     =                     inifile.value("pid_Y_SumFact").toString();
    setup.pid_Y_gyroBias                    =                     inifile.value("pid_Y_gyroBias").toString();
    setup.pid_PitchGyroBias                 =                     inifile.value("pid_PitchGyroBias").toString();
    setup.pid_GyroPitchFact                 =                     inifile.value("pid_GyroPitchFact").toString();
    setup.pid_StickFact                     =                     inifile.value("pid_StickFact").toString();
    setup.pid_PitchStickFact                =                     inifile.value("pid_PitchStickFact").toString();
    setup.pid_throttleOffset                =                     inifile.value("pid_throttleOffset").toString();
    setup.pid_PitchThrottleFact             =                     inifile.value("pid_PitchThrottleFact").toString();
    setup.pid_PitchP                        =                     inifile.value("pid_PitchP").toString();
    setup.pid_PitchI                        =                     inifile.value("pid_PitchI").toString();
    setup.pid_PitchD                        =                     inifile.value("pid_PitchD").toString();
    setup.pid_Pitch_IntegralMax             =                     inifile.value("pid_Pitch_IntegralMax").toString();
    setup.pid_Pitch_IntegralMin             =                     inifile.value("pid_Pitch_IntegralMin").toString();
    setup.pd_throttleOffset                 =                     inifile.value("pd_throttleOffset").toString();
    setup.pd_X_P_Fact                       =                     inifile.value("pd_X_P_Fact").toString();
    setup.pd_X_D_Fact                       =                     inifile.value("pd_X_D_Fact").toString();
    setup.pd_Y_P_Fact                       =                     inifile.value("pd_Y_P_Fact").toString();
    setup.pd_Y_D_Fact                       =                     inifile.value("pd_Y_D_Fact").toString();
    setup.pd_X_AccX_Fact                    =                     inifile.value("pd_X_AccX_Fact").toString();
    setup.pd_Y_AccY_Fact                    =                     inifile.value("pd_Y_AccY_Fact").toString();
    setup.pd_X_GyroSumFact                  =                     inifile.value("pd_X_GyroSumFact").toString();
    setup.pd_X_PitchSumFact                 =                     inifile.value("pd_X_PitchSumFact").toString();
    setup.pd_Y_GyroSumFact                  =                     inifile.value("pd_Y_GyroSumFact").toString();
    setup.pd_Y_PitchSumFact                 =                     inifile.value("pd_Y_PitchSumFact").toString();
    setup.pd_PitchP                         =                     inifile.value("pd_PitchP").toString();
    setup.pd_PitchD                         =                     inifile.value("pd_PitchD").toString();
    setup.pd_GyroPitchFact                  =                     inifile.value("pd_GyroPitchFact").toString();
    setup.pd_StickFact                      =                     inifile.value("pd_StickFact").toString();
    setup.pd_PitchStickFact                 =                     inifile.value("pd_PitchStickFact").toString();
    setup.barOn                             =                     inifile.value("barOn").toInt();
    setup.barChan                           =                     inifile.value("barChan").toInt();
    setup.baroOffset                        =                     inifile.value("baroOffset").toString();

    setup.compOn                            =                     inifile.value("compOn").toInt();
    setup.compassType                       =                     inifile.value("compassType").toInt();
    setup.compassBias                       =                     inifile.value("compassBias").toString();
    setup.compassForce                      =                     inifile.value("compassForce").toString();
    setup.HMC5843_Mode                      =                     inifile.value("HMC5843_Mode").toInt();
    setup.HMC5843_Bias                      =                     inifile.value("HMC5843_Bias").toInt();
    setup.HMC5843_Delay                     =                     inifile.value("HMC5843_Delay").toInt();
    setup.HMC5843_Gain                      =                     inifile.value("HMC5843_Gain").toInt();
    setup.HMC5843_Rate                      =                     inifile.value("HMC5843_Rate").toInt();

    setup.gpsOn                             =                     inifile.value("gpsOn").toInt();

    setup.nickServoOn                       =                     inifile.value("nickServoOn").toInt();
    setup.nickServoChan                     =                     inifile.value("nickServoChan").toInt();
    setup.nickServoInvert                   =                     inifile.value("nickServoInvert").toInt();
    setup.nickServoPos                      =                     inifile.value("nickServoPos").toString();
    setup.nickServoForce                    =                     inifile.value("nickServoForce").toString();
    setup.nickServoMin                      =                     inifile.value("nickServoMin").toString();
    setup.nickServoMax                      =                     inifile.value("nickServoMax").toString();

    setup.rollServoOn                       =                     inifile.value("rollServoOn").toInt();
    setup.rollServoChan                     =                     inifile.value("rollServoChan").toInt();
    setup.rollServoInvert                   =                     inifile.value("rollServoInvert").toInt();
    setup.rollServoPos                      =                     inifile.value("rollServoPos").toString();
    setup.rollServoForce                    =                     inifile.value("rollServoForce").toString();
    setup.rollServoMin                      =                     inifile.value("rollServoMin").toString();
    setup.rollServoMax                      =                     inifile.value("rollServoMax").toString();

    setup.sysGasMin                         =                     inifile.value("sysGasMin").toString();
    setup.sysGasMax                         =                     inifile.value("sysGasMax").toString();
    setup.sysRcGasMax                       =                     inifile.value("sysRcGasMax").toString();
    setup.sysLowVoltage                     =                     inifile.value("sysLowVoltage").toString();
    setup.sysEmergencyGas                   =                     inifile.value("sysEmergencyGas").toString();
    setup.sysEmergencyGasDuration           =                     inifile.value("sysEmergencyGasDuration").toString();
    setup.calcMode                          =                     inifile.value("calcMode").toInt();
    setup.sysMainDirection                  =                     inifile.value("sysMainDirection").toInt();
    setup.escType                           =                     inifile.value("escType").toString();
    setup.escMax                            =                     inifile.value("escMax").toString();
    setup.escBaseAdr                        =                     inifile.value("escBaseAdr").toString();
    setup.escAdrHop                         =                     inifile.value("escAdrHop").toString();
    setup.calcCycle                         =                     inifile.value("calcCycle").toString();
    setup.telemetrieCycle                   =                     inifile.value("telemetrieCycle").toString();
    setup.componentCycle                    =                     inifile.value("componentCycle").toString();
    setup.AdcClockDiv                       =                     inifile.value("AdcClockDiv").toString();
    setup.PWMMode                           =                     inifile.value("PWMMode").toInt();
    setup.BTMode                            =                     inifile.value("BTMode").toInt();
    setup.ADCModeNick                       =                     inifile.value("ADCModeNick").toInt();
    setup.ADCModeRoll                       =                     inifile.value("ADCModeRoll").toInt();
    setup.ADCModePitch                      =                     inifile.value("ADCModePitch").toInt();
    setup.MaxValue                          =                     inifile.value("MaxValue").toString();
    setup.MinValue                          =                     inifile.value("MinValue").toString();
    setup.MaxMultichannel                   =                     inifile.value("MaxMultichannel").toString();
    setup.mcOffset                          =                     inifile.value("mcOffset").toString();
    setup.mcOffset2                         =                     inifile.value("mcOffset2").toString();
    setup.scOffsetBase                      =                     inifile.value("scOffsetBase").toString();

    setup.chan[0]                           =                     inifile.value("chan_0").toString();
    setup.chan[1]                           =                     inifile.value("chan_1").toString();
    setup.chan[2]                           =                     inifile.value("chan_2").toString();
    setup.chan[3]                           =                     inifile.value("chan_3").toString();
    setup.chan[4]                           =                     inifile.value("chan_4").toString();
    setup.chan[5]                           =                     inifile.value("chan_5").toString();
    setup.chan[6]                           =                     inifile.value("chan_6").toString();
    setup.chan[7]                           =                     inifile.value("chan_7").toString();
    setup.chan[8]                           =                     inifile.value("chan_8").toString();
    setup.chan[9]                           =                     inifile.value("chan_9").toString();
    setup.chan[10]                          =                     inifile.value("chan_10").toString();
    setup.chan[11]                          =                     inifile.value("chan_11").toString();

    setup.scOffset[0]                       =                     inifile.value("scOffset_0").toString();
    setup.scOffset[1]                       =                     inifile.value("scOffset_1").toString();
    setup.scOffset[2]                       =                     inifile.value("scOffset_2").toString();
    setup.scOffset[3]                       =                     inifile.value("scOffset_3").toString();
    setup.scOffset[4]                       =                     inifile.value("scOffset_4").toString();
    setup.scOffset[5]                       =                     inifile.value("scOffset_5").toString();
    setup.scOffset[6]                       =                     inifile.value("scOffset_6").toString();
    setup.scOffset[7]                       =                     inifile.value("scOffset_7").toString();
    setup.scOffset[8]                       =                     inifile.value("scOffset_8").toString();

    setup.userSetting[0]                    =                     inifile.value("userSetting_0").toString();
    setup.userSetting[1]                    =                     inifile.value("userSetting_1").toString();
    setup.userSetting[2]                    =                     inifile.value("userSetting_2").toString();
    setup.userSetting[3]                    =                     inifile.value("userSetting_3").toString();
    setup.userSetting[4]                    =                     inifile.value("userSetting_4").toString();
    setup.userSetting[5]                    =                     inifile.value("userSetting_5").toString();
    setup.userSetting[6]                    =                     inifile.value("userSetting_6").toString();
    setup.userSetting[7]                    =                     inifile.value("userSetting_7").toString();
    setup.userSetting[8]                    =                     inifile.value("userSetting_8").toString();
    setup.userSetting[9]                    =                     inifile.value("userSetting_9").toString();
    setup.userSetting[10]                   =                     inifile.value("userSetting_10").toString();
    setup.userSetting[11]                   =                     inifile.value("userSetting_11").toString();
    setup.userSetting[12]                   =                     inifile.value("userSetting_12").toString();
    setup.userSetting[13]                   =                     inifile.value("userSetting_13").toString();
    setup.userSetting[14]                   =                     inifile.value("userSetting_14").toString();
    setup.userSetting[15]                   =                     inifile.value("userSetting_15").toString();
    setup.userSetting[16]                   =                     inifile.value("userSetting_16").toString();
    setup.userSetting[17]                   =                     inifile.value("userSetting_17").toString();
    setup.userSetting[18]                   =                     inifile.value("userSetting_18").toString();
    setup.userSetting[19]                   =                     inifile.value("userSetting_19").toString();
    setup.userSetting[20]                   =                     inifile.value("userSetting_20").toString();

    return setup;
}

void cIniFile::storeSettings(int num, SETTINGS setup)
{

    iniFilename = "osiBS.ini";
    writeSettings(num,setup);

    iniFilename = "logs/settings.log";

    QSettings inifile(iniFilename,QSettings::IniFormat);

    QString setupString                                    = "fcSetupLog";
    inifile.beginGroup(setupString);
    int logSettingNum                                      = inifile.value("logSettingNum").toInt();
    logSettingNum++;
    inifile.setValue("logSettingNum",                      logSettingNum);
    inifile.endGroup();    
    num = 100000000 + logSettingNum;
    writeSettings(num,setup);


}






void cIniFile::writeSettings(int num, SETTINGS setup)
{


    QSettings inifile(iniFilename,QSettings::IniFormat);

    QString setupString                                    = "fcSetup" + QString(num+48);

    inifile.beginGroup(setupString);
    inifile.setValue("settingNum",                         setup.settingNum.toInt());

    inifile.setValue("pid_X_GyroACCFactMin",               setup.pid_X_GyroACCFactMin);
    inifile.setValue("pid_X_GyroACCFactMax",               setup.pid_X_GyroACCFactMax);
    inifile.setValue("pid_X_IntegralMin",                  setup.pid_X_IntegralMin);
    inifile.setValue("pid_X_IntegralMax",                  setup.pid_X_IntegralMax);
    inifile.setValue("pid_X_AccX_Fact",                    setup.pid_X_AccX_Fact);
    inifile.setValue("pid_X_GyroSumFact",                  setup.pid_X_GyroSumFact);
    inifile.setValue("pid_X_P",                            setup.pid_X_P);
    inifile.setValue("pid_X_I",                            setup.pid_X_I);
    inifile.setValue("pid_X_D",                            setup.pid_X_D);
    inifile.setValue("pid_X_ACC_P",                        setup.pid_X_ACC_P);
    inifile.setValue("pid_X_ACC_I",                        setup.pid_X_ACC_I);
    inifile.setValue("pid_X_ACC_D",                        setup.pid_X_ACC_D);
    inifile.setValue("pid_X_PitchSumFact",                 setup.pid_X_PitchSumFact);
    inifile.setValue("pid_X_SumFact",                      setup.pid_X_SumFact);
    inifile.setValue("pid_X_gyroBias",                     setup.pid_X_gyroBias);
    inifile.setValue("pid_Y_GyroACCFactMin",               setup.pid_Y_GyroACCFactMin);
    inifile.setValue("pid_Y_GyroACCFactMax",               setup.pid_Y_GyroACCFactMax);
    inifile.setValue("pid_Y_IntegralMin",                  setup.pid_Y_IntegralMin);
    inifile.setValue("pid_Y_IntegralMax",                  setup.pid_Y_IntegralMax);
    inifile.setValue("pid_Y_AccY_Fact",                    setup.pid_Y_AccY_Fact);
    inifile.setValue("pid_Y_GyroSumFact",                  setup.pid_Y_GyroSumFact);
    inifile.setValue("pid_Y_P",                            setup.pid_Y_P);
    inifile.setValue("pid_Y_I",                            setup.pid_Y_I);
    inifile.setValue("pid_Y_D",                            setup.pid_Y_D);
    inifile.setValue("pid_Y_ACC_P",                        setup.pid_Y_ACC_P);
    inifile.setValue("pid_Y_ACC_I",                        setup.pid_Y_ACC_I);
    inifile.setValue("pid_Y_ACC_D",                        setup.pid_Y_ACC_D);
    inifile.setValue("pid_Y_PitchSumFact",                 setup.pid_Y_PitchSumFact);
    inifile.setValue("pid_Y_SumFact",                      setup.pid_Y_SumFact);
    inifile.setValue("pid_Y_gyroBias",                     setup.pid_Y_gyroBias);
    inifile.setValue("pid_PitchGyroBias",                  setup.pid_PitchGyroBias);
    inifile.setValue("pid_GyroPitchFact",                  setup.pid_GyroPitchFact);
    inifile.setValue("pid_StickFact",                      setup.pid_StickFact);
    inifile.setValue("pid_PitchStickFact",                 setup.pid_PitchStickFact);
    inifile.setValue("pid_throttleOffset",                 setup.pid_throttleOffset);
    inifile.setValue("pid_PitchThrottleFact",              setup.pid_PitchThrottleFact);
    inifile.setValue("pid_PitchP",                         setup.pid_PitchP);
    inifile.setValue("pid_PitchI",                         setup.pid_PitchI);
    inifile.setValue("pid_PitchD",                         setup.pid_PitchD);
    inifile.setValue("pid_Pitch_IntegralMax",              setup.pid_Pitch_IntegralMax);
    inifile.setValue("pid_Pitch_IntegralMin",              setup.pid_Pitch_IntegralMin);

    inifile.setValue("pd_throttleOffset",                  setup.pd_throttleOffset);
    inifile.setValue("pd_X_P_Fact",                        setup.pd_X_P_Fact);
    inifile.setValue("pd_X_D_Fact",                        setup.pd_X_D_Fact);
    inifile.setValue("pd_Y_P_Fact",                        setup.pd_Y_P_Fact);
    inifile.setValue("pd_Y_D_Fact",                        setup.pd_Y_D_Fact);
    inifile.setValue("pd_X_AccX_Fact",                     setup.pd_X_AccX_Fact);
    inifile.setValue("pd_Y_AccY_Fact",                     setup.pd_Y_AccY_Fact);
    inifile.setValue("pd_X_GyroSumFact",                   setup.pd_X_GyroSumFact);
    inifile.setValue("pd_X_PitchSumFact",                  setup.pd_X_PitchSumFact);
    inifile.setValue("pd_Y_GyroSumFact",                   setup.pd_Y_GyroSumFact);
    inifile.setValue("pd_Y_PitchSumFact",                  setup.pd_Y_PitchSumFact);
    inifile.setValue("pd_PitchP",                          setup.pd_PitchP);
    inifile.setValue("pd_PitchD",                          setup.pd_PitchD);
    inifile.setValue("pd_GyroPitchFact",                   setup.pd_GyroPitchFact);
    inifile.setValue("pd_StickFact",                       setup.pd_StickFact);
    inifile.setValue("pd_PitchStickFact",                  setup.pd_PitchStickFact);

    inifile.setValue("barOn",                              setup.barOn);
    inifile.setValue("barChan",                            setup.barChan);
    inifile.setValue("baroOffset",                         setup.baroOffset);

    inifile.setValue("compOn",                             setup.compOn);
    inifile.setValue("compassBias",                        setup.compassBias);
    inifile.setValue("compassForce",                       setup.compassForce);
    inifile.setValue("compassType",                        setup.compassType);
    inifile.setValue("HMC5843_Mode",                       setup.HMC5843_Mode);
    inifile.setValue("HMC5843_Bias",                       setup.HMC5843_Bias);
    inifile.setValue("HMC5843_Delay",                      setup.HMC5843_Delay);
    inifile.setValue("HMC5843_Gain",                       setup.HMC5843_Gain);
    inifile.setValue("HMC5843_Rate",                       setup.HMC5843_Rate);

    inifile.setValue("gpsOn",                              setup.gpsOn);
    inifile.setValue("nickServoOn",                        setup.nickServoOn);
    inifile.setValue("nickServoChan",                      setup.nickServoChan);
    inifile.setValue("nickServoInvert",                    setup.nickServoInvert);
    inifile.setValue("nickServoPos",                       setup.nickServoPos);
    inifile.setValue("nickServoForce",                     setup.nickServoForce);
    inifile.setValue("nickServoMin",                       setup.nickServoMin);
    inifile.setValue("nickServoMax",                       setup.nickServoMax);

    inifile.setValue("rollServoOn",                        setup.rollServoOn);
    inifile.setValue("rollServoChan",                      setup.rollServoChan);
    inifile.setValue("rollServoInvert",                    setup.rollServoInvert);
    inifile.setValue("rollServoPos",                       setup.rollServoPos);
    inifile.setValue("rollServoForce",                     setup.rollServoForce);
    inifile.setValue("rollServoMin",                       setup.rollServoMin);
    inifile.setValue("rollServoMax",                       setup.rollServoMax);

    inifile.setValue("sysGasMin",                          setup.sysGasMin);
    inifile.setValue("sysGasMax",                          setup.sysGasMax);
    inifile.setValue("sysRcGasMax",                        setup.sysRcGasMax);
    inifile.setValue("sysLowVoltage",                      setup.sysLowVoltage);
    inifile.setValue("sysEmergencyGas",                    setup.sysEmergencyGas);
    inifile.setValue("sysEmergencyGasDuration",            setup.sysEmergencyGasDuration);
    inifile.setValue("sysMainDirection",                   setup.sysMainDirection);

    inifile.setValue("calcMode",                           setup.calcMode);
    inifile.setValue("calcCycle",                          setup.calcCycle);
    inifile.setValue("telemetrieCycle",                    setup.telemetrieCycle);
    inifile.setValue("componentCycle",                     setup.componentCycle);
    inifile.setValue("AdcClockDiv",                        setup.AdcClockDiv);
    inifile.setValue("PWMMode",                            setup.PWMMode);
    inifile.setValue("BTMode",                             setup.BTMode);

    inifile.setValue("escType",                            setup.escType);
    inifile.setValue("escMax",                             setup.escMax);
    inifile.setValue("escBaseAdr",                         setup.escBaseAdr);
    inifile.setValue("escAdrHop",                          setup.escAdrHop);


    inifile.setValue("ADCModeNick",                        setup.ADCModeNick);
    inifile.setValue("ADCModeRoll",                        setup.ADCModeRoll);
    inifile.setValue("ADCModePitch",                       setup.ADCModePitch);
    inifile.setValue("MaxValue",                           setup.MaxValue);
    inifile.setValue("MinValue",                           setup.MinValue);

    inifile.setValue("MaxMultichannel",                    setup.MaxMultichannel);
    inifile.setValue("mcOffset",                           setup.mcOffset);
    inifile.setValue("mcOffset2",                          setup.mcOffset2);
    inifile.setValue("scOffsetBase",                       setup.scOffsetBase);

    inifile.setValue("chan_0",     			   setup.chan[0]);
    inifile.setValue("chan_1",     			   setup.chan[1]);
    inifile.setValue("chan_2",     			   setup.chan[2]);
    inifile.setValue("chan_3",     			   setup.chan[3]);
    inifile.setValue("chan_4",     			   setup.chan[4]);
    inifile.setValue("chan_5",     		 	   setup.chan[5]);
    inifile.setValue("chan_6",     			   setup.chan[6]);
    inifile.setValue("chan_7",     			   setup.chan[7]);
    inifile.setValue("chan_8",     			   setup.chan[8]);
    inifile.setValue("chan_9",     			   setup.chan[9]);
    inifile.setValue("chan_10",    			   setup.chan[10]);
    inifile.setValue("chan_11",    			   setup.chan[11]);

    inifile.setValue("scOffset_0", 			   setup.scOffset[0]);
    inifile.setValue("scOffset_1", 			   setup.scOffset[1]);
    inifile.setValue("scOffset_2", 			   setup.scOffset[2]);
    inifile.setValue("scOffset_3", 			   setup.scOffset[3]);
    inifile.setValue("scOffset_4", 			   setup.scOffset[4]);
    inifile.setValue("scOffset_5", 			   setup.scOffset[5]);
    inifile.setValue("scOffset_6", 			   setup.scOffset[6]);
    inifile.setValue("scOffset_7", 			   setup.scOffset[7]);
    inifile.setValue("scOffset_8", 			   setup.scOffset[8]);

    inifile.setValue("userSetting_0",                      setup.userSetting[0].toInt());
    inifile.setValue("userSetting_1",                      setup.userSetting[1].toInt());
    inifile.setValue("userSetting_2",                      setup.userSetting[2].toInt());
    inifile.setValue("userSetting_3",                      setup.userSetting[3].toInt());
    inifile.setValue("userSetting_4",                      setup.userSetting[4].toInt());
    inifile.setValue("userSetting_5",                      setup.userSetting[5].toInt());
    inifile.setValue("userSetting_6",                      setup.userSetting[6].toInt());
    inifile.setValue("userSetting_7",                      setup.userSetting[7].toInt());
    inifile.setValue("userSetting_8",                      setup.userSetting[8].toInt());
    inifile.setValue("userSetting_9",                      setup.userSetting[9].toInt());
    inifile.setValue("userSetting_10",                     setup.userSetting[10].toInt());
    inifile.setValue("userSetting_11",                     setup.userSetting[11].toInt());
    inifile.setValue("userSetting_12",                     setup.userSetting[12].toInt());
    inifile.setValue("userSetting_13",                     setup.userSetting[13].toInt());
    inifile.setValue("userSetting_14",                     setup.userSetting[14].toInt());
    inifile.setValue("userSetting_15",                     setup.userSetting[15].toInt());
    inifile.setValue("userSetting_16",                     setup.userSetting[16].toInt());
    inifile.setValue("userSetting_17",                     setup.userSetting[17].toInt());
    inifile.setValue("userSetting_18",                     setup.userSetting[18].toInt());
    inifile.setValue("userSetting_19",                     setup.userSetting[19].toInt());
    inifile.setValue("userSetting_20",                     setup.userSetting[20].toInt());

    // inifile.setValue("userPoti[21]",                       setup.userPoti[21]);
    inifile.endGroup();

}

/*
void cIniFile::storeSettings2(int num, SETTINGS setup)
{


    QSettings inifile(iniFilename,QSettings::IniFormat);

    QString setupString                                    = "fcSetup" + QString(num+48);

    inifile.beginGroup(setupString);
    inifile.setValue("settingNum",                         setup.settingNum.toInt());
    inifile.setValue("pid_X_GyroACCFactMin",               setup.pid_X_GyroACCFactMin.toInt());
    inifile.setValue("pid_X_GyroACCFactMax",               setup.pid_X_GyroACCFactMax.toInt());
    inifile.setValue("pid_X_IntegralMin",                  setup.pid_X_IntegralMin.toInt());
    inifile.setValue("pid_X_IntegralMax",                  setup.pid_X_IntegralMax.toInt());
    inifile.setValue("pid_X_AccX_Fact",                    setup.pid_X_AccX_Fact.toInt());
    inifile.setValue("pid_X_GyroSumFact",                  setup.pid_X_GyroSumFact.toInt());
    inifile.setValue("pid_X_P",                            setup.pid_X_P.toInt());
    inifile.setValue("pid_X_I",                            setup.pid_X_I.toInt());
    inifile.setValue("pid_X_D",                            setup.pid_X_D.toInt());
    inifile.setValue("pid_X_PitchSumFact",                 setup.pid_X_PitchSumFact.toInt());
    inifile.setValue("pid_X_SumFact",                      setup.pid_X_SumFact.toInt());
    inifile.setValue("pid_X_gyroBias",                     setup.pid_X_gyroBias.toInt());
    inifile.setValue("pid_Y_GyroACCFactMin",               setup.pid_Y_GyroACCFactMin.toInt());
    inifile.setValue("pid_Y_GyroACCFactMax",               setup.pid_Y_GyroACCFactMax.toInt());
    inifile.setValue("pid_Y_IntegralMin",                  setup.pid_Y_IntegralMin.toInt());
    inifile.setValue("pid_Y_IntegralMax",                  setup.pid_Y_IntegralMax.toInt());
    inifile.setValue("pid_Y_AccY_Fact",                    setup.pid_Y_AccY_Fact.toInt());
    inifile.setValue("pid_Y_GyroSumFact",                  setup.pid_Y_GyroSumFact.toInt());
    inifile.setValue("pid_Y_P",                            setup.pid_Y_P.toInt());
    inifile.setValue("pid_Y_I",                            setup.pid_Y_I.toInt());
    inifile.setValue("pid_Y_D",                            setup.pid_Y_D.toInt());
    inifile.setValue("pid_Y_PitchSumFact",                 setup.pid_Y_PitchSumFact.toInt());
    inifile.setValue("pid_Y_SumFact",                      setup.pid_Y_SumFact.toInt());
    inifile.setValue("pid_Y_gyroBias",                     setup.pid_Y_gyroBias.toInt());
    inifile.setValue("pid_PitchGyroBias",                  setup.pid_PitchGyroBias.toInt());
    inifile.setValue("pid_GyroPitchFact",                  setup.pid_GyroPitchFact.toInt());
    inifile.setValue("pid_StickFact",                      setup.pid_StickFact.toInt());
    inifile.setValue("pid_PitchStickFact",                 setup.pid_PitchStickFact.toInt());
    inifile.setValue("pid_throttleOffset",                 setup.pid_throttleOffset.toInt());
    inifile.setValue("pid_PitchThrottleFact",              setup.pid_PitchThrottleFact.toInt());
    inifile.setValue("pid_PitchP",                         setup.pid_PitchP.toInt());
    inifile.setValue("pid_PitchI",                         setup.pid_PitchI.toInt());
    inifile.setValue("pid_PitchD",                         setup.pid_PitchD.toInt());
    inifile.setValue("pid_Pitch_IntegralMax",              setup.pid_Pitch_IntegralMax.toInt());
    inifile.setValue("pid_Pitch_IntegralMin",              setup.pid_Pitch_IntegralMin.toInt());
    inifile.setValue("pd_throttleOffset",                  setup.pd_throttleOffset.toInt());
    inifile.setValue("pd_X_P_Fact",                        setup.pd_X_P_Fact.toInt());
    inifile.setValue("pd_X_D_Fact",                        setup.pd_X_D_Fact.toInt());
    inifile.setValue("pd_Y_P_Fact",                        setup.pd_Y_P_Fact.toInt());
    inifile.setValue("pd_Y_D_Fact",                        setup.pd_Y_D_Fact.toInt());
    inifile.setValue("pd_X_AccX_Fact",                     setup.pd_X_AccX_Fact.toInt());
    inifile.setValue("pd_Y_AccY_Fact",                     setup.pd_Y_AccY_Fact.toInt());
    inifile.setValue("pd_X_GyroSumFact",                   setup.pd_X_GyroSumFact.toInt());
    inifile.setValue("pd_X_PitchSumFact",                  setup.pd_X_PitchSumFact.toInt());
    inifile.setValue("pd_Y_GyroSumFact",                   setup.pd_Y_GyroSumFact.toInt());
    inifile.setValue("pd_Y_PitchSumFact",                  setup.pd_Y_PitchSumFact.toInt());
    inifile.setValue("pd_PitchP",                          setup.pd_PitchP.toInt());
    inifile.setValue("pd_PitchD",                          setup.pd_PitchD.toInt());
    inifile.setValue("pd_GyroPitchFact",                   setup.pd_GyroPitchFact.toInt());
    inifile.setValue("pd_StickFact",                       setup.pd_StickFact.toInt());
    inifile.setValue("pd_PitchStickFact",                  setup.pd_PitchStickFact.toInt());
    inifile.setValue("barOn",                              setup.barOn);
    inifile.setValue("compOn",                             setup.compOn);
    inifile.setValue("gpsOn",                              setup.gpsOn);

    inifile.setValue("nickServoOn",                        setup.nickServoOn);
    inifile.setValue("nickServoChan",                      setup.nickServoChan);
    inifile.setValue("nickServoInvert",                    setup.nickServoInvert);
    inifile.setValue("nickServoPos",                       setup.nickServoPos);
    inifile.setValue("nickServoForce",                     setup.nickServoForce);
    inifile.setValue("nickServoMin",                       setup.nickServoMin);
    inifile.setValue("nickServoMax",                       setup.nickServoMax);

    inifile.setValue("rollServoOn",                        setup.rollServoOn);
    inifile.setValue("rollServoChan",                      setup.rollServoChan);
    inifile.setValue("rollServoInvert",                    setup.rollServoInvert);
    inifile.setValue("rollServoPos",                       setup.rollServoPos);
    inifile.setValue("rollServoForce",                     setup.rollServoForce);
    inifile.setValue("rollServoMin",                       setup.rollServoMin);
    inifile.setValue("rollServoMax",                       setup.rollServoMax);

    inifile.setValue("sysGasMin",                          setup.sysGasMin.toInt());
    inifile.setValue("sysGasMax",                          setup.sysGasMax.toInt());
    inifile.setValue("sysRcGasMax",                        setup.sysRcGasMax.toInt());
    inifile.setValue("sysLowVoltage",                      setup.sysLowVoltage.toInt());
    inifile.setValue("sysEmergencyGas",                    setup.sysEmergencyGas.toInt());
    inifile.setValue("sysEmergencyGasDuration",            setup.sysEmergencyGasDuration.toInt());
    inifile.setValue("calcMode",                           setup.calcMode);
    inifile.setValue("sysMainDirection",                   setup.sysMainDirection);
    inifile.setValue("escType",                            setup.escType.toInt());
    inifile.setValue("escMax",                             setup.escMax.toInt());
    inifile.setValue("escBaseAdr",                         setup.escBaseAdr.toInt());
    inifile.setValue("escAdrHop",                          setup.escAdrHop.toInt());
    inifile.setValue("calcCycle",                          setup.calcCycle.toInt());
    inifile.setValue("telemetrieCycle",                    setup.telemetrieCycle.toInt());
    inifile.setValue("componentCycle",                     setup.componentCycle.toInt());
    inifile.setValue("AdcClockDiv",                        setup.AdcClockDiv.toInt());
    inifile.setValue("PWMMode",                            setup.PWMMode);
    inifile.setValue("BTMode",                             setup.BTMode);
    inifile.setValue("ADCModeNick",                        setup.ADCModeNick);
    inifile.setValue("ADCModeRoll",                        setup.ADCModeRoll);
    inifile.setValue("ADCModePitch",                       setup.ADCModePitch);
    inifile.setValue("MaxValue",                           setup.MaxValue.toInt());
    inifile.setValue("MinValue",                           setup.MinValue.toInt());
    inifile.setValue("MaxMultichannel",                    setup.MaxMultichannel.toInt());
    inifile.setValue("mcOffset",                           setup.mcOffset.toInt());
    inifile.setValue("mcOffset2",                          setup.mcOffset2.toInt());
    inifile.setValue("scOffsetBase",                       setup.scOffsetBase.toInt());

    inifile.setValue("HMC5843_Mode",                       setup.HMC5843_Mode);
    inifile.setValue("HMC5843_Bias",                       setup.HMC5843_Bias);
    inifile.setValue("HMC5843_Delay",                      setup.HMC5843_Delay);
    inifile.setValue("HMC5843_Gain",                       setup.HMC5843_Gain);
    inifile.setValue("HMC5843_Rate",                       setup.HMC5843_Rate);



    inifile.setValue("chan_0",     			setup.chan[0].toInt());
    inifile.setValue("chan_1",     			setup.chan[1].toInt());
    inifile.setValue("chan_2",     			setup.chan[2].toInt());
    inifile.setValue("chan_3",     			setup.chan[3].toInt());
    inifile.setValue("chan_4",     			setup.chan[4].toInt());
    inifile.setValue("chan_5",     			setup.chan[5].toInt());
    inifile.setValue("chan_6",     			setup.chan[6].toInt());
    inifile.setValue("chan_7",     			setup.chan[7].toInt());
    inifile.setValue("chan_8",     			setup.chan[8].toInt());
    inifile.setValue("chan_9",     			setup.chan[9].toInt());
    inifile.setValue("chan_10",    			setup.chan[10].toInt());
    inifile.setValue("chan_11",    			setup.chan[11].toInt());

    inifile.setValue("scOffset_0", 			setup.scOffset[0].toInt());
    inifile.setValue("scOffset_1", 			setup.scOffset[1].toInt());
    inifile.setValue("scOffset_2", 			setup.scOffset[2].toInt());
    inifile.setValue("scOffset_3", 			setup.scOffset[3].toInt());
    inifile.setValue("scOffset_4", 			setup.scOffset[4].toInt());
    inifile.setValue("scOffset_5", 			setup.scOffset[5].toInt());
    inifile.setValue("scOffset_6", 			setup.scOffset[6].toInt());
    inifile.setValue("scOffset_7", 			setup.scOffset[7].toInt());
    inifile.setValue("scOffset_8", 			setup.scOffset[8].toInt());

    inifile.setValue("userSetting_0",                     setup.userSetting[0].toInt());
    inifile.setValue("userSetting_1",                     setup.userSetting[1].toInt());
    inifile.setValue("userSetting_2",                     setup.userSetting[2].toInt());
    inifile.setValue("userSetting_3",                     setup.userSetting[3].toInt());
    inifile.setValue("userSetting_4",                     setup.userSetting[4].toInt());
    inifile.setValue("userSetting_5",                     setup.userSetting[5].toInt());
    inifile.setValue("userSetting_6",                     setup.userSetting[6].toInt());
    inifile.setValue("userSetting_7",                     setup.userSetting[7].toInt());
    inifile.setValue("userSetting_8",                     setup.userSetting[8].toInt());
    inifile.setValue("userSetting_9",                     setup.userSetting[9].toInt());
    inifile.setValue("userSetting_10",                    setup.userSetting[10].toInt());
    inifile.setValue("userSetting_11",                    setup.userSetting[11].toInt());
    inifile.setValue("userSetting_12",                    setup.userSetting[12].toInt());
    inifile.setValue("userSetting_13",                    setup.userSetting[13].toInt());
    inifile.setValue("userSetting_14",                    setup.userSetting[14].toInt());
    inifile.setValue("userSetting_15",                    setup.userSetting[15].toInt());
    inifile.setValue("userSetting_16",                    setup.userSetting[16].toInt());
    inifile.setValue("userSetting_17",                    setup.userSetting[17].toInt());
    inifile.setValue("userSetting_18",                    setup.userSetting[18].toInt());
    inifile.setValue("userSetting_19",                    setup.userSetting[19].toInt());
    inifile.setValue("userSetting_20",                    setup.userSetting[20].toInt());

    // inifile.setValue("userPoti[21]",                       setup.userPoti[21]);
    inifile.endGroup();

}
*/
