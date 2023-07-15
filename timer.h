#ifndef TIMER_H
#define TIMER_H

#include <QWidget>

namespace Ui {
class timer;
}

class timer : public QWidget
{
    Q_OBJECT

public:
    explicit timer(QWidget *parent = nullptr);
    ~timer();

private:
    Ui::timer *ui;
};

#endif // TIMER_H
