#ifndef WDG_SETTINGSTAB_H
#define WDG_SETTINGSTAB_H

#include <QWidget>
#include "ui_wdg_settingstab.h"

class wdg_settingsTab : public QWidget , public Ui::wdg_settingsTab
{
    Q_OBJECT
public:
    wdg_settingsTab(QWidget *parent = 0);
    ~wdg_settingsTab();

protected:

private:

};

#endif // WDG_SETTINGSTAB_H
