#ifndef CLOGFILE_H
#define CLOGFILE_H
#include <QString>
#include <QFile>
class cLogFile
{
public:
    cLogFile();
    ~cLogFile();
    void openLog();
    void writeLog(QString msg);
    void closeLog();
private:

    
};

#endif // CLOGFILE_H
