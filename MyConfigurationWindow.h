#ifndef MYCONFIGURATIONWINDOW_H
#define MYCONFIGURATIONWINDOW_H

#include<QMainWindow>
#include<QLayout>
#include<QLabel>
#include<QPushButton>
#include<QDebug>


class MyConfigurationWindow
{
  public:
  MyConfigurationWindow();
  void display(QMainWindow*);

  private:
  QWidget *m_widgetPage;
  QGridLayout *m_grillePage;

  QString m_title = "Configuration Screen";
  QString m_colorTitle = "magenta";

  QLabel *m_labelTitle;
};

#endif // MYCONFIGURATIONWINDOW_H
