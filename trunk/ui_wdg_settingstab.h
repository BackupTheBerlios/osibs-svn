/********************************************************************************
** Form generated from reading UI file 'wdg_settingstab.ui'
**
** Created: Wed 17. Aug 20:56:56 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WDG_SETTINGSTAB_H
#define UI_WDG_SETTINGSTAB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wdg_settingsTab
{
public:
    QTabWidget *settingsTab;
    QWidget *basicSettings;
    QGridLayout *gridLayout_2;
    QGroupBox *gasSetup;
    QGridLayout *gridLayout_42;
    QLabel *label;
    QSpinBox *sysGasMax;
    QLabel *label_5;
    QSpinBox *sysGasMin;
    QLabel *label_2;
    QSpinBox *emgGas;
    QLabel *label_3;
    QSpinBox *emgGasDur;
    QGroupBox *ClockSetup;
    QGridLayout *gridLayout_45;
    QLabel *label_9;
    QSpinBox *calcWait;
    QLabel *label_12;
    QSpinBox *telemetrieWait;
    QLabel *label_10;
    QSpinBox *componentWait;
    QLabel *label_11;
    QSpinBox *ADCClockDiv;
    QSpacerItem *horizontalSpacer_8;
    QGroupBox *ESCSetup;
    QGridLayout *gridLayout_43;
    QLabel *label_4;
    QSpinBox *ESCMax;
    QLabel *label_8;
    QLabel *label_6;
    QSpinBox *ESCBaseAddress;
    QLabel *label_7;
    QSpinBox *ESCAddressHop;
    QComboBox *ESCType;
    QGroupBox *miscSetup;
    QGridLayout *gridLayout_44;
    QLabel *label_17;
    QLabel *label_20;
    QSpinBox *lowVoltage;
    QLabel *label_18;
    QComboBox *calcMode;
    QComboBox *mainDirection;
    QSpacerItem *verticalSpacer_31;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_250;
    QComboBox *BTMode;
    QWidget *RCSetup;
    QGridLayout *gridLayout_46;
    QGroupBox *channelMux;
    QGridLayout *gridLayout_28;
    QLabel *label_13;
    QSpinBox *chanMux1;
    QLabel *label_16;
    QSpinBox *chanMux2;
    QLabel *label_14;
    QSpinBox *chanMux3;
    QLabel *label_15;
    QSpinBox *chanMux4;
    QLabel *label_23;
    QSpinBox *chanMux5;
    QLabel *label_21;
    QSpinBox *chanMux6;
    QLabel *label_19;
    QSpinBox *chanMux7;
    QLabel *label_22;
    QSpinBox *chanMux8;
    QLabel *label_27;
    QSpinBox *chanMux9;
    QLabel *label_25;
    QSpinBox *chanMux10;
    QLabel *label_24;
    QSpinBox *chanMux11;
    QLabel *label_26;
    QSpinBox *chanMux12;
    QGroupBox *PPMSetup;
    QGridLayout *gridLayout_30;
    QLabel *label_40;
    QComboBox *PPMMode;
    QGroupBox *MultichannelSetup;
    QGridLayout *gridLayout_31;
    QLabel *label_45;
    QSpinBox *PPMOffset1;
    QLabel *label_44;
    QSpinBox *PPMOffset2;
    QLabel *label_43;
    QLabel *label_41;
    QSpinBox *PPMMax;
    QSpinBox *PPMMin;
    QLabel *label_42;
    QSpinBox *multiChannelMax;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer_32;
    QGroupBox *RCOffsetSetup;
    QGridLayout *gridLayout_29;
    QLabel *label_28;
    QSpinBox *chanOff1;
    QLabel *label_31;
    QSpinBox *chanOff2;
    QLabel *label_29;
    QSpinBox *chanOff3;
    QLabel *label_30;
    QSpinBox *chanOff4;
    QLabel *label_35;
    QSpinBox *chanOff5;
    QLabel *label_33;
    QSpinBox *chanOff6;
    QLabel *label_32;
    QSpinBox *chanOff7;
    QLabel *label_34;
    QSpinBox *chanOff8;
    QLabel *label_39;
    QSpinBox *chanOff9;
    QLabel *label_63;
    QSpinBox *PPMOffset;
    QGroupBox *ReceiverTypeBox;
    QGridLayout *gridLayout_4;
    QLabel *label_153;
    QComboBox *ReceiverType;
    QWidget *PPM;
    QGridLayout *gridLayout_51;
    QTabWidget *tabWidget_2;
    QWidget *camServos;
    QGridLayout *gridLayout_50;
    QGroupBox *NickServo;
    QGridLayout *gridLayout_41;
    QLabel *label_56;
    QComboBox *enableNickServo;
    QLabel *label_62;
    QLabel *label_74;
    QSpinBox *nickServoPos;
    QLabel *label_59;
    QSpinBox *nickServoForce;
    QLabel *label_57;
    QSpinBox *nickServoMin;
    QLabel *label_58;
    QSpinBox *nickServoMax;
    QComboBox *nickServoChan;
    QLabel *label_61;
    QComboBox *nickServoInvert;
    QGroupBox *rollServo;
    QGridLayout *gridLayout_49;
    QLabel *label_70;
    QLabel *label_73;
    QSpinBox *rollServoForce;
    QLabel *label_71;
    QSpinBox *rollServoMin;
    QLabel *label_72;
    QSpinBox *rollServoMax;
    QComboBox *enableRollServo;
    QLabel *label_76;
    QLabel *label_145;
    QSpinBox *rollServoPos;
    QComboBox *rollServoChan;
    QLabel *label_75;
    QComboBox *rollServoInvert;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_3;
    QWidget *ppmEsc;
    QGridLayout *gridLayout_72;
    QGroupBox *groupBox_17;
    QGridLayout *gridLayout_73;
    QLabel *label_81;
    QSpinBox *spinBox_5;
    QLabel *label_82;
    QComboBox *ESCMaxValue;
    QSpacerItem *horizontalSpacer_14;
    QGroupBox *groupBox_15;
    QGridLayout *gridLayout_54;
    QLabel *label_77;
    QSpinBox *pwmBlc1;
    QLabel *label_78;
    QSpinBox *pwmBlc2;
    QLabel *label_79;
    QSpinBox *pwmBlc3;
    QLabel *label_139;
    QSpinBox *pwmBlc4;
    QLabel *label_80;
    QSpinBox *pwmBlc5;
    QLabel *label_83;
    QSpinBox *pwmBlc6;
    QSpacerItem *verticalSpacer_7;
    QWidget *sensorSetup;
    QGridLayout *gridLayout_47;
    QGroupBox *AltitudeSetup;
    QGridLayout *gridLayout_60;
    QLabel *label_46;
    QComboBox *enableBaro;
    QLabel *label_48;
    QComboBox *baroChan;
    QLabel *label_60;
    QSpinBox *baroOffset;
    QGroupBox *GPSSetup;
    QGridLayout *gridLayout_57;
    QLabel *label_50;
    QLabel *label_54;
    QLabel *label_52;
    QSpinBox *GPSForce;
    QLabel *label_53;
    QSpinBox *GPSMinSat;
    QLabel *label_55;
    QSpinBox *GPSStickOferride;
    QComboBox *enableGPS;
    QComboBox *comboBox;
    QGroupBox *GyroSetup;
    QGridLayout *gridLayout_59;
    QComboBox *GyroModeNick;
    QLabel *label_214;
    QComboBox *GyroModeRoll;
    QLabel *label_212;
    QComboBox *GyroModePitch;
    QLabel *label_213;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_81;
    QLabel *label_118;
    QSpinBox *PIDNickGyroBias;
    QLabel *label_251;
    QSpinBox *PIDNickGyroBiasNeg;
    QLabel *label_94;
    QSpinBox *PIDRollGyroBias;
    QLabel *label_252;
    QSpinBox *PIDRollGyroBiasNeg;
    QLabel *label_124;
    QSpinBox *PIDPitchGyroBias;
    QLabel *label_253;
    QSpinBox *PIDPitchGyroBiasNeg;
    QGroupBox *CompassSetup;
    QGridLayout *gridLayout_58;
    QLabel *label_47;
    QLabel *label_266;
    QLabel *label_51;
    QLabel *label_49;
    QComboBox *enableCompass;
    QComboBox *compassType;
    QSpinBox *compassBias;
    QSpinBox *compassForce;
    QGroupBox *GyroSetup_2;
    QGridLayout *gridLayout_80;
    QLabel *label_256;
    QLabel *label_258;
    QSpinBox *GyroDriftNick;
    QSpinBox *GyroDriftRoll;
    QSpinBox *GyroDriftPitch;
    QLabel *label_257;
    QSpacerItem *verticalSpacer_20;
    QSpacerItem *horizontalSpacer_10;
    QGroupBox *groupBox_16;
    QGridLayout *gridLayout_64;
    QLabel *label_226;
    QSpinBox *AdcRate;
    QPushButton *updateAdcRate;
    QSpacerItem *verticalSpacer_4;
    QWidget *Navi;
    QGridLayout *gridLayout_85;
    QTabWidget *tabWidget_3;
    QWidget *Compass_Setup;
    QGridLayout *gridLayout_86;
    QTabWidget *tabWidget_4;
    QWidget *MM3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QGroupBox *groupBox_4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *startCalib;
    QPushButton *stopCalib;
    QGroupBox *groupBox_5;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *readCompassValues;
    QPushButton *writeCompassValues;
    QGroupBox *groupBox_3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *X_MIN;
    QLineEdit *Y_MIN;
    QLineEdit *Z_MIN;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QLineEdit *X_MAX;
    QLineEdit *X_RANGE;
    QLineEdit *X_OFFSET;
    QLabel *label_199;
    QLabel *label_200;
    QLabel *label_201;
    QLineEdit *Y_MAX;
    QLineEdit *Z_MAX;
    QLineEdit *Y_RANGE;
    QLineEdit *Y_OFFSET;
    QLineEdit *Z_OFFSET;
    QLineEdit *Z_RANGE;
    QLabel *label_202;
    QLabel *label_203;
    QLabel *label_204;
    QLabel *label_205;
    QLabel *label_206;
    QLabel *label_207;
    QSpacerItem *horizontalSpacer;
    QWidget *HMC5843;
    QGroupBox *groupBox_18;
    QGridLayout *gridLayout_87;
    QComboBox *HMC5843_Rate;
    QGroupBox *groupBox_19;
    QGridLayout *gridLayout_88;
    QComboBox *HMC5843_Bias;
    QGroupBox *groupBox_20;
    QGridLayout *gridLayout_89;
    QComboBox *HMC5843_Gain;
    QGroupBox *groupBox_21;
    QGridLayout *gridLayout_90;
    QComboBox *HMC5843_Delay;
    QGroupBox *groupBox_22;
    QGridLayout *gridLayout_91;
    QComboBox *HMC5843_Mode;
    QWidget *HMC6843;
    QWidget *GPS;
    QWidget *math;
    QGridLayout *gridLayout_62;
    QTabWidget *mathTab;
    QWidget *PID;
    QGridLayout *gridLayout_37;
    QGroupBox *PIDPitchSetup;
    QGridLayout *gridLayout_17;
    QLabel *label_215;
    QSpinBox *PIDPitchIntegralMax;
    QLabel *label_178;
    QSpinBox *PIDPitchIntegralMin;
    QLabel *label_120;
    QSpinBox *PIDPitchP;
    QLabel *label_123;
    QSpinBox *PIDPitchI;
    QLabel *label_121;
    QSpinBox *PIDPitchD;
    QLabel *label_122;
    QSpinBox *PIDPitchGyroForce;
    QLabel *label_166;
    QSpinBox *PIDPitchThrottleOffset;
    QLabel *label_127;
    QSpinBox *PIDPitchStickForce;
    QGroupBox *PIDRollSetup;
    QGridLayout *gridLayout_14;
    QLabel *label_262;
    QLabel *label_84;
    QSpinBox *PIDRollGyroACCMax;
    QLabel *label_87;
    QSpinBox *PIDRollGyroACCMin;
    QLabel *label_91;
    QSpinBox *PIDRollP;
    QLabel *label_89;
    QSpinBox *PIDRollI;
    QLabel *label_263;
    QLabel *label_88;
    QSpinBox *PIDRollD;
    QLabel *label_261;
    QLabel *label_93;
    QSpinBox *PIDRollGyroACCForce;
    QLabel *label_92;
    QSpinBox *PIDRollPitchForce;
    QSpinBox *PIDRollGyroForce;
    QLabel *label_90;
    QLabel *label_95;
    QLabel *label_85;
    QSpinBox *PIDRollIntegralMax;
    QLabel *label_86;
    QSpinBox *PIDRollIntegralMin;
    QSpinBox *PIDRollACCP;
    QSpinBox *PIDRollACCI;
    QSpinBox *PIDRollACCD;
    QSpinBox *PIDRollACCForce;
    QSpacerItem *verticalSpacer_12;
    QLabel *RollStick;
    QSpinBox *PIDRollStickForce;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *PIDNickSetup;
    QGridLayout *gridLayout_15;
    QSpinBox *PIDNickGyroACCMax;
    QLabel *label_111;
    QSpinBox *PIDNickGyroACCMin;
    QLabel *label_115;
    QSpinBox *PIDNickP;
    QLabel *label_254;
    QLabel *label_113;
    QSpinBox *PIDNickI;
    QLabel *label_255;
    QLabel *label_112;
    QSpinBox *PIDNickD;
    QLabel *label_259;
    QLabel *label_117;
    QSpinBox *PIDNickGyroACCForce;
    QLabel *label_116;
    QSpinBox *PIDNickPitchForce;
    QLabel *label_109;
    QSpinBox *PIDNickIntegralMax;
    QLabel *label_110;
    QSpinBox *PIDNickIntegralMin;
    QSpinBox *PIDNickACCP;
    QSpinBox *PIDNickACCI;
    QSpinBox *PIDNickACCD;
    QSpinBox *PIDNickACCForce;
    QLabel *label_119;
    QSpinBox *PIDNickGyroForce;
    QLabel *label_114;
    QLabel *label_108;
    QSpacerItem *verticalSpacer_10;
    QLabel *label_150;
    QSpinBox *PIDNickStickForce;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *PIDStickSetup;
    QGridLayout *gridLayout_16;
    QLabel *label_125;
    QSpinBox *PIDThrottleOffset;
    QSpacerItem *verticalSpacer_13;
    QLabel *label_126;
    QComboBox *PIDHeadingHold;
    QWidget *PIDSimple;
    QGridLayout *gridLayout_36;
    QGroupBox *PIDsimpleSetup;
    QGridLayout *gridLayout_18;
    QLabel *label_128;
    QSpinBox *PIDSimpleGyroACCMax;
    QLabel *label_132;
    QSpinBox *PIDSimpleGyroACCMin;
    QLabel *label_133;
    QSpinBox *PIDSimpleD;
    QLabel *label_135;
    QSpinBox *PIDSimpleGyroForce;
    QLabel *label_138;
    QSpinBox *PIDSimpleGyroACCForce;
    QLabel *label_137;
    QSpinBox *PIDSimplePitchForce;
    QLabel *label_136;
    QSpinBox *PIDSimpleP;
    QLabel *label_260;
    QLabel *label_265;
    QLabel *label_140;
    QLabel *label_130;
    QSpinBox *PIDSimpleIntegralMax;
    QSpinBox *PIDSimpleACCP;
    QSpinBox *PIDSimpleACCI;
    QLabel *label_264;
    QSpinBox *PIDSimpleACCD;
    QSpinBox *PIDSimpleACCForce;
    QLabel *label_131;
    QSpinBox *PIDSimpleIntegralMin;
    QSpinBox *PIDSimpleI;
    QLabel *label_134;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_151;
    QSpinBox *PIDSimpleStickForce;
    QGroupBox *PIDSimplePitchSetup;
    QGridLayout *gridLayout_19;
    QLabel *label_220;
    QSpinBox *PIDSimplePitchIntegralMax;
    QLabel *label_219;
    QSpinBox *PIDSimplePitchIntegralMin;
    QLabel *label_141;
    QSpinBox *PIDSimplePitchP;
    QLabel *label_144;
    QSpinBox *PIDSimplePitchI;
    QLabel *label_142;
    QSpinBox *PIDSimplePitchD;
    QLabel *label_143;
    QSpinBox *PIDSimplePitchGyroForce;
    QLabel *label_146;
    QSpinBox *PIDSimplePitchThrottleOffset;
    QSpacerItem *verticalSpacer;
    QLabel *label_148;
    QSpinBox *PIDSimplePitchStickForce;
    QGroupBox *PIDSimpleStickSetup;
    QGridLayout *gridLayout_20;
    QLabel *label_221;
    QSpinBox *PIDSimpleThrottleOffset;
    QSpacerItem *verticalSpacer_9;
    QLabel *label_152;
    QComboBox *PIDSimpleHeadingHold;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *readPID;
    QPushButton *usePIDSimple;
    QWidget *Kalman;
    QTextEdit *textEdit;
    QWidget *userSettings;
    QGridLayout *gridLayout_40;
    QGroupBox *userSettings_2;
    QGridLayout *gridLayout_33;
    QLabel *label_179;
    QComboBox *userSet1;
    QLabel *label_65;
    QLabel *label_182;
    QComboBox *userSet2;
    QLabel *label_66;
    QLabel *label_180;
    QComboBox *userSet3;
    QLabel *label_67;
    QLabel *label_181;
    QComboBox *userSet4;
    QLabel *label_68;
    QLabel *label_186;
    QComboBox *userSet5;
    QLabel *label_69;
    QLabel *label_184;
    QComboBox *userSet6;
    QLabel *label_96;
    QLabel *label_183;
    QComboBox *userSet7;
    QLabel *label_97;
    QLabel *label_185;
    QComboBox *userSet8;
    QLabel *label_98;
    QLabel *label_190;
    QComboBox *userSet9;
    QLabel *label_99;
    QLabel *label_188;
    QComboBox *userSet10;
    QLabel *label_100;
    QGroupBox *userSettings_3;
    QGridLayout *gridLayout_34;
    QLabel *label_187;
    QComboBox *userSet11;
    QLabel *label_102;
    QLabel *label_192;
    QComboBox *userSet12;
    QLabel *label_129;
    QLabel *label_189;
    QComboBox *userSet13;
    QLabel *label_107;
    QLabel *label_191;
    QComboBox *userSet14;
    QLabel *label_211;
    QLabel *label_196;
    QComboBox *userSet15;
    QLabel *label_106;
    QLabel *label_194;
    QComboBox *userSet16;
    QLabel *label_105;
    QLabel *label_193;
    QComboBox *userSet17;
    QLabel *label_149;
    QLabel *label_195;
    QComboBox *userSet18;
    QLabel *label_103;
    QLabel *label_198;
    QComboBox *userSet19;
    QLabel *label_104;
    QLabel *label_197;
    QComboBox *userSet20;
    QLabel *label_101;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_15;
    QWidget *osiFCsettings;
    QGridLayout *gridLayout_66;
    QGroupBox *comPortPlace;
    QGridLayout *gridLayout_65;
    QLabel *label_64;
    QComboBox *comPort;
    QSpacerItem *verticalSpacer_34;
    QSpacerItem *horizontalSpacer_13;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_63;
    QCheckBox *checkBox_2;

    void setupUi(QWidget *wdg_settingsTab)
    {
        if (wdg_settingsTab->objectName().isEmpty())
            wdg_settingsTab->setObjectName(QString::fromUtf8("wdg_settingsTab"));
        wdg_settingsTab->resize(732, 414);
        settingsTab = new QTabWidget(wdg_settingsTab);
        settingsTab->setObjectName(QString::fromUtf8("settingsTab"));
        settingsTab->setGeometry(QRect(0, 0, 795, 430));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(settingsTab->sizePolicy().hasHeightForWidth());
        settingsTab->setSizePolicy(sizePolicy);
        settingsTab->setMinimumSize(QSize(682, 390));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        settingsTab->setFont(font);
        settingsTab->setTabsClosable(false);
        basicSettings = new QWidget();
        basicSettings->setObjectName(QString::fromUtf8("basicSettings"));
        gridLayout_2 = new QGridLayout(basicSettings);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(3);
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(-1, -1, -1, 3);
        gasSetup = new QGroupBox(basicSettings);
        gasSetup->setObjectName(QString::fromUtf8("gasSetup"));
        gasSetup->setFont(font);
        gridLayout_42 = new QGridLayout(gasSetup);
        gridLayout_42->setObjectName(QString::fromUtf8("gridLayout_42"));
        gridLayout_42->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(gasSetup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout_42->addWidget(label, 0, 0, 1, 1);

        sysGasMax = new QSpinBox(gasSetup);
        sysGasMax->setObjectName(QString::fromUtf8("sysGasMax"));
        sysGasMax->setEnabled(true);
        sysGasMax->setMinimum(0);
        sysGasMax->setMaximum(254);
        sysGasMax->setValue(160);

        gridLayout_42->addWidget(sysGasMax, 0, 1, 1, 1);

        label_5 = new QLabel(gasSetup);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout_42->addWidget(label_5, 1, 0, 1, 1);

        sysGasMin = new QSpinBox(gasSetup);
        sysGasMin->setObjectName(QString::fromUtf8("sysGasMin"));
        sysGasMin->setMinimum(0);
        sysGasMin->setMaximum(40);
        sysGasMin->setValue(10);

        gridLayout_42->addWidget(sysGasMin, 1, 1, 1, 1);

        label_2 = new QLabel(gasSetup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout_42->addWidget(label_2, 2, 0, 1, 1);

        emgGas = new QSpinBox(gasSetup);
        emgGas->setObjectName(QString::fromUtf8("emgGas"));
        emgGas->setMinimum(0);
        emgGas->setMaximum(120);
        emgGas->setValue(40);

        gridLayout_42->addWidget(emgGas, 2, 1, 1, 1);

        label_3 = new QLabel(gasSetup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_42->addWidget(label_3, 3, 0, 1, 1);

        emgGasDur = new QSpinBox(gasSetup);
        emgGasDur->setObjectName(QString::fromUtf8("emgGasDur"));
        emgGasDur->setMinimum(0);
        emgGasDur->setMaximum(254);
        emgGasDur->setValue(50);

        gridLayout_42->addWidget(emgGasDur, 3, 1, 1, 1);


        gridLayout_2->addWidget(gasSetup, 0, 0, 3, 1);

        ClockSetup = new QGroupBox(basicSettings);
        ClockSetup->setObjectName(QString::fromUtf8("ClockSetup"));
        ClockSetup->setFont(font);
        gridLayout_45 = new QGridLayout(ClockSetup);
        gridLayout_45->setObjectName(QString::fromUtf8("gridLayout_45"));
        gridLayout_45->setContentsMargins(-1, 0, -1, -1);
        label_9 = new QLabel(ClockSetup);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        gridLayout_45->addWidget(label_9, 0, 0, 1, 1);

        calcWait = new QSpinBox(ClockSetup);
        calcWait->setObjectName(QString::fromUtf8("calcWait"));
        calcWait->setMinimum(0);
        calcWait->setMaximum(250);
        calcWait->setValue(70);

        gridLayout_45->addWidget(calcWait, 0, 1, 1, 1);

        label_12 = new QLabel(ClockSetup);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        gridLayout_45->addWidget(label_12, 1, 0, 1, 1);

        telemetrieWait = new QSpinBox(ClockSetup);
        telemetrieWait->setObjectName(QString::fromUtf8("telemetrieWait"));
        telemetrieWait->setMinimum(0);
        telemetrieWait->setMaximum(255);
        telemetrieWait->setValue(5);

        gridLayout_45->addWidget(telemetrieWait, 1, 1, 1, 1);

        label_10 = new QLabel(ClockSetup);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        gridLayout_45->addWidget(label_10, 2, 0, 1, 1);

        componentWait = new QSpinBox(ClockSetup);
        componentWait->setObjectName(QString::fromUtf8("componentWait"));
        componentWait->setMinimum(0);
        componentWait->setMaximum(255);
        componentWait->setValue(30);

        gridLayout_45->addWidget(componentWait, 2, 1, 1, 1);

        label_11 = new QLabel(ClockSetup);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        gridLayout_45->addWidget(label_11, 3, 0, 1, 1);

        ADCClockDiv = new QSpinBox(ClockSetup);
        ADCClockDiv->setObjectName(QString::fromUtf8("ADCClockDiv"));
        ADCClockDiv->setMinimum(0);
        ADCClockDiv->setMaximum(255);
        ADCClockDiv->setValue(120);

        gridLayout_45->addWidget(ADCClockDiv, 3, 1, 1, 1);


        gridLayout_2->addWidget(ClockSetup, 0, 1, 3, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 0, 3, 1, 1);

        ESCSetup = new QGroupBox(basicSettings);
        ESCSetup->setObjectName(QString::fromUtf8("ESCSetup"));
        gridLayout_43 = new QGridLayout(ESCSetup);
        gridLayout_43->setObjectName(QString::fromUtf8("gridLayout_43"));
        gridLayout_43->setContentsMargins(-1, 0, -1, -1);
        label_4 = new QLabel(ESCSetup);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout_43->addWidget(label_4, 0, 0, 1, 1);

        ESCMax = new QSpinBox(ESCSetup);
        ESCMax->setObjectName(QString::fromUtf8("ESCMax"));
        ESCMax->setAccelerated(false);
        ESCMax->setMinimum(3);
        ESCMax->setMaximum(12);
        ESCMax->setValue(4);

        gridLayout_43->addWidget(ESCMax, 0, 1, 1, 1);

        label_8 = new QLabel(ESCSetup);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout_43->addWidget(label_8, 1, 0, 1, 1);

        label_6 = new QLabel(ESCSetup);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout_43->addWidget(label_6, 2, 0, 1, 1);

        ESCBaseAddress = new QSpinBox(ESCSetup);
        ESCBaseAddress->setObjectName(QString::fromUtf8("ESCBaseAddress"));
        ESCBaseAddress->setMinimum(0);
        ESCBaseAddress->setMaximum(254);
        ESCBaseAddress->setValue(82);

        gridLayout_43->addWidget(ESCBaseAddress, 2, 1, 1, 1);

        label_7 = new QLabel(ESCSetup);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout_43->addWidget(label_7, 3, 0, 1, 1);

        ESCAddressHop = new QSpinBox(ESCSetup);
        ESCAddressHop->setObjectName(QString::fromUtf8("ESCAddressHop"));
        ESCAddressHop->setMaximum(10);
        ESCAddressHop->setValue(2);

        gridLayout_43->addWidget(ESCAddressHop, 3, 1, 1, 1);

        ESCType = new QComboBox(ESCSetup);
        ESCType->setObjectName(QString::fromUtf8("ESCType"));

        gridLayout_43->addWidget(ESCType, 1, 1, 1, 1);


        gridLayout_2->addWidget(ESCSetup, 3, 0, 1, 1);

        miscSetup = new QGroupBox(basicSettings);
        miscSetup->setObjectName(QString::fromUtf8("miscSetup"));
        gridLayout_44 = new QGridLayout(miscSetup);
        gridLayout_44->setObjectName(QString::fromUtf8("gridLayout_44"));
        gridLayout_44->setContentsMargins(-1, 0, -1, -1);
        label_17 = new QLabel(miscSetup);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font);

        gridLayout_44->addWidget(label_17, 0, 0, 1, 1);

        label_20 = new QLabel(miscSetup);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font);

        gridLayout_44->addWidget(label_20, 1, 0, 1, 1);

        lowVoltage = new QSpinBox(miscSetup);
        lowVoltage->setObjectName(QString::fromUtf8("lowVoltage"));
        lowVoltage->setMinimum(87);
        lowVoltage->setMaximum(130);
        lowVoltage->setValue(95);

        gridLayout_44->addWidget(lowVoltage, 1, 1, 1, 1);

        label_18 = new QLabel(miscSetup);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font);

        gridLayout_44->addWidget(label_18, 2, 0, 1, 1);

        calcMode = new QComboBox(miscSetup);
        calcMode->setObjectName(QString::fromUtf8("calcMode"));
        calcMode->setEnabled(false);

        gridLayout_44->addWidget(calcMode, 0, 1, 1, 1);

        mainDirection = new QComboBox(miscSetup);
        mainDirection->setObjectName(QString::fromUtf8("mainDirection"));
        mainDirection->setEnabled(false);
        mainDirection->setMaximumSize(QSize(80, 16777215));

        gridLayout_44->addWidget(mainDirection, 2, 1, 1, 1);


        gridLayout_2->addWidget(miscSetup, 3, 1, 1, 1);

        verticalSpacer_31 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_31, 5, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_6, 5, 2, 1, 1);

        groupBox = new QGroupBox(basicSettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(113, 0));
        groupBox->setMaximumSize(QSize(16777215, 84));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        label_250 = new QLabel(groupBox);
        label_250->setObjectName(QString::fromUtf8("label_250"));

        horizontalLayout_2->addWidget(label_250);

        BTMode = new QComboBox(groupBox);
        BTMode->setObjectName(QString::fromUtf8("BTMode"));
        BTMode->setMaxVisibleItems(4);
        BTMode->setMaxCount(4);

        horizontalLayout_2->addWidget(BTMode);


        gridLayout_2->addWidget(groupBox, 0, 2, 1, 1);

        settingsTab->addTab(basicSettings, QString());
        RCSetup = new QWidget();
        RCSetup->setObjectName(QString::fromUtf8("RCSetup"));
        gridLayout_46 = new QGridLayout(RCSetup);
        gridLayout_46->setObjectName(QString::fromUtf8("gridLayout_46"));
        channelMux = new QGroupBox(RCSetup);
        channelMux->setObjectName(QString::fromUtf8("channelMux"));
        channelMux->setFlat(false);
        channelMux->setCheckable(false);
        gridLayout_28 = new QGridLayout(channelMux);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        gridLayout_28->setContentsMargins(-1, 0, -1, -1);
        label_13 = new QLabel(channelMux);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_28->addWidget(label_13, 0, 0, 1, 1);

        chanMux1 = new QSpinBox(channelMux);
        chanMux1->setObjectName(QString::fromUtf8("chanMux1"));
        chanMux1->setMinimum(0);
        chanMux1->setMaximum(12);
        chanMux1->setValue(0);

        gridLayout_28->addWidget(chanMux1, 0, 1, 1, 1);

        label_16 = new QLabel(channelMux);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_28->addWidget(label_16, 1, 0, 1, 1);

        chanMux2 = new QSpinBox(channelMux);
        chanMux2->setObjectName(QString::fromUtf8("chanMux2"));
        chanMux2->setMinimum(0);
        chanMux2->setMaximum(12);
        chanMux2->setValue(1);

        gridLayout_28->addWidget(chanMux2, 1, 1, 1, 1);

        label_14 = new QLabel(channelMux);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_28->addWidget(label_14, 2, 0, 1, 1);

        chanMux3 = new QSpinBox(channelMux);
        chanMux3->setObjectName(QString::fromUtf8("chanMux3"));
        chanMux3->setMinimum(0);
        chanMux3->setMaximum(12);
        chanMux3->setValue(2);

        gridLayout_28->addWidget(chanMux3, 2, 1, 1, 1);

        label_15 = new QLabel(channelMux);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_28->addWidget(label_15, 3, 0, 1, 1);

        chanMux4 = new QSpinBox(channelMux);
        chanMux4->setObjectName(QString::fromUtf8("chanMux4"));
        chanMux4->setMinimum(0);
        chanMux4->setMaximum(12);
        chanMux4->setValue(3);

        gridLayout_28->addWidget(chanMux4, 3, 1, 1, 1);

        label_23 = new QLabel(channelMux);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_28->addWidget(label_23, 4, 0, 1, 1);

        chanMux5 = new QSpinBox(channelMux);
        chanMux5->setObjectName(QString::fromUtf8("chanMux5"));
        chanMux5->setMinimum(0);
        chanMux5->setMaximum(12);
        chanMux5->setValue(4);

        gridLayout_28->addWidget(chanMux5, 4, 1, 1, 1);

        label_21 = new QLabel(channelMux);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_28->addWidget(label_21, 5, 0, 1, 1);

        chanMux6 = new QSpinBox(channelMux);
        chanMux6->setObjectName(QString::fromUtf8("chanMux6"));
        chanMux6->setMinimum(0);
        chanMux6->setMaximum(12);
        chanMux6->setValue(5);

        gridLayout_28->addWidget(chanMux6, 5, 1, 1, 1);

        label_19 = new QLabel(channelMux);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_28->addWidget(label_19, 6, 0, 1, 1);

        chanMux7 = new QSpinBox(channelMux);
        chanMux7->setObjectName(QString::fromUtf8("chanMux7"));
        chanMux7->setMinimum(0);
        chanMux7->setMaximum(12);
        chanMux7->setValue(6);

        gridLayout_28->addWidget(chanMux7, 6, 1, 1, 1);

        label_22 = new QLabel(channelMux);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_28->addWidget(label_22, 7, 0, 1, 1);

        chanMux8 = new QSpinBox(channelMux);
        chanMux8->setObjectName(QString::fromUtf8("chanMux8"));
        chanMux8->setMinimum(0);
        chanMux8->setMaximum(12);
        chanMux8->setValue(7);

        gridLayout_28->addWidget(chanMux8, 7, 1, 1, 1);

        label_27 = new QLabel(channelMux);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_28->addWidget(label_27, 8, 0, 1, 1);

        chanMux9 = new QSpinBox(channelMux);
        chanMux9->setObjectName(QString::fromUtf8("chanMux9"));
        chanMux9->setMinimum(0);
        chanMux9->setMaximum(12);
        chanMux9->setValue(8);

        gridLayout_28->addWidget(chanMux9, 8, 1, 1, 1);

        label_25 = new QLabel(channelMux);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_28->addWidget(label_25, 9, 0, 1, 1);

        chanMux10 = new QSpinBox(channelMux);
        chanMux10->setObjectName(QString::fromUtf8("chanMux10"));
        chanMux10->setMinimum(0);
        chanMux10->setMaximum(12);
        chanMux10->setValue(9);

        gridLayout_28->addWidget(chanMux10, 9, 1, 1, 1);

        label_24 = new QLabel(channelMux);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_28->addWidget(label_24, 10, 0, 1, 1);

        chanMux11 = new QSpinBox(channelMux);
        chanMux11->setObjectName(QString::fromUtf8("chanMux11"));
        chanMux11->setMinimum(0);
        chanMux11->setMaximum(12);
        chanMux11->setValue(10);

        gridLayout_28->addWidget(chanMux11, 10, 1, 1, 1);

        label_26 = new QLabel(channelMux);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_28->addWidget(label_26, 11, 0, 1, 1);

        chanMux12 = new QSpinBox(channelMux);
        chanMux12->setObjectName(QString::fromUtf8("chanMux12"));
        chanMux12->setMinimum(0);
        chanMux12->setMaximum(12);
        chanMux12->setValue(11);

        gridLayout_28->addWidget(chanMux12, 11, 1, 1, 1);


        gridLayout_46->addWidget(channelMux, 0, 1, 4, 2);

        PPMSetup = new QGroupBox(RCSetup);
        PPMSetup->setObjectName(QString::fromUtf8("PPMSetup"));
        PPMSetup->setMinimumSize(QSize(198, 0));
        gridLayout_30 = new QGridLayout(PPMSetup);
        gridLayout_30->setObjectName(QString::fromUtf8("gridLayout_30"));
        gridLayout_30->setContentsMargins(-1, 0, -1, -1);
        label_40 = new QLabel(PPMSetup);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        gridLayout_30->addWidget(label_40, 0, 0, 1, 1);

        PPMMode = new QComboBox(PPMSetup);
        PPMMode->setObjectName(QString::fromUtf8("PPMMode"));

        gridLayout_30->addWidget(PPMMode, 0, 1, 1, 1);


        gridLayout_46->addWidget(PPMSetup, 1, 3, 1, 1);

        MultichannelSetup = new QGroupBox(RCSetup);
        MultichannelSetup->setObjectName(QString::fromUtf8("MultichannelSetup"));
        gridLayout_31 = new QGridLayout(MultichannelSetup);
        gridLayout_31->setObjectName(QString::fromUtf8("gridLayout_31"));
        gridLayout_31->setContentsMargins(-1, 0, -1, -1);
        label_45 = new QLabel(MultichannelSetup);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        gridLayout_31->addWidget(label_45, 6, 0, 1, 1);

        PPMOffset1 = new QSpinBox(MultichannelSetup);
        PPMOffset1->setObjectName(QString::fromUtf8("PPMOffset1"));
        PPMOffset1->setMaximum(250);
        PPMOffset1->setValue(39);

        gridLayout_31->addWidget(PPMOffset1, 6, 1, 1, 1);

        label_44 = new QLabel(MultichannelSetup);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        gridLayout_31->addWidget(label_44, 7, 0, 1, 1);

        PPMOffset2 = new QSpinBox(MultichannelSetup);
        PPMOffset2->setObjectName(QString::fromUtf8("PPMOffset2"));
        PPMOffset2->setMaximum(250);
        PPMOffset2->setValue(20);

        gridLayout_31->addWidget(PPMOffset2, 7, 1, 1, 1);

        label_43 = new QLabel(MultichannelSetup);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        gridLayout_31->addWidget(label_43, 2, 0, 1, 1);

        label_41 = new QLabel(MultichannelSetup);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        gridLayout_31->addWidget(label_41, 1, 0, 1, 1);

        PPMMax = new QSpinBox(MultichannelSetup);
        PPMMax->setObjectName(QString::fromUtf8("PPMMax"));
        PPMMax->setMaximum(250);
        PPMMax->setValue(28);

        gridLayout_31->addWidget(PPMMax, 1, 1, 1, 1);

        PPMMin = new QSpinBox(MultichannelSetup);
        PPMMin->setObjectName(QString::fromUtf8("PPMMin"));
        PPMMin->setMaximumSize(QSize(16777215, 16777215));
        PPMMin->setMaximum(250);
        PPMMin->setValue(27);

        gridLayout_31->addWidget(PPMMin, 2, 1, 1, 1);

        label_42 = new QLabel(MultichannelSetup);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        gridLayout_31->addWidget(label_42, 0, 0, 1, 1);

        multiChannelMax = new QSpinBox(MultichannelSetup);
        multiChannelMax->setObjectName(QString::fromUtf8("multiChannelMax"));
        multiChannelMax->setMaximum(12);
        multiChannelMax->setValue(7);

        gridLayout_31->addWidget(multiChannelMax, 0, 1, 1, 1);


        gridLayout_46->addWidget(MultichannelSetup, 2, 3, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_46->addItem(horizontalSpacer_11, 2, 4, 1, 1);

        verticalSpacer_32 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_46->addItem(verticalSpacer_32, 4, 1, 1, 1);

        RCOffsetSetup = new QGroupBox(RCSetup);
        RCOffsetSetup->setObjectName(QString::fromUtf8("RCOffsetSetup"));
        gridLayout_29 = new QGridLayout(RCOffsetSetup);
        gridLayout_29->setObjectName(QString::fromUtf8("gridLayout_29"));
        gridLayout_29->setContentsMargins(-1, 0, -1, -1);
        label_28 = new QLabel(RCOffsetSetup);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_29->addWidget(label_28, 1, 0, 1, 1);

        chanOff1 = new QSpinBox(RCOffsetSetup);
        chanOff1->setObjectName(QString::fromUtf8("chanOff1"));

        gridLayout_29->addWidget(chanOff1, 1, 1, 1, 1);

        label_31 = new QLabel(RCOffsetSetup);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_29->addWidget(label_31, 2, 0, 1, 1);

        chanOff2 = new QSpinBox(RCOffsetSetup);
        chanOff2->setObjectName(QString::fromUtf8("chanOff2"));
        chanOff2->setMaximum(255);
        chanOff2->setValue(35);

        gridLayout_29->addWidget(chanOff2, 2, 1, 1, 1);

        label_29 = new QLabel(RCOffsetSetup);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_29->addWidget(label_29, 3, 0, 1, 1);

        chanOff3 = new QSpinBox(RCOffsetSetup);
        chanOff3->setObjectName(QString::fromUtf8("chanOff3"));
        chanOff3->setMaximum(255);
        chanOff3->setValue(35);

        gridLayout_29->addWidget(chanOff3, 3, 1, 1, 1);

        label_30 = new QLabel(RCOffsetSetup);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_29->addWidget(label_30, 4, 0, 1, 1);

        chanOff4 = new QSpinBox(RCOffsetSetup);
        chanOff4->setObjectName(QString::fromUtf8("chanOff4"));
        chanOff4->setMaximum(255);
        chanOff4->setValue(35);

        gridLayout_29->addWidget(chanOff4, 4, 1, 1, 1);

        label_35 = new QLabel(RCOffsetSetup);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        gridLayout_29->addWidget(label_35, 5, 0, 1, 1);

        chanOff5 = new QSpinBox(RCOffsetSetup);
        chanOff5->setObjectName(QString::fromUtf8("chanOff5"));
        chanOff5->setMaximum(255);
        chanOff5->setValue(35);

        gridLayout_29->addWidget(chanOff5, 5, 1, 1, 1);

        label_33 = new QLabel(RCOffsetSetup);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout_29->addWidget(label_33, 6, 0, 1, 1);

        chanOff6 = new QSpinBox(RCOffsetSetup);
        chanOff6->setObjectName(QString::fromUtf8("chanOff6"));
        chanOff6->setMaximum(255);
        chanOff6->setValue(35);

        gridLayout_29->addWidget(chanOff6, 6, 1, 1, 1);

        label_32 = new QLabel(RCOffsetSetup);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_29->addWidget(label_32, 7, 0, 1, 1);

        chanOff7 = new QSpinBox(RCOffsetSetup);
        chanOff7->setObjectName(QString::fromUtf8("chanOff7"));
        chanOff7->setMaximum(255);
        chanOff7->setValue(35);

        gridLayout_29->addWidget(chanOff7, 7, 1, 1, 1);

        label_34 = new QLabel(RCOffsetSetup);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout_29->addWidget(label_34, 8, 0, 1, 1);

        chanOff8 = new QSpinBox(RCOffsetSetup);
        chanOff8->setObjectName(QString::fromUtf8("chanOff8"));
        chanOff8->setMaximum(255);
        chanOff8->setValue(35);

        gridLayout_29->addWidget(chanOff8, 8, 1, 1, 1);

        label_39 = new QLabel(RCOffsetSetup);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        gridLayout_29->addWidget(label_39, 9, 0, 1, 1);

        chanOff9 = new QSpinBox(RCOffsetSetup);
        chanOff9->setObjectName(QString::fromUtf8("chanOff9"));
        chanOff9->setMaximum(255);
        chanOff9->setValue(35);

        gridLayout_29->addWidget(chanOff9, 9, 1, 1, 1);

        label_63 = new QLabel(RCOffsetSetup);
        label_63->setObjectName(QString::fromUtf8("label_63"));

        gridLayout_29->addWidget(label_63, 0, 0, 1, 1);

        PPMOffset = new QSpinBox(RCOffsetSetup);
        PPMOffset->setObjectName(QString::fromUtf8("PPMOffset"));
        PPMOffset->setMaximum(250);
        PPMOffset->setValue(20);

        gridLayout_29->addWidget(PPMOffset, 0, 1, 1, 1);


        gridLayout_46->addWidget(RCOffsetSetup, 0, 0, 4, 1);

        ReceiverTypeBox = new QGroupBox(RCSetup);
        ReceiverTypeBox->setObjectName(QString::fromUtf8("ReceiverTypeBox"));
        gridLayout_4 = new QGridLayout(ReceiverTypeBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_153 = new QLabel(ReceiverTypeBox);
        label_153->setObjectName(QString::fromUtf8("label_153"));

        gridLayout_4->addWidget(label_153, 1, 0, 1, 1);

        ReceiverType = new QComboBox(ReceiverTypeBox);
        ReceiverType->setObjectName(QString::fromUtf8("ReceiverType"));

        gridLayout_4->addWidget(ReceiverType, 1, 1, 1, 1);


        gridLayout_46->addWidget(ReceiverTypeBox, 0, 3, 1, 1);

        settingsTab->addTab(RCSetup, QString());
        PPM = new QWidget();
        PPM->setObjectName(QString::fromUtf8("PPM"));
        gridLayout_51 = new QGridLayout(PPM);
        gridLayout_51->setObjectName(QString::fromUtf8("gridLayout_51"));
        gridLayout_51->setContentsMargins(0, 4, 0, 0);
        tabWidget_2 = new QTabWidget(PPM);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        camServos = new QWidget();
        camServos->setObjectName(QString::fromUtf8("camServos"));
        gridLayout_50 = new QGridLayout(camServos);
        gridLayout_50->setObjectName(QString::fromUtf8("gridLayout_50"));
        NickServo = new QGroupBox(camServos);
        NickServo->setObjectName(QString::fromUtf8("NickServo"));
        gridLayout_41 = new QGridLayout(NickServo);
        gridLayout_41->setObjectName(QString::fromUtf8("gridLayout_41"));
        gridLayout_41->setContentsMargins(-1, 0, -1, -1);
        label_56 = new QLabel(NickServo);
        label_56->setObjectName(QString::fromUtf8("label_56"));

        gridLayout_41->addWidget(label_56, 0, 0, 1, 1);

        enableNickServo = new QComboBox(NickServo);
        enableNickServo->setObjectName(QString::fromUtf8("enableNickServo"));

        gridLayout_41->addWidget(enableNickServo, 0, 1, 1, 1);

        label_62 = new QLabel(NickServo);
        label_62->setObjectName(QString::fromUtf8("label_62"));

        gridLayout_41->addWidget(label_62, 1, 0, 1, 1);

        label_74 = new QLabel(NickServo);
        label_74->setObjectName(QString::fromUtf8("label_74"));

        gridLayout_41->addWidget(label_74, 3, 0, 1, 1);

        nickServoPos = new QSpinBox(NickServo);
        nickServoPos->setObjectName(QString::fromUtf8("nickServoPos"));
        nickServoPos->setMaximum(250);

        gridLayout_41->addWidget(nickServoPos, 3, 1, 1, 1);

        label_59 = new QLabel(NickServo);
        label_59->setObjectName(QString::fromUtf8("label_59"));

        gridLayout_41->addWidget(label_59, 4, 0, 1, 1);

        nickServoForce = new QSpinBox(NickServo);
        nickServoForce->setObjectName(QString::fromUtf8("nickServoForce"));
        nickServoForce->setMaximum(250);

        gridLayout_41->addWidget(nickServoForce, 4, 1, 1, 1);

        label_57 = new QLabel(NickServo);
        label_57->setObjectName(QString::fromUtf8("label_57"));

        gridLayout_41->addWidget(label_57, 5, 0, 1, 1);

        nickServoMin = new QSpinBox(NickServo);
        nickServoMin->setObjectName(QString::fromUtf8("nickServoMin"));
        nickServoMin->setMinimum(0);
        nickServoMin->setMaximum(250);

        gridLayout_41->addWidget(nickServoMin, 5, 1, 1, 1);

        label_58 = new QLabel(NickServo);
        label_58->setObjectName(QString::fromUtf8("label_58"));

        gridLayout_41->addWidget(label_58, 6, 0, 1, 1);

        nickServoMax = new QSpinBox(NickServo);
        nickServoMax->setObjectName(QString::fromUtf8("nickServoMax"));
        nickServoMax->setMaximum(250);

        gridLayout_41->addWidget(nickServoMax, 6, 1, 1, 1);

        nickServoChan = new QComboBox(NickServo);
        nickServoChan->setObjectName(QString::fromUtf8("nickServoChan"));

        gridLayout_41->addWidget(nickServoChan, 1, 1, 1, 1);

        label_61 = new QLabel(NickServo);
        label_61->setObjectName(QString::fromUtf8("label_61"));

        gridLayout_41->addWidget(label_61, 2, 0, 1, 1);

        nickServoInvert = new QComboBox(NickServo);
        nickServoInvert->setObjectName(QString::fromUtf8("nickServoInvert"));

        gridLayout_41->addWidget(nickServoInvert, 2, 1, 1, 1);


        gridLayout_50->addWidget(NickServo, 0, 0, 1, 1);

        rollServo = new QGroupBox(camServos);
        rollServo->setObjectName(QString::fromUtf8("rollServo"));
        gridLayout_49 = new QGridLayout(rollServo);
        gridLayout_49->setObjectName(QString::fromUtf8("gridLayout_49"));
        gridLayout_49->setContentsMargins(-1, 0, -1, -1);
        label_70 = new QLabel(rollServo);
        label_70->setObjectName(QString::fromUtf8("label_70"));

        gridLayout_49->addWidget(label_70, 0, 0, 1, 2);

        label_73 = new QLabel(rollServo);
        label_73->setObjectName(QString::fromUtf8("label_73"));

        gridLayout_49->addWidget(label_73, 4, 0, 1, 2);

        rollServoForce = new QSpinBox(rollServo);
        rollServoForce->setObjectName(QString::fromUtf8("rollServoForce"));
        rollServoForce->setMaximum(250);

        gridLayout_49->addWidget(rollServoForce, 4, 2, 1, 1);

        label_71 = new QLabel(rollServo);
        label_71->setObjectName(QString::fromUtf8("label_71"));

        gridLayout_49->addWidget(label_71, 5, 0, 1, 2);

        rollServoMin = new QSpinBox(rollServo);
        rollServoMin->setObjectName(QString::fromUtf8("rollServoMin"));
        rollServoMin->setMinimum(0);
        rollServoMin->setMaximum(250);

        gridLayout_49->addWidget(rollServoMin, 5, 2, 1, 1);

        label_72 = new QLabel(rollServo);
        label_72->setObjectName(QString::fromUtf8("label_72"));

        gridLayout_49->addWidget(label_72, 6, 0, 1, 2);

        rollServoMax = new QSpinBox(rollServo);
        rollServoMax->setObjectName(QString::fromUtf8("rollServoMax"));
        rollServoMax->setMaximum(250);

        gridLayout_49->addWidget(rollServoMax, 6, 2, 1, 1);

        enableRollServo = new QComboBox(rollServo);
        enableRollServo->setObjectName(QString::fromUtf8("enableRollServo"));

        gridLayout_49->addWidget(enableRollServo, 0, 2, 1, 1);

        label_76 = new QLabel(rollServo);
        label_76->setObjectName(QString::fromUtf8("label_76"));

        gridLayout_49->addWidget(label_76, 1, 0, 1, 1);

        label_145 = new QLabel(rollServo);
        label_145->setObjectName(QString::fromUtf8("label_145"));

        gridLayout_49->addWidget(label_145, 3, 0, 1, 1);

        rollServoPos = new QSpinBox(rollServo);
        rollServoPos->setObjectName(QString::fromUtf8("rollServoPos"));
        rollServoPos->setMaximum(250);

        gridLayout_49->addWidget(rollServoPos, 3, 2, 1, 1);

        rollServoChan = new QComboBox(rollServo);
        rollServoChan->setObjectName(QString::fromUtf8("rollServoChan"));

        gridLayout_49->addWidget(rollServoChan, 1, 2, 1, 1);

        label_75 = new QLabel(rollServo);
        label_75->setObjectName(QString::fromUtf8("label_75"));

        gridLayout_49->addWidget(label_75, 2, 0, 1, 1);

        rollServoInvert = new QComboBox(rollServo);
        rollServoInvert->setObjectName(QString::fromUtf8("rollServoInvert"));

        gridLayout_49->addWidget(rollServoInvert, 2, 2, 1, 1);


        gridLayout_50->addWidget(rollServo, 0, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_50->addItem(horizontalSpacer_9, 0, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_50->addItem(verticalSpacer_3, 1, 0, 1, 1);

        tabWidget_2->addTab(camServos, QString());
        ppmEsc = new QWidget();
        ppmEsc->setObjectName(QString::fromUtf8("ppmEsc"));
        gridLayout_72 = new QGridLayout(ppmEsc);
        gridLayout_72->setObjectName(QString::fromUtf8("gridLayout_72"));
        groupBox_17 = new QGroupBox(ppmEsc);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        gridLayout_73 = new QGridLayout(groupBox_17);
        gridLayout_73->setObjectName(QString::fromUtf8("gridLayout_73"));
        gridLayout_73->setContentsMargins(-1, 0, -1, -1);
        label_81 = new QLabel(groupBox_17);
        label_81->setObjectName(QString::fromUtf8("label_81"));

        gridLayout_73->addWidget(label_81, 0, 0, 1, 1);

        spinBox_5 = new QSpinBox(groupBox_17);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));

        gridLayout_73->addWidget(spinBox_5, 0, 1, 1, 1);

        label_82 = new QLabel(groupBox_17);
        label_82->setObjectName(QString::fromUtf8("label_82"));

        gridLayout_73->addWidget(label_82, 1, 0, 1, 1);

        ESCMaxValue = new QComboBox(groupBox_17);
        ESCMaxValue->setObjectName(QString::fromUtf8("ESCMaxValue"));
        ESCMaxValue->setMaximumSize(QSize(43, 16777215));

        gridLayout_73->addWidget(ESCMaxValue, 1, 1, 1, 1);


        gridLayout_72->addWidget(groupBox_17, 0, 2, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_72->addItem(horizontalSpacer_14, 0, 3, 1, 1);

        groupBox_15 = new QGroupBox(ppmEsc);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        gridLayout_54 = new QGridLayout(groupBox_15);
        gridLayout_54->setObjectName(QString::fromUtf8("gridLayout_54"));
        gridLayout_54->setContentsMargins(-1, 0, -1, -1);
        label_77 = new QLabel(groupBox_15);
        label_77->setObjectName(QString::fromUtf8("label_77"));

        gridLayout_54->addWidget(label_77, 0, 0, 1, 1);

        pwmBlc1 = new QSpinBox(groupBox_15);
        pwmBlc1->setObjectName(QString::fromUtf8("pwmBlc1"));
        pwmBlc1->setMaximum(12);

        gridLayout_54->addWidget(pwmBlc1, 0, 2, 1, 1);

        label_78 = new QLabel(groupBox_15);
        label_78->setObjectName(QString::fromUtf8("label_78"));

        gridLayout_54->addWidget(label_78, 1, 0, 1, 1);

        pwmBlc2 = new QSpinBox(groupBox_15);
        pwmBlc2->setObjectName(QString::fromUtf8("pwmBlc2"));
        pwmBlc2->setMaximum(12);

        gridLayout_54->addWidget(pwmBlc2, 1, 2, 1, 1);

        label_79 = new QLabel(groupBox_15);
        label_79->setObjectName(QString::fromUtf8("label_79"));

        gridLayout_54->addWidget(label_79, 2, 0, 1, 1);

        pwmBlc3 = new QSpinBox(groupBox_15);
        pwmBlc3->setObjectName(QString::fromUtf8("pwmBlc3"));
        pwmBlc3->setMaximum(12);

        gridLayout_54->addWidget(pwmBlc3, 2, 2, 1, 1);

        label_139 = new QLabel(groupBox_15);
        label_139->setObjectName(QString::fromUtf8("label_139"));

        gridLayout_54->addWidget(label_139, 3, 0, 1, 2);

        pwmBlc4 = new QSpinBox(groupBox_15);
        pwmBlc4->setObjectName(QString::fromUtf8("pwmBlc4"));
        pwmBlc4->setMaximum(12);

        gridLayout_54->addWidget(pwmBlc4, 3, 2, 1, 1);

        label_80 = new QLabel(groupBox_15);
        label_80->setObjectName(QString::fromUtf8("label_80"));

        gridLayout_54->addWidget(label_80, 4, 0, 1, 1);

        pwmBlc5 = new QSpinBox(groupBox_15);
        pwmBlc5->setObjectName(QString::fromUtf8("pwmBlc5"));
        pwmBlc5->setMaximum(12);

        gridLayout_54->addWidget(pwmBlc5, 4, 2, 1, 1);

        label_83 = new QLabel(groupBox_15);
        label_83->setObjectName(QString::fromUtf8("label_83"));

        gridLayout_54->addWidget(label_83, 5, 0, 1, 2);

        pwmBlc6 = new QSpinBox(groupBox_15);
        pwmBlc6->setObjectName(QString::fromUtf8("pwmBlc6"));
        pwmBlc6->setMaximum(12);

        gridLayout_54->addWidget(pwmBlc6, 5, 2, 1, 1);


        gridLayout_72->addWidget(groupBox_15, 0, 0, 2, 2);

        verticalSpacer_7 = new QSpacerItem(126, 177, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_72->addItem(verticalSpacer_7, 2, 0, 1, 1);

        tabWidget_2->addTab(ppmEsc, QString());

        gridLayout_51->addWidget(tabWidget_2, 1, 1, 1, 1);

        settingsTab->addTab(PPM, QString());
        sensorSetup = new QWidget();
        sensorSetup->setObjectName(QString::fromUtf8("sensorSetup"));
        gridLayout_47 = new QGridLayout(sensorSetup);
        gridLayout_47->setObjectName(QString::fromUtf8("gridLayout_47"));
        AltitudeSetup = new QGroupBox(sensorSetup);
        AltitudeSetup->setObjectName(QString::fromUtf8("AltitudeSetup"));
        gridLayout_60 = new QGridLayout(AltitudeSetup);
        gridLayout_60->setObjectName(QString::fromUtf8("gridLayout_60"));
        gridLayout_60->setContentsMargins(-1, 0, -1, -1);
        label_46 = new QLabel(AltitudeSetup);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        gridLayout_60->addWidget(label_46, 0, 0, 1, 2);

        enableBaro = new QComboBox(AltitudeSetup);
        enableBaro->setObjectName(QString::fromUtf8("enableBaro"));

        gridLayout_60->addWidget(enableBaro, 0, 2, 1, 1);

        label_48 = new QLabel(AltitudeSetup);
        label_48->setObjectName(QString::fromUtf8("label_48"));

        gridLayout_60->addWidget(label_48, 1, 0, 1, 1);

        baroChan = new QComboBox(AltitudeSetup);
        baroChan->setObjectName(QString::fromUtf8("baroChan"));
        baroChan->setEditable(false);
        baroChan->setModelColumn(0);

        gridLayout_60->addWidget(baroChan, 1, 2, 1, 1);

        label_60 = new QLabel(AltitudeSetup);
        label_60->setObjectName(QString::fromUtf8("label_60"));

        gridLayout_60->addWidget(label_60, 2, 0, 1, 1);

        baroOffset = new QSpinBox(AltitudeSetup);
        baroOffset->setObjectName(QString::fromUtf8("baroOffset"));
        baroOffset->setMaximum(255);

        gridLayout_60->addWidget(baroOffset, 2, 2, 1, 1);


        gridLayout_47->addWidget(AltitudeSetup, 0, 0, 1, 1);

        GPSSetup = new QGroupBox(sensorSetup);
        GPSSetup->setObjectName(QString::fromUtf8("GPSSetup"));
        GPSSetup->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_57 = new QGridLayout(GPSSetup);
        gridLayout_57->setObjectName(QString::fromUtf8("gridLayout_57"));
        gridLayout_57->setContentsMargins(-1, 0, -1, -1);
        label_50 = new QLabel(GPSSetup);
        label_50->setObjectName(QString::fromUtf8("label_50"));

        gridLayout_57->addWidget(label_50, 0, 0, 1, 1);

        label_54 = new QLabel(GPSSetup);
        label_54->setObjectName(QString::fromUtf8("label_54"));

        gridLayout_57->addWidget(label_54, 1, 0, 1, 1);

        label_52 = new QLabel(GPSSetup);
        label_52->setObjectName(QString::fromUtf8("label_52"));

        gridLayout_57->addWidget(label_52, 2, 0, 1, 1);

        GPSForce = new QSpinBox(GPSSetup);
        GPSForce->setObjectName(QString::fromUtf8("GPSForce"));
        GPSForce->setMaximum(250);

        gridLayout_57->addWidget(GPSForce, 2, 1, 1, 1);

        label_53 = new QLabel(GPSSetup);
        label_53->setObjectName(QString::fromUtf8("label_53"));

        gridLayout_57->addWidget(label_53, 3, 0, 1, 1);

        GPSMinSat = new QSpinBox(GPSSetup);
        GPSMinSat->setObjectName(QString::fromUtf8("GPSMinSat"));
        GPSMinSat->setMinimum(3);
        GPSMinSat->setMaximum(16);

        gridLayout_57->addWidget(GPSMinSat, 3, 1, 1, 1);

        label_55 = new QLabel(GPSSetup);
        label_55->setObjectName(QString::fromUtf8("label_55"));

        gridLayout_57->addWidget(label_55, 4, 0, 1, 1);

        GPSStickOferride = new QSpinBox(GPSSetup);
        GPSStickOferride->setObjectName(QString::fromUtf8("GPSStickOferride"));
        GPSStickOferride->setMaximum(20);

        gridLayout_57->addWidget(GPSStickOferride, 4, 1, 1, 1);

        enableGPS = new QComboBox(GPSSetup);
        enableGPS->setObjectName(QString::fromUtf8("enableGPS"));

        gridLayout_57->addWidget(enableGPS, 0, 1, 1, 1);

        comboBox = new QComboBox(GPSSetup);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_57->addWidget(comboBox, 1, 1, 1, 1);


        gridLayout_47->addWidget(GPSSetup, 0, 1, 2, 1);

        GyroSetup = new QGroupBox(sensorSetup);
        GyroSetup->setObjectName(QString::fromUtf8("GyroSetup"));
        GyroSetup->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_59 = new QGridLayout(GyroSetup);
        gridLayout_59->setObjectName(QString::fromUtf8("gridLayout_59"));
        gridLayout_59->setContentsMargins(-1, 0, -1, -1);
        GyroModeNick = new QComboBox(GyroSetup);
        GyroModeNick->setObjectName(QString::fromUtf8("GyroModeNick"));

        gridLayout_59->addWidget(GyroModeNick, 0, 1, 1, 1);

        label_214 = new QLabel(GyroSetup);
        label_214->setObjectName(QString::fromUtf8("label_214"));

        gridLayout_59->addWidget(label_214, 2, 0, 1, 1);

        GyroModeRoll = new QComboBox(GyroSetup);
        GyroModeRoll->setObjectName(QString::fromUtf8("GyroModeRoll"));

        gridLayout_59->addWidget(GyroModeRoll, 2, 1, 1, 1);

        label_212 = new QLabel(GyroSetup);
        label_212->setObjectName(QString::fromUtf8("label_212"));

        gridLayout_59->addWidget(label_212, 0, 0, 1, 1);

        GyroModePitch = new QComboBox(GyroSetup);
        GyroModePitch->setObjectName(QString::fromUtf8("GyroModePitch"));

        gridLayout_59->addWidget(GyroModePitch, 3, 1, 1, 1);

        label_213 = new QLabel(GyroSetup);
        label_213->setObjectName(QString::fromUtf8("label_213"));

        gridLayout_59->addWidget(label_213, 3, 0, 1, 1);


        gridLayout_47->addWidget(GyroSetup, 0, 2, 1, 1);

        groupBox_7 = new QGroupBox(sensorSetup);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_81 = new QGridLayout(groupBox_7);
        gridLayout_81->setObjectName(QString::fromUtf8("gridLayout_81"));
        gridLayout_81->setContentsMargins(-1, 0, -1, -1);
        label_118 = new QLabel(groupBox_7);
        label_118->setObjectName(QString::fromUtf8("label_118"));

        gridLayout_81->addWidget(label_118, 0, 0, 1, 1);

        PIDNickGyroBias = new QSpinBox(groupBox_7);
        PIDNickGyroBias->setObjectName(QString::fromUtf8("PIDNickGyroBias"));
        PIDNickGyroBias->setMaximum(254);
        PIDNickGyroBias->setValue(0);

        gridLayout_81->addWidget(PIDNickGyroBias, 0, 2, 1, 1);

        label_251 = new QLabel(groupBox_7);
        label_251->setObjectName(QString::fromUtf8("label_251"));

        gridLayout_81->addWidget(label_251, 1, 0, 1, 1);

        PIDNickGyroBiasNeg = new QSpinBox(groupBox_7);
        PIDNickGyroBiasNeg->setObjectName(QString::fromUtf8("PIDNickGyroBiasNeg"));
        PIDNickGyroBiasNeg->setMinimum(-254);
        PIDNickGyroBiasNeg->setMaximum(0);

        gridLayout_81->addWidget(PIDNickGyroBiasNeg, 1, 2, 1, 1);

        label_94 = new QLabel(groupBox_7);
        label_94->setObjectName(QString::fromUtf8("label_94"));

        gridLayout_81->addWidget(label_94, 2, 0, 1, 1);

        PIDRollGyroBias = new QSpinBox(groupBox_7);
        PIDRollGyroBias->setObjectName(QString::fromUtf8("PIDRollGyroBias"));
        PIDRollGyroBias->setFont(font);
        PIDRollGyroBias->setMinimum(0);
        PIDRollGyroBias->setMaximum(254);
        PIDRollGyroBias->setValue(0);

        gridLayout_81->addWidget(PIDRollGyroBias, 2, 2, 1, 1);

        label_252 = new QLabel(groupBox_7);
        label_252->setObjectName(QString::fromUtf8("label_252"));

        gridLayout_81->addWidget(label_252, 3, 0, 1, 1);

        PIDRollGyroBiasNeg = new QSpinBox(groupBox_7);
        PIDRollGyroBiasNeg->setObjectName(QString::fromUtf8("PIDRollGyroBiasNeg"));
        PIDRollGyroBiasNeg->setMinimum(-254);
        PIDRollGyroBiasNeg->setMaximum(0);

        gridLayout_81->addWidget(PIDRollGyroBiasNeg, 3, 2, 1, 1);

        label_124 = new QLabel(groupBox_7);
        label_124->setObjectName(QString::fromUtf8("label_124"));

        gridLayout_81->addWidget(label_124, 4, 0, 1, 2);

        PIDPitchGyroBias = new QSpinBox(groupBox_7);
        PIDPitchGyroBias->setObjectName(QString::fromUtf8("PIDPitchGyroBias"));
        PIDPitchGyroBias->setMaximum(254);
        PIDPitchGyroBias->setValue(0);

        gridLayout_81->addWidget(PIDPitchGyroBias, 4, 2, 1, 1);

        label_253 = new QLabel(groupBox_7);
        label_253->setObjectName(QString::fromUtf8("label_253"));

        gridLayout_81->addWidget(label_253, 5, 0, 1, 2);

        PIDPitchGyroBiasNeg = new QSpinBox(groupBox_7);
        PIDPitchGyroBiasNeg->setObjectName(QString::fromUtf8("PIDPitchGyroBiasNeg"));
        PIDPitchGyroBiasNeg->setMinimum(-254);
        PIDPitchGyroBiasNeg->setMaximum(0);

        gridLayout_81->addWidget(PIDPitchGyroBiasNeg, 5, 2, 1, 1);


        gridLayout_47->addWidget(groupBox_7, 0, 3, 2, 1);

        CompassSetup = new QGroupBox(sensorSetup);
        CompassSetup->setObjectName(QString::fromUtf8("CompassSetup"));
        gridLayout_58 = new QGridLayout(CompassSetup);
        gridLayout_58->setObjectName(QString::fromUtf8("gridLayout_58"));
        gridLayout_58->setContentsMargins(-1, 0, -1, -1);
        label_47 = new QLabel(CompassSetup);
        label_47->setObjectName(QString::fromUtf8("label_47"));

        gridLayout_58->addWidget(label_47, 0, 0, 1, 1);

        label_266 = new QLabel(CompassSetup);
        label_266->setObjectName(QString::fromUtf8("label_266"));

        gridLayout_58->addWidget(label_266, 1, 0, 1, 1);

        label_51 = new QLabel(CompassSetup);
        label_51->setObjectName(QString::fromUtf8("label_51"));

        gridLayout_58->addWidget(label_51, 2, 0, 1, 1);

        label_49 = new QLabel(CompassSetup);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        gridLayout_58->addWidget(label_49, 3, 0, 1, 1);

        enableCompass = new QComboBox(CompassSetup);
        enableCompass->setObjectName(QString::fromUtf8("enableCompass"));

        gridLayout_58->addWidget(enableCompass, 0, 1, 1, 1);

        compassType = new QComboBox(CompassSetup);
        compassType->setObjectName(QString::fromUtf8("compassType"));

        gridLayout_58->addWidget(compassType, 1, 1, 1, 1);

        compassBias = new QSpinBox(CompassSetup);
        compassBias->setObjectName(QString::fromUtf8("compassBias"));
        compassBias->setMaximum(255);

        gridLayout_58->addWidget(compassBias, 2, 1, 1, 1);

        compassForce = new QSpinBox(CompassSetup);
        compassForce->setObjectName(QString::fromUtf8("compassForce"));
        compassForce->setMaximum(255);

        gridLayout_58->addWidget(compassForce, 3, 1, 1, 1);


        gridLayout_47->addWidget(CompassSetup, 1, 0, 1, 1);

        GyroSetup_2 = new QGroupBox(sensorSetup);
        GyroSetup_2->setObjectName(QString::fromUtf8("GyroSetup_2"));
        gridLayout_80 = new QGridLayout(GyroSetup_2);
        gridLayout_80->setObjectName(QString::fromUtf8("gridLayout_80"));
        gridLayout_80->setContentsMargins(-1, 0, -1, -1);
        label_256 = new QLabel(GyroSetup_2);
        label_256->setObjectName(QString::fromUtf8("label_256"));

        gridLayout_80->addWidget(label_256, 2, 1, 1, 1);

        label_258 = new QLabel(GyroSetup_2);
        label_258->setObjectName(QString::fromUtf8("label_258"));

        gridLayout_80->addWidget(label_258, 0, 1, 1, 1);

        GyroDriftNick = new QSpinBox(GyroSetup_2);
        GyroDriftNick->setObjectName(QString::fromUtf8("GyroDriftNick"));
        GyroDriftNick->setMaximum(250);
        GyroDriftNick->setValue(15);

        gridLayout_80->addWidget(GyroDriftNick, 0, 2, 1, 1);

        GyroDriftRoll = new QSpinBox(GyroSetup_2);
        GyroDriftRoll->setObjectName(QString::fromUtf8("GyroDriftRoll"));
        GyroDriftRoll->setMaximum(250);
        GyroDriftRoll->setValue(15);

        gridLayout_80->addWidget(GyroDriftRoll, 2, 2, 1, 1);

        GyroDriftPitch = new QSpinBox(GyroSetup_2);
        GyroDriftPitch->setObjectName(QString::fromUtf8("GyroDriftPitch"));
        GyroDriftPitch->setMaximum(250);
        GyroDriftPitch->setValue(15);

        gridLayout_80->addWidget(GyroDriftPitch, 3, 2, 1, 1);

        label_257 = new QLabel(GyroSetup_2);
        label_257->setObjectName(QString::fromUtf8("label_257"));

        gridLayout_80->addWidget(label_257, 3, 1, 1, 1);


        gridLayout_47->addWidget(GyroSetup_2, 1, 2, 1, 1);

        verticalSpacer_20 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_47->addItem(verticalSpacer_20, 2, 0, 2, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_47->addItem(horizontalSpacer_10, 1, 4, 1, 1);

        groupBox_16 = new QGroupBox(sensorSetup);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        gridLayout_64 = new QGridLayout(groupBox_16);
        gridLayout_64->setObjectName(QString::fromUtf8("gridLayout_64"));
        gridLayout_64->setContentsMargins(-1, 0, -1, -1);
        label_226 = new QLabel(groupBox_16);
        label_226->setObjectName(QString::fromUtf8("label_226"));
        label_226->setFont(font);

        gridLayout_64->addWidget(label_226, 0, 0, 1, 1);

        AdcRate = new QSpinBox(groupBox_16);
        AdcRate->setObjectName(QString::fromUtf8("AdcRate"));
        AdcRate->setMinimum(0);
        AdcRate->setMaximum(254);
        AdcRate->setValue(120);

        gridLayout_64->addWidget(AdcRate, 0, 1, 1, 1);

        updateAdcRate = new QPushButton(groupBox_16);
        updateAdcRate->setObjectName(QString::fromUtf8("updateAdcRate"));

        gridLayout_64->addWidget(updateAdcRate, 1, 0, 1, 2);


        gridLayout_47->addWidget(groupBox_16, 2, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_47->addItem(verticalSpacer_4, 3, 2, 1, 1);

        settingsTab->addTab(sensorSetup, QString());
        Navi = new QWidget();
        Navi->setObjectName(QString::fromUtf8("Navi"));
        gridLayout_85 = new QGridLayout(Navi);
        gridLayout_85->setObjectName(QString::fromUtf8("gridLayout_85"));
        gridLayout_85->setContentsMargins(0, 2, 0, 0);
        tabWidget_3 = new QTabWidget(Navi);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        Compass_Setup = new QWidget();
        Compass_Setup->setObjectName(QString::fromUtf8("Compass_Setup"));
        gridLayout_86 = new QGridLayout(Compass_Setup);
        gridLayout_86->setObjectName(QString::fromUtf8("gridLayout_86"));
        gridLayout_86->setContentsMargins(0, 2, 0, 0);
        tabWidget_4 = new QTabWidget(Compass_Setup);
        tabWidget_4->setObjectName(QString::fromUtf8("tabWidget_4"));
        MM3 = new QWidget();
        MM3->setObjectName(QString::fromUtf8("MM3"));
        horizontalLayoutWidget = new QWidget(MM3);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 711, 321));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(horizontalLayoutWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox_4 = new QGroupBox(frame);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 0, 161, 91));
        sizePolicy.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy);
        verticalLayoutWidget = new QWidget(groupBox_4);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 20, 161, 71));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        startCalib = new QPushButton(verticalLayoutWidget);
        startCalib->setObjectName(QString::fromUtf8("startCalib"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(startCalib->sizePolicy().hasHeightForWidth());
        startCalib->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(startCalib);

        stopCalib = new QPushButton(verticalLayoutWidget);
        stopCalib->setObjectName(QString::fromUtf8("stopCalib"));
        sizePolicy2.setHeightForWidth(stopCalib->sizePolicy().hasHeightForWidth());
        stopCalib->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(stopCalib);

        groupBox_5 = new QGroupBox(frame);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(9, 90, 161, 91));
        verticalLayoutWidget_2 = new QWidget(groupBox_5);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 20, 161, 71));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        readCompassValues = new QPushButton(verticalLayoutWidget_2);
        readCompassValues->setObjectName(QString::fromUtf8("readCompassValues"));

        verticalLayout_2->addWidget(readCompassValues);

        writeCompassValues = new QPushButton(verticalLayoutWidget_2);
        writeCompassValues->setObjectName(QString::fromUtf8("writeCompassValues"));

        verticalLayout_2->addWidget(writeCompassValues);


        horizontalLayout->addWidget(frame);

        groupBox_3 = new QGroupBox(horizontalLayoutWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setMinimumSize(QSize(350, 0));
        groupBox_3->setMaximumSize(QSize(300, 16777215));
        gridLayoutWidget = new QWidget(groupBox_3);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 9, 341, 171));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        X_MIN = new QLineEdit(gridLayoutWidget);
        X_MIN->setObjectName(QString::fromUtf8("X_MIN"));

        gridLayout->addWidget(X_MIN, 0, 1, 1, 1);

        Y_MIN = new QLineEdit(gridLayoutWidget);
        Y_MIN->setObjectName(QString::fromUtf8("Y_MIN"));

        gridLayout->addWidget(Y_MIN, 0, 3, 1, 1);

        Z_MIN = new QLineEdit(gridLayoutWidget);
        Z_MIN->setObjectName(QString::fromUtf8("Z_MIN"));

        gridLayout->addWidget(Z_MIN, 0, 5, 1, 1);

        label_36 = new QLabel(gridLayoutWidget);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        gridLayout->addWidget(label_36, 0, 0, 1, 1);

        label_37 = new QLabel(gridLayoutWidget);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        gridLayout->addWidget(label_37, 0, 2, 1, 1);

        label_38 = new QLabel(gridLayoutWidget);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        gridLayout->addWidget(label_38, 0, 4, 1, 1);

        X_MAX = new QLineEdit(gridLayoutWidget);
        X_MAX->setObjectName(QString::fromUtf8("X_MAX"));

        gridLayout->addWidget(X_MAX, 1, 1, 1, 1);

        X_RANGE = new QLineEdit(gridLayoutWidget);
        X_RANGE->setObjectName(QString::fromUtf8("X_RANGE"));

        gridLayout->addWidget(X_RANGE, 2, 1, 1, 1);

        X_OFFSET = new QLineEdit(gridLayoutWidget);
        X_OFFSET->setObjectName(QString::fromUtf8("X_OFFSET"));

        gridLayout->addWidget(X_OFFSET, 3, 1, 1, 1);

        label_199 = new QLabel(gridLayoutWidget);
        label_199->setObjectName(QString::fromUtf8("label_199"));

        gridLayout->addWidget(label_199, 3, 0, 1, 1);

        label_200 = new QLabel(gridLayoutWidget);
        label_200->setObjectName(QString::fromUtf8("label_200"));

        gridLayout->addWidget(label_200, 2, 0, 1, 1);

        label_201 = new QLabel(gridLayoutWidget);
        label_201->setObjectName(QString::fromUtf8("label_201"));

        gridLayout->addWidget(label_201, 1, 0, 1, 1);

        Y_MAX = new QLineEdit(gridLayoutWidget);
        Y_MAX->setObjectName(QString::fromUtf8("Y_MAX"));

        gridLayout->addWidget(Y_MAX, 1, 3, 1, 1);

        Z_MAX = new QLineEdit(gridLayoutWidget);
        Z_MAX->setObjectName(QString::fromUtf8("Z_MAX"));

        gridLayout->addWidget(Z_MAX, 1, 5, 1, 1);

        Y_RANGE = new QLineEdit(gridLayoutWidget);
        Y_RANGE->setObjectName(QString::fromUtf8("Y_RANGE"));

        gridLayout->addWidget(Y_RANGE, 2, 3, 1, 1);

        Y_OFFSET = new QLineEdit(gridLayoutWidget);
        Y_OFFSET->setObjectName(QString::fromUtf8("Y_OFFSET"));

        gridLayout->addWidget(Y_OFFSET, 3, 3, 1, 1);

        Z_OFFSET = new QLineEdit(gridLayoutWidget);
        Z_OFFSET->setObjectName(QString::fromUtf8("Z_OFFSET"));

        gridLayout->addWidget(Z_OFFSET, 3, 5, 1, 1);

        Z_RANGE = new QLineEdit(gridLayoutWidget);
        Z_RANGE->setObjectName(QString::fromUtf8("Z_RANGE"));

        gridLayout->addWidget(Z_RANGE, 2, 5, 1, 1);

        label_202 = new QLabel(gridLayoutWidget);
        label_202->setObjectName(QString::fromUtf8("label_202"));

        gridLayout->addWidget(label_202, 2, 2, 1, 1);

        label_203 = new QLabel(gridLayoutWidget);
        label_203->setObjectName(QString::fromUtf8("label_203"));

        gridLayout->addWidget(label_203, 3, 2, 1, 1);

        label_204 = new QLabel(gridLayoutWidget);
        label_204->setObjectName(QString::fromUtf8("label_204"));

        gridLayout->addWidget(label_204, 1, 2, 1, 1);

        label_205 = new QLabel(gridLayoutWidget);
        label_205->setObjectName(QString::fromUtf8("label_205"));

        gridLayout->addWidget(label_205, 3, 4, 1, 1);

        label_206 = new QLabel(gridLayoutWidget);
        label_206->setObjectName(QString::fromUtf8("label_206"));

        gridLayout->addWidget(label_206, 2, 4, 1, 1);

        label_207 = new QLabel(gridLayoutWidget);
        label_207->setObjectName(QString::fromUtf8("label_207"));

        gridLayout->addWidget(label_207, 1, 4, 1, 1);


        horizontalLayout->addWidget(groupBox_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        tabWidget_4->addTab(MM3, QString());
        HMC5843 = new QWidget();
        HMC5843->setObjectName(QString::fromUtf8("HMC5843"));
        groupBox_18 = new QGroupBox(HMC5843);
        groupBox_18->setObjectName(QString::fromUtf8("groupBox_18"));
        groupBox_18->setGeometry(QRect(20, 80, 161, 61));
        gridLayout_87 = new QGridLayout(groupBox_18);
        gridLayout_87->setObjectName(QString::fromUtf8("gridLayout_87"));
        HMC5843_Rate = new QComboBox(groupBox_18);
        HMC5843_Rate->setObjectName(QString::fromUtf8("HMC5843_Rate"));

        gridLayout_87->addWidget(HMC5843_Rate, 0, 0, 1, 1);

        groupBox_19 = new QGroupBox(HMC5843);
        groupBox_19->setObjectName(QString::fromUtf8("groupBox_19"));
        groupBox_19->setGeometry(QRect(20, 5, 161, 61));
        gridLayout_88 = new QGridLayout(groupBox_19);
        gridLayout_88->setObjectName(QString::fromUtf8("gridLayout_88"));
        HMC5843_Bias = new QComboBox(groupBox_19);
        HMC5843_Bias->setObjectName(QString::fromUtf8("HMC5843_Bias"));

        gridLayout_88->addWidget(HMC5843_Bias, 0, 0, 1, 1);

        groupBox_20 = new QGroupBox(HMC5843);
        groupBox_20->setObjectName(QString::fromUtf8("groupBox_20"));
        groupBox_20->setGeometry(QRect(20, 150, 161, 56));
        gridLayout_89 = new QGridLayout(groupBox_20);
        gridLayout_89->setObjectName(QString::fromUtf8("gridLayout_89"));
        HMC5843_Gain = new QComboBox(groupBox_20);
        HMC5843_Gain->setObjectName(QString::fromUtf8("HMC5843_Gain"));

        gridLayout_89->addWidget(HMC5843_Gain, 0, 0, 1, 1);

        groupBox_21 = new QGroupBox(HMC5843);
        groupBox_21->setObjectName(QString::fromUtf8("groupBox_21"));
        groupBox_21->setGeometry(QRect(20, 220, 161, 56));
        gridLayout_90 = new QGridLayout(groupBox_21);
        gridLayout_90->setObjectName(QString::fromUtf8("gridLayout_90"));
        HMC5843_Delay = new QComboBox(groupBox_21);
        HMC5843_Delay->setObjectName(QString::fromUtf8("HMC5843_Delay"));

        gridLayout_90->addWidget(HMC5843_Delay, 0, 0, 1, 1);

        groupBox_22 = new QGroupBox(HMC5843);
        groupBox_22->setObjectName(QString::fromUtf8("groupBox_22"));
        groupBox_22->setGeometry(QRect(200, 5, 171, 61));
        gridLayout_91 = new QGridLayout(groupBox_22);
        gridLayout_91->setObjectName(QString::fromUtf8("gridLayout_91"));
        HMC5843_Mode = new QComboBox(groupBox_22);
        HMC5843_Mode->setObjectName(QString::fromUtf8("HMC5843_Mode"));

        gridLayout_91->addWidget(HMC5843_Mode, 0, 0, 1, 1);

        tabWidget_4->addTab(HMC5843, QString());
        HMC6843 = new QWidget();
        HMC6843->setObjectName(QString::fromUtf8("HMC6843"));
        tabWidget_4->addTab(HMC6843, QString());

        gridLayout_86->addWidget(tabWidget_4, 0, 0, 1, 1);

        tabWidget_3->addTab(Compass_Setup, QString());
        GPS = new QWidget();
        GPS->setObjectName(QString::fromUtf8("GPS"));
        tabWidget_3->addTab(GPS, QString());

        gridLayout_85->addWidget(tabWidget_3, 0, 0, 1, 1);

        settingsTab->addTab(Navi, QString());
        math = new QWidget();
        math->setObjectName(QString::fromUtf8("math"));
        gridLayout_62 = new QGridLayout(math);
        gridLayout_62->setContentsMargins(0, 0, 0, 0);
        gridLayout_62->setObjectName(QString::fromUtf8("gridLayout_62"));
        mathTab = new QTabWidget(math);
        mathTab->setObjectName(QString::fromUtf8("mathTab"));
        mathTab->setEnabled(true);
        mathTab->setMinimumSize(QSize(672, 358));
        PID = new QWidget();
        PID->setObjectName(QString::fromUtf8("PID"));
        gridLayout_37 = new QGridLayout(PID);
        gridLayout_37->setObjectName(QString::fromUtf8("gridLayout_37"));
        PIDPitchSetup = new QGroupBox(PID);
        PIDPitchSetup->setObjectName(QString::fromUtf8("PIDPitchSetup"));
        PIDPitchSetup->setMinimumSize(QSize(0, 215));
        PIDPitchSetup->setFont(font);
        gridLayout_17 = new QGridLayout(PIDPitchSetup);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        gridLayout_17->setContentsMargins(-1, 0, -1, -1);
        label_215 = new QLabel(PIDPitchSetup);
        label_215->setObjectName(QString::fromUtf8("label_215"));

        gridLayout_17->addWidget(label_215, 0, 0, 1, 1);

        PIDPitchIntegralMax = new QSpinBox(PIDPitchSetup);
        PIDPitchIntegralMax->setObjectName(QString::fromUtf8("PIDPitchIntegralMax"));
        PIDPitchIntegralMax->setMaximum(255);
        PIDPitchIntegralMax->setValue(20);

        gridLayout_17->addWidget(PIDPitchIntegralMax, 0, 1, 1, 1);

        label_178 = new QLabel(PIDPitchSetup);
        label_178->setObjectName(QString::fromUtf8("label_178"));

        gridLayout_17->addWidget(label_178, 1, 0, 1, 1);

        PIDPitchIntegralMin = new QSpinBox(PIDPitchSetup);
        PIDPitchIntegralMin->setObjectName(QString::fromUtf8("PIDPitchIntegralMin"));
        PIDPitchIntegralMin->setMinimum(-255);
        PIDPitchIntegralMin->setMaximum(0);
        PIDPitchIntegralMin->setValue(-20);

        gridLayout_17->addWidget(PIDPitchIntegralMin, 1, 1, 1, 1);

        label_120 = new QLabel(PIDPitchSetup);
        label_120->setObjectName(QString::fromUtf8("label_120"));

        gridLayout_17->addWidget(label_120, 2, 0, 1, 1);

        PIDPitchP = new QSpinBox(PIDPitchSetup);
        PIDPitchP->setObjectName(QString::fromUtf8("PIDPitchP"));
        PIDPitchP->setMaximum(255);
        PIDPitchP->setValue(100);

        gridLayout_17->addWidget(PIDPitchP, 2, 1, 1, 1);

        label_123 = new QLabel(PIDPitchSetup);
        label_123->setObjectName(QString::fromUtf8("label_123"));

        gridLayout_17->addWidget(label_123, 3, 0, 1, 1);

        PIDPitchI = new QSpinBox(PIDPitchSetup);
        PIDPitchI->setObjectName(QString::fromUtf8("PIDPitchI"));
        PIDPitchI->setMaximum(255);
        PIDPitchI->setValue(0);

        gridLayout_17->addWidget(PIDPitchI, 3, 1, 1, 1);

        label_121 = new QLabel(PIDPitchSetup);
        label_121->setObjectName(QString::fromUtf8("label_121"));

        gridLayout_17->addWidget(label_121, 4, 0, 1, 1);

        PIDPitchD = new QSpinBox(PIDPitchSetup);
        PIDPitchD->setObjectName(QString::fromUtf8("PIDPitchD"));
        PIDPitchD->setMaximum(255);
        PIDPitchD->setValue(0);

        gridLayout_17->addWidget(PIDPitchD, 4, 1, 1, 1);

        label_122 = new QLabel(PIDPitchSetup);
        label_122->setObjectName(QString::fromUtf8("label_122"));

        gridLayout_17->addWidget(label_122, 5, 0, 1, 1);

        PIDPitchGyroForce = new QSpinBox(PIDPitchSetup);
        PIDPitchGyroForce->setObjectName(QString::fromUtf8("PIDPitchGyroForce"));
        PIDPitchGyroForce->setMaximum(255);
        PIDPitchGyroForce->setValue(120);

        gridLayout_17->addWidget(PIDPitchGyroForce, 5, 1, 1, 1);

        label_166 = new QLabel(PIDPitchSetup);
        label_166->setObjectName(QString::fromUtf8("label_166"));

        gridLayout_17->addWidget(label_166, 6, 0, 1, 1);

        PIDPitchThrottleOffset = new QSpinBox(PIDPitchSetup);
        PIDPitchThrottleOffset->setObjectName(QString::fromUtf8("PIDPitchThrottleOffset"));
        PIDPitchThrottleOffset->setMaximum(255);
        PIDPitchThrottleOffset->setValue(0);

        gridLayout_17->addWidget(PIDPitchThrottleOffset, 6, 1, 1, 1);

        label_127 = new QLabel(PIDPitchSetup);
        label_127->setObjectName(QString::fromUtf8("label_127"));

        gridLayout_17->addWidget(label_127, 7, 0, 1, 1);

        PIDPitchStickForce = new QSpinBox(PIDPitchSetup);
        PIDPitchStickForce->setObjectName(QString::fromUtf8("PIDPitchStickForce"));
        PIDPitchStickForce->setMaximum(255);
        PIDPitchStickForce->setValue(50);

        gridLayout_17->addWidget(PIDPitchStickForce, 7, 1, 1, 1);


        gridLayout_37->addWidget(PIDPitchSetup, 0, 3, 2, 1);

        PIDRollSetup = new QGroupBox(PID);
        PIDRollSetup->setObjectName(QString::fromUtf8("PIDRollSetup"));
        PIDRollSetup->setMinimumSize(QSize(0, 331));
        gridLayout_14 = new QGridLayout(PIDRollSetup);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(-1, 0, -1, -1);
        label_262 = new QLabel(PIDRollSetup);
        label_262->setObjectName(QString::fromUtf8("label_262"));

        gridLayout_14->addWidget(label_262, 4, 3, 1, 1);

        label_84 = new QLabel(PIDRollSetup);
        label_84->setObjectName(QString::fromUtf8("label_84"));

        gridLayout_14->addWidget(label_84, 0, 0, 1, 1);

        PIDRollGyroACCMax = new QSpinBox(PIDRollSetup);
        PIDRollGyroACCMax->setObjectName(QString::fromUtf8("PIDRollGyroACCMax"));
        PIDRollGyroACCMax->setMaximum(255);
        PIDRollGyroACCMax->setValue(8);

        gridLayout_14->addWidget(PIDRollGyroACCMax, 0, 1, 1, 1);

        label_87 = new QLabel(PIDRollSetup);
        label_87->setObjectName(QString::fromUtf8("label_87"));

        gridLayout_14->addWidget(label_87, 1, 0, 1, 1);

        PIDRollGyroACCMin = new QSpinBox(PIDRollSetup);
        PIDRollGyroACCMin->setObjectName(QString::fromUtf8("PIDRollGyroACCMin"));
        PIDRollGyroACCMin->setMinimum(-255);
        PIDRollGyroACCMin->setMaximum(0);
        PIDRollGyroACCMin->setValue(-8);

        gridLayout_14->addWidget(PIDRollGyroACCMin, 1, 1, 1, 1);

        label_91 = new QLabel(PIDRollSetup);
        label_91->setObjectName(QString::fromUtf8("label_91"));

        gridLayout_14->addWidget(label_91, 4, 0, 1, 1);

        PIDRollP = new QSpinBox(PIDRollSetup);
        PIDRollP->setObjectName(QString::fromUtf8("PIDRollP"));
        PIDRollP->setMaximum(255);
        PIDRollP->setValue(120);

        gridLayout_14->addWidget(PIDRollP, 4, 1, 1, 1);

        label_89 = new QLabel(PIDRollSetup);
        label_89->setObjectName(QString::fromUtf8("label_89"));

        gridLayout_14->addWidget(label_89, 5, 0, 1, 1);

        PIDRollI = new QSpinBox(PIDRollSetup);
        PIDRollI->setObjectName(QString::fromUtf8("PIDRollI"));
        PIDRollI->setMaximum(255);
        PIDRollI->setValue(30);

        gridLayout_14->addWidget(PIDRollI, 5, 1, 1, 1);

        label_263 = new QLabel(PIDRollSetup);
        label_263->setObjectName(QString::fromUtf8("label_263"));

        gridLayout_14->addWidget(label_263, 5, 3, 1, 1);

        label_88 = new QLabel(PIDRollSetup);
        label_88->setObjectName(QString::fromUtf8("label_88"));

        gridLayout_14->addWidget(label_88, 6, 0, 1, 1);

        PIDRollD = new QSpinBox(PIDRollSetup);
        PIDRollD->setObjectName(QString::fromUtf8("PIDRollD"));
        PIDRollD->setMaximum(255);

        gridLayout_14->addWidget(PIDRollD, 6, 1, 1, 1);

        label_261 = new QLabel(PIDRollSetup);
        label_261->setObjectName(QString::fromUtf8("label_261"));

        gridLayout_14->addWidget(label_261, 6, 3, 1, 1);

        label_93 = new QLabel(PIDRollSetup);
        label_93->setObjectName(QString::fromUtf8("label_93"));

        gridLayout_14->addWidget(label_93, 10, 0, 1, 1);

        PIDRollGyroACCForce = new QSpinBox(PIDRollSetup);
        PIDRollGyroACCForce->setObjectName(QString::fromUtf8("PIDRollGyroACCForce"));
        PIDRollGyroACCForce->setMaximum(255);
        PIDRollGyroACCForce->setValue(40);

        gridLayout_14->addWidget(PIDRollGyroACCForce, 10, 1, 1, 1);

        label_92 = new QLabel(PIDRollSetup);
        label_92->setObjectName(QString::fromUtf8("label_92"));

        gridLayout_14->addWidget(label_92, 11, 0, 1, 1);

        PIDRollPitchForce = new QSpinBox(PIDRollSetup);
        PIDRollPitchForce->setObjectName(QString::fromUtf8("PIDRollPitchForce"));
        PIDRollPitchForce->setMaximum(255);
        PIDRollPitchForce->setValue(30);

        gridLayout_14->addWidget(PIDRollPitchForce, 11, 1, 1, 1);

        PIDRollGyroForce = new QSpinBox(PIDRollSetup);
        PIDRollGyroForce->setObjectName(QString::fromUtf8("PIDRollGyroForce"));
        PIDRollGyroForce->setMaximum(255);
        PIDRollGyroForce->setValue(120);

        gridLayout_14->addWidget(PIDRollGyroForce, 7, 1, 1, 1);

        label_90 = new QLabel(PIDRollSetup);
        label_90->setObjectName(QString::fromUtf8("label_90"));

        gridLayout_14->addWidget(label_90, 7, 0, 1, 1);

        label_95 = new QLabel(PIDRollSetup);
        label_95->setObjectName(QString::fromUtf8("label_95"));

        gridLayout_14->addWidget(label_95, 7, 3, 1, 1);

        label_85 = new QLabel(PIDRollSetup);
        label_85->setObjectName(QString::fromUtf8("label_85"));

        gridLayout_14->addWidget(label_85, 0, 3, 1, 1);

        PIDRollIntegralMax = new QSpinBox(PIDRollSetup);
        PIDRollIntegralMax->setObjectName(QString::fromUtf8("PIDRollIntegralMax"));
        PIDRollIntegralMax->setMaximum(255);
        PIDRollIntegralMax->setValue(20);

        gridLayout_14->addWidget(PIDRollIntegralMax, 0, 4, 1, 1);

        label_86 = new QLabel(PIDRollSetup);
        label_86->setObjectName(QString::fromUtf8("label_86"));

        gridLayout_14->addWidget(label_86, 1, 3, 1, 1);

        PIDRollIntegralMin = new QSpinBox(PIDRollSetup);
        PIDRollIntegralMin->setObjectName(QString::fromUtf8("PIDRollIntegralMin"));
        PIDRollIntegralMin->setMinimum(-255);
        PIDRollIntegralMin->setMaximum(0);
        PIDRollIntegralMin->setValue(-20);

        gridLayout_14->addWidget(PIDRollIntegralMin, 1, 4, 1, 1);

        PIDRollACCP = new QSpinBox(PIDRollSetup);
        PIDRollACCP->setObjectName(QString::fromUtf8("PIDRollACCP"));
        PIDRollACCP->setMaximum(255);
        PIDRollACCP->setValue(120);

        gridLayout_14->addWidget(PIDRollACCP, 4, 4, 1, 1);

        PIDRollACCI = new QSpinBox(PIDRollSetup);
        PIDRollACCI->setObjectName(QString::fromUtf8("PIDRollACCI"));
        PIDRollACCI->setMaximum(255);
        PIDRollACCI->setValue(30);

        gridLayout_14->addWidget(PIDRollACCI, 5, 4, 1, 1);

        PIDRollACCD = new QSpinBox(PIDRollSetup);
        PIDRollACCD->setObjectName(QString::fromUtf8("PIDRollACCD"));
        PIDRollACCD->setMaximum(255);

        gridLayout_14->addWidget(PIDRollACCD, 6, 4, 1, 1);

        PIDRollACCForce = new QSpinBox(PIDRollSetup);
        PIDRollACCForce->setObjectName(QString::fromUtf8("PIDRollACCForce"));
        PIDRollACCForce->setMaximum(255);
        PIDRollACCForce->setValue(90);

        gridLayout_14->addWidget(PIDRollACCForce, 7, 4, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_14->addItem(verticalSpacer_12, 12, 1, 1, 1);

        RollStick = new QLabel(PIDRollSetup);
        RollStick->setObjectName(QString::fromUtf8("RollStick"));

        gridLayout_14->addWidget(RollStick, 10, 3, 1, 1);

        PIDRollStickForce = new QSpinBox(PIDRollSetup);
        PIDRollStickForce->setObjectName(QString::fromUtf8("PIDRollStickForce"));
        PIDRollStickForce->setMaximum(254);
        PIDRollStickForce->setValue(120);

        gridLayout_14->addWidget(PIDRollStickForce, 10, 4, 1, 1);


        gridLayout_37->addWidget(PIDRollSetup, 0, 1, 8, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_37->addItem(verticalSpacer_2, 8, 1, 1, 1);

        PIDNickSetup = new QGroupBox(PID);
        PIDNickSetup->setObjectName(QString::fromUtf8("PIDNickSetup"));
        PIDNickSetup->setMinimumSize(QSize(0, 331));
        gridLayout_15 = new QGridLayout(PIDNickSetup);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setContentsMargins(-1, 0, -1, -1);
        PIDNickGyroACCMax = new QSpinBox(PIDNickSetup);
        PIDNickGyroACCMax->setObjectName(QString::fromUtf8("PIDNickGyroACCMax"));
        PIDNickGyroACCMax->setMaximum(255);
        PIDNickGyroACCMax->setValue(8);

        gridLayout_15->addWidget(PIDNickGyroACCMax, 0, 1, 1, 1);

        label_111 = new QLabel(PIDNickSetup);
        label_111->setObjectName(QString::fromUtf8("label_111"));

        gridLayout_15->addWidget(label_111, 2, 0, 1, 1);

        PIDNickGyroACCMin = new QSpinBox(PIDNickSetup);
        PIDNickGyroACCMin->setObjectName(QString::fromUtf8("PIDNickGyroACCMin"));
        PIDNickGyroACCMin->setMinimum(-255);
        PIDNickGyroACCMin->setMaximum(0);
        PIDNickGyroACCMin->setValue(-8);

        gridLayout_15->addWidget(PIDNickGyroACCMin, 2, 1, 1, 1);

        label_115 = new QLabel(PIDNickSetup);
        label_115->setObjectName(QString::fromUtf8("label_115"));

        gridLayout_15->addWidget(label_115, 5, 0, 1, 1);

        PIDNickP = new QSpinBox(PIDNickSetup);
        PIDNickP->setObjectName(QString::fromUtf8("PIDNickP"));
        PIDNickP->setMaximum(255);
        PIDNickP->setValue(120);

        gridLayout_15->addWidget(PIDNickP, 5, 1, 1, 1);

        label_254 = new QLabel(PIDNickSetup);
        label_254->setObjectName(QString::fromUtf8("label_254"));

        gridLayout_15->addWidget(label_254, 5, 2, 1, 1);

        label_113 = new QLabel(PIDNickSetup);
        label_113->setObjectName(QString::fromUtf8("label_113"));

        gridLayout_15->addWidget(label_113, 6, 0, 1, 1);

        PIDNickI = new QSpinBox(PIDNickSetup);
        PIDNickI->setObjectName(QString::fromUtf8("PIDNickI"));
        PIDNickI->setMaximum(255);
        PIDNickI->setValue(30);

        gridLayout_15->addWidget(PIDNickI, 6, 1, 1, 1);

        label_255 = new QLabel(PIDNickSetup);
        label_255->setObjectName(QString::fromUtf8("label_255"));

        gridLayout_15->addWidget(label_255, 6, 2, 1, 1);

        label_112 = new QLabel(PIDNickSetup);
        label_112->setObjectName(QString::fromUtf8("label_112"));

        gridLayout_15->addWidget(label_112, 7, 0, 1, 1);

        PIDNickD = new QSpinBox(PIDNickSetup);
        PIDNickD->setObjectName(QString::fromUtf8("PIDNickD"));
        PIDNickD->setMaximum(255);

        gridLayout_15->addWidget(PIDNickD, 7, 1, 1, 1);

        label_259 = new QLabel(PIDNickSetup);
        label_259->setObjectName(QString::fromUtf8("label_259"));

        gridLayout_15->addWidget(label_259, 7, 2, 1, 1);

        label_117 = new QLabel(PIDNickSetup);
        label_117->setObjectName(QString::fromUtf8("label_117"));

        gridLayout_15->addWidget(label_117, 11, 0, 1, 1);

        PIDNickGyroACCForce = new QSpinBox(PIDNickSetup);
        PIDNickGyroACCForce->setObjectName(QString::fromUtf8("PIDNickGyroACCForce"));
        PIDNickGyroACCForce->setMaximum(255);
        PIDNickGyroACCForce->setValue(40);

        gridLayout_15->addWidget(PIDNickGyroACCForce, 11, 1, 1, 1);

        label_116 = new QLabel(PIDNickSetup);
        label_116->setObjectName(QString::fromUtf8("label_116"));

        gridLayout_15->addWidget(label_116, 12, 0, 1, 1);

        PIDNickPitchForce = new QSpinBox(PIDNickSetup);
        PIDNickPitchForce->setObjectName(QString::fromUtf8("PIDNickPitchForce"));
        PIDNickPitchForce->setMaximum(255);
        PIDNickPitchForce->setValue(30);

        gridLayout_15->addWidget(PIDNickPitchForce, 12, 1, 1, 1);

        label_109 = new QLabel(PIDNickSetup);
        label_109->setObjectName(QString::fromUtf8("label_109"));

        gridLayout_15->addWidget(label_109, 0, 2, 1, 1);

        PIDNickIntegralMax = new QSpinBox(PIDNickSetup);
        PIDNickIntegralMax->setObjectName(QString::fromUtf8("PIDNickIntegralMax"));
        PIDNickIntegralMax->setMaximum(255);
        PIDNickIntegralMax->setValue(20);

        gridLayout_15->addWidget(PIDNickIntegralMax, 0, 3, 1, 1);

        label_110 = new QLabel(PIDNickSetup);
        label_110->setObjectName(QString::fromUtf8("label_110"));

        gridLayout_15->addWidget(label_110, 2, 2, 1, 1);

        PIDNickIntegralMin = new QSpinBox(PIDNickSetup);
        PIDNickIntegralMin->setObjectName(QString::fromUtf8("PIDNickIntegralMin"));
        PIDNickIntegralMin->setMinimum(-255);
        PIDNickIntegralMin->setMaximum(0);
        PIDNickIntegralMin->setValue(-20);

        gridLayout_15->addWidget(PIDNickIntegralMin, 2, 3, 1, 1);

        PIDNickACCP = new QSpinBox(PIDNickSetup);
        PIDNickACCP->setObjectName(QString::fromUtf8("PIDNickACCP"));
        PIDNickACCP->setMaximum(255);
        PIDNickACCP->setValue(120);

        gridLayout_15->addWidget(PIDNickACCP, 5, 3, 1, 1);

        PIDNickACCI = new QSpinBox(PIDNickSetup);
        PIDNickACCI->setObjectName(QString::fromUtf8("PIDNickACCI"));
        PIDNickACCI->setMaximum(255);
        PIDNickACCI->setValue(30);

        gridLayout_15->addWidget(PIDNickACCI, 6, 3, 1, 1);

        PIDNickACCD = new QSpinBox(PIDNickSetup);
        PIDNickACCD->setObjectName(QString::fromUtf8("PIDNickACCD"));
        PIDNickACCD->setMaximum(255);

        gridLayout_15->addWidget(PIDNickACCD, 7, 3, 1, 1);

        PIDNickACCForce = new QSpinBox(PIDNickSetup);
        PIDNickACCForce->setObjectName(QString::fromUtf8("PIDNickACCForce"));
        PIDNickACCForce->setMaximum(255);
        PIDNickACCForce->setValue(90);

        gridLayout_15->addWidget(PIDNickACCForce, 8, 3, 1, 1);

        label_119 = new QLabel(PIDNickSetup);
        label_119->setObjectName(QString::fromUtf8("label_119"));

        gridLayout_15->addWidget(label_119, 8, 2, 1, 1);

        PIDNickGyroForce = new QSpinBox(PIDNickSetup);
        PIDNickGyroForce->setObjectName(QString::fromUtf8("PIDNickGyroForce"));
        PIDNickGyroForce->setMaximum(255);
        PIDNickGyroForce->setValue(120);

        gridLayout_15->addWidget(PIDNickGyroForce, 8, 1, 1, 1);

        label_114 = new QLabel(PIDNickSetup);
        label_114->setObjectName(QString::fromUtf8("label_114"));

        gridLayout_15->addWidget(label_114, 8, 0, 1, 1);

        label_108 = new QLabel(PIDNickSetup);
        label_108->setObjectName(QString::fromUtf8("label_108"));

        gridLayout_15->addWidget(label_108, 0, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_15->addItem(verticalSpacer_10, 13, 1, 1, 1);

        label_150 = new QLabel(PIDNickSetup);
        label_150->setObjectName(QString::fromUtf8("label_150"));

        gridLayout_15->addWidget(label_150, 11, 2, 1, 1);

        PIDNickStickForce = new QSpinBox(PIDNickSetup);
        PIDNickStickForce->setObjectName(QString::fromUtf8("PIDNickStickForce"));
        PIDNickStickForce->setMaximum(254);
        PIDNickStickForce->setValue(120);

        gridLayout_15->addWidget(PIDNickStickForce, 11, 3, 1, 1);


        gridLayout_37->addWidget(PIDNickSetup, 0, 0, 8, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_37->addItem(horizontalSpacer_4, 1, 4, 1, 1);

        PIDStickSetup = new QGroupBox(PID);
        PIDStickSetup->setObjectName(QString::fromUtf8("PIDStickSetup"));
        PIDStickSetup->setMinimumSize(QSize(0, 0));
        PIDStickSetup->setMaximumSize(QSize(16777215, 132));
        gridLayout_16 = new QGridLayout(PIDStickSetup);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setContentsMargins(-1, 0, -1, -1);
        label_125 = new QLabel(PIDStickSetup);
        label_125->setObjectName(QString::fromUtf8("label_125"));

        gridLayout_16->addWidget(label_125, 2, 0, 1, 1);

        PIDThrottleOffset = new QSpinBox(PIDStickSetup);
        PIDThrottleOffset->setObjectName(QString::fromUtf8("PIDThrottleOffset"));
        PIDThrottleOffset->setMaximum(255);
        PIDThrottleOffset->setValue(70);

        gridLayout_16->addWidget(PIDThrottleOffset, 2, 1, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_16->addItem(verticalSpacer_13, 3, 1, 1, 1);

        label_126 = new QLabel(PIDStickSetup);
        label_126->setObjectName(QString::fromUtf8("label_126"));

        gridLayout_16->addWidget(label_126, 1, 0, 1, 1);

        PIDHeadingHold = new QComboBox(PIDStickSetup);
        PIDHeadingHold->setObjectName(QString::fromUtf8("PIDHeadingHold"));

        gridLayout_16->addWidget(PIDHeadingHold, 1, 1, 1, 1);


        gridLayout_37->addWidget(PIDStickSetup, 2, 3, 1, 1);

        mathTab->addTab(PID, QString());
        PIDSimple = new QWidget();
        PIDSimple->setObjectName(QString::fromUtf8("PIDSimple"));
        gridLayout_36 = new QGridLayout(PIDSimple);
        gridLayout_36->setObjectName(QString::fromUtf8("gridLayout_36"));
        PIDsimpleSetup = new QGroupBox(PIDSimple);
        PIDsimpleSetup->setObjectName(QString::fromUtf8("PIDsimpleSetup"));
        PIDsimpleSetup->setMinimumSize(QSize(0, 320));
        gridLayout_18 = new QGridLayout(PIDsimpleSetup);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        gridLayout_18->setContentsMargins(-1, 0, -1, -1);
        label_128 = new QLabel(PIDsimpleSetup);
        label_128->setObjectName(QString::fromUtf8("label_128"));

        gridLayout_18->addWidget(label_128, 0, 0, 1, 1);

        PIDSimpleGyroACCMax = new QSpinBox(PIDsimpleSetup);
        PIDSimpleGyroACCMax->setObjectName(QString::fromUtf8("PIDSimpleGyroACCMax"));
        PIDSimpleGyroACCMax->setMaximum(255);
        PIDSimpleGyroACCMax->setValue(28);

        gridLayout_18->addWidget(PIDSimpleGyroACCMax, 0, 1, 1, 1);

        label_132 = new QLabel(PIDsimpleSetup);
        label_132->setObjectName(QString::fromUtf8("label_132"));

        gridLayout_18->addWidget(label_132, 1, 0, 1, 1);

        PIDSimpleGyroACCMin = new QSpinBox(PIDsimpleSetup);
        PIDSimpleGyroACCMin->setObjectName(QString::fromUtf8("PIDSimpleGyroACCMin"));
        PIDSimpleGyroACCMin->setMinimum(-255);
        PIDSimpleGyroACCMin->setMaximum(0);
        PIDSimpleGyroACCMin->setValue(-28);

        gridLayout_18->addWidget(PIDSimpleGyroACCMin, 1, 1, 1, 1);

        label_133 = new QLabel(PIDsimpleSetup);
        label_133->setObjectName(QString::fromUtf8("label_133"));

        gridLayout_18->addWidget(label_133, 8, 0, 1, 1);

        PIDSimpleD = new QSpinBox(PIDsimpleSetup);
        PIDSimpleD->setObjectName(QString::fromUtf8("PIDSimpleD"));
        PIDSimpleD->setMaximum(255);

        gridLayout_18->addWidget(PIDSimpleD, 8, 1, 1, 1);

        label_135 = new QLabel(PIDsimpleSetup);
        label_135->setObjectName(QString::fromUtf8("label_135"));

        gridLayout_18->addWidget(label_135, 9, 0, 1, 1);

        PIDSimpleGyroForce = new QSpinBox(PIDsimpleSetup);
        PIDSimpleGyroForce->setObjectName(QString::fromUtf8("PIDSimpleGyroForce"));
        PIDSimpleGyroForce->setMaximum(255);
        PIDSimpleGyroForce->setValue(100);

        gridLayout_18->addWidget(PIDSimpleGyroForce, 9, 1, 1, 1);

        label_138 = new QLabel(PIDsimpleSetup);
        label_138->setObjectName(QString::fromUtf8("label_138"));

        gridLayout_18->addWidget(label_138, 11, 0, 1, 1);

        PIDSimpleGyroACCForce = new QSpinBox(PIDsimpleSetup);
        PIDSimpleGyroACCForce->setObjectName(QString::fromUtf8("PIDSimpleGyroACCForce"));
        PIDSimpleGyroACCForce->setMaximum(255);
        PIDSimpleGyroACCForce->setValue(40);

        gridLayout_18->addWidget(PIDSimpleGyroACCForce, 11, 1, 1, 1);

        label_137 = new QLabel(PIDsimpleSetup);
        label_137->setObjectName(QString::fromUtf8("label_137"));

        gridLayout_18->addWidget(label_137, 12, 0, 1, 1);

        PIDSimplePitchForce = new QSpinBox(PIDsimpleSetup);
        PIDSimplePitchForce->setObjectName(QString::fromUtf8("PIDSimplePitchForce"));
        PIDSimplePitchForce->setMaximum(255);
        PIDSimplePitchForce->setValue(40);

        gridLayout_18->addWidget(PIDSimplePitchForce, 12, 1, 1, 1);

        label_136 = new QLabel(PIDsimpleSetup);
        label_136->setObjectName(QString::fromUtf8("label_136"));

        gridLayout_18->addWidget(label_136, 4, 0, 1, 1);

        PIDSimpleP = new QSpinBox(PIDsimpleSetup);
        PIDSimpleP->setObjectName(QString::fromUtf8("PIDSimpleP"));
        PIDSimpleP->setMaximum(255);
        PIDSimpleP->setValue(100);

        gridLayout_18->addWidget(PIDSimpleP, 4, 1, 1, 1);

        label_260 = new QLabel(PIDsimpleSetup);
        label_260->setObjectName(QString::fromUtf8("label_260"));

        gridLayout_18->addWidget(label_260, 4, 2, 1, 1);

        label_265 = new QLabel(PIDsimpleSetup);
        label_265->setObjectName(QString::fromUtf8("label_265"));

        gridLayout_18->addWidget(label_265, 8, 2, 1, 1);

        label_140 = new QLabel(PIDsimpleSetup);
        label_140->setObjectName(QString::fromUtf8("label_140"));

        gridLayout_18->addWidget(label_140, 9, 2, 1, 1);

        label_130 = new QLabel(PIDsimpleSetup);
        label_130->setObjectName(QString::fromUtf8("label_130"));

        gridLayout_18->addWidget(label_130, 0, 2, 1, 1);

        PIDSimpleIntegralMax = new QSpinBox(PIDsimpleSetup);
        PIDSimpleIntegralMax->setObjectName(QString::fromUtf8("PIDSimpleIntegralMax"));
        PIDSimpleIntegralMax->setMaximum(255);
        PIDSimpleIntegralMax->setValue(40);

        gridLayout_18->addWidget(PIDSimpleIntegralMax, 0, 3, 1, 1);

        PIDSimpleACCP = new QSpinBox(PIDsimpleSetup);
        PIDSimpleACCP->setObjectName(QString::fromUtf8("PIDSimpleACCP"));
        PIDSimpleACCP->setMaximum(255);
        PIDSimpleACCP->setValue(100);

        gridLayout_18->addWidget(PIDSimpleACCP, 4, 3, 1, 1);

        PIDSimpleACCI = new QSpinBox(PIDsimpleSetup);
        PIDSimpleACCI->setObjectName(QString::fromUtf8("PIDSimpleACCI"));
        PIDSimpleACCI->setMaximum(255);
        PIDSimpleACCI->setValue(70);

        gridLayout_18->addWidget(PIDSimpleACCI, 5, 3, 1, 1);

        label_264 = new QLabel(PIDsimpleSetup);
        label_264->setObjectName(QString::fromUtf8("label_264"));

        gridLayout_18->addWidget(label_264, 5, 2, 1, 1);

        PIDSimpleACCD = new QSpinBox(PIDsimpleSetup);
        PIDSimpleACCD->setObjectName(QString::fromUtf8("PIDSimpleACCD"));
        PIDSimpleACCD->setMaximum(255);

        gridLayout_18->addWidget(PIDSimpleACCD, 8, 3, 1, 1);

        PIDSimpleACCForce = new QSpinBox(PIDsimpleSetup);
        PIDSimpleACCForce->setObjectName(QString::fromUtf8("PIDSimpleACCForce"));
        PIDSimpleACCForce->setMaximum(255);
        PIDSimpleACCForce->setValue(155);

        gridLayout_18->addWidget(PIDSimpleACCForce, 9, 3, 1, 1);

        label_131 = new QLabel(PIDsimpleSetup);
        label_131->setObjectName(QString::fromUtf8("label_131"));

        gridLayout_18->addWidget(label_131, 1, 2, 1, 1);

        PIDSimpleIntegralMin = new QSpinBox(PIDsimpleSetup);
        PIDSimpleIntegralMin->setObjectName(QString::fromUtf8("PIDSimpleIntegralMin"));
        PIDSimpleIntegralMin->setMinimum(-255);
        PIDSimpleIntegralMin->setMaximum(0);
        PIDSimpleIntegralMin->setValue(-40);

        gridLayout_18->addWidget(PIDSimpleIntegralMin, 1, 3, 1, 1);

        PIDSimpleI = new QSpinBox(PIDsimpleSetup);
        PIDSimpleI->setObjectName(QString::fromUtf8("PIDSimpleI"));
        PIDSimpleI->setMaximum(255);
        PIDSimpleI->setValue(70);

        gridLayout_18->addWidget(PIDSimpleI, 5, 1, 1, 1);

        label_134 = new QLabel(PIDsimpleSetup);
        label_134->setObjectName(QString::fromUtf8("label_134"));

        gridLayout_18->addWidget(label_134, 5, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_18->addItem(verticalSpacer_8, 13, 1, 1, 1);

        label_151 = new QLabel(PIDsimpleSetup);
        label_151->setObjectName(QString::fromUtf8("label_151"));

        gridLayout_18->addWidget(label_151, 11, 2, 1, 1);

        PIDSimpleStickForce = new QSpinBox(PIDsimpleSetup);
        PIDSimpleStickForce->setObjectName(QString::fromUtf8("PIDSimpleStickForce"));
        PIDSimpleStickForce->setMaximum(255);
        PIDSimpleStickForce->setValue(120);

        gridLayout_18->addWidget(PIDSimpleStickForce, 11, 3, 1, 1);


        gridLayout_36->addWidget(PIDsimpleSetup, 1, 0, 5, 1);

        PIDSimplePitchSetup = new QGroupBox(PIDSimple);
        PIDSimplePitchSetup->setObjectName(QString::fromUtf8("PIDSimplePitchSetup"));
        PIDSimplePitchSetup->setMinimumSize(QSize(0, 205));
        gridLayout_19 = new QGridLayout(PIDSimplePitchSetup);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        gridLayout_19->setContentsMargins(-1, 0, -1, -1);
        label_220 = new QLabel(PIDSimplePitchSetup);
        label_220->setObjectName(QString::fromUtf8("label_220"));

        gridLayout_19->addWidget(label_220, 0, 0, 1, 1);

        PIDSimplePitchIntegralMax = new QSpinBox(PIDSimplePitchSetup);
        PIDSimplePitchIntegralMax->setObjectName(QString::fromUtf8("PIDSimplePitchIntegralMax"));
        PIDSimplePitchIntegralMax->setFont(font);
        PIDSimplePitchIntegralMax->setMaximum(255);
        PIDSimplePitchIntegralMax->setValue(40);

        gridLayout_19->addWidget(PIDSimplePitchIntegralMax, 0, 1, 1, 1);

        label_219 = new QLabel(PIDSimplePitchSetup);
        label_219->setObjectName(QString::fromUtf8("label_219"));

        gridLayout_19->addWidget(label_219, 1, 0, 1, 1);

        PIDSimplePitchIntegralMin = new QSpinBox(PIDSimplePitchSetup);
        PIDSimplePitchIntegralMin->setObjectName(QString::fromUtf8("PIDSimplePitchIntegralMin"));
        PIDSimplePitchIntegralMin->setFont(font);
        PIDSimplePitchIntegralMin->setMinimum(-255);
        PIDSimplePitchIntegralMin->setMaximum(0);
        PIDSimplePitchIntegralMin->setValue(-40);

        gridLayout_19->addWidget(PIDSimplePitchIntegralMin, 1, 1, 1, 1);

        label_141 = new QLabel(PIDSimplePitchSetup);
        label_141->setObjectName(QString::fromUtf8("label_141"));

        gridLayout_19->addWidget(label_141, 2, 0, 1, 1);

        PIDSimplePitchP = new QSpinBox(PIDSimplePitchSetup);
        PIDSimplePitchP->setObjectName(QString::fromUtf8("PIDSimplePitchP"));
        PIDSimplePitchP->setMaximum(255);
        PIDSimplePitchP->setValue(120);

        gridLayout_19->addWidget(PIDSimplePitchP, 2, 1, 1, 1);

        label_144 = new QLabel(PIDSimplePitchSetup);
        label_144->setObjectName(QString::fromUtf8("label_144"));

        gridLayout_19->addWidget(label_144, 3, 0, 1, 1);

        PIDSimplePitchI = new QSpinBox(PIDSimplePitchSetup);
        PIDSimplePitchI->setObjectName(QString::fromUtf8("PIDSimplePitchI"));
        PIDSimplePitchI->setMaximum(255);
        PIDSimplePitchI->setValue(80);

        gridLayout_19->addWidget(PIDSimplePitchI, 3, 1, 1, 1);

        label_142 = new QLabel(PIDSimplePitchSetup);
        label_142->setObjectName(QString::fromUtf8("label_142"));

        gridLayout_19->addWidget(label_142, 4, 0, 1, 1);

        PIDSimplePitchD = new QSpinBox(PIDSimplePitchSetup);
        PIDSimplePitchD->setObjectName(QString::fromUtf8("PIDSimplePitchD"));
        PIDSimplePitchD->setMaximum(255);
        PIDSimplePitchD->setValue(70);

        gridLayout_19->addWidget(PIDSimplePitchD, 4, 1, 1, 1);

        label_143 = new QLabel(PIDSimplePitchSetup);
        label_143->setObjectName(QString::fromUtf8("label_143"));

        gridLayout_19->addWidget(label_143, 5, 0, 1, 1);

        PIDSimplePitchGyroForce = new QSpinBox(PIDSimplePitchSetup);
        PIDSimplePitchGyroForce->setObjectName(QString::fromUtf8("PIDSimplePitchGyroForce"));
        PIDSimplePitchGyroForce->setMaximum(255);
        PIDSimplePitchGyroForce->setValue(70);

        gridLayout_19->addWidget(PIDSimplePitchGyroForce, 5, 1, 1, 1);

        label_146 = new QLabel(PIDSimplePitchSetup);
        label_146->setObjectName(QString::fromUtf8("label_146"));

        gridLayout_19->addWidget(label_146, 6, 0, 1, 1);

        PIDSimplePitchThrottleOffset = new QSpinBox(PIDSimplePitchSetup);
        PIDSimplePitchThrottleOffset->setObjectName(QString::fromUtf8("PIDSimplePitchThrottleOffset"));
        PIDSimplePitchThrottleOffset->setMaximum(254);
        PIDSimplePitchThrottleOffset->setValue(120);

        gridLayout_19->addWidget(PIDSimplePitchThrottleOffset, 6, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_19->addItem(verticalSpacer, 8, 0, 1, 1);

        label_148 = new QLabel(PIDSimplePitchSetup);
        label_148->setObjectName(QString::fromUtf8("label_148"));

        gridLayout_19->addWidget(label_148, 7, 0, 1, 1);

        PIDSimplePitchStickForce = new QSpinBox(PIDSimplePitchSetup);
        PIDSimplePitchStickForce->setObjectName(QString::fromUtf8("PIDSimplePitchStickForce"));
        PIDSimplePitchStickForce->setMaximum(255);
        PIDSimplePitchStickForce->setValue(55);

        gridLayout_19->addWidget(PIDSimplePitchStickForce, 7, 1, 1, 1);


        gridLayout_36->addWidget(PIDSimplePitchSetup, 1, 1, 5, 1);

        PIDSimpleStickSetup = new QGroupBox(PIDSimple);
        PIDSimpleStickSetup->setObjectName(QString::fromUtf8("PIDSimpleStickSetup"));
        PIDSimpleStickSetup->setMinimumSize(QSize(180, 0));
        PIDSimpleStickSetup->setMaximumSize(QSize(180, 16777215));
        gridLayout_20 = new QGridLayout(PIDSimpleStickSetup);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        gridLayout_20->setContentsMargins(-1, 0, -1, -1);
        label_221 = new QLabel(PIDSimpleStickSetup);
        label_221->setObjectName(QString::fromUtf8("label_221"));

        gridLayout_20->addWidget(label_221, 2, 0, 1, 1);

        PIDSimpleThrottleOffset = new QSpinBox(PIDSimpleStickSetup);
        PIDSimpleThrottleOffset->setObjectName(QString::fromUtf8("PIDSimpleThrottleOffset"));
        PIDSimpleThrottleOffset->setFont(font);
        PIDSimpleThrottleOffset->setMaximum(120);
        PIDSimpleThrottleOffset->setValue(70);

        gridLayout_20->addWidget(PIDSimpleThrottleOffset, 2, 1, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_20->addItem(verticalSpacer_9, 3, 0, 1, 1);

        label_152 = new QLabel(PIDSimpleStickSetup);
        label_152->setObjectName(QString::fromUtf8("label_152"));

        gridLayout_20->addWidget(label_152, 0, 0, 1, 1);

        PIDSimpleHeadingHold = new QComboBox(PIDSimpleStickSetup);
        PIDSimpleHeadingHold->setObjectName(QString::fromUtf8("PIDSimpleHeadingHold"));

        gridLayout_20->addWidget(PIDSimpleHeadingHold, 0, 1, 1, 1);


        gridLayout_36->addWidget(PIDSimpleStickSetup, 1, 2, 5, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_36->addItem(verticalSpacer_5, 6, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_36->addItem(horizontalSpacer_2, 5, 3, 1, 1);

        readPID = new QPushButton(PIDSimple);
        readPID->setObjectName(QString::fromUtf8("readPID"));
        readPID->setMinimumSize(QSize(80, 0));
        readPID->setMaximumSize(QSize(80, 16777215));

        gridLayout_36->addWidget(readPID, 1, 3, 1, 1);

        usePIDSimple = new QPushButton(PIDSimple);
        usePIDSimple->setObjectName(QString::fromUtf8("usePIDSimple"));
        usePIDSimple->setMinimumSize(QSize(80, 0));
        usePIDSimple->setMaximumSize(QSize(80, 16777215));

        gridLayout_36->addWidget(usePIDSimple, 2, 3, 1, 1);

        mathTab->addTab(PIDSimple, QString());
        Kalman = new QWidget();
        Kalman->setObjectName(QString::fromUtf8("Kalman"));
        textEdit = new QTextEdit(Kalman);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(30, 30, 331, 41));
        textEdit->setAcceptDrops(false);
        mathTab->addTab(Kalman, QString());

        gridLayout_62->addWidget(mathTab, 0, 1, 1, 1);

        settingsTab->addTab(math, QString());
        userSettings = new QWidget();
        userSettings->setObjectName(QString::fromUtf8("userSettings"));
        gridLayout_40 = new QGridLayout(userSettings);
        gridLayout_40->setObjectName(QString::fromUtf8("gridLayout_40"));
        userSettings_2 = new QGroupBox(userSettings);
        userSettings_2->setObjectName(QString::fromUtf8("userSettings_2"));
        gridLayout_33 = new QGridLayout(userSettings_2);
        gridLayout_33->setObjectName(QString::fromUtf8("gridLayout_33"));
        gridLayout_33->setContentsMargins(-1, 1, -1, 1);
        label_179 = new QLabel(userSettings_2);
        label_179->setObjectName(QString::fromUtf8("label_179"));

        gridLayout_33->addWidget(label_179, 0, 0, 1, 1);

        userSet1 = new QComboBox(userSettings_2);
        userSet1->setObjectName(QString::fromUtf8("userSet1"));
        userSet1->setEditable(true);
        userSet1->setMaxCount(240);
        userSet1->setModelColumn(0);

        gridLayout_33->addWidget(userSet1, 0, 1, 1, 1);

        label_65 = new QLabel(userSettings_2);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        label_65->setFont(font);

        gridLayout_33->addWidget(label_65, 0, 2, 1, 1);

        label_182 = new QLabel(userSettings_2);
        label_182->setObjectName(QString::fromUtf8("label_182"));

        gridLayout_33->addWidget(label_182, 1, 0, 1, 1);

        userSet2 = new QComboBox(userSettings_2);
        userSet2->setObjectName(QString::fromUtf8("userSet2"));
        userSet2->setEditable(true);
        userSet2->setMaxCount(240);
        userSet2->setModelColumn(0);

        gridLayout_33->addWidget(userSet2, 1, 1, 1, 1);

        label_66 = new QLabel(userSettings_2);
        label_66->setObjectName(QString::fromUtf8("label_66"));
        label_66->setFont(font);

        gridLayout_33->addWidget(label_66, 1, 2, 1, 1);

        label_180 = new QLabel(userSettings_2);
        label_180->setObjectName(QString::fromUtf8("label_180"));

        gridLayout_33->addWidget(label_180, 2, 0, 1, 1);

        userSet3 = new QComboBox(userSettings_2);
        userSet3->setObjectName(QString::fromUtf8("userSet3"));
        userSet3->setEditable(true);
        userSet3->setMaxCount(240);
        userSet3->setModelColumn(0);

        gridLayout_33->addWidget(userSet3, 2, 1, 1, 1);

        label_67 = new QLabel(userSettings_2);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        label_67->setFont(font);

        gridLayout_33->addWidget(label_67, 2, 2, 1, 1);

        label_181 = new QLabel(userSettings_2);
        label_181->setObjectName(QString::fromUtf8("label_181"));

        gridLayout_33->addWidget(label_181, 3, 0, 1, 1);

        userSet4 = new QComboBox(userSettings_2);
        userSet4->setObjectName(QString::fromUtf8("userSet4"));
        userSet4->setEditable(true);
        userSet4->setMaxCount(240);
        userSet4->setModelColumn(0);

        gridLayout_33->addWidget(userSet4, 3, 1, 1, 1);

        label_68 = new QLabel(userSettings_2);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        label_68->setFont(font);

        gridLayout_33->addWidget(label_68, 3, 2, 1, 1);

        label_186 = new QLabel(userSettings_2);
        label_186->setObjectName(QString::fromUtf8("label_186"));

        gridLayout_33->addWidget(label_186, 4, 0, 1, 1);

        userSet5 = new QComboBox(userSettings_2);
        userSet5->setObjectName(QString::fromUtf8("userSet5"));
        userSet5->setEditable(true);
        userSet5->setMaxCount(240);
        userSet5->setModelColumn(0);

        gridLayout_33->addWidget(userSet5, 4, 1, 1, 1);

        label_69 = new QLabel(userSettings_2);
        label_69->setObjectName(QString::fromUtf8("label_69"));
        label_69->setFont(font);

        gridLayout_33->addWidget(label_69, 4, 2, 1, 1);

        label_184 = new QLabel(userSettings_2);
        label_184->setObjectName(QString::fromUtf8("label_184"));

        gridLayout_33->addWidget(label_184, 5, 0, 1, 1);

        userSet6 = new QComboBox(userSettings_2);
        userSet6->setObjectName(QString::fromUtf8("userSet6"));
        userSet6->setEditable(true);
        userSet6->setMaxCount(240);
        userSet6->setModelColumn(0);

        gridLayout_33->addWidget(userSet6, 5, 1, 1, 1);

        label_96 = new QLabel(userSettings_2);
        label_96->setObjectName(QString::fromUtf8("label_96"));
        label_96->setFont(font);

        gridLayout_33->addWidget(label_96, 5, 2, 1, 1);

        label_183 = new QLabel(userSettings_2);
        label_183->setObjectName(QString::fromUtf8("label_183"));

        gridLayout_33->addWidget(label_183, 6, 0, 1, 1);

        userSet7 = new QComboBox(userSettings_2);
        userSet7->setObjectName(QString::fromUtf8("userSet7"));
        userSet7->setEditable(true);
        userSet7->setMaxCount(240);
        userSet7->setModelColumn(0);

        gridLayout_33->addWidget(userSet7, 6, 1, 1, 1);

        label_97 = new QLabel(userSettings_2);
        label_97->setObjectName(QString::fromUtf8("label_97"));
        label_97->setFont(font);

        gridLayout_33->addWidget(label_97, 6, 2, 1, 1);

        label_185 = new QLabel(userSettings_2);
        label_185->setObjectName(QString::fromUtf8("label_185"));

        gridLayout_33->addWidget(label_185, 7, 0, 1, 1);

        userSet8 = new QComboBox(userSettings_2);
        userSet8->setObjectName(QString::fromUtf8("userSet8"));
        userSet8->setEditable(true);
        userSet8->setMaxCount(240);
        userSet8->setModelColumn(0);

        gridLayout_33->addWidget(userSet8, 7, 1, 1, 1);

        label_98 = new QLabel(userSettings_2);
        label_98->setObjectName(QString::fromUtf8("label_98"));
        label_98->setFont(font);

        gridLayout_33->addWidget(label_98, 7, 2, 1, 1);

        label_190 = new QLabel(userSettings_2);
        label_190->setObjectName(QString::fromUtf8("label_190"));

        gridLayout_33->addWidget(label_190, 8, 0, 1, 1);

        userSet9 = new QComboBox(userSettings_2);
        userSet9->setObjectName(QString::fromUtf8("userSet9"));
        userSet9->setEditable(true);
        userSet9->setMaxCount(240);
        userSet9->setModelColumn(0);

        gridLayout_33->addWidget(userSet9, 8, 1, 1, 1);

        label_99 = new QLabel(userSettings_2);
        label_99->setObjectName(QString::fromUtf8("label_99"));
        label_99->setFont(font);

        gridLayout_33->addWidget(label_99, 8, 2, 1, 1);

        label_188 = new QLabel(userSettings_2);
        label_188->setObjectName(QString::fromUtf8("label_188"));

        gridLayout_33->addWidget(label_188, 9, 0, 1, 1);

        userSet10 = new QComboBox(userSettings_2);
        userSet10->setObjectName(QString::fromUtf8("userSet10"));
        userSet10->setEditable(true);
        userSet10->setMaxCount(240);
        userSet10->setModelColumn(0);

        gridLayout_33->addWidget(userSet10, 9, 1, 1, 1);

        label_100 = new QLabel(userSettings_2);
        label_100->setObjectName(QString::fromUtf8("label_100"));
        label_100->setFont(font);

        gridLayout_33->addWidget(label_100, 9, 2, 1, 1);


        gridLayout_40->addWidget(userSettings_2, 0, 0, 1, 1);

        userSettings_3 = new QGroupBox(userSettings);
        userSettings_3->setObjectName(QString::fromUtf8("userSettings_3"));
        gridLayout_34 = new QGridLayout(userSettings_3);
        gridLayout_34->setObjectName(QString::fromUtf8("gridLayout_34"));
        gridLayout_34->setContentsMargins(-1, 1, -1, 1);
        label_187 = new QLabel(userSettings_3);
        label_187->setObjectName(QString::fromUtf8("label_187"));

        gridLayout_34->addWidget(label_187, 0, 0, 1, 1);

        userSet11 = new QComboBox(userSettings_3);
        userSet11->setObjectName(QString::fromUtf8("userSet11"));
        userSet11->setEditable(true);
        userSet11->setMaxVisibleItems(13);
        userSet11->setMaxCount(240);
        userSet11->setModelColumn(0);

        gridLayout_34->addWidget(userSet11, 0, 1, 1, 1);

        label_102 = new QLabel(userSettings_3);
        label_102->setObjectName(QString::fromUtf8("label_102"));
        label_102->setFont(font);

        gridLayout_34->addWidget(label_102, 0, 2, 1, 1);

        label_192 = new QLabel(userSettings_3);
        label_192->setObjectName(QString::fromUtf8("label_192"));

        gridLayout_34->addWidget(label_192, 1, 0, 1, 1);

        userSet12 = new QComboBox(userSettings_3);
        userSet12->setObjectName(QString::fromUtf8("userSet12"));
        userSet12->setEditable(true);
        userSet12->setMaxCount(240);
        userSet12->setModelColumn(0);

        gridLayout_34->addWidget(userSet12, 1, 1, 1, 1);

        label_129 = new QLabel(userSettings_3);
        label_129->setObjectName(QString::fromUtf8("label_129"));
        label_129->setFont(font);

        gridLayout_34->addWidget(label_129, 1, 2, 1, 1);

        label_189 = new QLabel(userSettings_3);
        label_189->setObjectName(QString::fromUtf8("label_189"));

        gridLayout_34->addWidget(label_189, 2, 0, 1, 1);

        userSet13 = new QComboBox(userSettings_3);
        userSet13->setObjectName(QString::fromUtf8("userSet13"));
        userSet13->setEditable(true);
        userSet13->setMaxCount(240);
        userSet13->setModelColumn(0);

        gridLayout_34->addWidget(userSet13, 2, 1, 1, 1);

        label_107 = new QLabel(userSettings_3);
        label_107->setObjectName(QString::fromUtf8("label_107"));
        label_107->setFont(font);

        gridLayout_34->addWidget(label_107, 2, 2, 1, 1);

        label_191 = new QLabel(userSettings_3);
        label_191->setObjectName(QString::fromUtf8("label_191"));

        gridLayout_34->addWidget(label_191, 3, 0, 1, 1);

        userSet14 = new QComboBox(userSettings_3);
        userSet14->setObjectName(QString::fromUtf8("userSet14"));
        userSet14->setEditable(true);
        userSet14->setMaxCount(240);
        userSet14->setModelColumn(0);

        gridLayout_34->addWidget(userSet14, 3, 1, 1, 1);

        label_211 = new QLabel(userSettings_3);
        label_211->setObjectName(QString::fromUtf8("label_211"));
        label_211->setFont(font);

        gridLayout_34->addWidget(label_211, 3, 2, 1, 1);

        label_196 = new QLabel(userSettings_3);
        label_196->setObjectName(QString::fromUtf8("label_196"));

        gridLayout_34->addWidget(label_196, 4, 0, 1, 1);

        userSet15 = new QComboBox(userSettings_3);
        userSet15->setObjectName(QString::fromUtf8("userSet15"));
        userSet15->setEditable(true);
        userSet15->setMaxCount(240);
        userSet15->setModelColumn(0);

        gridLayout_34->addWidget(userSet15, 4, 1, 1, 1);

        label_106 = new QLabel(userSettings_3);
        label_106->setObjectName(QString::fromUtf8("label_106"));
        label_106->setFont(font);

        gridLayout_34->addWidget(label_106, 4, 2, 1, 1);

        label_194 = new QLabel(userSettings_3);
        label_194->setObjectName(QString::fromUtf8("label_194"));

        gridLayout_34->addWidget(label_194, 5, 0, 1, 1);

        userSet16 = new QComboBox(userSettings_3);
        userSet16->setObjectName(QString::fromUtf8("userSet16"));
        userSet16->setEditable(true);
        userSet16->setMaxCount(240);
        userSet16->setModelColumn(0);

        gridLayout_34->addWidget(userSet16, 5, 1, 1, 1);

        label_105 = new QLabel(userSettings_3);
        label_105->setObjectName(QString::fromUtf8("label_105"));
        label_105->setFont(font);

        gridLayout_34->addWidget(label_105, 5, 2, 1, 1);

        label_193 = new QLabel(userSettings_3);
        label_193->setObjectName(QString::fromUtf8("label_193"));

        gridLayout_34->addWidget(label_193, 6, 0, 1, 1);

        userSet17 = new QComboBox(userSettings_3);
        userSet17->setObjectName(QString::fromUtf8("userSet17"));
        userSet17->setEditable(true);
        userSet17->setMaxCount(240);
        userSet17->setModelColumn(0);

        gridLayout_34->addWidget(userSet17, 6, 1, 1, 1);

        label_149 = new QLabel(userSettings_3);
        label_149->setObjectName(QString::fromUtf8("label_149"));
        label_149->setFont(font);

        gridLayout_34->addWidget(label_149, 6, 2, 1, 1);

        label_195 = new QLabel(userSettings_3);
        label_195->setObjectName(QString::fromUtf8("label_195"));

        gridLayout_34->addWidget(label_195, 7, 0, 1, 1);

        userSet18 = new QComboBox(userSettings_3);
        userSet18->setObjectName(QString::fromUtf8("userSet18"));
        userSet18->setEditable(true);
        userSet18->setMaxCount(240);
        userSet18->setModelColumn(0);

        gridLayout_34->addWidget(userSet18, 7, 1, 1, 1);

        label_103 = new QLabel(userSettings_3);
        label_103->setObjectName(QString::fromUtf8("label_103"));
        label_103->setFont(font);

        gridLayout_34->addWidget(label_103, 7, 2, 1, 1);

        label_198 = new QLabel(userSettings_3);
        label_198->setObjectName(QString::fromUtf8("label_198"));

        gridLayout_34->addWidget(label_198, 8, 0, 1, 1);

        userSet19 = new QComboBox(userSettings_3);
        userSet19->setObjectName(QString::fromUtf8("userSet19"));
        userSet19->setEditable(true);
        userSet19->setMaxCount(240);
        userSet19->setModelColumn(0);

        gridLayout_34->addWidget(userSet19, 8, 1, 1, 1);

        label_104 = new QLabel(userSettings_3);
        label_104->setObjectName(QString::fromUtf8("label_104"));
        label_104->setFont(font);

        gridLayout_34->addWidget(label_104, 8, 2, 1, 1);

        label_197 = new QLabel(userSettings_3);
        label_197->setObjectName(QString::fromUtf8("label_197"));

        gridLayout_34->addWidget(label_197, 9, 0, 1, 1);

        userSet20 = new QComboBox(userSettings_3);
        userSet20->setObjectName(QString::fromUtf8("userSet20"));
        userSet20->setEditable(true);
        userSet20->setMaxCount(240);
        userSet20->setModelColumn(0);

        gridLayout_34->addWidget(userSet20, 9, 1, 1, 1);

        label_101 = new QLabel(userSettings_3);
        label_101->setObjectName(QString::fromUtf8("label_101"));
        label_101->setFont(font);

        gridLayout_34->addWidget(label_101, 9, 2, 1, 1);


        gridLayout_40->addWidget(userSettings_3, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_40->addItem(horizontalSpacer_7, 0, 2, 1, 1);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_40->addItem(verticalSpacer_15, 1, 0, 1, 1);

        settingsTab->addTab(userSettings, QString());
        osiFCsettings = new QWidget();
        osiFCsettings->setObjectName(QString::fromUtf8("osiFCsettings"));
        gridLayout_66 = new QGridLayout(osiFCsettings);
        gridLayout_66->setObjectName(QString::fromUtf8("gridLayout_66"));
        comPortPlace = new QGroupBox(osiFCsettings);
        comPortPlace->setObjectName(QString::fromUtf8("comPortPlace"));
        gridLayout_65 = new QGridLayout(comPortPlace);
        gridLayout_65->setObjectName(QString::fromUtf8("gridLayout_65"));
        label_64 = new QLabel(comPortPlace);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setFont(font);
        label_64->setCursor(QCursor(Qt::ArrowCursor));

        gridLayout_65->addWidget(label_64, 0, 0, 1, 1);

        comPort = new QComboBox(comPortPlace);
        comPort->setObjectName(QString::fromUtf8("comPort"));

        gridLayout_65->addWidget(comPort, 0, 1, 1, 1);


        gridLayout_66->addWidget(comPortPlace, 0, 0, 1, 1);

        verticalSpacer_34 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_66->addItem(verticalSpacer_34, 1, 0, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_66->addItem(horizontalSpacer_13, 0, 2, 1, 1);

        groupBox_6 = new QGroupBox(osiFCsettings);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_63 = new QGridLayout(groupBox_6);
        gridLayout_63->setObjectName(QString::fromUtf8("gridLayout_63"));
        checkBox_2 = new QCheckBox(groupBox_6);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setChecked(true);

        gridLayout_63->addWidget(checkBox_2, 0, 0, 1, 1);


        gridLayout_66->addWidget(groupBox_6, 0, 1, 1, 1);

        settingsTab->addTab(osiFCsettings, QString());

        retranslateUi(wdg_settingsTab);

        settingsTab->setCurrentIndex(5);
        BTMode->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(1);
        baroChan->setCurrentIndex(4);
        tabWidget_3->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(0);
        mathTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(wdg_settingsTab);
    } // setupUi

    void retranslateUi(QWidget *wdg_settingsTab)
    {
        wdg_settingsTab->setWindowTitle(QApplication::translate("wdg_settingsTab", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        basicSettings->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        gasSetup->setTitle(QApplication::translate("wdg_settingsTab", "Gas Setup", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("wdg_settingsTab", "Sys Gas Max", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sysGasMax->setToolTip(QApplication::translate("wdg_settingsTab", "This setup is to controll how much Throtle the system will alow after stick and math has be processed. Its kind of a limiter so handle with care. \n"
"After you did some experimenting and your sure your flyer works as expected set this to 254.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("wdg_settingsTab", "Sys Gas Min", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("wdg_settingsTab", "Emergency Gas", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("wdg_settingsTab", "Emg Gas Duration", 0, QApplication::UnicodeUTF8));
        ClockSetup->setTitle(QApplication::translate("wdg_settingsTab", "Clock Setup", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("wdg_settingsTab", "Calc wait", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        calcWait->setToolTip(QApplication::translate("wdg_settingsTab", "Wait how many main cycles to start a calculation cycle.\n"
"This is athe poor mans solution for this. But for now it works fine ;)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_12->setText(QApplication::translate("wdg_settingsTab", "Telemetrie wait", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        telemetrieWait->setToolTip(QApplication::translate("wdg_settingsTab", "How many calc cycles to wait to print out telemetri.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_10->setText(QApplication::translate("wdg_settingsTab", "Component wait", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        componentWait->setToolTip(QApplication::translate("wdg_settingsTab", "How many calc cycles to wait to read the componets data.\n"
"For now this is the compass.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_11->setText(QApplication::translate("wdg_settingsTab", "ADC Clock Div", 0, QApplication::UnicodeUTF8));
        ESCSetup->setTitle(QApplication::translate("wdg_settingsTab", "ESC Setup", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("wdg_settingsTab", "ESC Max", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("wdg_settingsTab", "ESC Type", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("wdg_settingsTab", "ESC Base Address", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("wdg_settingsTab", "ESC Address Hop", 0, QApplication::UnicodeUTF8));
        ESCType->clear();
        ESCType->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "I2C MK", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "I2C YGE", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "PPM", 0, QApplication::UnicodeUTF8)
        );
        miscSetup->setTitle(QApplication::translate("wdg_settingsTab", "Misc Setup", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("wdg_settingsTab", "Calc Mode", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("wdg_settingsTab", "Low Voltage", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("wdg_settingsTab", "Main Direction", 0, QApplication::UnicodeUTF8));
        calcMode->clear();
        calcMode->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "PID", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "PD", 0, QApplication::UnicodeUTF8)
        );
        mainDirection->clear();
        mainDirection->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "Normal +", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "90\302\260 + Mode", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "180\302\260 + Mode", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "270\302\260 + Mode", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "45\302\260 X Mode", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "135\302\260 X Mode", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "225\302\260 X Mode", 0, QApplication::UnicodeUTF8)
        );
        groupBox->setTitle(QApplication::translate("wdg_settingsTab", "BlueTooth Setup", 0, QApplication::UnicodeUTF8));
        label_250->setText(QApplication::translate("wdg_settingsTab", "BT Mode", 0, QApplication::UnicodeUTF8));
        BTMode->clear();
        BTMode->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "BT Disabled", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "BT Enabled", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "BT Exclusive", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        BTMode->setToolTip(QApplication::translate("wdg_settingsTab", "This enables the bluetooth serial to send telemetrie data.\n"
"Anyways bluetooth will always accept setup data. \n"
"You can even send setup data during flight. \n"
"\n"
"But in no case think about flashing in flight. \n"
"Inflight flashing will cut the engines off!", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        settingsTab->setTabText(settingsTab->indexOf(basicSettings), QApplication::translate("wdg_settingsTab", "Basic Settings", 0, QApplication::UnicodeUTF8));
        channelMux->setTitle(QApplication::translate("wdg_settingsTab", "Cannel Mux", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("wdg_settingsTab", "Channel 0 to", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("wdg_settingsTab", "Channel 1 to", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("wdg_settingsTab", "Channel 2 to", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("wdg_settingsTab", "Channel 3 to", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("wdg_settingsTab", "Channel 4 to", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("wdg_settingsTab", "Channel 5 to", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("wdg_settingsTab", "Channel 6 to", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("wdg_settingsTab", "Channel 7 to", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("wdg_settingsTab", "Channel 8 to", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("wdg_settingsTab", "Channel 9 to", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("wdg_settingsTab", "Channel 10 to", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("wdg_settingsTab", "Channel 11 to", 0, QApplication::UnicodeUTF8));
        PPMSetup->setTitle(QApplication::translate("wdg_settingsTab", "PPM Setup", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("wdg_settingsTab", "PPM Mode", 0, QApplication::UnicodeUTF8));
        PPMMode->clear();
        PPMMode->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "Multichannel", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Multi Port", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        PPMMode->setToolTip(QApplication::translate("wdg_settingsTab", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Select if you have a multichannel receiver or a receiver with a pin for each PPM port.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">With multichannel you recive the whole PPM signal with a single pin. Otherwise you have to connect as many pins as you use channels.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><spa"
                        "n style=\" font-size:8pt;\">Up to 9 Channels are possible. 10 with some tweaks.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        MultichannelSetup->setTitle(QApplication::translate("wdg_settingsTab", "Multichannel Setup", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("wdg_settingsTab", "PPM Offset1", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("wdg_settingsTab", "PPM Offset2", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("wdg_settingsTab", "PPM Min", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("wdg_settingsTab", "PPM Max", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("wdg_settingsTab", "Multichannel Max", 0, QApplication::UnicodeUTF8));
        RCOffsetSetup->setTitle(QApplication::translate("wdg_settingsTab", "Multiport Offset Setup", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("wdg_settingsTab", "Channel 0", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("wdg_settingsTab", "Channel 1", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("wdg_settingsTab", "Channel 2", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("wdg_settingsTab", "Channel 3", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("wdg_settingsTab", "Channel 4", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("wdg_settingsTab", "Channel 5", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("wdg_settingsTab", "Channel 6", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("wdg_settingsTab", "Channel 7", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("wdg_settingsTab", "Channel 8", 0, QApplication::UnicodeUTF8));
        label_63->setText(QApplication::translate("wdg_settingsTab", "PPM Offset", 0, QApplication::UnicodeUTF8));
        ReceiverTypeBox->setTitle(QApplication::translate("wdg_settingsTab", "Receiver Setup", 0, QApplication::UnicodeUTF8));
        label_153->setText(QApplication::translate("wdg_settingsTab", "Receiver Type", 0, QApplication::UnicodeUTF8));
        ReceiverType->clear();
        ReceiverType->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "PPM", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Spektrum", 0, QApplication::UnicodeUTF8)
        );
        settingsTab->setTabText(settingsTab->indexOf(RCSetup), QApplication::translate("wdg_settingsTab", "RC Setup", 0, QApplication::UnicodeUTF8));
        NickServo->setTitle(QApplication::translate("wdg_settingsTab", "Nick Servo", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("wdg_settingsTab", "Enable Nick Servo", 0, QApplication::UnicodeUTF8));
        enableNickServo->clear();
        enableNickServo->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "Off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "On", 0, QApplication::UnicodeUTF8)
        );
        label_62->setText(QApplication::translate("wdg_settingsTab", "Nick Servo Chan", 0, QApplication::UnicodeUTF8));
        label_74->setText(QApplication::translate("wdg_settingsTab", "Nick Servo Pos", 0, QApplication::UnicodeUTF8));
        label_59->setText(QApplication::translate("wdg_settingsTab", "Nick Servo Force", 0, QApplication::UnicodeUTF8));
        label_57->setText(QApplication::translate("wdg_settingsTab", "Nick Servo Min", 0, QApplication::UnicodeUTF8));
        label_58->setText(QApplication::translate("wdg_settingsTab", "Nick Servo Max", 0, QApplication::UnicodeUTF8));
        nickServoChan->clear();
        nickServoChan->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "Chan 1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 11", 0, QApplication::UnicodeUTF8)
        );
        label_61->setText(QApplication::translate("wdg_settingsTab", "Nick Servo Invert", 0, QApplication::UnicodeUTF8));
        nickServoInvert->clear();
        nickServoInvert->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "Normal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Invers", 0, QApplication::UnicodeUTF8)
        );
        rollServo->setTitle(QApplication::translate("wdg_settingsTab", "Roll Servo", 0, QApplication::UnicodeUTF8));
        label_70->setText(QApplication::translate("wdg_settingsTab", "Enable Roll Servo", 0, QApplication::UnicodeUTF8));
        label_73->setText(QApplication::translate("wdg_settingsTab", "Roll Servo Force", 0, QApplication::UnicodeUTF8));
        label_71->setText(QApplication::translate("wdg_settingsTab", "Roll Servo Min", 0, QApplication::UnicodeUTF8));
        label_72->setText(QApplication::translate("wdg_settingsTab", "Roll Servo Max", 0, QApplication::UnicodeUTF8));
        enableRollServo->clear();
        enableRollServo->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "Off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "On", 0, QApplication::UnicodeUTF8)
        );
        label_76->setText(QApplication::translate("wdg_settingsTab", "Roll Servo Chan", 0, QApplication::UnicodeUTF8));
        label_145->setText(QApplication::translate("wdg_settingsTab", "Roll Servo Pos", 0, QApplication::UnicodeUTF8));
        rollServoChan->clear();
        rollServoChan->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "Chan 1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 11", 0, QApplication::UnicodeUTF8)
        );
        label_75->setText(QApplication::translate("wdg_settingsTab", "Roll Servo Invert", 0, QApplication::UnicodeUTF8));
        rollServoInvert->clear();
        rollServoInvert->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "Normal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Invers", 0, QApplication::UnicodeUTF8)
        );
        tabWidget_2->setTabText(tabWidget_2->indexOf(camServos), QApplication::translate("wdg_settingsTab", "Cam Servos", 0, QApplication::UnicodeUTF8));
        groupBox_17->setTitle(QApplication::translate("wdg_settingsTab", "ESC Refresh", 0, QApplication::UnicodeUTF8));
        label_81->setText(QApplication::translate("wdg_settingsTab", "PPM refresh", 0, QApplication::UnicodeUTF8));
        label_82->setText(QApplication::translate("wdg_settingsTab", "ESC Maxvalue", 0, QApplication::UnicodeUTF8));
        ESCMaxValue->clear();
        ESCMaxValue->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "127", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "255", 0, QApplication::UnicodeUTF8)
        );
        groupBox_15->setTitle(QApplication::translate("wdg_settingsTab", "PPM ESC Mux", 0, QApplication::UnicodeUTF8));
        label_77->setText(QApplication::translate("wdg_settingsTab", "PPM 1 > ESC", 0, QApplication::UnicodeUTF8));
        label_78->setText(QApplication::translate("wdg_settingsTab", "PPM 2 > ESC", 0, QApplication::UnicodeUTF8));
        label_79->setText(QApplication::translate("wdg_settingsTab", "PPM 3 > ESC", 0, QApplication::UnicodeUTF8));
        label_139->setText(QApplication::translate("wdg_settingsTab", "PPM 4 > ESC", 0, QApplication::UnicodeUTF8));
        label_80->setText(QApplication::translate("wdg_settingsTab", "PPM 5 > ESC", 0, QApplication::UnicodeUTF8));
        label_83->setText(QApplication::translate("wdg_settingsTab", "PPM 6 > ESC", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(ppmEsc), QApplication::translate("wdg_settingsTab", "PPM ESC", 0, QApplication::UnicodeUTF8));
        settingsTab->setTabText(settingsTab->indexOf(PPM), QApplication::translate("wdg_settingsTab", "PPM out", 0, QApplication::UnicodeUTF8));
        AltitudeSetup->setTitle(QApplication::translate("wdg_settingsTab", "Altitude Setup", 0, QApplication::UnicodeUTF8));
        label_46->setText(QApplication::translate("wdg_settingsTab", "Enable Barometer", 0, QApplication::UnicodeUTF8));
        enableBaro->clear();
        enableBaro->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "Off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "On", 0, QApplication::UnicodeUTF8)
        );
        label_48->setText(QApplication::translate("wdg_settingsTab", "Altitude Chan", 0, QApplication::UnicodeUTF8));
        baroChan->clear();
        baroChan->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "Channel 1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Channel 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Channel 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Channel 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Channel 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Channel 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Channel 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Channel 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Channel 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Channel 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Channel 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Channel 12", 0, QApplication::UnicodeUTF8)
        );
        label_60->setText(QApplication::translate("wdg_settingsTab", "Altitude Offset", 0, QApplication::UnicodeUTF8));
        GPSSetup->setTitle(QApplication::translate("wdg_settingsTab", "GPS Setup", 0, QApplication::UnicodeUTF8));
        label_50->setText(QApplication::translate("wdg_settingsTab", "Enable GPS", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("wdg_settingsTab", "GPS Mode", 0, QApplication::UnicodeUTF8));
        label_52->setText(QApplication::translate("wdg_settingsTab", "GPS Force", 0, QApplication::UnicodeUTF8));
        label_53->setText(QApplication::translate("wdg_settingsTab", "GPS min Sat", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("wdg_settingsTab", "GPS Stick Override", 0, QApplication::UnicodeUTF8));
        enableGPS->clear();
        enableGPS->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "Off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "On", 0, QApplication::UnicodeUTF8)
        );
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "NMEA", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Ublox", 0, QApplication::UnicodeUTF8)
        );
        GyroSetup->setTitle(QApplication::translate("wdg_settingsTab", "Gyro Type", 0, QApplication::UnicodeUTF8));
        GyroModeNick->clear();
        GyroModeNick->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "Mems", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Piezo", 0, QApplication::UnicodeUTF8)
        );
        label_214->setText(QApplication::translate("wdg_settingsTab", "Roll Gyro", 0, QApplication::UnicodeUTF8));
        GyroModeRoll->clear();
        GyroModeRoll->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "Mems", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Piezo", 0, QApplication::UnicodeUTF8)
        );
        label_212->setText(QApplication::translate("wdg_settingsTab", "Nick Gyro", 0, QApplication::UnicodeUTF8));
        GyroModePitch->clear();
        GyroModePitch->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "Mems", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Piezo", 0, QApplication::UnicodeUTF8)
        );
        label_213->setText(QApplication::translate("wdg_settingsTab", "Pitch Gyro", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("wdg_settingsTab", "Gyro Bias", 0, QApplication::UnicodeUTF8));
        label_118->setText(QApplication::translate("wdg_settingsTab", "Nick Bias +", 0, QApplication::UnicodeUTF8));
        label_251->setText(QApplication::translate("wdg_settingsTab", "Nick Bias -", 0, QApplication::UnicodeUTF8));
        label_94->setText(QApplication::translate("wdg_settingsTab", "Roll Bias +", 0, QApplication::UnicodeUTF8));
        label_252->setText(QApplication::translate("wdg_settingsTab", "Roll Bias -", 0, QApplication::UnicodeUTF8));
        label_124->setText(QApplication::translate("wdg_settingsTab", "Pitch Bias", 0, QApplication::UnicodeUTF8));
        label_253->setText(QApplication::translate("wdg_settingsTab", "Pitch Bias -", 0, QApplication::UnicodeUTF8));
        CompassSetup->setTitle(QApplication::translate("wdg_settingsTab", "Compass Setup", 0, QApplication::UnicodeUTF8));
        label_47->setText(QApplication::translate("wdg_settingsTab", "Enable Compass", 0, QApplication::UnicodeUTF8));
        label_266->setText(QApplication::translate("wdg_settingsTab", "Compass Type", 0, QApplication::UnicodeUTF8));
        label_51->setText(QApplication::translate("wdg_settingsTab", "Compass Bias", 0, QApplication::UnicodeUTF8));
        label_49->setText(QApplication::translate("wdg_settingsTab", "Compass Force", 0, QApplication::UnicodeUTF8));
        enableCompass->clear();
        enableCompass->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "Off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "On", 0, QApplication::UnicodeUTF8)
        );
        compassType->clear();
        compassType->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "MM3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "HMC5843", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "HMC6843", 0, QApplication::UnicodeUTF8)
        );
        GyroSetup_2->setTitle(QApplication::translate("wdg_settingsTab", "Gyro Temperature Drift", 0, QApplication::UnicodeUTF8));
        label_256->setText(QApplication::translate("wdg_settingsTab", "Roll Gyro", 0, QApplication::UnicodeUTF8));
        label_258->setText(QApplication::translate("wdg_settingsTab", "Nick Gyro", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        GyroDriftNick->setToolTip(QApplication::translate("wdg_settingsTab", "The Piezo Gyros suffer from some drif caused by them getting warm during use. To counter this change this value and monitor the gyros in the diagnostics screen. They should generate some near flat line. Ignore the slight jitter you might see in the line thats normal. But there should be no trend for the gyro to go up or down.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_257->setText(QApplication::translate("wdg_settingsTab", "Pitch Gyro", 0, QApplication::UnicodeUTF8));
        groupBox_16->setTitle(QApplication::translate("wdg_settingsTab", "ADC Rate", 0, QApplication::UnicodeUTF8));
        label_226->setText(QApplication::translate("wdg_settingsTab", "ADC Rate", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        AdcRate->setToolTip(QApplication::translate("wdg_settingsTab", "Defines how often to poll the ADC sensors", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        updateAdcRate->setText(QApplication::translate("wdg_settingsTab", "update ADC rate", 0, QApplication::UnicodeUTF8));
        settingsTab->setTabText(settingsTab->indexOf(sensorSetup), QApplication::translate("wdg_settingsTab", "Sensor Setup", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("wdg_settingsTab", "Calibration", 0, QApplication::UnicodeUTF8));
        startCalib->setText(QApplication::translate("wdg_settingsTab", "Start Calib", 0, QApplication::UnicodeUTF8));
        stopCalib->setText(QApplication::translate("wdg_settingsTab", "Stop Calib", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("wdg_settingsTab", "Values", 0, QApplication::UnicodeUTF8));
        readCompassValues->setText(QApplication::translate("wdg_settingsTab", "Read Values", 0, QApplication::UnicodeUTF8));
        writeCompassValues->setText(QApplication::translate("wdg_settingsTab", "Write Values", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("wdg_settingsTab", "Values", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("wdg_settingsTab", "X Min", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("wdg_settingsTab", "Y Min", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("wdg_settingsTab", "Z Min", 0, QApplication::UnicodeUTF8));
        X_OFFSET->setText(QString());
        label_199->setText(QApplication::translate("wdg_settingsTab", "X Offset", 0, QApplication::UnicodeUTF8));
        label_200->setText(QApplication::translate("wdg_settingsTab", "X Range", 0, QApplication::UnicodeUTF8));
        label_201->setText(QApplication::translate("wdg_settingsTab", "X Max", 0, QApplication::UnicodeUTF8));
        label_202->setText(QApplication::translate("wdg_settingsTab", "Y Range", 0, QApplication::UnicodeUTF8));
        label_203->setText(QApplication::translate("wdg_settingsTab", "Y Offset", 0, QApplication::UnicodeUTF8));
        label_204->setText(QApplication::translate("wdg_settingsTab", "Y Max", 0, QApplication::UnicodeUTF8));
        label_205->setText(QApplication::translate("wdg_settingsTab", "Z Offset", 0, QApplication::UnicodeUTF8));
        label_206->setText(QApplication::translate("wdg_settingsTab", "Z Range", 0, QApplication::UnicodeUTF8));
        label_207->setText(QApplication::translate("wdg_settingsTab", "Z Max", 0, QApplication::UnicodeUTF8));
        tabWidget_4->setTabText(tabWidget_4->indexOf(MM3), QApplication::translate("wdg_settingsTab", "MM3", 0, QApplication::UnicodeUTF8));
        groupBox_18->setTitle(QApplication::translate("wdg_settingsTab", "Compass Rate", 0, QApplication::UnicodeUTF8));
        HMC5843_Rate->clear();
        HMC5843_Rate->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "0.5 Hz", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "1 Hz", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "2 Hz", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "5 Hz", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "10 Hz", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "20 Hz", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "50 Hz", 0, QApplication::UnicodeUTF8)
        );
        groupBox_19->setTitle(QApplication::translate("wdg_settingsTab", "Compass Bias Mode", 0, QApplication::UnicodeUTF8));
        HMC5843_Bias->clear();
        HMC5843_Bias->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "Normal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Positivie Bias", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Negative Bias", 0, QApplication::UnicodeUTF8)
        );
        groupBox_20->setTitle(QApplication::translate("wdg_settingsTab", "Compass Gain", 0, QApplication::UnicodeUTF8));
        HMC5843_Gain->clear();
        HMC5843_Gain->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "3.00mV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "3.75 mV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "5.00 mV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "6.25 mV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "9.25 mV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "10.625 mV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "12.5 mV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "17.5 mV", 0, QApplication::UnicodeUTF8)
        );
        groupBox_21->setTitle(QApplication::translate("wdg_settingsTab", "Compass ADC Delay", 0, QApplication::UnicodeUTF8));
        HMC5843_Delay->clear();
        HMC5843_Delay->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "0.000 ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "0.333 ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "0.667 ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "1.000 ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "1.333 ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "1.667 ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "2.000 ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "2.333 ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "2.667 ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "3.000 ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "3.333 ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "3.667 ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "4.000 ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "4.333 ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "4.667 ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "5.000 ms", 0, QApplication::UnicodeUTF8)
        );
        groupBox_22->setTitle(QApplication::translate("wdg_settingsTab", "Compass Conversion Mode", 0, QApplication::UnicodeUTF8));
        HMC5843_Mode->clear();
        HMC5843_Mode->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "Continuous", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Single", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Idle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Sleep", 0, QApplication::UnicodeUTF8)
        );
        tabWidget_4->setTabText(tabWidget_4->indexOf(HMC5843), QApplication::translate("wdg_settingsTab", "HMC 5843", 0, QApplication::UnicodeUTF8));
        tabWidget_4->setTabText(tabWidget_4->indexOf(HMC6843), QApplication::translate("wdg_settingsTab", "HMC 6843", 0, QApplication::UnicodeUTF8));
        tabWidget_3->setTabText(tabWidget_3->indexOf(Compass_Setup), QApplication::translate("wdg_settingsTab", "Compass", 0, QApplication::UnicodeUTF8));
        tabWidget_3->setTabText(tabWidget_3->indexOf(GPS), QApplication::translate("wdg_settingsTab", "GPS", 0, QApplication::UnicodeUTF8));
        settingsTab->setTabText(settingsTab->indexOf(Navi), QApplication::translate("wdg_settingsTab", "Navi", 0, QApplication::UnicodeUTF8));
        PIDPitchSetup->setTitle(QApplication::translate("wdg_settingsTab", "Pitch Setup", 0, QApplication::UnicodeUTF8));
        label_215->setText(QApplication::translate("wdg_settingsTab", "Integral Max", 0, QApplication::UnicodeUTF8));
        label_178->setText(QApplication::translate("wdg_settingsTab", "Integral Min", 0, QApplication::UnicodeUTF8));
        label_120->setText(QApplication::translate("wdg_settingsTab", "P", 0, QApplication::UnicodeUTF8));
        label_123->setText(QApplication::translate("wdg_settingsTab", "I", 0, QApplication::UnicodeUTF8));
        label_121->setText(QApplication::translate("wdg_settingsTab", "D", 0, QApplication::UnicodeUTF8));
        label_122->setText(QApplication::translate("wdg_settingsTab", "Gyro Force", 0, QApplication::UnicodeUTF8));
        label_166->setText(QApplication::translate("wdg_settingsTab", "Throttle Offset", 0, QApplication::UnicodeUTF8));
        label_127->setText(QApplication::translate("wdg_settingsTab", "Pitch Stick Force", 0, QApplication::UnicodeUTF8));
        PIDRollSetup->setTitle(QApplication::translate("wdg_settingsTab", "Roll Setup", 0, QApplication::UnicodeUTF8));
        label_262->setText(QApplication::translate("wdg_settingsTab", "ACC P", 0, QApplication::UnicodeUTF8));
        label_84->setText(QApplication::translate("wdg_settingsTab", "Gyro+ACC Max", 0, QApplication::UnicodeUTF8));
        label_87->setText(QApplication::translate("wdg_settingsTab", "Gyro+ACC Min", 0, QApplication::UnicodeUTF8));
        label_91->setText(QApplication::translate("wdg_settingsTab", "Gyro P", 0, QApplication::UnicodeUTF8));
        label_89->setText(QApplication::translate("wdg_settingsTab", "Gyro I", 0, QApplication::UnicodeUTF8));
        label_263->setText(QApplication::translate("wdg_settingsTab", "ACC I", 0, QApplication::UnicodeUTF8));
        label_88->setText(QApplication::translate("wdg_settingsTab", "Gyro D", 0, QApplication::UnicodeUTF8));
        label_261->setText(QApplication::translate("wdg_settingsTab", "ACC D", 0, QApplication::UnicodeUTF8));
        label_93->setText(QApplication::translate("wdg_settingsTab", "Gyro+ACC Force", 0, QApplication::UnicodeUTF8));
        label_92->setText(QApplication::translate("wdg_settingsTab", "Pitch Force", 0, QApplication::UnicodeUTF8));
        label_90->setText(QApplication::translate("wdg_settingsTab", "Gyro Force", 0, QApplication::UnicodeUTF8));
        label_95->setText(QApplication::translate("wdg_settingsTab", "ACC Force", 0, QApplication::UnicodeUTF8));
        label_85->setText(QApplication::translate("wdg_settingsTab", "Integral Max", 0, QApplication::UnicodeUTF8));
        label_86->setText(QApplication::translate("wdg_settingsTab", "Integral Min", 0, QApplication::UnicodeUTF8));
        RollStick->setText(QApplication::translate("wdg_settingsTab", "Roll Stick", 0, QApplication::UnicodeUTF8));
        PIDNickSetup->setTitle(QApplication::translate("wdg_settingsTab", "Nick Setup", 0, QApplication::UnicodeUTF8));
        label_111->setText(QApplication::translate("wdg_settingsTab", "Gyro+ACC Min", 0, QApplication::UnicodeUTF8));
        label_115->setText(QApplication::translate("wdg_settingsTab", "Gyro P", 0, QApplication::UnicodeUTF8));
        label_254->setText(QApplication::translate("wdg_settingsTab", "ACC P", 0, QApplication::UnicodeUTF8));
        label_113->setText(QApplication::translate("wdg_settingsTab", "Gyro I", 0, QApplication::UnicodeUTF8));
        label_255->setText(QApplication::translate("wdg_settingsTab", "ACC I", 0, QApplication::UnicodeUTF8));
        label_112->setText(QApplication::translate("wdg_settingsTab", "Gyro D", 0, QApplication::UnicodeUTF8));
        label_259->setText(QApplication::translate("wdg_settingsTab", "ACC D", 0, QApplication::UnicodeUTF8));
        label_117->setText(QApplication::translate("wdg_settingsTab", "Gyro+ACC Force", 0, QApplication::UnicodeUTF8));
        label_116->setText(QApplication::translate("wdg_settingsTab", "Pitch Force", 0, QApplication::UnicodeUTF8));
        label_109->setText(QApplication::translate("wdg_settingsTab", "Integral Max", 0, QApplication::UnicodeUTF8));
        label_110->setText(QApplication::translate("wdg_settingsTab", "Integral Min", 0, QApplication::UnicodeUTF8));
        label_119->setText(QApplication::translate("wdg_settingsTab", "ACC Force", 0, QApplication::UnicodeUTF8));
        label_114->setText(QApplication::translate("wdg_settingsTab", "Gyro Force", 0, QApplication::UnicodeUTF8));
        label_108->setText(QApplication::translate("wdg_settingsTab", "Gyro+ACC Max", 0, QApplication::UnicodeUTF8));
        label_150->setText(QApplication::translate("wdg_settingsTab", "Nick Stick", 0, QApplication::UnicodeUTF8));
        PIDStickSetup->setTitle(QApplication::translate("wdg_settingsTab", "Stick Setup", 0, QApplication::UnicodeUTF8));
        label_125->setText(QApplication::translate("wdg_settingsTab", "Throttle Offset", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        PIDThrottleOffset->setToolTip(QApplication::translate("wdg_settingsTab", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">This offset gets added to the value coming from the stick. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">The stick sends -120 to 120 but we need 0 to 240 so we add to the incoming value. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Also this helps limiting the maximum value which "
                        "can be reached</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_126->setText(QApplication::translate("wdg_settingsTab", "Heading Hold", 0, QApplication::UnicodeUTF8));
        PIDHeadingHold->clear();
        PIDHeadingHold->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "Off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "On", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        PIDHeadingHold->setToolTip(QApplication::translate("wdg_settingsTab", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Be carefull what you do. This disables the ACC. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">With no ACC the flyer will keep what ever position you left it in with the last stick move</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mathTab->setTabText(mathTab->indexOf(PID), QApplication::translate("wdg_settingsTab", "PID", 0, QApplication::UnicodeUTF8));
        PIDsimpleSetup->setTitle(QApplication::translate("wdg_settingsTab", "Simple Setup", 0, QApplication::UnicodeUTF8));
        label_128->setText(QApplication::translate("wdg_settingsTab", "Gyro+ACC Max", 0, QApplication::UnicodeUTF8));
        label_132->setText(QApplication::translate("wdg_settingsTab", "Gyro+ACC Min", 0, QApplication::UnicodeUTF8));
        label_133->setText(QApplication::translate("wdg_settingsTab", "Gyro D", 0, QApplication::UnicodeUTF8));
        label_135->setText(QApplication::translate("wdg_settingsTab", "Gyro Force", 0, QApplication::UnicodeUTF8));
        label_138->setText(QApplication::translate("wdg_settingsTab", "Gyro+ACC Force", 0, QApplication::UnicodeUTF8));
        label_137->setText(QApplication::translate("wdg_settingsTab", "Pitch Force", 0, QApplication::UnicodeUTF8));
        label_136->setText(QApplication::translate("wdg_settingsTab", "Gyro P", 0, QApplication::UnicodeUTF8));
        label_260->setText(QApplication::translate("wdg_settingsTab", "ACC P", 0, QApplication::UnicodeUTF8));
        label_265->setText(QApplication::translate("wdg_settingsTab", "ACC D", 0, QApplication::UnicodeUTF8));
        label_140->setText(QApplication::translate("wdg_settingsTab", "ACC Force", 0, QApplication::UnicodeUTF8));
        label_130->setText(QApplication::translate("wdg_settingsTab", "Integral Max", 0, QApplication::UnicodeUTF8));
        label_264->setText(QApplication::translate("wdg_settingsTab", "ACC I", 0, QApplication::UnicodeUTF8));
        label_131->setText(QApplication::translate("wdg_settingsTab", "Integral Min", 0, QApplication::UnicodeUTF8));
        label_134->setText(QApplication::translate("wdg_settingsTab", "Gyro I", 0, QApplication::UnicodeUTF8));
        label_151->setText(QApplication::translate("wdg_settingsTab", "Stick Force", 0, QApplication::UnicodeUTF8));
        PIDSimplePitchSetup->setTitle(QApplication::translate("wdg_settingsTab", "Pitch Setup", 0, QApplication::UnicodeUTF8));
        label_220->setText(QApplication::translate("wdg_settingsTab", "Integral Max", 0, QApplication::UnicodeUTF8));
        label_219->setText(QApplication::translate("wdg_settingsTab", "Integral Min", 0, QApplication::UnicodeUTF8));
        label_141->setText(QApplication::translate("wdg_settingsTab", "P", 0, QApplication::UnicodeUTF8));
        label_144->setText(QApplication::translate("wdg_settingsTab", "I", 0, QApplication::UnicodeUTF8));
        label_142->setText(QApplication::translate("wdg_settingsTab", "D", 0, QApplication::UnicodeUTF8));
        label_143->setText(QApplication::translate("wdg_settingsTab", "Gyro Force", 0, QApplication::UnicodeUTF8));
        label_146->setText(QApplication::translate("wdg_settingsTab", "Throttle Offset", 0, QApplication::UnicodeUTF8));
        label_148->setText(QApplication::translate("wdg_settingsTab", "Pitch Stick Force", 0, QApplication::UnicodeUTF8));
        PIDSimpleStickSetup->setTitle(QApplication::translate("wdg_settingsTab", "Stick Setup", 0, QApplication::UnicodeUTF8));
        label_221->setText(QApplication::translate("wdg_settingsTab", "Throttle Offset", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        PIDSimpleThrottleOffset->setToolTip(QApplication::translate("wdg_settingsTab", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">This offset gets added to the value coming from the stick. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">The stick sends -120 to 120 but we need 0 to 240 so we add to the incoming value. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Also this helps limiting the maximum value which "
                        "can be reached</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_152->setText(QApplication::translate("wdg_settingsTab", "Heading Hold", 0, QApplication::UnicodeUTF8));
        PIDSimpleHeadingHold->clear();
        PIDSimpleHeadingHold->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "Off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "On", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        PIDSimpleHeadingHold->setToolTip(QApplication::translate("wdg_settingsTab", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Be carefull what you do. This disables the ACC. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">With no ACC the flyer will keep what ever position you left it in with the last stick move</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        readPID->setText(QApplication::translate("wdg_settingsTab", "read PID", 0, QApplication::UnicodeUTF8));
        usePIDSimple->setText(QApplication::translate("wdg_settingsTab", "use PID Simple", 0, QApplication::UnicodeUTF8));
        mathTab->setTabText(mathTab->indexOf(PIDSimple), QApplication::translate("wdg_settingsTab", "PID Simple", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("wdg_settingsTab", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Kalman is missing for now as its not yet implemented...</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">But you get the idea of having multiple Math models</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        mathTab->setTabText(mathTab->indexOf(Kalman), QApplication::translate("wdg_settingsTab", "Kalman", 0, QApplication::UnicodeUTF8));
        settingsTab->setTabText(settingsTab->indexOf(math), QApplication::translate("wdg_settingsTab", "Math", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        userSettings_2->setToolTip(QApplication::translate("wdg_settingsTab", "This settings should help you to play with the codes without \n"
"the need to think about the setting transport.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        userSettings_2->setTitle(QApplication::translate("wdg_settingsTab", "User Settings", 0, QApplication::UnicodeUTF8));
        label_179->setText(QApplication::translate("wdg_settingsTab", "Setting 1", 0, QApplication::UnicodeUTF8));
        userSet1->clear();
        userSet1->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 12", 0, QApplication::UnicodeUTF8)
        );
        label_65->setText(QApplication::translate("wdg_settingsTab", "0...255", 0, QApplication::UnicodeUTF8));
        label_182->setText(QApplication::translate("wdg_settingsTab", "Setting 2", 0, QApplication::UnicodeUTF8));
        userSet2->clear();
        userSet2->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 12", 0, QApplication::UnicodeUTF8)
        );
        label_66->setText(QApplication::translate("wdg_settingsTab", "0...255", 0, QApplication::UnicodeUTF8));
        label_180->setText(QApplication::translate("wdg_settingsTab", "Setting 3", 0, QApplication::UnicodeUTF8));
        userSet3->clear();
        userSet3->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 12", 0, QApplication::UnicodeUTF8)
        );
        label_67->setText(QApplication::translate("wdg_settingsTab", "0...255", 0, QApplication::UnicodeUTF8));
        label_181->setText(QApplication::translate("wdg_settingsTab", "Setting 4", 0, QApplication::UnicodeUTF8));
        userSet4->clear();
        userSet4->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 12", 0, QApplication::UnicodeUTF8)
        );
        label_68->setText(QApplication::translate("wdg_settingsTab", "0...255", 0, QApplication::UnicodeUTF8));
        label_186->setText(QApplication::translate("wdg_settingsTab", "Setting 5", 0, QApplication::UnicodeUTF8));
        userSet5->clear();
        userSet5->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 12", 0, QApplication::UnicodeUTF8)
        );
        label_69->setText(QApplication::translate("wdg_settingsTab", "0...255", 0, QApplication::UnicodeUTF8));
        label_184->setText(QApplication::translate("wdg_settingsTab", "Setting 6", 0, QApplication::UnicodeUTF8));
        userSet6->clear();
        userSet6->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 12", 0, QApplication::UnicodeUTF8)
        );
        label_96->setText(QApplication::translate("wdg_settingsTab", "0...255", 0, QApplication::UnicodeUTF8));
        label_183->setText(QApplication::translate("wdg_settingsTab", "Setting 7", 0, QApplication::UnicodeUTF8));
        userSet7->clear();
        userSet7->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 12", 0, QApplication::UnicodeUTF8)
        );
        label_97->setText(QApplication::translate("wdg_settingsTab", "0...255", 0, QApplication::UnicodeUTF8));
        label_185->setText(QApplication::translate("wdg_settingsTab", "Setting 8", 0, QApplication::UnicodeUTF8));
        userSet8->clear();
        userSet8->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 12", 0, QApplication::UnicodeUTF8)
        );
        label_98->setText(QApplication::translate("wdg_settingsTab", "0...255", 0, QApplication::UnicodeUTF8));
        label_190->setText(QApplication::translate("wdg_settingsTab", "Setting 9", 0, QApplication::UnicodeUTF8));
        userSet9->clear();
        userSet9->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 12", 0, QApplication::UnicodeUTF8)
        );
        label_99->setText(QApplication::translate("wdg_settingsTab", "0...255", 0, QApplication::UnicodeUTF8));
        label_188->setText(QApplication::translate("wdg_settingsTab", "Setting 10", 0, QApplication::UnicodeUTF8));
        userSet10->clear();
        userSet10->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 12", 0, QApplication::UnicodeUTF8)
        );
        label_100->setText(QApplication::translate("wdg_settingsTab", "0...255", 0, QApplication::UnicodeUTF8));
        userSettings_3->setTitle(QApplication::translate("wdg_settingsTab", "User Settings", 0, QApplication::UnicodeUTF8));
        label_187->setText(QApplication::translate("wdg_settingsTab", "Setting 11", 0, QApplication::UnicodeUTF8));
        userSet11->clear();
        userSet11->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 12", 0, QApplication::UnicodeUTF8)
        );
        label_102->setText(QApplication::translate("wdg_settingsTab", "0...255", 0, QApplication::UnicodeUTF8));
        label_192->setText(QApplication::translate("wdg_settingsTab", "Setting 12", 0, QApplication::UnicodeUTF8));
        userSet12->clear();
        userSet12->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 12", 0, QApplication::UnicodeUTF8)
        );
        label_129->setText(QApplication::translate("wdg_settingsTab", "0...255", 0, QApplication::UnicodeUTF8));
        label_189->setText(QApplication::translate("wdg_settingsTab", "Setting 13", 0, QApplication::UnicodeUTF8));
        userSet13->clear();
        userSet13->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 12", 0, QApplication::UnicodeUTF8)
        );
        label_107->setText(QApplication::translate("wdg_settingsTab", "0...255", 0, QApplication::UnicodeUTF8));
        label_191->setText(QApplication::translate("wdg_settingsTab", "Setting 14", 0, QApplication::UnicodeUTF8));
        userSet14->clear();
        userSet14->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 12", 0, QApplication::UnicodeUTF8)
        );
        label_211->setText(QApplication::translate("wdg_settingsTab", "0...255", 0, QApplication::UnicodeUTF8));
        label_196->setText(QApplication::translate("wdg_settingsTab", "Setting 15", 0, QApplication::UnicodeUTF8));
        userSet15->clear();
        userSet15->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 12", 0, QApplication::UnicodeUTF8)
        );
        label_106->setText(QApplication::translate("wdg_settingsTab", "0...255", 0, QApplication::UnicodeUTF8));
        label_194->setText(QApplication::translate("wdg_settingsTab", "Setting 16", 0, QApplication::UnicodeUTF8));
        userSet16->clear();
        userSet16->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 12", 0, QApplication::UnicodeUTF8)
        );
        label_105->setText(QApplication::translate("wdg_settingsTab", "0...255", 0, QApplication::UnicodeUTF8));
        label_193->setText(QApplication::translate("wdg_settingsTab", "Setting 17", 0, QApplication::UnicodeUTF8));
        userSet17->clear();
        userSet17->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 12", 0, QApplication::UnicodeUTF8)
        );
        label_149->setText(QApplication::translate("wdg_settingsTab", "0...255", 0, QApplication::UnicodeUTF8));
        label_195->setText(QApplication::translate("wdg_settingsTab", "Setting 18", 0, QApplication::UnicodeUTF8));
        userSet18->clear();
        userSet18->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 12", 0, QApplication::UnicodeUTF8)
        );
        label_103->setText(QApplication::translate("wdg_settingsTab", "0...255", 0, QApplication::UnicodeUTF8));
        label_198->setText(QApplication::translate("wdg_settingsTab", "Setting 19", 0, QApplication::UnicodeUTF8));
        userSet19->clear();
        userSet19->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 12", 0, QApplication::UnicodeUTF8)
        );
        label_104->setText(QApplication::translate("wdg_settingsTab", "0...255", 0, QApplication::UnicodeUTF8));
        label_197->setText(QApplication::translate("wdg_settingsTab", "Setting 20", 0, QApplication::UnicodeUTF8));
        userSet20->clear();
        userSet20->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "Chan 12", 0, QApplication::UnicodeUTF8)
        );
        label_101->setText(QApplication::translate("wdg_settingsTab", "0...255", 0, QApplication::UnicodeUTF8));
        settingsTab->setTabText(settingsTab->indexOf(userSettings), QApplication::translate("wdg_settingsTab", "User Settings", 0, QApplication::UnicodeUTF8));
        comPortPlace->setTitle(QApplication::translate("wdg_settingsTab", "ComPort", 0, QApplication::UnicodeUTF8));
        label_64->setText(QApplication::translate("wdg_settingsTab", "ComPort", 0, QApplication::UnicodeUTF8));
        comPort->clear();
        comPort->insertItems(0, QStringList()
         << QApplication::translate("wdg_settingsTab", "COM1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "COM2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "COM3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "COM4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "COM5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "COM6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "COM7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "COM8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "COM9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_settingsTab", "COM10", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        comPort->setToolTip(QApplication::translate("wdg_settingsTab", "Select the comport to be used on your PC. \n"
"Speed is 115200 Bps with 8N1.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox_6->setTitle(QApplication::translate("wdg_settingsTab", "Logging", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBox_2->setToolTip(QApplication::translate("wdg_settingsTab", "Shal the telemetrie data be logged to the HDD. \n"
"If yes you find the files as CSV in your logs folder.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBox_2->setText(QApplication::translate("wdg_settingsTab", "enable Telemetrie Logs", 0, QApplication::UnicodeUTF8));
        settingsTab->setTabText(settingsTab->indexOf(osiFCsettings), QApplication::translate("wdg_settingsTab", "osiBS Setup", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class wdg_settingsTab: public Ui_wdg_settingsTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WDG_SETTINGSTAB_H
