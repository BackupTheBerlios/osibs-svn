#ifndef WDG_I2CTAB_H
#define WDG_I2CTAB_H

#include <QWidget>
#include "ui_wdg_i2ctab.h"

class wdg_i2ctab : public QWidget, public Ui::wdg_i2ctab
{
    Q_OBJECT
public:
    wdg_i2ctab(QWidget *parent = 0);
    ~wdg_i2ctab();

protected:

private:

};

#endif // WDG_I2CTAB_H
