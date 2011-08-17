/********************************************************************************
** Form generated from reading UI file 'wdg_serialtab.ui'
**
** Created: Sun 14. Aug 18:55:39 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WDG_SERIALTAB_H
#define UI_WDG_SERIALTAB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wdg_serialtab
{
public:
    QTabWidget *SerialTab;
    QWidget *SerialRaw;
    QGridLayout *gridLayout_52;
    QPushButton *cleanOutput_3;
    QGroupBox *serialOut;
    QGridLayout *gridLayout_7;
    QTextBrowser *serialRaw;
    QLabel *label_202;
    QPushButton *requestDebug;
    QPushButton *readSetting_2;
    QPushButton *writeSetting_2;
    QPushButton *flashSetting_2;
    QCheckBox *printTelemetrie;
    QCheckBox *printDebug;
    QCheckBox *printMessages;
    QCheckBox *printDataRaw;
    QCheckBox *printDataSend_2;
    QSpacerItem *verticalSpacer_16;
    QSpacerItem *verticalSpacer_17;
    QPushButton *resetOsiFC_2;
    QComboBox *rawDebugNumber;

    void setupUi(QWidget *wdg_serialtab)
    {
        if (wdg_serialtab->objectName().isEmpty())
            wdg_serialtab->setObjectName(QString::fromUtf8("wdg_serialtab"));
        wdg_serialtab->resize(723, 430);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wdg_serialtab->sizePolicy().hasHeightForWidth());
        wdg_serialtab->setSizePolicy(sizePolicy);
        wdg_serialtab->setMinimumSize(QSize(723, 430));
        SerialTab = new QTabWidget(wdg_serialtab);
        SerialTab->setObjectName(QString::fromUtf8("SerialTab"));
        SerialTab->setGeometry(QRect(0, 0, 724, 430));
        sizePolicy.setHeightForWidth(SerialTab->sizePolicy().hasHeightForWidth());
        SerialTab->setSizePolicy(sizePolicy);
        SerialRaw = new QWidget();
        SerialRaw->setObjectName(QString::fromUtf8("SerialRaw"));
        gridLayout_52 = new QGridLayout(SerialRaw);
        gridLayout_52->setObjectName(QString::fromUtf8("gridLayout_52"));
        gridLayout_52->setContentsMargins(1, 0, 0, -1);
        cleanOutput_3 = new QPushButton(SerialRaw);
        cleanOutput_3->setObjectName(QString::fromUtf8("cleanOutput_3"));

        gridLayout_52->addWidget(cleanOutput_3, 0, 0, 1, 2);

        serialOut = new QGroupBox(SerialRaw);
        serialOut->setObjectName(QString::fromUtf8("serialOut"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(serialOut->sizePolicy().hasHeightForWidth());
        serialOut->setSizePolicy(sizePolicy1);
        gridLayout_7 = new QGridLayout(serialOut);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        serialRaw = new QTextBrowser(serialOut);
        serialRaw->setObjectName(QString::fromUtf8("serialRaw"));

        gridLayout_7->addWidget(serialRaw, 0, 0, 1, 1);


        gridLayout_52->addWidget(serialOut, 0, 2, 14, 1);

        label_202 = new QLabel(SerialRaw);
        label_202->setObjectName(QString::fromUtf8("label_202"));

        gridLayout_52->addWidget(label_202, 1, 0, 1, 1);

        requestDebug = new QPushButton(SerialRaw);
        requestDebug->setObjectName(QString::fromUtf8("requestDebug"));

        gridLayout_52->addWidget(requestDebug, 2, 0, 1, 2);

        readSetting_2 = new QPushButton(SerialRaw);
        readSetting_2->setObjectName(QString::fromUtf8("readSetting_2"));

        gridLayout_52->addWidget(readSetting_2, 3, 0, 1, 2);

        writeSetting_2 = new QPushButton(SerialRaw);
        writeSetting_2->setObjectName(QString::fromUtf8("writeSetting_2"));

        gridLayout_52->addWidget(writeSetting_2, 4, 0, 1, 2);

        flashSetting_2 = new QPushButton(SerialRaw);
        flashSetting_2->setObjectName(QString::fromUtf8("flashSetting_2"));

        gridLayout_52->addWidget(flashSetting_2, 5, 0, 1, 2);

        printTelemetrie = new QCheckBox(SerialRaw);
        printTelemetrie->setObjectName(QString::fromUtf8("printTelemetrie"));

        gridLayout_52->addWidget(printTelemetrie, 8, 0, 1, 2);

        printDebug = new QCheckBox(SerialRaw);
        printDebug->setObjectName(QString::fromUtf8("printDebug"));

        gridLayout_52->addWidget(printDebug, 9, 0, 1, 2);

        printMessages = new QCheckBox(SerialRaw);
        printMessages->setObjectName(QString::fromUtf8("printMessages"));

        gridLayout_52->addWidget(printMessages, 10, 0, 1, 2);

        printDataRaw = new QCheckBox(SerialRaw);
        printDataRaw->setObjectName(QString::fromUtf8("printDataRaw"));

        gridLayout_52->addWidget(printDataRaw, 11, 0, 1, 2);

        printDataSend_2 = new QCheckBox(SerialRaw);
        printDataSend_2->setObjectName(QString::fromUtf8("printDataSend_2"));

        gridLayout_52->addWidget(printDataSend_2, 12, 0, 1, 2);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_52->addItem(verticalSpacer_16, 13, 0, 1, 1);

        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_52->addItem(verticalSpacer_17, 7, 0, 1, 1);

        resetOsiFC_2 = new QPushButton(SerialRaw);
        resetOsiFC_2->setObjectName(QString::fromUtf8("resetOsiFC_2"));

        gridLayout_52->addWidget(resetOsiFC_2, 6, 0, 1, 2);

        rawDebugNumber = new QComboBox(SerialRaw);
        rawDebugNumber->setObjectName(QString::fromUtf8("rawDebugNumber"));
        rawDebugNumber->setMaximumSize(QSize(41, 21));

        gridLayout_52->addWidget(rawDebugNumber, 1, 1, 1, 1);

        SerialTab->addTab(SerialRaw, QString());

        retranslateUi(wdg_serialtab);

        SerialTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(wdg_serialtab);
    } // setupUi

    void retranslateUi(QWidget *wdg_serialtab)
    {
        wdg_serialtab->setWindowTitle(QApplication::translate("wdg_serialtab", "Form", 0, QApplication::UnicodeUTF8));
        cleanOutput_3->setText(QApplication::translate("wdg_serialtab", "Clean Output", 0, QApplication::UnicodeUTF8));
        serialOut->setTitle(QApplication::translate("wdg_serialtab", "Serial Output", 0, QApplication::UnicodeUTF8));
        label_202->setText(QApplication::translate("wdg_serialtab", "Debug", 0, QApplication::UnicodeUTF8));
        requestDebug->setText(QApplication::translate("wdg_serialtab", "Request Debug", 0, QApplication::UnicodeUTF8));
        readSetting_2->setText(QApplication::translate("wdg_serialtab", "Read Setting", 0, QApplication::UnicodeUTF8));
        writeSetting_2->setText(QApplication::translate("wdg_serialtab", "Write Setting", 0, QApplication::UnicodeUTF8));
        flashSetting_2->setText(QApplication::translate("wdg_serialtab", "Flash Settings", 0, QApplication::UnicodeUTF8));
        printTelemetrie->setText(QApplication::translate("wdg_serialtab", "Telemetrie", 0, QApplication::UnicodeUTF8));
        printDebug->setText(QApplication::translate("wdg_serialtab", "Debug", 0, QApplication::UnicodeUTF8));
        printMessages->setText(QApplication::translate("wdg_serialtab", "Messages", 0, QApplication::UnicodeUTF8));
        printDataRaw->setText(QApplication::translate("wdg_serialtab", "Data Raw", 0, QApplication::UnicodeUTF8));
        printDataSend_2->setText(QApplication::translate("wdg_serialtab", "Data send", 0, QApplication::UnicodeUTF8));
        resetOsiFC_2->setText(QApplication::translate("wdg_serialtab", "Reset osiFC", 0, QApplication::UnicodeUTF8));
        rawDebugNumber->clear();
        rawDebugNumber->insertItems(0, QStringList()
         << QApplication::translate("wdg_serialtab", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_serialtab", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_serialtab", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_serialtab", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("wdg_serialtab", "4", 0, QApplication::UnicodeUTF8)
        );
        SerialTab->setTabText(SerialTab->indexOf(SerialRaw), QApplication::translate("wdg_serialtab", "Serial Raw", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class wdg_serialtab: public Ui_wdg_serialtab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WDG_SERIALTAB_H
