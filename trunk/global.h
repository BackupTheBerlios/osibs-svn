/***************************************************************************
 *   Copyright (C) 2008 by Manuel Schrape                                  *
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
#ifndef GLOBAL_H
#define GLOBAL_H

#include <QString>
#include <QSize>
#include <QPoint>
#include <QColor>
#include <QBitArray>



#ifdef _WIN32_
static const QString OS_PORT = "COM1";
#else
static const QString OS_PORT = "/dev/ttyUSB0";
#endif

//#define _EEEPC_

#ifdef _EEEPC_
    static const int MeterSize = 125;
#else
    static const int MeterSize = 160;
#endif



struct sRxData
{
    char *Input;
    QString String;
    int Decode[150];
    int DecLen;
};

struct sGPS_Pos
{
    long Longitude;
    long Latitude;
    long Altitude;
};

struct sNaviData
{
    sGPS_Pos Current;
    sGPS_Pos Target;
    sGPS_Pos Home;


    long Longitude;
    long Latitude;
    long Altitude;
};

struct sNaviString
{
    QString Longitude;
    QString Latitude;
    QString Altitude;
};

struct sWayPoint
{
    double Longitude;
    double Latitude;
    int Time;
};

#endif
