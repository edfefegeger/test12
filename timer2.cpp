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
    QDialog(parent),
    ui(new Ui::timer2)
{

    QWidget *window = new QWidget;
    QLabel *label3 = new QLabel("Stop");
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(label3);
    window->setLayout(layout);
    QTimer* timer = new QTimer(this);
    timer->start(650);
    window->show();
    ui->setupUi(this);
}

timer2::~timer2()
{

    delete ui;
}
