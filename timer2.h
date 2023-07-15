#ifndef TIMER2_H
#define TIMER2_H

#include <QDialog>

namespace Ui {
class timer2;
}

class timer2 : public QDialog
{
    Q_OBJECT

public:
    explicit timer2(QWidget *parent = nullptr);
    ~timer2();

private:
    Ui::timer2 *ui;
public slots:

};

#endif // TIMER2_H
