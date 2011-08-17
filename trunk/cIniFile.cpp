
#include "cIniFile.h"
#include "settings.h"
#include "qsettings.h"
#include "ui_basestation.h"




cIniFile::cIniFile()
{

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
