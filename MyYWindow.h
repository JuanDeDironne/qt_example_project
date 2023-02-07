#ifndef MYYWINDOW_H
#define MYYWINDOW_H

#include"MyMainWindow.h"

class MyYWindow : public QWidget
{
  Q_OBJECT

  public:
  MyYWindow();
  void displayWindow(MyMainWindow*);

  public slots:
  void doSpecificTreatment();

  private:
  QString myParameterA;
  QString myParameterB;
};

#endif // MYYWINDOW_H
