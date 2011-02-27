#ifndef CINIFILE_H
#define CINIFILE_H
#include "settings.h"
#include "qsettings.h"


class cIniFile
{
public:
    cIniFile();
    void storeSettings(int num, SETTINGS setup);
    void writeSettings(int num, SETTINGS setup);
//    void storeSettings2(int num, SETTINGS setup);
    SETTINGS readSettings(int num);
private:
    QSettings inifile;


};

#endif // CINIFILE_H
