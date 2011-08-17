/********************************************************************************
** Form generated from reading UI file 'basestation.ui'
**
** Created: Tue 16. Aug 21:16:32 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASESTATION_H
#define UI_BASESTATION_H

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
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollBar>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qwt_plot.h"
#include "qwt_slider.h"

QT_BEGIN_NAMESPACE

class Ui_baseStation
{
public:
    QAction *actionConnect_osiFC;
    QAction *actionDisconnect_osiFC;
    QAction *actionCleanSerialOutput;
    QAction *osmAction;
    QAction *yahooActionMap;
    QAction *yahooActionSatellite;
    QWidget *centralWidget;
    QGridLayout *gridLayout_56;
    QTabWidget *mainTab;
    QWidget *Cockpit;
    QGridLayout *gridLayout_75;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *Compass;
    QVBoxLayout *compassPlace;
    QGroupBox *Attitude;
    QVBoxLayout *attitudePlace;
    QGroupBox *AltidudeGain_3;
    QVBoxLayout *verticalLayout_3;
    QwtSlider *gainY;
    QGroupBox *Speed;
    QVBoxLayout *speedPlace;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_74;
    QGroupBox *AltidudeGain_2;
    QVBoxLayout *verticalLayout_2;
    QwtSlider *gainX;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QSlider *EngineBar_1;
    QSlider *EngineBar_2;
    QSlider *EngineBar_3;
    QSlider *EngineBar_4;
    QSlider *EngineBar_5;
    QSlider *EngineBar_6;
    QSlider *EngineBar_7;
    QSlider *EngineBar_8;
    QGroupBox *AltidudeGain;
    QVBoxLayout *verticalLayout;
    QwtSlider *altitudeGainMeter;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_11;
    QLCDNumber *altitude;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_12;
    QLCDNumber *distance;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_13;
    QLCDNumber *runTime;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QSlider *RCChanBar_2;
    QSlider *RCChanBar_3;
    QSlider *RCChanBar_4;
    QSlider *RCChanBar_5;
    QSlider *RCChanBar_6;
    QSlider *RCChanBar_7;
    QSlider *RCChanBar_8;
    QSlider *RCChanBar_9;
    QSlider *RCChanBar_10;
    QSlider *RCChanBar_11;
    QSlider *RCChanBar_12;
    QLineEdit *RCChanText_12;
    QLineEdit *RCChanText_11;
    QLineEdit *RCChanText_10;
    QLineEdit *RCChanText_9;
    QLineEdit *RCChanText_8;
    QLineEdit *RCChanText_7;
    QLineEdit *RCChanText_6;
    QLineEdit *RCChanText_5;
    QLineEdit *RCChanText_4;
    QLineEdit *RCChanText_3;
    QLineEdit *RCChanText_2;
    QLineEdit *RCChanText_1;
    QSlider *RCChanBar_1;
    QGroupBox *UBatCok;
    QGridLayout *gridLayout_5;
    QProgressBar *UBat;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *UBatText;
    QLabel *label_232;
    QTextBrowser *messages;
    QWidget *Maps;
    QGridLayout *gridLayout_71;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *mapLayout;
    QVBoxLayout *mapSliderLayout;
    QFrame *frame;
    QGridLayout *gridLayout_67;
    QTabWidget *wayPointTabs;
    QWidget *pos;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox_14;
    QGridLayout *gridLayout_69;
    QLCDNumber *lcdNumber_7;
    QLCDNumber *lcdNumber_8;
    QLabel *label_241;
    QLabel *label_242;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout_68;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLabel *label_239;
    QLabel *label_240;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout_70;
    QLCDNumber *lcdNumber_4;
    QLCDNumber *lcdNumber_3;
    QLabel *label_243;
    QLabel *label_244;
    QGroupBox *groupBox_13;
    QGridLayout *gridLayout;
    QLCDNumber *lcdNumber_5;
    QLCDNumber *lcdNumber_9;
    QLabel *label_227;
    QLabel *label_228;
    QLCDNumber *lcdNumber_6;
    QLabel *label_229;
    QSpacerItem *verticalSpacer_27;
    QWidget *wayP;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_78;
    QSpinBox *wayPointNum;
    QCheckBox *checkBox;
    QLabel *label_233;
    QLabel *label_249;
    QSpinBox *wayPointElevation;
    QGridLayout *gridLayout_76;
    QSpinBox *wayPointWaitTime;
    QLabel *label_230;
    QLabel *label_231;
    QComboBox *wayPointAction;
    QGridLayout *gridLayout_77;
    QLabel *label_234;
    QLineEdit *wayPointLong;
    QLabel *label_235;
    QLineEdit *wayPointLat;
    QLabel *label_245;
    QLabel *label_246;
    QSpinBox *wayPointAlt;
    QSpinBox *wayPointSpeed;
    QGridLayout *gridLayout_79;
    QLabel *label_236;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_247;
    QPushButton *pushButton_4;
    QLabel *label_237;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label_248;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QSpacerItem *verticalSpacer;
    QWidget *wayPs;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_238;
    QPlainTextEdit *wayPointList;
    QWidget *Setup;
    QWidget *gridLayoutWidget;
    QGridLayout *setupGrid;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *readSetting;
    QPushButton *readSetHdd;
    QPushButton *resetOsiFC;
    QPushButton *flashSetting;
    QPushButton *writeSetHDD;
    QPushButton *writeSetting;
    QLabel *label_199;
    QSpinBox *settingNum;
    QLabel *label_225;
    QSpinBox *osiFcNum;
    QWidget *Diagnostics;
    QVBoxLayout *verticalLayout_9;
    QwtPlot *qwtPlot;
    QScrollBar *horizontalScrollBar;
    QGroupBox *EnableData;
    QGridLayout *gridLayout_35;
    QCheckBox *checkADCNick;
    QCheckBox *checkADCRoll;
    QCheckBox *checkADCPitch;
    QCheckBox *checkADCX;
    QCheckBox *checkCycleCount;
    QCheckBox *checkADCBaro;
    QCheckBox *checkADCUbat;
    QCheckBox *checkADCZ;
    QCheckBox *checkADCY;
    QCheckBox *checkEng2;
    QCheckBox *checkEng1;
    QCheckBox *checkEng3;
    QCheckBox *checkEng4;
    QCheckBox *checkEng5;
    QCheckBox *checkEng6;
    QCheckBox *checkEng7;
    QCheckBox *checkEng8;
    QCheckBox *checkChan1;
    QCheckBox *checkChan2;
    QCheckBox *checkChan3;
    QCheckBox *checkChan4;
    QCheckBox *checkChan5;
    QCheckBox *checkChan6;
    QCheckBox *checkChan7;
    QCheckBox *checkChan8;
    QCheckBox *checkChan9;
    QCheckBox *checkChan10;
    QCheckBox *checkChan11;
    QCheckBox *checkChan12;
    QCheckBox *checkMM3X;
    QCheckBox *checkMM3Y;
    QCheckBox *checkMM3Z;
    QWidget *Serial;
    QGridLayout *gridLayout_55;
    QGridLayout *serialGrid;
    QWidget *EngineTest;
    QGridLayout *gridLayout_82;
    QGridLayout *i2cGrid;
    QMenuBar *menuBar;
    QMenu *menuConnect;
    QMenu *menuEdit;
    QMenu *mapproviderGroup;

    void setupUi(QMainWindow *baseStation)
    {
        if (baseStation->objectName().isEmpty())
            baseStation->setObjectName(QString::fromUtf8("baseStation"));
        baseStation->setEnabled(true);
        baseStation->resize(730, 480);
        baseStation->setMinimumSize(QSize(730, 480));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        baseStation->setFont(font);
        baseStation->setContextMenuPolicy(Qt::DefaultContextMenu);
        baseStation->setLayoutDirection(Qt::LeftToRight);
        baseStation->setDocumentMode(false);
        actionConnect_osiFC = new QAction(baseStation);
        actionConnect_osiFC->setObjectName(QString::fromUtf8("actionConnect_osiFC"));
        actionConnect_osiFC->setCheckable(true);
        actionDisconnect_osiFC = new QAction(baseStation);
        actionDisconnect_osiFC->setObjectName(QString::fromUtf8("actionDisconnect_osiFC"));
        actionDisconnect_osiFC->setCheckable(true);
        actionCleanSerialOutput = new QAction(baseStation);
        actionCleanSerialOutput->setObjectName(QString::fromUtf8("actionCleanSerialOutput"));
        osmAction = new QAction(baseStation);
        osmAction->setObjectName(QString::fromUtf8("osmAction"));
        osmAction->setCheckable(true);
        osmAction->setChecked(true);
        osmAction->setEnabled(true);
        yahooActionMap = new QAction(baseStation);
        yahooActionMap->setObjectName(QString::fromUtf8("yahooActionMap"));
        yahooActionMap->setEnabled(false);
        yahooActionSatellite = new QAction(baseStation);
        yahooActionSatellite->setObjectName(QString::fromUtf8("yahooActionSatellite"));
        yahooActionSatellite->setEnabled(false);
        centralWidget = new QWidget(baseStation);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_56 = new QGridLayout(centralWidget);
        gridLayout_56->setSpacing(0);
        gridLayout_56->setContentsMargins(0, 0, 0, 0);
        gridLayout_56->setObjectName(QString::fromUtf8("gridLayout_56"));
        mainTab = new QTabWidget(centralWidget);
        mainTab->setObjectName(QString::fromUtf8("mainTab"));
        mainTab->setMinimumSize(QSize(693, 453));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setBold(false);
        font1.setWeight(50);
        mainTab->setFont(font1);
        Cockpit = new QWidget();
        Cockpit->setObjectName(QString::fromUtf8("Cockpit"));
        gridLayout_75 = new QGridLayout(Cockpit);
        gridLayout_75->setSpacing(6);
        gridLayout_75->setContentsMargins(11, 11, 11, 11);
        gridLayout_75->setObjectName(QString::fromUtf8("gridLayout_75"));
        gridLayout_75->setHorizontalSpacing(0);
        gridLayout_75->setVerticalSpacing(1);
        gridLayout_75->setContentsMargins(2, 0, 1, 4);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Compass = new QGroupBox(Cockpit);
        Compass->setObjectName(QString::fromUtf8("Compass"));
        Compass->setMinimumSize(QSize(0, 0));
        compassPlace = new QVBoxLayout(Compass);
        compassPlace->setSpacing(6);
        compassPlace->setContentsMargins(11, 11, 11, 11);
        compassPlace->setObjectName(QString::fromUtf8("compassPlace"));

        horizontalLayout_2->addWidget(Compass);

        Attitude = new QGroupBox(Cockpit);
        Attitude->setObjectName(QString::fromUtf8("Attitude"));
        Attitude->setMinimumSize(QSize(0, 188));
        attitudePlace = new QVBoxLayout(Attitude);
        attitudePlace->setSpacing(6);
        attitudePlace->setContentsMargins(11, 11, 11, 11);
        attitudePlace->setObjectName(QString::fromUtf8("attitudePlace"));

        horizontalLayout_2->addWidget(Attitude);

        AltidudeGain_3 = new QGroupBox(Cockpit);
        AltidudeGain_3->setObjectName(QString::fromUtf8("AltidudeGain_3"));
        AltidudeGain_3->setMinimumSize(QSize(75, 0));
        AltidudeGain_3->setMaximumSize(QSize(75, 16777215));
        verticalLayout_3 = new QVBoxLayout(AltidudeGain_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, 0);
        gainY = new QwtSlider(AltidudeGain_3);
        gainY->setObjectName(QString::fromUtf8("gainY"));
        gainY->setLayoutDirection(Qt::LeftToRight);
        gainY->setReadOnly(true);
        gainY->setOrientation(Qt::Vertical);
        gainY->setScalePosition(QwtSlider::LeftScale);
        gainY->setThumbLength(8);
        gainY->setThumbWidth(14);
        gainY->setBorderWidth(2);

        verticalLayout_3->addWidget(gainY);


        horizontalLayout_2->addWidget(AltidudeGain_3);

        Speed = new QGroupBox(Cockpit);
        Speed->setObjectName(QString::fromUtf8("Speed"));
        Speed->setMinimumSize(QSize(0, 0));
        speedPlace = new QVBoxLayout(Speed);
        speedPlace->setSpacing(6);
        speedPlace->setContentsMargins(11, 11, 11, 11);
        speedPlace->setObjectName(QString::fromUtf8("speedPlace"));

        horizontalLayout_2->addWidget(Speed);


        gridLayout_75->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        gridLayout_74 = new QGridLayout();
        gridLayout_74->setSpacing(0);
        gridLayout_74->setObjectName(QString::fromUtf8("gridLayout_74"));
        AltidudeGain_2 = new QGroupBox(Cockpit);
        AltidudeGain_2->setObjectName(QString::fromUtf8("AltidudeGain_2"));
        AltidudeGain_2->setMinimumSize(QSize(0, 85));
        AltidudeGain_2->setMaximumSize(QSize(16777215, 85));
        verticalLayout_2 = new QVBoxLayout(AltidudeGain_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(1, -1, 0, -1);
        gainX = new QwtSlider(AltidudeGain_2);
        gainX->setObjectName(QString::fromUtf8("gainX"));
        gainX->setReadOnly(true);
        gainX->setScalePosition(QwtSlider::TopScale);
        gainX->setThumbLength(8);
        gainX->setThumbWidth(14);
        gainX->setBorderWidth(2);

        verticalLayout_2->addWidget(gainX);


        gridLayout_74->addWidget(AltidudeGain_2, 0, 2, 1, 1);

        groupBox_3 = new QGroupBox(Cockpit);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(258, 85));
        groupBox_3->setMaximumSize(QSize(16777215, 85));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(3, 2, 2, 2);
        EngineBar_1 = new QSlider(groupBox_3);
        EngineBar_1->setObjectName(QString::fromUtf8("EngineBar_1"));
        EngineBar_1->setMaximum(255);
        EngineBar_1->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(EngineBar_1, 0, 0, 1, 1);

        EngineBar_2 = new QSlider(groupBox_3);
        EngineBar_2->setObjectName(QString::fromUtf8("EngineBar_2"));
        EngineBar_2->setMaximum(255);
        EngineBar_2->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(EngineBar_2, 0, 1, 1, 1);

        EngineBar_3 = new QSlider(groupBox_3);
        EngineBar_3->setObjectName(QString::fromUtf8("EngineBar_3"));
        EngineBar_3->setMaximum(255);
        EngineBar_3->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(EngineBar_3, 0, 2, 1, 1);

        EngineBar_4 = new QSlider(groupBox_3);
        EngineBar_4->setObjectName(QString::fromUtf8("EngineBar_4"));
        EngineBar_4->setMaximum(255);
        EngineBar_4->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(EngineBar_4, 0, 3, 1, 1);

        EngineBar_5 = new QSlider(groupBox_3);
        EngineBar_5->setObjectName(QString::fromUtf8("EngineBar_5"));
        EngineBar_5->setMaximum(255);
        EngineBar_5->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(EngineBar_5, 0, 4, 1, 1);

        EngineBar_6 = new QSlider(groupBox_3);
        EngineBar_6->setObjectName(QString::fromUtf8("EngineBar_6"));
        EngineBar_6->setMaximum(255);
        EngineBar_6->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(EngineBar_6, 0, 5, 1, 1);

        EngineBar_7 = new QSlider(groupBox_3);
        EngineBar_7->setObjectName(QString::fromUtf8("EngineBar_7"));
        EngineBar_7->setMaximum(255);
        EngineBar_7->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(EngineBar_7, 0, 6, 1, 1);

        EngineBar_8 = new QSlider(groupBox_3);
        EngineBar_8->setObjectName(QString::fromUtf8("EngineBar_8"));
        EngineBar_8->setMaximum(255);
        EngineBar_8->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(EngineBar_8, 0, 7, 1, 1);


        gridLayout_74->addWidget(groupBox_3, 0, 3, 1, 1);

        AltidudeGain = new QGroupBox(Cockpit);
        AltidudeGain->setObjectName(QString::fromUtf8("AltidudeGain"));
        verticalLayout = new QVBoxLayout(AltidudeGain);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        altitudeGainMeter = new QwtSlider(AltidudeGain);
        altitudeGainMeter->setObjectName(QString::fromUtf8("altitudeGainMeter"));
        altitudeGainMeter->setReadOnly(true);
        altitudeGainMeter->setOrientation(Qt::Vertical);
        altitudeGainMeter->setScalePosition(QwtSlider::LeftScale);
        altitudeGainMeter->setBgStyle(QwtSlider::BgTrough);
        altitudeGainMeter->setThumbLength(8);
        altitudeGainMeter->setThumbWidth(14);
        altitudeGainMeter->setBorderWidth(2);

        verticalLayout->addWidget(altitudeGainMeter);


        gridLayout_74->addWidget(AltidudeGain, 0, 4, 2, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        groupBox_8 = new QGroupBox(Cockpit);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        gridLayout_11 = new QGridLayout(groupBox_8);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        altitude = new QLCDNumber(groupBox_8);
        altitude->setObjectName(QString::fromUtf8("altitude"));
        altitude->setFont(font);
        altitude->setSmallDecimalPoint(false);
        altitude->setSegmentStyle(QLCDNumber::Flat);
        altitude->setProperty("intValue", QVariant(0));

        gridLayout_11->addWidget(altitude, 0, 0, 1, 1);


        verticalLayout_8->addWidget(groupBox_8);

        groupBox_9 = new QGroupBox(Cockpit);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        gridLayout_12 = new QGridLayout(groupBox_9);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        distance = new QLCDNumber(groupBox_9);
        distance->setObjectName(QString::fromUtf8("distance"));
        distance->setSmallDecimalPoint(false);
        distance->setSegmentStyle(QLCDNumber::Flat);
        distance->setProperty("intValue", QVariant(0));

        gridLayout_12->addWidget(distance, 0, 0, 1, 1);


        verticalLayout_8->addWidget(groupBox_9);

        groupBox_10 = new QGroupBox(Cockpit);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        gridLayout_13 = new QGridLayout(groupBox_10);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        runTime = new QLCDNumber(groupBox_10);
        runTime->setObjectName(QString::fromUtf8("runTime"));
        runTime->setSmallDecimalPoint(false);
        runTime->setNumDigits(4);
        runTime->setSegmentStyle(QLCDNumber::Flat);
        runTime->setProperty("intValue", QVariant(0));

        gridLayout_13->addWidget(runTime, 0, 0, 1, 1);


        verticalLayout_8->addWidget(groupBox_10);


        gridLayout_74->addLayout(verticalLayout_8, 0, 0, 2, 1);

        groupBox_4 = new QGroupBox(Cockpit);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(7);
        gridLayout_3->setVerticalSpacing(0);
        gridLayout_3->setContentsMargins(5, 1, 5, 3);
        RCChanBar_2 = new QSlider(groupBox_4);
        RCChanBar_2->setObjectName(QString::fromUtf8("RCChanBar_2"));
        RCChanBar_2->setMaximum(255);
        RCChanBar_2->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(RCChanBar_2, 0, 3, 1, 1);

        RCChanBar_3 = new QSlider(groupBox_4);
        RCChanBar_3->setObjectName(QString::fromUtf8("RCChanBar_3"));
        RCChanBar_3->setMaximum(255);
        RCChanBar_3->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(RCChanBar_3, 0, 5, 1, 1);

        RCChanBar_4 = new QSlider(groupBox_4);
        RCChanBar_4->setObjectName(QString::fromUtf8("RCChanBar_4"));
        RCChanBar_4->setMaximum(255);
        RCChanBar_4->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(RCChanBar_4, 0, 7, 1, 1);

        RCChanBar_5 = new QSlider(groupBox_4);
        RCChanBar_5->setObjectName(QString::fromUtf8("RCChanBar_5"));
        RCChanBar_5->setMaximum(255);
        RCChanBar_5->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(RCChanBar_5, 0, 9, 1, 1);

        RCChanBar_6 = new QSlider(groupBox_4);
        RCChanBar_6->setObjectName(QString::fromUtf8("RCChanBar_6"));
        RCChanBar_6->setMaximum(255);
        RCChanBar_6->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(RCChanBar_6, 0, 11, 1, 1);

        RCChanBar_7 = new QSlider(groupBox_4);
        RCChanBar_7->setObjectName(QString::fromUtf8("RCChanBar_7"));
        RCChanBar_7->setMaximum(255);
        RCChanBar_7->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(RCChanBar_7, 0, 13, 1, 1);

        RCChanBar_8 = new QSlider(groupBox_4);
        RCChanBar_8->setObjectName(QString::fromUtf8("RCChanBar_8"));
        RCChanBar_8->setMaximum(255);
        RCChanBar_8->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(RCChanBar_8, 0, 15, 1, 1);

        RCChanBar_9 = new QSlider(groupBox_4);
        RCChanBar_9->setObjectName(QString::fromUtf8("RCChanBar_9"));
        RCChanBar_9->setMaximum(255);
        RCChanBar_9->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(RCChanBar_9, 0, 17, 1, 1);

        RCChanBar_10 = new QSlider(groupBox_4);
        RCChanBar_10->setObjectName(QString::fromUtf8("RCChanBar_10"));
        RCChanBar_10->setMaximum(255);
        RCChanBar_10->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(RCChanBar_10, 0, 19, 1, 1);

        RCChanBar_11 = new QSlider(groupBox_4);
        RCChanBar_11->setObjectName(QString::fromUtf8("RCChanBar_11"));
        RCChanBar_11->setMaximum(255);
        RCChanBar_11->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(RCChanBar_11, 0, 21, 1, 1);

        RCChanBar_12 = new QSlider(groupBox_4);
        RCChanBar_12->setObjectName(QString::fromUtf8("RCChanBar_12"));
        RCChanBar_12->setMaximum(255);
        RCChanBar_12->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(RCChanBar_12, 0, 22, 1, 1);

        RCChanText_12 = new QLineEdit(groupBox_4);
        RCChanText_12->setObjectName(QString::fromUtf8("RCChanText_12"));
        RCChanText_12->setMaxLength(4);

        gridLayout_3->addWidget(RCChanText_12, 1, 22, 1, 1);

        RCChanText_11 = new QLineEdit(groupBox_4);
        RCChanText_11->setObjectName(QString::fromUtf8("RCChanText_11"));
        RCChanText_11->setMaxLength(4);

        gridLayout_3->addWidget(RCChanText_11, 1, 21, 1, 1);

        RCChanText_10 = new QLineEdit(groupBox_4);
        RCChanText_10->setObjectName(QString::fromUtf8("RCChanText_10"));
        RCChanText_10->setMaxLength(4);

        gridLayout_3->addWidget(RCChanText_10, 1, 19, 1, 1);

        RCChanText_9 = new QLineEdit(groupBox_4);
        RCChanText_9->setObjectName(QString::fromUtf8("RCChanText_9"));
        RCChanText_9->setMaxLength(4);

        gridLayout_3->addWidget(RCChanText_9, 1, 17, 1, 1);

        RCChanText_8 = new QLineEdit(groupBox_4);
        RCChanText_8->setObjectName(QString::fromUtf8("RCChanText_8"));
        RCChanText_8->setMaxLength(4);

        gridLayout_3->addWidget(RCChanText_8, 1, 15, 1, 1);

        RCChanText_7 = new QLineEdit(groupBox_4);
        RCChanText_7->setObjectName(QString::fromUtf8("RCChanText_7"));
        RCChanText_7->setMaxLength(4);

        gridLayout_3->addWidget(RCChanText_7, 1, 13, 1, 1);

        RCChanText_6 = new QLineEdit(groupBox_4);
        RCChanText_6->setObjectName(QString::fromUtf8("RCChanText_6"));
        RCChanText_6->setMaxLength(4);

        gridLayout_3->addWidget(RCChanText_6, 1, 11, 1, 1);

        RCChanText_5 = new QLineEdit(groupBox_4);
        RCChanText_5->setObjectName(QString::fromUtf8("RCChanText_5"));
        RCChanText_5->setMaxLength(4);

        gridLayout_3->addWidget(RCChanText_5, 1, 9, 1, 1);

        RCChanText_4 = new QLineEdit(groupBox_4);
        RCChanText_4->setObjectName(QString::fromUtf8("RCChanText_4"));
        RCChanText_4->setMaxLength(4);

        gridLayout_3->addWidget(RCChanText_4, 1, 7, 1, 1);

        RCChanText_3 = new QLineEdit(groupBox_4);
        RCChanText_3->setObjectName(QString::fromUtf8("RCChanText_3"));
        RCChanText_3->setMaxLength(4);

        gridLayout_3->addWidget(RCChanText_3, 1, 5, 1, 1);

        RCChanText_2 = new QLineEdit(groupBox_4);
        RCChanText_2->setObjectName(QString::fromUtf8("RCChanText_2"));
        RCChanText_2->setMaxLength(4);

        gridLayout_3->addWidget(RCChanText_2, 1, 3, 1, 1);

        RCChanText_1 = new QLineEdit(groupBox_4);
        RCChanText_1->setObjectName(QString::fromUtf8("RCChanText_1"));
        RCChanText_1->setMaxLength(4);

        gridLayout_3->addWidget(RCChanText_1, 1, 1, 1, 1);

        RCChanBar_1 = new QSlider(groupBox_4);
        RCChanBar_1->setObjectName(QString::fromUtf8("RCChanBar_1"));
        RCChanBar_1->setMaximum(255);
        RCChanBar_1->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(RCChanBar_1, 0, 1, 1, 1);


        gridLayout_74->addWidget(groupBox_4, 1, 2, 1, 2);

        UBatCok = new QGroupBox(Cockpit);
        UBatCok->setObjectName(QString::fromUtf8("UBatCok"));
        gridLayout_5 = new QGridLayout(UBatCok);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(0);
        gridLayout_5->setVerticalSpacing(6);
        gridLayout_5->setContentsMargins(2, 0, 3, 3);
        UBat = new QProgressBar(UBatCok);
        UBat->setObjectName(QString::fromUtf8("UBat"));
        UBat->setMinimumSize(QSize(43, 0));
        UBat->setMaximum(180);
        UBat->setValue(0);
        UBat->setOrientation(Qt::Vertical);

        gridLayout_5->addWidget(UBat, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        UBatText = new QLineEdit(UBatCok);
        UBatText->setObjectName(QString::fromUtf8("UBatText"));
        QFont font2;
        font2.setKerning(true);
        UBatText->setFont(font2);
        UBatText->setMaxLength(5);

        gridLayout_5->addWidget(UBatText, 2, 1, 1, 1);


        gridLayout_74->addWidget(UBatCok, 0, 1, 2, 1);


        horizontalLayout_3->addLayout(gridLayout_74);


        gridLayout_75->addLayout(horizontalLayout_3, 1, 0, 1, 2);

        label_232 = new QLabel(Cockpit);
        label_232->setObjectName(QString::fromUtf8("label_232"));

        gridLayout_75->addWidget(label_232, 2, 0, 1, 1);

        messages = new QTextBrowser(Cockpit);
        messages->setObjectName(QString::fromUtf8("messages"));
        messages->setMinimumSize(QSize(0, 21));
        messages->setMaximumSize(QSize(16777215, 21));

        gridLayout_75->addWidget(messages, 2, 1, 1, 1);

        mainTab->addTab(Cockpit, QString());
        Maps = new QWidget();
        Maps->setObjectName(QString::fromUtf8("Maps"));
        gridLayout_71 = new QGridLayout(Maps);
        gridLayout_71->setSpacing(6);
        gridLayout_71->setContentsMargins(0, 0, 0, 0);
        gridLayout_71->setObjectName(QString::fromUtf8("gridLayout_71"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_5 = new QGroupBox(Maps);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_4 = new QVBoxLayout(groupBox_5);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        mapLayout = new QVBoxLayout();
        mapLayout->setSpacing(0);
        mapLayout->setObjectName(QString::fromUtf8("mapLayout"));
        mapLayout->setContentsMargins(-1, 0, -1, -1);

        verticalLayout_4->addLayout(mapLayout);

        mapSliderLayout = new QVBoxLayout();
        mapSliderLayout->setSpacing(0);
        mapSliderLayout->setObjectName(QString::fromUtf8("mapSliderLayout"));

        verticalLayout_4->addLayout(mapSliderLayout);

        verticalLayout_4->setStretch(0, 92);
        verticalLayout_4->setStretch(1, 8);

        horizontalLayout->addWidget(groupBox_5);

        frame = new QFrame(Maps);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(162, 150));
        frame->setMaximumSize(QSize(162, 16777215));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_67 = new QGridLayout(frame);
        gridLayout_67->setSpacing(6);
        gridLayout_67->setContentsMargins(0, 0, 0, 0);
        gridLayout_67->setObjectName(QString::fromUtf8("gridLayout_67"));
        wayPointTabs = new QTabWidget(frame);
        wayPointTabs->setObjectName(QString::fromUtf8("wayPointTabs"));
        wayPointTabs->setMinimumSize(QSize(149, 154));
        wayPointTabs->setMouseTracking(true);
        wayPointTabs->setIconSize(QSize(0, 0));
        pos = new QWidget();
        pos->setObjectName(QString::fromUtf8("pos"));
        verticalLayout_10 = new QVBoxLayout(pos);
        verticalLayout_10->setSpacing(3);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(4, 4, 5, 0);
        groupBox_14 = new QGroupBox(pos);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        gridLayout_69 = new QGridLayout(groupBox_14);
        gridLayout_69->setSpacing(6);
        gridLayout_69->setContentsMargins(11, 11, 11, 11);
        gridLayout_69->setObjectName(QString::fromUtf8("gridLayout_69"));
        lcdNumber_7 = new QLCDNumber(groupBox_14);
        lcdNumber_7->setObjectName(QString::fromUtf8("lcdNumber_7"));
        lcdNumber_7->setSmallDecimalPoint(false);
        lcdNumber_7->setNumDigits(9);
        lcdNumber_7->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_69->addWidget(lcdNumber_7, 0, 1, 1, 1);

        lcdNumber_8 = new QLCDNumber(groupBox_14);
        lcdNumber_8->setObjectName(QString::fromUtf8("lcdNumber_8"));
        lcdNumber_8->setNumDigits(9);
        lcdNumber_8->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_69->addWidget(lcdNumber_8, 1, 1, 1, 1);

        label_241 = new QLabel(groupBox_14);
        label_241->setObjectName(QString::fromUtf8("label_241"));
        label_241->setMaximumSize(QSize(20, 16777215));

        gridLayout_69->addWidget(label_241, 0, 0, 1, 1);

        label_242 = new QLabel(groupBox_14);
        label_242->setObjectName(QString::fromUtf8("label_242"));

        gridLayout_69->addWidget(label_242, 1, 0, 1, 1);


        verticalLayout_10->addWidget(groupBox_14);

        groupBox_11 = new QGroupBox(pos);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        gridLayout_68 = new QGridLayout(groupBox_11);
        gridLayout_68->setSpacing(6);
        gridLayout_68->setContentsMargins(11, 11, 11, 11);
        gridLayout_68->setObjectName(QString::fromUtf8("gridLayout_68"));
        lcdNumber = new QLCDNumber(groupBox_11);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setNumDigits(9);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_68->addWidget(lcdNumber, 0, 1, 1, 1);

        lcdNumber_2 = new QLCDNumber(groupBox_11);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setNumDigits(9);
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_68->addWidget(lcdNumber_2, 2, 1, 1, 1);

        label_239 = new QLabel(groupBox_11);
        label_239->setObjectName(QString::fromUtf8("label_239"));
        label_239->setMaximumSize(QSize(20, 16777215));

        gridLayout_68->addWidget(label_239, 0, 0, 1, 1);

        label_240 = new QLabel(groupBox_11);
        label_240->setObjectName(QString::fromUtf8("label_240"));

        gridLayout_68->addWidget(label_240, 2, 0, 1, 1);


        verticalLayout_10->addWidget(groupBox_11);

        groupBox_12 = new QGroupBox(pos);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        gridLayout_70 = new QGridLayout(groupBox_12);
        gridLayout_70->setSpacing(6);
        gridLayout_70->setContentsMargins(11, 11, 11, 11);
        gridLayout_70->setObjectName(QString::fromUtf8("gridLayout_70"));
        lcdNumber_4 = new QLCDNumber(groupBox_12);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));
        lcdNumber_4->setNumDigits(9);
        lcdNumber_4->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_70->addWidget(lcdNumber_4, 1, 1, 1, 1);

        lcdNumber_3 = new QLCDNumber(groupBox_12);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
        lcdNumber_3->setNumDigits(9);
        lcdNumber_3->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_70->addWidget(lcdNumber_3, 2, 1, 1, 1);

        label_243 = new QLabel(groupBox_12);
        label_243->setObjectName(QString::fromUtf8("label_243"));
        label_243->setMaximumSize(QSize(20, 16777215));

        gridLayout_70->addWidget(label_243, 1, 0, 1, 1);

        label_244 = new QLabel(groupBox_12);
        label_244->setObjectName(QString::fromUtf8("label_244"));
        label_244->setMinimumSize(QSize(20, 0));

        gridLayout_70->addWidget(label_244, 2, 0, 1, 1);


        verticalLayout_10->addWidget(groupBox_12);

        groupBox_13 = new QGroupBox(pos);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        groupBox_13->setMinimumSize(QSize(0, 89));
        gridLayout = new QGridLayout(groupBox_13);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(5);
        gridLayout->setContentsMargins(9, 1, -1, -1);
        lcdNumber_5 = new QLCDNumber(groupBox_13);
        lcdNumber_5->setObjectName(QString::fromUtf8("lcdNumber_5"));
        lcdNumber_5->setMinimumSize(QSize(60, 20));
        lcdNumber_5->setNumDigits(4);
        lcdNumber_5->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(lcdNumber_5, 1, 1, 1, 1);

        lcdNumber_9 = new QLCDNumber(groupBox_13);
        lcdNumber_9->setObjectName(QString::fromUtf8("lcdNumber_9"));
        lcdNumber_9->setMinimumSize(QSize(60, 20));
        lcdNumber_9->setNumDigits(4);
        lcdNumber_9->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(lcdNumber_9, 2, 1, 1, 1);

        label_227 = new QLabel(groupBox_13);
        label_227->setObjectName(QString::fromUtf8("label_227"));
        label_227->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(label_227, 1, 0, 1, 1);

        label_228 = new QLabel(groupBox_13);
        label_228->setObjectName(QString::fromUtf8("label_228"));

        gridLayout->addWidget(label_228, 2, 0, 1, 1);

        lcdNumber_6 = new QLCDNumber(groupBox_13);
        lcdNumber_6->setObjectName(QString::fromUtf8("lcdNumber_6"));
        lcdNumber_6->setMinimumSize(QSize(60, 20));
        lcdNumber_6->setNumDigits(4);
        lcdNumber_6->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(lcdNumber_6, 3, 1, 1, 1);

        label_229 = new QLabel(groupBox_13);
        label_229->setObjectName(QString::fromUtf8("label_229"));

        gridLayout->addWidget(label_229, 3, 0, 1, 1);


        verticalLayout_10->addWidget(groupBox_13);

        verticalSpacer_27 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_27);

        wayPointTabs->addTab(pos, QString());
        wayP = new QWidget();
        wayP->setObjectName(QString::fromUtf8("wayP"));
        verticalLayout_6 = new QVBoxLayout(wayP);
        verticalLayout_6->setSpacing(3);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(5, 4, 5, 0);
        gridLayout_78 = new QGridLayout();
        gridLayout_78->setSpacing(6);
        gridLayout_78->setObjectName(QString::fromUtf8("gridLayout_78"));
        wayPointNum = new QSpinBox(wayP);
        wayPointNum->setObjectName(QString::fromUtf8("wayPointNum"));
        wayPointNum->setMinimumSize(QSize(0, 17));
        wayPointNum->setMaximum(10);

        gridLayout_78->addWidget(wayPointNum, 2, 0, 1, 1);

        checkBox = new QCheckBox(wayP);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout_78->addWidget(checkBox, 2, 1, 1, 1);

        label_233 = new QLabel(wayP);
        label_233->setObjectName(QString::fromUtf8("label_233"));

        gridLayout_78->addWidget(label_233, 1, 0, 1, 1);

        label_249 = new QLabel(wayP);
        label_249->setObjectName(QString::fromUtf8("label_249"));

        gridLayout_78->addWidget(label_249, 0, 0, 1, 1);

        wayPointElevation = new QSpinBox(wayP);
        wayPointElevation->setObjectName(QString::fromUtf8("wayPointElevation"));
        wayPointElevation->setMaximum(8850);
        wayPointElevation->setValue(523);

        gridLayout_78->addWidget(wayPointElevation, 0, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout_78);

        gridLayout_76 = new QGridLayout();
        gridLayout_76->setSpacing(6);
        gridLayout_76->setObjectName(QString::fromUtf8("gridLayout_76"));
        wayPointWaitTime = new QSpinBox(wayP);
        wayPointWaitTime->setObjectName(QString::fromUtf8("wayPointWaitTime"));
        wayPointWaitTime->setMinimumSize(QSize(0, 17));
        wayPointWaitTime->setMinimum(20);
        wayPointWaitTime->setMaximum(120);

        gridLayout_76->addWidget(wayPointWaitTime, 2, 0, 1, 1);

        label_230 = new QLabel(wayP);
        label_230->setObjectName(QString::fromUtf8("label_230"));

        gridLayout_76->addWidget(label_230, 1, 0, 1, 1);

        label_231 = new QLabel(wayP);
        label_231->setObjectName(QString::fromUtf8("label_231"));

        gridLayout_76->addWidget(label_231, 1, 1, 1, 1);

        wayPointAction = new QComboBox(wayP);
        wayPointAction->setObjectName(QString::fromUtf8("wayPointAction"));
        wayPointAction->setMinimumSize(QSize(0, 20));

        gridLayout_76->addWidget(wayPointAction, 2, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout_76);

        gridLayout_77 = new QGridLayout();
        gridLayout_77->setSpacing(6);
        gridLayout_77->setObjectName(QString::fromUtf8("gridLayout_77"));
        label_234 = new QLabel(wayP);
        label_234->setObjectName(QString::fromUtf8("label_234"));

        gridLayout_77->addWidget(label_234, 0, 0, 1, 1);

        wayPointLong = new QLineEdit(wayP);
        wayPointLong->setObjectName(QString::fromUtf8("wayPointLong"));
        wayPointLong->setMinimumSize(QSize(0, 17));
        wayPointLong->setMaxLength(10);
        wayPointLong->setReadOnly(false);

        gridLayout_77->addWidget(wayPointLong, 1, 0, 1, 1);

        label_235 = new QLabel(wayP);
        label_235->setObjectName(QString::fromUtf8("label_235"));

        gridLayout_77->addWidget(label_235, 0, 1, 1, 1);

        wayPointLat = new QLineEdit(wayP);
        wayPointLat->setObjectName(QString::fromUtf8("wayPointLat"));
        wayPointLat->setMinimumSize(QSize(0, 17));
        wayPointLat->setMaxLength(10);

        gridLayout_77->addWidget(wayPointLat, 1, 1, 1, 1);

        label_245 = new QLabel(wayP);
        label_245->setObjectName(QString::fromUtf8("label_245"));

        gridLayout_77->addWidget(label_245, 2, 0, 1, 1);

        label_246 = new QLabel(wayP);
        label_246->setObjectName(QString::fromUtf8("label_246"));

        gridLayout_77->addWidget(label_246, 2, 1, 1, 1);

        wayPointAlt = new QSpinBox(wayP);
        wayPointAlt->setObjectName(QString::fromUtf8("wayPointAlt"));
        wayPointAlt->setMaximum(250);

        gridLayout_77->addWidget(wayPointAlt, 3, 0, 1, 1);

        wayPointSpeed = new QSpinBox(wayP);
        wayPointSpeed->setObjectName(QString::fromUtf8("wayPointSpeed"));
        wayPointSpeed->setMaximum(5);
        wayPointSpeed->setSingleStep(1);

        gridLayout_77->addWidget(wayPointSpeed, 3, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout_77);

        gridLayout_79 = new QGridLayout();
        gridLayout_79->setSpacing(6);
        gridLayout_79->setObjectName(QString::fromUtf8("gridLayout_79"));
        label_236 = new QLabel(wayP);
        label_236->setObjectName(QString::fromUtf8("label_236"));

        gridLayout_79->addWidget(label_236, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(wayP);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 17));

        gridLayout_79->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(wayP);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 17));

        gridLayout_79->addWidget(pushButton_3, 1, 1, 1, 1);

        label_247 = new QLabel(wayP);
        label_247->setObjectName(QString::fromUtf8("label_247"));

        gridLayout_79->addWidget(label_247, 2, 0, 1, 1);

        pushButton_4 = new QPushButton(wayP);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(0, 17));

        gridLayout_79->addWidget(pushButton_4, 3, 0, 1, 1);

        label_237 = new QLabel(wayP);
        label_237->setObjectName(QString::fromUtf8("label_237"));

        gridLayout_79->addWidget(label_237, 5, 0, 1, 1);

        pushButton_5 = new QPushButton(wayP);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(0, 17));

        gridLayout_79->addWidget(pushButton_5, 6, 0, 1, 1);

        pushButton_6 = new QPushButton(wayP);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(0, 17));

        gridLayout_79->addWidget(pushButton_6, 6, 1, 1, 1);

        label_248 = new QLabel(wayP);
        label_248->setObjectName(QString::fromUtf8("label_248"));

        gridLayout_79->addWidget(label_248, 5, 1, 1, 1);

        pushButton_7 = new QPushButton(wayP);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout_79->addWidget(pushButton_7, 3, 1, 1, 1);

        pushButton_8 = new QPushButton(wayP);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout_79->addWidget(pushButton_8, 4, 0, 1, 1);


        verticalLayout_6->addLayout(gridLayout_79);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        wayPointTabs->addTab(wayP, QString());
        wayPs = new QWidget();
        wayPs->setObjectName(QString::fromUtf8("wayPs"));
        verticalLayout_7 = new QVBoxLayout(wayPs);
        verticalLayout_7->setSpacing(3);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(3, 4, 4, 3);
        label_238 = new QLabel(wayPs);
        label_238->setObjectName(QString::fromUtf8("label_238"));

        verticalLayout_7->addWidget(label_238);

        wayPointList = new QPlainTextEdit(wayPs);
        wayPointList->setObjectName(QString::fromUtf8("wayPointList"));
        wayPointList->setAcceptDrops(false);
        wayPointList->setReadOnly(true);

        verticalLayout_7->addWidget(wayPointList);

        wayPointTabs->addTab(wayPs, QString());

        gridLayout_67->addWidget(wayPointTabs, 0, 0, 1, 1);


        horizontalLayout->addWidget(frame);

        horizontalLayout->setStretch(0, 80);
        horizontalLayout->setStretch(1, 20);

        gridLayout_71->addLayout(horizontalLayout, 0, 0, 1, 1);

        mainTab->addTab(Maps, QString());
        Setup = new QWidget();
        Setup->setObjectName(QString::fromUtf8("Setup"));
        gridLayoutWidget = new QWidget(Setup);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 40, 721, 391));
        setupGrid = new QGridLayout(gridLayoutWidget);
        setupGrid->setSpacing(6);
        setupGrid->setContentsMargins(11, 11, 11, 11);
        setupGrid->setObjectName(QString::fromUtf8("setupGrid"));
        setupGrid->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget_2 = new QWidget(Setup);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 10, 707, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        readSetting = new QPushButton(horizontalLayoutWidget_2);
        readSetting->setObjectName(QString::fromUtf8("readSetting"));

        horizontalLayout_5->addWidget(readSetting);

        readSetHdd = new QPushButton(horizontalLayoutWidget_2);
        readSetHdd->setObjectName(QString::fromUtf8("readSetHdd"));

        horizontalLayout_5->addWidget(readSetHdd);

        resetOsiFC = new QPushButton(horizontalLayoutWidget_2);
        resetOsiFC->setObjectName(QString::fromUtf8("resetOsiFC"));
        resetOsiFC->setAutoRepeat(false);
        resetOsiFC->setAutoExclusive(false);
        resetOsiFC->setAutoDefault(false);
        resetOsiFC->setDefault(false);
        resetOsiFC->setFlat(false);

        horizontalLayout_5->addWidget(resetOsiFC);

        flashSetting = new QPushButton(horizontalLayoutWidget_2);
        flashSetting->setObjectName(QString::fromUtf8("flashSetting"));

        horizontalLayout_5->addWidget(flashSetting);

        writeSetHDD = new QPushButton(horizontalLayoutWidget_2);
        writeSetHDD->setObjectName(QString::fromUtf8("writeSetHDD"));

        horizontalLayout_5->addWidget(writeSetHDD);

        writeSetting = new QPushButton(horizontalLayoutWidget_2);
        writeSetting->setObjectName(QString::fromUtf8("writeSetting"));

        horizontalLayout_5->addWidget(writeSetting);

        label_199 = new QLabel(horizontalLayoutWidget_2);
        label_199->setObjectName(QString::fromUtf8("label_199"));
        label_199->setFrameShape(QFrame::NoFrame);
        label_199->setLineWidth(0);
        label_199->setMargin(0);

        horizontalLayout_5->addWidget(label_199);

        settingNum = new QSpinBox(horizontalLayoutWidget_2);
        settingNum->setObjectName(QString::fromUtf8("settingNum"));
        settingNum->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        settingNum->setMaximum(5);

        horizontalLayout_5->addWidget(settingNum);

        label_225 = new QLabel(horizontalLayoutWidget_2);
        label_225->setObjectName(QString::fromUtf8("label_225"));
        label_225->setFrameShape(QFrame::NoFrame);
        label_225->setLineWidth(1);
        label_225->setMargin(0);

        horizontalLayout_5->addWidget(label_225);

        osiFcNum = new QSpinBox(horizontalLayoutWidget_2);
        osiFcNum->setObjectName(QString::fromUtf8("osiFcNum"));
        osiFcNum->setEnabled(false);
        osiFcNum->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        osiFcNum->setMinimum(0);
        osiFcNum->setMaximum(255);
        osiFcNum->setValue(0);

        horizontalLayout_5->addWidget(osiFcNum);

        mainTab->addTab(Setup, QString());
        Diagnostics = new QWidget();
        Diagnostics->setObjectName(QString::fromUtf8("Diagnostics"));
        verticalLayout_9 = new QVBoxLayout(Diagnostics);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        qwtPlot = new QwtPlot(Diagnostics);
        qwtPlot->setObjectName(QString::fromUtf8("qwtPlot"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qwtPlot->sizePolicy().hasHeightForWidth());
        qwtPlot->setSizePolicy(sizePolicy);
        qwtPlot->setFont(font);

        verticalLayout_9->addWidget(qwtPlot);

        horizontalScrollBar = new QScrollBar(Diagnostics);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setMinimumSize(QSize(0, 12));
        horizontalScrollBar->setMaximumSize(QSize(9999999, 12));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        verticalLayout_9->addWidget(horizontalScrollBar);

        EnableData = new QGroupBox(Diagnostics);
        EnableData->setObjectName(QString::fromUtf8("EnableData"));
        EnableData->setMaximumSize(QSize(16777215, 111));
        gridLayout_35 = new QGridLayout(EnableData);
        gridLayout_35->setSpacing(6);
        gridLayout_35->setContentsMargins(11, 11, 11, 11);
        gridLayout_35->setObjectName(QString::fromUtf8("gridLayout_35"));
        checkADCNick = new QCheckBox(EnableData);
        checkADCNick->setObjectName(QString::fromUtf8("checkADCNick"));

        gridLayout_35->addWidget(checkADCNick, 3, 0, 1, 1);

        checkADCRoll = new QCheckBox(EnableData);
        checkADCRoll->setObjectName(QString::fromUtf8("checkADCRoll"));

        gridLayout_35->addWidget(checkADCRoll, 4, 0, 1, 1);

        checkADCPitch = new QCheckBox(EnableData);
        checkADCPitch->setObjectName(QString::fromUtf8("checkADCPitch"));

        gridLayout_35->addWidget(checkADCPitch, 5, 0, 1, 1);

        checkADCX = new QCheckBox(EnableData);
        checkADCX->setObjectName(QString::fromUtf8("checkADCX"));

        gridLayout_35->addWidget(checkADCX, 6, 0, 1, 1);

        checkCycleCount = new QCheckBox(EnableData);
        checkCycleCount->setObjectName(QString::fromUtf8("checkCycleCount"));

        gridLayout_35->addWidget(checkCycleCount, 3, 2, 1, 1);

        checkADCBaro = new QCheckBox(EnableData);
        checkADCBaro->setObjectName(QString::fromUtf8("checkADCBaro"));

        gridLayout_35->addWidget(checkADCBaro, 6, 1, 1, 1);

        checkADCUbat = new QCheckBox(EnableData);
        checkADCUbat->setObjectName(QString::fromUtf8("checkADCUbat"));

        gridLayout_35->addWidget(checkADCUbat, 5, 1, 1, 1);

        checkADCZ = new QCheckBox(EnableData);
        checkADCZ->setObjectName(QString::fromUtf8("checkADCZ"));

        gridLayout_35->addWidget(checkADCZ, 4, 1, 1, 1);

        checkADCY = new QCheckBox(EnableData);
        checkADCY->setObjectName(QString::fromUtf8("checkADCY"));

        gridLayout_35->addWidget(checkADCY, 3, 1, 1, 1);

        checkEng2 = new QCheckBox(EnableData);
        checkEng2->setObjectName(QString::fromUtf8("checkEng2"));

        gridLayout_35->addWidget(checkEng2, 4, 3, 1, 1);

        checkEng1 = new QCheckBox(EnableData);
        checkEng1->setObjectName(QString::fromUtf8("checkEng1"));

        gridLayout_35->addWidget(checkEng1, 3, 3, 1, 1);

        checkEng3 = new QCheckBox(EnableData);
        checkEng3->setObjectName(QString::fromUtf8("checkEng3"));

        gridLayout_35->addWidget(checkEng3, 5, 3, 1, 1);

        checkEng4 = new QCheckBox(EnableData);
        checkEng4->setObjectName(QString::fromUtf8("checkEng4"));
        checkEng4->setEnabled(true);

        gridLayout_35->addWidget(checkEng4, 6, 3, 1, 1);

        checkEng5 = new QCheckBox(EnableData);
        checkEng5->setObjectName(QString::fromUtf8("checkEng5"));
        checkEng5->setEnabled(false);

        gridLayout_35->addWidget(checkEng5, 3, 4, 1, 1);

        checkEng6 = new QCheckBox(EnableData);
        checkEng6->setObjectName(QString::fromUtf8("checkEng6"));
        checkEng6->setEnabled(false);

        gridLayout_35->addWidget(checkEng6, 4, 4, 1, 1);

        checkEng7 = new QCheckBox(EnableData);
        checkEng7->setObjectName(QString::fromUtf8("checkEng7"));
        checkEng7->setEnabled(false);

        gridLayout_35->addWidget(checkEng7, 5, 4, 1, 1);

        checkEng8 = new QCheckBox(EnableData);
        checkEng8->setObjectName(QString::fromUtf8("checkEng8"));
        checkEng8->setEnabled(false);

        gridLayout_35->addWidget(checkEng8, 6, 4, 1, 1);

        checkChan1 = new QCheckBox(EnableData);
        checkChan1->setObjectName(QString::fromUtf8("checkChan1"));

        gridLayout_35->addWidget(checkChan1, 3, 5, 1, 1);

        checkChan2 = new QCheckBox(EnableData);
        checkChan2->setObjectName(QString::fromUtf8("checkChan2"));

        gridLayout_35->addWidget(checkChan2, 4, 5, 1, 1);

        checkChan3 = new QCheckBox(EnableData);
        checkChan3->setObjectName(QString::fromUtf8("checkChan3"));

        gridLayout_35->addWidget(checkChan3, 5, 5, 1, 1);

        checkChan4 = new QCheckBox(EnableData);
        checkChan4->setObjectName(QString::fromUtf8("checkChan4"));

        gridLayout_35->addWidget(checkChan4, 6, 5, 1, 1);

        checkChan5 = new QCheckBox(EnableData);
        checkChan5->setObjectName(QString::fromUtf8("checkChan5"));

        gridLayout_35->addWidget(checkChan5, 3, 7, 1, 1);

        checkChan6 = new QCheckBox(EnableData);
        checkChan6->setObjectName(QString::fromUtf8("checkChan6"));

        gridLayout_35->addWidget(checkChan6, 4, 7, 1, 1);

        checkChan7 = new QCheckBox(EnableData);
        checkChan7->setObjectName(QString::fromUtf8("checkChan7"));

        gridLayout_35->addWidget(checkChan7, 5, 7, 1, 1);

        checkChan8 = new QCheckBox(EnableData);
        checkChan8->setObjectName(QString::fromUtf8("checkChan8"));
        checkChan8->setEnabled(false);

        gridLayout_35->addWidget(checkChan8, 6, 7, 1, 1);

        checkChan9 = new QCheckBox(EnableData);
        checkChan9->setObjectName(QString::fromUtf8("checkChan9"));
        checkChan9->setEnabled(false);

        gridLayout_35->addWidget(checkChan9, 3, 8, 1, 1);

        checkChan10 = new QCheckBox(EnableData);
        checkChan10->setObjectName(QString::fromUtf8("checkChan10"));
        checkChan10->setEnabled(false);

        gridLayout_35->addWidget(checkChan10, 4, 8, 1, 1);

        checkChan11 = new QCheckBox(EnableData);
        checkChan11->setObjectName(QString::fromUtf8("checkChan11"));
        checkChan11->setEnabled(false);

        gridLayout_35->addWidget(checkChan11, 5, 8, 1, 1);

        checkChan12 = new QCheckBox(EnableData);
        checkChan12->setObjectName(QString::fromUtf8("checkChan12"));
        checkChan12->setEnabled(false);

        gridLayout_35->addWidget(checkChan12, 6, 8, 1, 1);

        checkMM3X = new QCheckBox(EnableData);
        checkMM3X->setObjectName(QString::fromUtf8("checkMM3X"));
        checkMM3X->setMaximumSize(QSize(16777215, 15));

        gridLayout_35->addWidget(checkMM3X, 4, 2, 1, 1);

        checkMM3Y = new QCheckBox(EnableData);
        checkMM3Y->setObjectName(QString::fromUtf8("checkMM3Y"));
        checkMM3Y->setMaximumSize(QSize(16777215, 15));

        gridLayout_35->addWidget(checkMM3Y, 5, 2, 1, 1);

        checkMM3Z = new QCheckBox(EnableData);
        checkMM3Z->setObjectName(QString::fromUtf8("checkMM3Z"));
        checkMM3Z->setMaximumSize(QSize(16777215, 15));

        gridLayout_35->addWidget(checkMM3Z, 6, 2, 1, 1);


        verticalLayout_9->addWidget(EnableData);

        mainTab->addTab(Diagnostics, QString());
        Serial = new QWidget();
        Serial->setObjectName(QString::fromUtf8("Serial"));
        sizePolicy.setHeightForWidth(Serial->sizePolicy().hasHeightForWidth());
        Serial->setSizePolicy(sizePolicy);
        gridLayout_55 = new QGridLayout(Serial);
        gridLayout_55->setSpacing(6);
        gridLayout_55->setContentsMargins(0, 0, 0, 0);
        gridLayout_55->setObjectName(QString::fromUtf8("gridLayout_55"));
        serialGrid = new QGridLayout();
        serialGrid->setSpacing(6);
        serialGrid->setObjectName(QString::fromUtf8("serialGrid"));

        gridLayout_55->addLayout(serialGrid, 0, 0, 1, 1);

        mainTab->addTab(Serial, QString());
        EngineTest = new QWidget();
        EngineTest->setObjectName(QString::fromUtf8("EngineTest"));
        gridLayout_82 = new QGridLayout(EngineTest);
        gridLayout_82->setSpacing(6);
        gridLayout_82->setContentsMargins(0, 0, 0, 0);
        gridLayout_82->setObjectName(QString::fromUtf8("gridLayout_82"));
        i2cGrid = new QGridLayout();
        i2cGrid->setSpacing(6);
        i2cGrid->setObjectName(QString::fromUtf8("i2cGrid"));

        gridLayout_82->addLayout(i2cGrid, 0, 0, 1, 1);

        mainTab->addTab(EngineTest, QString());

        gridLayout_56->addWidget(mainTab, 0, 0, 1, 1);

        baseStation->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(baseStation);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 730, 22));
        menuConnect = new QMenu(menuBar);
        menuConnect->setObjectName(QString::fromUtf8("menuConnect"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        mapproviderGroup = new QMenu(menuBar);
        mapproviderGroup->setObjectName(QString::fromUtf8("mapproviderGroup"));
        baseStation->setMenuBar(menuBar);

        menuBar->addAction(menuConnect->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(mapproviderGroup->menuAction());
        menuConnect->addAction(actionConnect_osiFC);
        menuConnect->addAction(actionDisconnect_osiFC);
        menuEdit->addAction(actionCleanSerialOutput);
        mapproviderGroup->addAction(osmAction);
        mapproviderGroup->addAction(yahooActionMap);
        mapproviderGroup->addAction(yahooActionSatellite);

        retranslateUi(baseStation);

        mainTab->setCurrentIndex(2);
        wayPointTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(baseStation);
    } // setupUi

    void retranslateUi(QMainWindow *baseStation)
    {
        baseStation->setWindowTitle(QApplication::translate("baseStation", "osiBS", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        baseStation->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        baseStation->setWhatsThis(QApplication::translate("baseStation", "This ist the osiBaseStation tool calles osiBS. It will help you to setup and controll your osiFC driven Flyer.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionConnect_osiFC->setText(QApplication::translate("baseStation", "Connect osiFC", 0, QApplication::UnicodeUTF8));
        actionDisconnect_osiFC->setText(QApplication::translate("baseStation", "Disconnect osiFC", 0, QApplication::UnicodeUTF8));
        actionCleanSerialOutput->setText(QApplication::translate("baseStation", "cleanSerialOutput", 0, QApplication::UnicodeUTF8));
        osmAction->setText(QApplication::translate("baseStation", "open street maps", 0, QApplication::UnicodeUTF8));
        yahooActionMap->setText(QApplication::translate("baseStation", "yahoo maps", 0, QApplication::UnicodeUTF8));
        yahooActionSatellite->setText(QApplication::translate("baseStation", "yahoo sattelite", 0, QApplication::UnicodeUTF8));
        Compass->setTitle(QApplication::translate("baseStation", "Compass", 0, QApplication::UnicodeUTF8));
        Attitude->setTitle(QApplication::translate("baseStation", "Attitude", 0, QApplication::UnicodeUTF8));
        AltidudeGain_3->setTitle(QApplication::translate("baseStation", "Gain Y", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        gainY->setToolTip(QApplication::translate("baseStation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Shows the gain measured by the Nick Gyro</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Speed->setTitle(QApplication::translate("baseStation", "Speed", 0, QApplication::UnicodeUTF8));
        AltidudeGain_2->setTitle(QApplication::translate("baseStation", "Gain X", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        gainX->setToolTip(QApplication::translate("baseStation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Shows the gain measured by the Roll Gyro</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox_3->setTitle(QApplication::translate("baseStation", "Engines", 0, QApplication::UnicodeUTF8));
        AltidudeGain->setTitle(QApplication::translate("baseStation", "Alt Gain", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        altitudeGainMeter->setToolTip(QApplication::translate("baseStation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Shows how quick the flyer gains altitude. </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Measured via the airpressure sensor</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox_8->setTitle(QApplication::translate("baseStation", "Altitude", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("baseStation", "Distance", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QApplication::translate("baseStation", "Runtime", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("baseStation", "RC Channels", 0, QApplication::UnicodeUTF8));
        RCChanText_12->setText(QApplication::translate("baseStation", "0", 0, QApplication::UnicodeUTF8));
        RCChanText_11->setText(QApplication::translate("baseStation", "0", 0, QApplication::UnicodeUTF8));
        RCChanText_10->setText(QApplication::translate("baseStation", "0", 0, QApplication::UnicodeUTF8));
        RCChanText_9->setText(QApplication::translate("baseStation", "0", 0, QApplication::UnicodeUTF8));
        RCChanText_8->setText(QApplication::translate("baseStation", "0", 0, QApplication::UnicodeUTF8));
        RCChanText_7->setText(QApplication::translate("baseStation", "0", 0, QApplication::UnicodeUTF8));
        RCChanText_6->setText(QApplication::translate("baseStation", "0", 0, QApplication::UnicodeUTF8));
        RCChanText_5->setText(QApplication::translate("baseStation", "0", 0, QApplication::UnicodeUTF8));
        RCChanText_4->setText(QApplication::translate("baseStation", "0", 0, QApplication::UnicodeUTF8));
        RCChanText_3->setText(QApplication::translate("baseStation", "0", 0, QApplication::UnicodeUTF8));
        RCChanText_2->setText(QApplication::translate("baseStation", "0", 0, QApplication::UnicodeUTF8));
        RCChanText_1->setText(QApplication::translate("baseStation", "0", 0, QApplication::UnicodeUTF8));
        UBatCok->setTitle(QApplication::translate("baseStation", "Battery", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        UBat->setToolTip(QApplication::translate("baseStation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Actual Batery voltage.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        UBatText->setText(QApplication::translate("baseStation", "0", 0, QApplication::UnicodeUTF8));
        label_232->setText(QApplication::translate("baseStation", "Messages", 0, QApplication::UnicodeUTF8));
        mainTab->setTabText(mainTab->indexOf(Cockpit), QApplication::translate("baseStation", "Cockpit", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("baseStation", "Map", 0, QApplication::UnicodeUTF8));
        groupBox_14->setTitle(QApplication::translate("baseStation", "Home Position ", 0, QApplication::UnicodeUTF8));
        label_241->setText(QApplication::translate("baseStation", "x", 0, QApplication::UnicodeUTF8));
        label_242->setText(QApplication::translate("baseStation", "y", 0, QApplication::UnicodeUTF8));
        groupBox_11->setTitle(QApplication::translate("baseStation", "Actual Position ", 0, QApplication::UnicodeUTF8));
        label_239->setText(QApplication::translate("baseStation", "x", 0, QApplication::UnicodeUTF8));
        label_240->setText(QApplication::translate("baseStation", "y", 0, QApplication::UnicodeUTF8));
        groupBox_12->setTitle(QApplication::translate("baseStation", "Target Position", 0, QApplication::UnicodeUTF8));
        label_243->setText(QApplication::translate("baseStation", "x", 0, QApplication::UnicodeUTF8));
        label_244->setText(QApplication::translate("baseStation", "y", 0, QApplication::UnicodeUTF8));
        groupBox_13->setTitle(QApplication::translate("baseStation", "Misc m", 0, QApplication::UnicodeUTF8));
        label_227->setText(QApplication::translate("baseStation", "Dist", 0, QApplication::UnicodeUTF8));
        label_228->setText(QApplication::translate("baseStation", "Alt", 0, QApplication::UnicodeUTF8));
        label_229->setText(QApplication::translate("baseStation", "Speed", 0, QApplication::UnicodeUTF8));
        wayPointTabs->setTabText(wayPointTabs->indexOf(pos), QApplication::translate("baseStation", "Pos", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("baseStation", "Collect", 0, QApplication::UnicodeUTF8));
        label_233->setText(QApplication::translate("baseStation", "Way Point", 0, QApplication::UnicodeUTF8));
        label_249->setText(QApplication::translate("baseStation", "Elevation", 0, QApplication::UnicodeUTF8));
        label_230->setText(QApplication::translate("baseStation", "Wait time s", 0, QApplication::UnicodeUTF8));
        label_231->setText(QApplication::translate("baseStation", "Action", 0, QApplication::UnicodeUTF8));
        wayPointAction->clear();
        wayPointAction->insertItems(0, QStringList()
         << QApplication::translate("baseStation", "Hover", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("baseStation", "turn 360", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("baseStation", "turn 240", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("baseStation", "turn 180", 0, QApplication::UnicodeUTF8)
        );
        label_234->setText(QApplication::translate("baseStation", "longitude", 0, QApplication::UnicodeUTF8));
        label_235->setText(QApplication::translate("baseStation", "latitude", 0, QApplication::UnicodeUTF8));
        label_245->setText(QApplication::translate("baseStation", "Altitude", 0, QApplication::UnicodeUTF8));
        label_246->setText(QApplication::translate("baseStation", "Speed  m/s", 0, QApplication::UnicodeUTF8));
        label_236->setText(QApplication::translate("baseStation", "Waypoints", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("baseStation", "add", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("baseStation", "remove", 0, QApplication::UnicodeUTF8));
        label_247->setText(QApplication::translate("baseStation", "Flight Path", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("baseStation", "run", 0, QApplication::UnicodeUTF8));
        label_237->setText(QApplication::translate("baseStation", "Position", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("baseStation", "go to", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("baseStation", "Home", 0, QApplication::UnicodeUTF8));
        label_248->setText(QApplication::translate("baseStation", "Homing", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("baseStation", "stop", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("baseStation", "resume", 0, QApplication::UnicodeUTF8));
        wayPointTabs->setTabText(wayPointTabs->indexOf(wayP), QApplication::translate("baseStation", "wayP", 0, QApplication::UnicodeUTF8));
        label_238->setText(QApplication::translate("baseStation", "Way Point List", 0, QApplication::UnicodeUTF8));
        wayPointTabs->setTabText(wayPointTabs->indexOf(wayPs), QApplication::translate("baseStation", "wayPL", 0, QApplication::UnicodeUTF8));
        mainTab->setTabText(mainTab->indexOf(Maps), QApplication::translate("baseStation", "Maps", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        readSetting->setToolTip(QApplication::translate("baseStation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Read settings from osiFC</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        readSetting->setText(QApplication::translate("baseStation", "Read Setting", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        readSetHdd->setToolTip(QApplication::translate("baseStation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Read settings stored on HDD</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        readSetHdd->setText(QApplication::translate("baseStation", "Read Set. HDD", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        resetOsiFC->setToolTip(QApplication::translate("baseStation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Send reset to osiFC. Only works over a cable </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">connection. Reset does not work via bluetooth</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        resetOsiFC->setText(QApplication::translate("baseStation", "Reset osiFC", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        flashSetting->setToolTip(QApplication::translate("baseStation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Write the settings in osiFC into mthe osiFC flash.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This is made so you can experiment with settings without storing them permanently in your osiFC.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        flashSetting->setText(QApplication::translate("baseStation", "Flash Settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        writeSetHDD->setToolTip(QApplication::translate("baseStation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Write the settings from osiBS to HDD.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        writeSetHDD->setText(QApplication::translate("baseStation", "Write Set. HDD", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        writeSetting->setToolTip(QApplication::translate("baseStation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Sends the settings to osiFc and also stores them on HDD</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        writeSetting->setText(QApplication::translate("baseStation", "Write Setting", 0, QApplication::UnicodeUTF8));
        label_199->setText(QApplication::translate("baseStation", "Setting Num", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        settingNum->setToolTip(QApplication::translate("baseStation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Select which setting slot you want to use.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">osiFC offers 6 diefferent setting slots.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_225->setText(QApplication::translate("baseStation", "osiFC Num", 0, QApplication::UnicodeUTF8));
        mainTab->setTabText(mainTab->indexOf(Setup), QApplication::translate("baseStation", "Setup", 0, QApplication::UnicodeUTF8));
        EnableData->setTitle(QApplication::translate("baseStation", "Enable Data", 0, QApplication::UnicodeUTF8));
        checkADCNick->setText(QApplication::translate("baseStation", "ADC Nick", 0, QApplication::UnicodeUTF8));
        checkADCRoll->setText(QApplication::translate("baseStation", "ADC Roll", 0, QApplication::UnicodeUTF8));
        checkADCPitch->setText(QApplication::translate("baseStation", "ADC Pitch", 0, QApplication::UnicodeUTF8));
        checkADCX->setText(QApplication::translate("baseStation", "ADC X", 0, QApplication::UnicodeUTF8));
        checkCycleCount->setText(QApplication::translate("baseStation", "CycleCnt", 0, QApplication::UnicodeUTF8));
        checkADCBaro->setText(QApplication::translate("baseStation", "ADC Baro", 0, QApplication::UnicodeUTF8));
        checkADCUbat->setText(QApplication::translate("baseStation", "ADC Ubat", 0, QApplication::UnicodeUTF8));
        checkADCZ->setText(QApplication::translate("baseStation", "ADC Z", 0, QApplication::UnicodeUTF8));
        checkADCY->setText(QApplication::translate("baseStation", "ADC Y", 0, QApplication::UnicodeUTF8));
        checkEng2->setText(QApplication::translate("baseStation", "Eng 2", 0, QApplication::UnicodeUTF8));
        checkEng1->setText(QApplication::translate("baseStation", "Eng 1", 0, QApplication::UnicodeUTF8));
        checkEng3->setText(QApplication::translate("baseStation", "Eng 3", 0, QApplication::UnicodeUTF8));
        checkEng4->setText(QApplication::translate("baseStation", "Eng 4", 0, QApplication::UnicodeUTF8));
        checkEng5->setText(QApplication::translate("baseStation", "Eng 5", 0, QApplication::UnicodeUTF8));
        checkEng6->setText(QApplication::translate("baseStation", "Eng 6", 0, QApplication::UnicodeUTF8));
        checkEng7->setText(QApplication::translate("baseStation", "Eng 7", 0, QApplication::UnicodeUTF8));
        checkEng8->setText(QApplication::translate("baseStation", "Eng 8", 0, QApplication::UnicodeUTF8));
        checkChan1->setText(QApplication::translate("baseStation", "Chan 1", 0, QApplication::UnicodeUTF8));
        checkChan2->setText(QApplication::translate("baseStation", "Chan 2", 0, QApplication::UnicodeUTF8));
        checkChan3->setText(QApplication::translate("baseStation", "Chan 3", 0, QApplication::UnicodeUTF8));
        checkChan4->setText(QApplication::translate("baseStation", "Chan 4", 0, QApplication::UnicodeUTF8));
        checkChan5->setText(QApplication::translate("baseStation", "Chan 5", 0, QApplication::UnicodeUTF8));
        checkChan6->setText(QApplication::translate("baseStation", "Chan 6", 0, QApplication::UnicodeUTF8));
        checkChan7->setText(QApplication::translate("baseStation", "Chan 7", 0, QApplication::UnicodeUTF8));
        checkChan8->setText(QApplication::translate("baseStation", "Chan 8", 0, QApplication::UnicodeUTF8));
        checkChan9->setText(QApplication::translate("baseStation", "Chan 9", 0, QApplication::UnicodeUTF8));
        checkChan10->setText(QApplication::translate("baseStation", "Chan 10", 0, QApplication::UnicodeUTF8));
        checkChan11->setText(QApplication::translate("baseStation", "Chan 11", 0, QApplication::UnicodeUTF8));
        checkChan12->setText(QApplication::translate("baseStation", "Chan 12", 0, QApplication::UnicodeUTF8));
        checkMM3X->setText(QApplication::translate("baseStation", "MM3 X", 0, QApplication::UnicodeUTF8));
        checkMM3Y->setText(QApplication::translate("baseStation", "MM3 Y", 0, QApplication::UnicodeUTF8));
        checkMM3Z->setText(QApplication::translate("baseStation", "MM3 Z", 0, QApplication::UnicodeUTF8));
        mainTab->setTabText(mainTab->indexOf(Diagnostics), QApplication::translate("baseStation", "Diagnostics", 0, QApplication::UnicodeUTF8));
        mainTab->setTabText(mainTab->indexOf(Serial), QApplication::translate("baseStation", "Serial", 0, QApplication::UnicodeUTF8));
        mainTab->setTabText(mainTab->indexOf(EngineTest), QApplication::translate("baseStation", "I2C", 0, QApplication::UnicodeUTF8));
        menuConnect->setTitle(QApplication::translate("baseStation", "Connect", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("baseStation", "Edit", 0, QApplication::UnicodeUTF8));
        mapproviderGroup->setTitle(QApplication::translate("baseStation", "Maps Select", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class baseStation: public Ui_baseStation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASESTATION_H
