#include "mainwindow.h"

#include <QApplication>
#include <timer2.h>
#include "timer3.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    timer3 w;
    w.setWindowTitle("Таймер");
    w.show();
    return a.exec();
}
