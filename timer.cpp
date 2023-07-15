#include "timer.h"
#include "ui_timer.h"

timer::timer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::timer)
{
    ui->setupUi(this);
}

timer::~timer()
{
    delete ui;
}
