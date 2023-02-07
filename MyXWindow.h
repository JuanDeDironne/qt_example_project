#ifndef MYXWINDOW_H
#define MYXWINDOW_H

#include"MyMainWindow.h"

class MyXWindow : public QWidget
{
  Q_OBJECT

  public:
  MyXWindow();
  void displayWindow(MyMainWindow*);

  public slots:
  void doSpecificTreatment();

  private:
  QString myParameterA;
  QString myParameterB;
};

#endif // MYXWINDOW_H
