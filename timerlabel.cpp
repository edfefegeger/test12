#include "timerlabel.h"
/*
TimerLabel::TimerLabel(QString string,QWidget *parent) :
    QLabel(string,parent),shiftArray(0),timerId(0)
{ //просто вызываем стандартный конструктор метки +
  //инициализируем новые свойства класса-потомка
}
void TimerLabel::timerEvent (QTimerEvent *event) {
 //Пишем здесь код, который должен выполняться периодически
 int length = timerString.length();
 if (++shiftArray > length) shiftArray=0;
 setText( //наш класс - потомок QLabel, у него есть
          //методы родителя
  timerString.right(shiftArray)+
  timerString.left(length-shiftArray));
}

void TimerLabel::setTimerString (QString string) {
 //метод для установки строки метки
 timerString = string;
 shiftArray = 0;
 setText (timerString);
}

void TimerLabel::setTimerSpeed (int speed) {
 //метод для установки таймера
 if (timerId) QObject::killTimer (timerId);
  //так можно остановить существующий таймер
 timerId = 0;
 speed = qAbs (speed);
 if (speed > 10) speed = 1;
 timerId = QObject::startTimer (1000/speed);
  //а так - запустить таймер
  */
}
