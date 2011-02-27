#ifndef WDG_SERIALTAB_H
#define WDG_SERIALTAB_H

#include <QWidget>
#include "ui_wdg_serialtab.h"

class wdg_serialtab : public QWidget , public Ui::wdg_serialtab
{
    Q_OBJECT
public:
    wdg_serialtab(QWidget *parent = 0);
    ~wdg_serialtab();

protected:

private:

};

#endif // WDG_SERIALTAB_H
