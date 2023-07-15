#ifndef TIMER3_H
#define TIMER3_H

#include <QWidget>
#include <QTimer>
#include <QTime>
#include <QDate>
namespace Ui {
class timer3;
}

class timer3 : public QWidget
{
    Q_OBJECT

public:
    explicit timer3(QWidget *parent = nullptr);
    ~timer3();

private:
    Ui::timer3 *ui;
    QTimer *timer;
    int years;
    int months;
    int days;
private slots:
    void TimerSlot();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};

#endif // TIMER3_H
