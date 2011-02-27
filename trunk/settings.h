#ifndef SETTINGS_H
#define SETTINGS_H
#include <QString>

struct SETTINGS {
        QString settingNum;
        QString pid_X_GyroACCFactMin;
        QString pid_X_GyroACCFactMax;
        QString pid_X_IntegralMin;
        QString pid_X_IntegralMax;
        QString pid_X_AccX_Fact;
        QString pid_X_GyroSumFact;
        QString pid_X_P;
        QString pid_X_I;
        QString pid_X_D;
        QString pid_X_ACC_P;
        QString pid_X_ACC_I;
        QString pid_X_ACC_D;
        QString pid_X_PitchSumFact;
        QString pid_X_SumFact;
        QString pid_X_gyroBias;
        QString pid_X_gyroBiasNeg;
        QString pid_Y_GyroACCFactMin;
        QString pid_Y_GyroACCFactMax;
        QString pid_Y_IntegralMin;
        QString pid_Y_IntegralMax;
        QString pid_Y_AccY_Fact;
        QString pid_Y_GyroSumFact;
        QString pid_Y_P;
        QString pid_Y_I;
        QString pid_Y_D;
        QString pid_Y_ACC_P;
        QString pid_Y_ACC_I;
        QString pid_Y_ACC_D;
        QString pid_Y_PitchSumFact;
        QString pid_Y_SumFact;
        QString pid_Y_gyroBias;
        QString pid_Y_gyroBiasNeg;
        QString pid_PitchGyroBias;
        QString pid_PitchGyroBiasNeg;
        QString pid_GyroPitchFact;
        QString pid_StickFact;
        QString pid_PitchStickFact;
        QString pid_throttleOffset;
        QString pid_PitchThrottleFact;
        QString pid_PitchP;
        QString pid_PitchI;
        QString pid_PitchD;
        QString pid_Pitch_IntegralMax;
        QString pid_Pitch_IntegralMin;
        QString pd_throttleOffset;
        QString pd_X_P_Fact;
        QString pd_X_D_Fact;
        QString pd_Y_P_Fact;
        QString pd_Y_D_Fact;
        QString pd_X_AccX_Fact;
        QString pd_Y_AccY_Fact;
        QString pd_X_GyroSumFact;
        QString pd_X_PitchSumFact;
        QString pd_Y_GyroSumFact;
        QString pd_Y_PitchSumFact;
        QString pd_PitchP;
        QString pd_PitchD;
        QString pd_GyroPitchFact;
        QString pd_StickFact;
        QString pd_PitchStickFact;
        int barOn;
        int barChan;
        QString baroOffset;
        int compOn;
        int gpsOn;
        int nickServoOn;
        int nickServoChan;
        int nickServoInvert;
        QString nickServoPos;
        QString nickServoForce;
        QString nickServoMin;
        QString nickServoMax;
        int rollServoOn;
        int rollServoChan;
        int rollServoInvert;
        QString rollServoPos;
        QString rollServoForce;
        QString rollServoMin;
        QString rollServoMax;
        QString sysGasMin;
        QString sysGasMax;
        QString sysRcGasMax;
        QString sysLowVoltage;
        QString sysEmergencyGas;
        QString sysEmergencyGasDuration;
        int calcMode;
        int sysMainDirection;
        QString escType;
        QString escMax;
        QString escBaseAdr;
        QString escAdrHop;
        QString calcCycle;
        QString telemetrieCycle;
        QString componentCycle;
        QString AdcClockDiv;
        QString chan[12];
        int PWMMode;
        int BTMode;
        int ADCModeNick;
        int ADCModeRoll;
        int ADCModePitch;
        QString ADCDriftNick;
        QString ADCDriftRoll;
        QString ADCDriftPitch;
        QString MaxValue;
        QString MinValue;
        QString MaxMultichannel;
        QString mcOffset;
        QString mcOffset2;
        QString scOffsetBase;
//        int enableCompass;
        int compassType;
        QString compassBias;
        QString compassForce;
        int HMC5843_Bias;
        int HMC5843_Delay;
        int HMC5843_Rate;
        int HMC5843_Gain;
        int HMC5843_Mode;
        QString scOffset[12];
        QString userSetting[21];
        QString userPoti[21];
};




#endif // SETTINGS_H
