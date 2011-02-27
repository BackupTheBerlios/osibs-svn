/***************************************************************************
 *   Copyright (C) 2009 by Manuel Schrape                                  *
 *   manuel.schrape@gmx.de                                                 *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License.        *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef CCONNECTION_H
#define CCONNECTION_H

#include <QObject>
#include <QTimer>

#include "ToolBox.h"
#include "global.h"
#include "../SerialPort/ManageSerialPort.h"

#define C_TTY 1
#define C_IP 2

class cConnection : public QObject
{
    Q_OBJECT

    public:
        cConnection();
        bool isOpen();
        bool Open(int Typ, QString Address);
        bool Close();
        bool send_Cmd(char CMD, int Address, QByteArray Data,int Length, bool Resend = true);
        void stop_ReSend();

         // to handle DTR
        void setDtr(bool set);

        // to handle RTS
        void setRts(bool set);




    private:
        ManageSerialPort *TTY;

        QTimer *o_Timer;

        QByteArray s_ReSend;

        bool b_isOpen;
        int  i_Type;
        sRxData RxData;

        void new_Data(QString Data);

    private slots:
        void slot_newDataReceived(const QByteArray &dataReceived);

        void slot_Timer();
//        void slot_Error(QAbstractSocket::SocketError Error);

    signals:
        void newData(sRxData RxData);
        void showTerminal(int Typ, QString Text);
};

#endif // CCONNECTION_H
