#include <QtGui/QApplication>
#include "basestation.h"
#include <QtGui>




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    baseStation * w = new baseStation();

   // baseStation w;


    w->show();

    return a.exec();
}


