#ifndef TIMERLABEL_H
#define TIMERLABEL_H
#include <QLabel>

class TimerLabel : public QLabel {
 Q_OBJECT
protected:
 virtual void timerEvent (QTimerEvent *);
  //обработчик события таймера
 int shiftArray; //сдвиг строки от начала
 int timerId; //метка активности таймера
 QString timerString; //строка, которую "крутим"
public slots:
 void setTimerString (QString);
  //метод для установки новой строки в метку
 void setTimerSpeed (int);
  //метод для установки интервала повторения таймера
public:
 TimerLabel(QString="",QWidget *parent=0);
  //конструктор нашей метки
};
#endif // TIMERLABEL_H
