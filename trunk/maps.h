#ifndef MAPS_H
#define MAPS_H

#include <QFrame>

namespace Ui {
    class maps;
}

class maps : public QFrame {
    Q_OBJECT
public:
    maps(QWidget *parent = 0);
    ~maps();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::maps *ui;
};

#endif // MAPS_H
