#include "mainwindow.h"

#include <QApplication>
#include <timer2.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    timer2 w;
    w.show();
    return a.exec();
}
