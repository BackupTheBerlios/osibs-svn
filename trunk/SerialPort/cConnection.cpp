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
#include "cConnection.h"

cConnection::cConnection()
{
    i_Type = 0;

    TTY = new ManageSerialPort();
    o_Timer = new QTimer(this);

    connect(o_Timer,   SIGNAL(timeout()),       SLOT(slot_Timer()));


    TTY->setDataBits(DATA_8);       //DataBits
    TTY->setParity(PAR_NONE);       //Parity
    TTY->setStopBits(STOP_1);       //StopBits
    TTY->setFlowControl(FLOW_OFF);  //FlowControl

    TTY->setTimeout(0, 10);
    TTY->enableSending();
    TTY->enableReceiving();
    TTY->setDtr(false);             // to enable serial when in flashing mode
    TTY->setRts(false);             // to enable serial when in flashing mode

    b_isOpen = false;
}


void cConnection::setDtr(bool set)
{
    TTY->setDtr(set);
}
void cConnection::setRts(bool set)
{
    TTY->setRts(set);
}


void cConnection::new_Data(QString Data)
{
    Data = Data;

    while ((RxData.String.length() > 1) && (RxData.String.at(1) == '#'))
    {
        RxData.String.remove(0,1);
    }

    if (ToolBox::check_CRC(RxData.String))
    {
        RxData.Input = RxData.String.toLatin1().data();
        emit(newData(RxData));
    }
    else
    {
        emit(showTerminal(2, RxData.String));
    }

}

void cConnection::slot_newDataReceived(const QByteArray &dataReceived)
{
    const char *RXt;
    RXt = dataReceived.data();
    int a = 0;

    while (RXt[a] != '\0')
    {
        if (RXt[a] == '#')
        {
            RxData.String = RxData.String + QString(RXt[a]);
            new_Data(RxData.String);
            RxData.String = QString("");
        }
        else
        {
            RxData.String = RxData.String + QString(RXt[a]);
        }
        a++;
    }
}

bool cConnection::isOpen()
{
    return b_isOpen;
}

bool cConnection::Close()
{
    switch(i_Type)
    {
    case C_TTY :
        {
            TTY->close();
            disconnect(TTY, SIGNAL(newDataReceived(const QByteArray &)), this, 0);
            b_isOpen = false;
        }
        break;
    }
    return b_isOpen;
}

bool cConnection::Open(int Typ, QString Address)
{
    switch(Typ)
    {
    case C_TTY :
        {
            TTY->setPort(Address); //Port
            TTY->setBaudRate(BAUD115200); //BaudRate
            TTY->open();
            ToolBox::Wait(1000);
            if (TTY->isOpen())
            {
                connect(TTY, SIGNAL(newDataReceived(const QByteArray &)), this, SLOT(slot_newDataReceived(const QByteArray &)));
                TTY->receiveData();
                b_isOpen = true;
                i_Type = C_TTY;
            }
        }
    break;
    }

    return b_isOpen;
}



bool cConnection::send_Cmd(char CMD, int Address, QByteArray Data,int Length, bool Resend)
{
    if (TTY->isOpen())
    {
        QByteArray out;
        QString outTemp;

        TTY->sendData(Data);
        emit(showTerminal(3, out));
    }
    return true;
}

void cConnection::stop_ReSend()
{
    o_Timer->stop();
}

void cConnection::slot_Timer()
{
    switch(i_Type)
    {
            case C_TTY :
        {
            TTY->sendData(s_ReSend);
        }
        break;

    }

    emit(showTerminal(3, QString(s_ReSend)));
}
