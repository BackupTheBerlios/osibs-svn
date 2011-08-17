/********************************************************************************
** Form generated from reading UI file 'wdg_i2ctab.ui'
**
** Created: Tue 16. Aug 21:16:32 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WDG_I2CTAB_H
#define UI_WDG_I2CTAB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wdg_i2ctab
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QGridLayout *gridLayout_83;
    QPushButton *cleanOutput;
    QGroupBox *groupBox_31;
    QGridLayout *gridLayout_84;
    QLabel *label_200;
    QSpinBox *YGEI2CSourceAddress;
    QLabel *label_203;
    QLabel *label_201;
    QSpinBox *YGEI2CDestinationAddress;
    QPushButton *updateYGE;
    QSpacerItem *horizontalSpacer_15;
    QGroupBox *serialOut2;
    QGridLayout *gridLayout_6;
    QTextBrowser *serialRaw_2;
    QPushButton *startYGE;
    QWidget *tab_3;
    QPushButton *startAll;
    QGroupBox *groupBox_38;
    QProgressBar *engineLevelBar5;
    QSpinBox *freeEngineNumberTestLevel;
    QLabel *label_209;
    QSpinBox *freeEngineNumber;
    QLabel *label_210;
    QPushButton *stopAll;
    QComboBox *testEngineNumber;
    QPushButton *startEngine;
    QGroupBox *groupBox_37;
    QGridLayout *gridLayout_48;
    QProgressBar *engineLevelBar1;
    QProgressBar *engineLevelBar2;
    QProgressBar *engineLevelBar3;
    QProgressBar *engineLevelBar4;
    QProgressBar *engineLevelBar5_2;
    QProgressBar *engineLevelBar6;
    QProgressBar *engineLevelBar7;
    QProgressBar *engineLevelBar8;
    QSpinBox *engineTestLevel1;
    QSpinBox *engineTestLevel2;
    QSpinBox *engineTestLevel3;
    QSpinBox *engineTestLevel4;
    QSpinBox *engineTestLevel1_2;
    QSpinBox *engineTestLevel2_2;
    QSpinBox *engineTestLevel3_2;
    QSpinBox *engineTestLevel4_2;
    QLabel *label_205;
    QLabel *label_206;
    QLabel *label_207;
    QLabel *label_208;
    QLabel *label_222;
    QLabel *label_224;
    QLabel *label_223;
    QLabel *label_218;

    void setupUi(QWidget *wdg_i2ctab)
    {
        if (wdg_i2ctab->objectName().isEmpty())
            wdg_i2ctab->setObjectName(QString::fromUtf8("wdg_i2ctab"));
        wdg_i2ctab->resize(725, 431);
        tabWidget = new QTabWidget(wdg_i2ctab);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 724, 430));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_83 = new QGridLayout(tab_2);
        gridLayout_83->setObjectName(QString::fromUtf8("gridLayout_83"));
        cleanOutput = new QPushButton(tab_2);
        cleanOutput->setObjectName(QString::fromUtf8("cleanOutput"));

        gridLayout_83->addWidget(cleanOutput, 1, 0, 1, 1);

        groupBox_31 = new QGroupBox(tab_2);
        groupBox_31->setObjectName(QString::fromUtf8("groupBox_31"));
        groupBox_31->setMinimumSize(QSize(0, 50));
        groupBox_31->setMaximumSize(QSize(16777215, 96));
        gridLayout_84 = new QGridLayout(groupBox_31);
        gridLayout_84->setObjectName(QString::fromUtf8("gridLayout_84"));
        label_200 = new QLabel(groupBox_31);
        label_200->setObjectName(QString::fromUtf8("label_200"));

        gridLayout_84->addWidget(label_200, 1, 3, 1, 1);

        YGEI2CSourceAddress = new QSpinBox(groupBox_31);
        YGEI2CSourceAddress->setObjectName(QString::fromUtf8("YGEI2CSourceAddress"));
        YGEI2CSourceAddress->setMaximumSize(QSize(33, 16777215));

        gridLayout_84->addWidget(YGEI2CSourceAddress, 1, 4, 1, 1);

        label_203 = new QLabel(groupBox_31);
        label_203->setObjectName(QString::fromUtf8("label_203"));

        gridLayout_84->addWidget(label_203, 1, 5, 1, 1);

        label_201 = new QLabel(groupBox_31);
        label_201->setObjectName(QString::fromUtf8("label_201"));

        gridLayout_84->addWidget(label_201, 1, 6, 1, 1);

        YGEI2CDestinationAddress = new QSpinBox(groupBox_31);
        YGEI2CDestinationAddress->setObjectName(QString::fromUtf8("YGEI2CDestinationAddress"));
        YGEI2CDestinationAddress->setMaximumSize(QSize(33, 16777215));

        gridLayout_84->addWidget(YGEI2CDestinationAddress, 1, 7, 1, 1);

        updateYGE = new QPushButton(groupBox_31);
        updateYGE->setObjectName(QString::fromUtf8("updateYGE"));

        gridLayout_84->addWidget(updateYGE, 1, 8, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_84->addItem(horizontalSpacer_15, 1, 2, 1, 1);


        gridLayout_83->addWidget(groupBox_31, 1, 1, 1, 2);

        serialOut2 = new QGroupBox(tab_2);
        serialOut2->setObjectName(QString::fromUtf8("serialOut2"));
        gridLayout_6 = new QGridLayout(serialOut2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        serialRaw_2 = new QTextBrowser(serialOut2);
        serialRaw_2->setObjectName(QString::fromUtf8("serialRaw_2"));

        gridLayout_6->addWidget(serialRaw_2, 0, 0, 1, 1);


        gridLayout_83->addWidget(serialOut2, 2, 1, 1, 1);

        startYGE = new QPushButton(tab_2);
        startYGE->setObjectName(QString::fromUtf8("startYGE"));

        gridLayout_83->addWidget(startYGE, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        startAll = new QPushButton(tab_3);
        startAll->setObjectName(QString::fromUtf8("startAll"));
        startAll->setGeometry(QRect(10, 66, 75, 23));
        groupBox_38 = new QGroupBox(tab_3);
        groupBox_38->setObjectName(QString::fromUtf8("groupBox_38"));
        groupBox_38->setGeometry(QRect(590, 0, 90, 371));
        groupBox_38->setMinimumSize(QSize(90, 0));
        engineLevelBar5 = new QProgressBar(groupBox_38);
        engineLevelBar5->setObjectName(QString::fromUtf8("engineLevelBar5"));
        engineLevelBar5->setGeometry(QRect(10, 25, 41, 291));
        engineLevelBar5->setValue(24);
        engineLevelBar5->setOrientation(Qt::Vertical);
        freeEngineNumberTestLevel = new QSpinBox(groupBox_38);
        freeEngineNumberTestLevel->setObjectName(QString::fromUtf8("freeEngineNumberTestLevel"));
        freeEngineNumberTestLevel->setGeometry(QRect(10, 320, 39, 21));
        freeEngineNumberTestLevel->setMaximum(255);
        freeEngineNumberTestLevel->setValue(24);
        label_209 = new QLabel(groupBox_38);
        label_209->setObjectName(QString::fromUtf8("label_209"));
        label_209->setGeometry(QRect(10, 340, 32, 31));
        freeEngineNumber = new QSpinBox(groupBox_38);
        freeEngineNumber->setObjectName(QString::fromUtf8("freeEngineNumber"));
        freeEngineNumber->setGeometry(QRect(50, 340, 33, 21));
        freeEngineNumber->setMinimum(9);
        freeEngineNumber->setMaximum(24);
        freeEngineNumber->setValue(9);
        label_210 = new QLabel(tab_3);
        label_210->setObjectName(QString::fromUtf8("label_210"));
        label_210->setGeometry(QRect(10, 10, 35, 21));
        stopAll = new QPushButton(tab_3);
        stopAll->setObjectName(QString::fromUtf8("stopAll"));
        stopAll->setGeometry(QRect(10, 95, 75, 23));
        testEngineNumber = new QComboBox(tab_3);
        testEngineNumber->setObjectName(QString::fromUtf8("testEngineNumber"));
        testEngineNumber->setGeometry(QRect(51, 10, 34, 21));
        testEngineNumber->setMaximumSize(QSize(39, 21));
        startEngine = new QPushButton(tab_3);
        startEngine->setObjectName(QString::fromUtf8("startEngine"));
        startEngine->setGeometry(QRect(10, 37, 75, 23));
        groupBox_37 = new QGroupBox(tab_3);
        groupBox_37->setObjectName(QString::fromUtf8("groupBox_37"));
        groupBox_37->setGeometry(QRect(100, 0, 484, 371));
        groupBox_37->setMinimumSize(QSize(484, 285));
        groupBox_37->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_48 = new QGridLayout(groupBox_37);
        gridLayout_48->setObjectName(QString::fromUtf8("gridLayout_48"));
        engineLevelBar1 = new QProgressBar(groupBox_37);
        engineLevelBar1->setObjectName(QString::fromUtf8("engineLevelBar1"));
        engineLevelBar1->setMinimumSize(QSize(45, 0));
        engineLevelBar1->setValue(24);
        engineLevelBar1->setOrientation(Qt::Vertical);

        gridLayout_48->addWidget(engineLevelBar1, 0, 0, 1, 1);

        engineLevelBar2 = new QProgressBar(groupBox_37);
        engineLevelBar2->setObjectName(QString::fromUtf8("engineLevelBar2"));
        engineLevelBar2->setMinimumSize(QSize(45, 0));
        engineLevelBar2->setValue(24);
        engineLevelBar2->setOrientation(Qt::Vertical);

        gridLayout_48->addWidget(engineLevelBar2, 0, 1, 1, 1);

        engineLevelBar3 = new QProgressBar(groupBox_37);
        engineLevelBar3->setObjectName(QString::fromUtf8("engineLevelBar3"));
        engineLevelBar3->setMinimumSize(QSize(45, 0));
        engineLevelBar3->setValue(24);
        engineLevelBar3->setOrientation(Qt::Vertical);

        gridLayout_48->addWidget(engineLevelBar3, 0, 2, 1, 1);

        engineLevelBar4 = new QProgressBar(groupBox_37);
        engineLevelBar4->setObjectName(QString::fromUtf8("engineLevelBar4"));
        engineLevelBar4->setMinimumSize(QSize(45, 0));
        engineLevelBar4->setValue(24);
        engineLevelBar4->setOrientation(Qt::Vertical);

        gridLayout_48->addWidget(engineLevelBar4, 0, 3, 1, 1);

        engineLevelBar5_2 = new QProgressBar(groupBox_37);
        engineLevelBar5_2->setObjectName(QString::fromUtf8("engineLevelBar5_2"));
        engineLevelBar5_2->setMinimumSize(QSize(45, 0));
        engineLevelBar5_2->setValue(24);
        engineLevelBar5_2->setOrientation(Qt::Vertical);

        gridLayout_48->addWidget(engineLevelBar5_2, 0, 4, 1, 1);

        engineLevelBar6 = new QProgressBar(groupBox_37);
        engineLevelBar6->setObjectName(QString::fromUtf8("engineLevelBar6"));
        engineLevelBar6->setMinimumSize(QSize(45, 0));
        engineLevelBar6->setValue(24);
        engineLevelBar6->setOrientation(Qt::Vertical);

        gridLayout_48->addWidget(engineLevelBar6, 0, 5, 1, 1);

        engineLevelBar7 = new QProgressBar(groupBox_37);
        engineLevelBar7->setObjectName(QString::fromUtf8("engineLevelBar7"));
        engineLevelBar7->setMinimumSize(QSize(45, 0));
        engineLevelBar7->setValue(24);
        engineLevelBar7->setOrientation(Qt::Vertical);

        gridLayout_48->addWidget(engineLevelBar7, 0, 6, 1, 1);

        engineLevelBar8 = new QProgressBar(groupBox_37);
        engineLevelBar8->setObjectName(QString::fromUtf8("engineLevelBar8"));
        engineLevelBar8->setMinimumSize(QSize(45, 0));
        engineLevelBar8->setValue(24);
        engineLevelBar8->setOrientation(Qt::Vertical);

        gridLayout_48->addWidget(engineLevelBar8, 0, 7, 1, 1);

        engineTestLevel1 = new QSpinBox(groupBox_37);
        engineTestLevel1->setObjectName(QString::fromUtf8("engineTestLevel1"));
        engineTestLevel1->setMaximum(250);
        engineTestLevel1->setValue(24);

        gridLayout_48->addWidget(engineTestLevel1, 1, 0, 1, 1);

        engineTestLevel2 = new QSpinBox(groupBox_37);
        engineTestLevel2->setObjectName(QString::fromUtf8("engineTestLevel2"));
        engineTestLevel2->setMaximum(250);
        engineTestLevel2->setValue(24);

        gridLayout_48->addWidget(engineTestLevel2, 1, 1, 1, 1);

        engineTestLevel3 = new QSpinBox(groupBox_37);
        engineTestLevel3->setObjectName(QString::fromUtf8("engineTestLevel3"));
        engineTestLevel3->setMaximum(250);
        engineTestLevel3->setValue(24);

        gridLayout_48->addWidget(engineTestLevel3, 1, 2, 1, 1);

        engineTestLevel4 = new QSpinBox(groupBox_37);
        engineTestLevel4->setObjectName(QString::fromUtf8("engineTestLevel4"));
        engineTestLevel4->setMaximum(250);
        engineTestLevel4->setValue(24);

        gridLayout_48->addWidget(engineTestLevel4, 1, 3, 1, 1);

        engineTestLevel1_2 = new QSpinBox(groupBox_37);
        engineTestLevel1_2->setObjectName(QString::fromUtf8("engineTestLevel1_2"));
        engineTestLevel1_2->setMaximum(250);
        engineTestLevel1_2->setValue(24);

        gridLayout_48->addWidget(engineTestLevel1_2, 1, 4, 1, 1);

        engineTestLevel2_2 = new QSpinBox(groupBox_37);
        engineTestLevel2_2->setObjectName(QString::fromUtf8("engineTestLevel2_2"));
        engineTestLevel2_2->setMaximum(250);
        engineTestLevel2_2->setValue(24);

        gridLayout_48->addWidget(engineTestLevel2_2, 1, 5, 1, 1);

        engineTestLevel3_2 = new QSpinBox(groupBox_37);
        engineTestLevel3_2->setObjectName(QString::fromUtf8("engineTestLevel3_2"));
        engineTestLevel3_2->setMaximum(250);
        engineTestLevel3_2->setValue(24);

        gridLayout_48->addWidget(engineTestLevel3_2, 1, 6, 1, 1);

        engineTestLevel4_2 = new QSpinBox(groupBox_37);
        engineTestLevel4_2->setObjectName(QString::fromUtf8("engineTestLevel4_2"));
        engineTestLevel4_2->setMaximum(250);
        engineTestLevel4_2->setValue(24);

        gridLayout_48->addWidget(engineTestLevel4_2, 1, 7, 1, 1);

        label_205 = new QLabel(groupBox_37);
        label_205->setObjectName(QString::fromUtf8("label_205"));

        gridLayout_48->addWidget(label_205, 2, 0, 1, 1);

        label_206 = new QLabel(groupBox_37);
        label_206->setObjectName(QString::fromUtf8("label_206"));

        gridLayout_48->addWidget(label_206, 2, 1, 1, 1);

        label_207 = new QLabel(groupBox_37);
        label_207->setObjectName(QString::fromUtf8("label_207"));

        gridLayout_48->addWidget(label_207, 2, 2, 1, 1);

        label_208 = new QLabel(groupBox_37);
        label_208->setObjectName(QString::fromUtf8("label_208"));

        gridLayout_48->addWidget(label_208, 2, 3, 1, 1);

        label_222 = new QLabel(groupBox_37);
        label_222->setObjectName(QString::fromUtf8("label_222"));

        gridLayout_48->addWidget(label_222, 2, 4, 1, 1);

        label_224 = new QLabel(groupBox_37);
        label_224->setObjectName(QString::fromUtf8("label_224"));

        gridLayout_48->addWidget(label_224, 2, 5, 1, 1);

        label_223 = new QLabel(groupBox_37);
        label_223->setObjectName(QString::fromUtf8("label_223"));

        gridLayout_48->addWidget(label_223, 2, 6, 1, 1);

        label_218 = new QLabel(groupBox_37);
        label_218->setObjectName(QString::fromUtf8("label_218"));

        gridLayout_48->addWidget(label_218, 2, 7, 1, 1);

        tabWidget->addTab(tab_3, QString());

        retranslateUi(wdg_i2ctab);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(wdg_i2ctab);
    } // setupUi

    void retranslateUi(QWidget *wdg_i2ctab)
    {
        wdg_i2ctab->setWindowTitle(QApplication::translate("wdg_i2ctab", "Form", 0, QApplication::UnicodeUTF8));
        cleanOutput->setText(QApplication::translate("wdg_i2ctab", "Clean Output", 0, QApplication::UnicodeUTF8));
        groupBox_31->setTitle(QApplication::translate("wdg_i2ctab", "YGE Address", 0, QApplication::UnicodeUTF8));
        label_200->setText(QApplication::translate("wdg_i2ctab", "I2C Source", 0, QApplication::UnicodeUTF8));
        label_203->setText(QApplication::translate("wdg_i2ctab", "-->", 0, QApplication::UnicodeUTF8));
        label_201->setText(QApplication::translate("wdg_i2ctab", "I2C Desitantion", 0, QApplication::UnicodeUTF8));
        updateYGE->setText(QApplication::translate("wdg_i2ctab", "Update YGE", 0, QApplication::UnicodeUTF8));
        serialOut2->setTitle(QApplication::translate("wdg_i2ctab", "Serial Output", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        serialRaw_2->setToolTip(QApplication::translate("wdg_i2ctab", "This page is for debuging and enabling the YGE I2C controllers.\n"
"They are quite tricky to get them working. \n"
"I suggest to rethink using them ;)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        startYGE->setText(QApplication::translate("wdg_i2ctab", "Startup YGE", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("wdg_i2ctab", "Setup YGE", 0, QApplication::UnicodeUTF8));
        startAll->setText(QApplication::translate("wdg_i2ctab", "Start All", 0, QApplication::UnicodeUTF8));
        groupBox_38->setTitle(QApplication::translate("wdg_i2ctab", ">8 Engines", 0, QApplication::UnicodeUTF8));
        label_209->setText(QApplication::translate("wdg_i2ctab", "Engine", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        freeEngineNumber->setToolTip(QApplication::translate("wdg_i2ctab", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Use this if you have more then 8 Engines.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">You can here start engines with the number up to 24.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Send me a picture of your flyer if you ever use 24 =D</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_210->setText(QApplication::translate("wdg_i2ctab", "Engine", 0, QApplication::UnicodeUTF8));
        stopAll->setText(QApplication::translate("wdg_i2ctab", "Stop", 0, QApplication::UnicodeUTF8));
        testEngineNumber->clear();
        testEngineNumber->insertItems(0, QStringList()
         << QApplication::translate("wdg_i2ctab", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_i2ctab", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_i2ctab", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_i2ctab", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_i2ctab", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_i2ctab", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_i2ctab", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_i2ctab", "8", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        startEngine->setToolTip(QApplication::translate("wdg_i2ctab", "To start single engines. Its mainly for Engine Testing. On this screen it does not matter which controller you use.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        startEngine->setText(QApplication::translate("wdg_i2ctab", "Start Engine", 0, QApplication::UnicodeUTF8));
        groupBox_37->setTitle(QApplication::translate("wdg_i2ctab", "8 Engines", 0, QApplication::UnicodeUTF8));
        label_205->setText(QApplication::translate("wdg_i2ctab", "Engine 1", 0, QApplication::UnicodeUTF8));
        label_206->setText(QApplication::translate("wdg_i2ctab", "Engine 2", 0, QApplication::UnicodeUTF8));
        label_207->setText(QApplication::translate("wdg_i2ctab", "Engine 3", 0, QApplication::UnicodeUTF8));
        label_208->setText(QApplication::translate("wdg_i2ctab", "Engine 4", 0, QApplication::UnicodeUTF8));
        label_222->setText(QApplication::translate("wdg_i2ctab", "Engine 5", 0, QApplication::UnicodeUTF8));
        label_224->setText(QApplication::translate("wdg_i2ctab", "Engine 6", 0, QApplication::UnicodeUTF8));
        label_223->setText(QApplication::translate("wdg_i2ctab", "Engine 7", 0, QApplication::UnicodeUTF8));
        label_218->setText(QApplication::translate("wdg_i2ctab", "Engine 8", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("wdg_i2ctab", "Enginge Test", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class wdg_i2ctab: public Ui_wdg_i2ctab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WDG_I2CTAB_H
