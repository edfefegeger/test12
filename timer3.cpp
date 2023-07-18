#include "timer3.h"
#include "ui_timer3.h"
#include <QDate>
#include <QTime>
#include <QTimer>
timer3::timer3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::timer3)
{
    ui->setupUi(this);
    months = 01;
    days = 01;
    years = 1900;
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(TimerSlot()));
    timer->start(650);
}

timer3::~timer3()
{
    delete ui;
}

void timer3::TimerSlot()
{
    days++;
    if (days == 30)
    {
        months++;
        days = 0;
    }
    if (months == 12)
    {
        years++;
        months = 0;
    }
    if (years == 1932)
    {
       timer->stop();
       ui->label_2->setText(QString("Игра окончена"));
    }
    ui->label->setText(QString::number(days) + "." + QString::number(months) + "." + QString::number(years));
}

void timer3::on_pushButton_clicked()
{
    timer->stop();
}


void timer3::on_pushButton_2_clicked()
{
    timer->start(650);
}

