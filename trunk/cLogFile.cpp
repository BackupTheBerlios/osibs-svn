#include "cLogFile.h"
#include <QDateTime>
#include <QIODevice>
#include <QFile>


QFile file;
QDateTime myLocaltime;
cLogFile::cLogFile()
{

}
cLogFile::~cLogFile()
{
     file.close();
}
void cLogFile::openLog()
{
    QString date = myLocaltime.currentDateTime().toLocalTime().toString("yyyyMMddhhmmss");
    QString fileName = "logs/osiBS_"+date+".log";
    file.setFileName(fileName);
    file.open(QIODevice::WriteOnly);
}
void cLogFile::writeLog(QString msg)
{

    QString date = myLocaltime.currentDateTime().toLocalTime().toString( "yyyy.MM.dd_hh:mm:ss" );
    QByteArray log;
    log = QByteArray((date+";"+msg+"\n").toUtf8());
    file.write(log);
    file.flush();

}
void cLogFile::closeLog()
{
     file.close();
}
