#include "timer2.h"
#include "ui_timer2.h"
#include <QWidget>
#include "mainwindow.h"
#include <QLabel>
#include <QFont>
#include <QTimer>
#include <QTime>
#include <QDate>

timer2::timer2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::timer2)
{
/*
    QWidget *widget = new QWidget;
    QLabel *label3 = new QLabel("Timer");
    QPushButton *button1 = new QPushButton("Stop");
    QVBoxLayout *layout = new QVBoxLayout;
    button1->addWidget(PushButtonStop);
    layout->addWidget(label3);
    widget->setLayout(layout);
    QTimer* timer = new QTimer(this);
    timer->start(650);
    widget->show();

    ui->setupUi(this);
*/
}

timer2::~timer2()
{

    delete ui;
}
