#ifndef MYCONNECTIONWINDOW_H
#define MYCONNECTIONWINDOW_H

#include<QMainWindow>
#include<QLayout>
#include<QLabel>
#include<QLineEdit>
#include<QPushButton>
#include<QDebug>

class MyConnectionWindow
{
  public:
  MyConnectionWindow();
  void display(QMainWindow*);

  public slots:
  void callQuery();

  private:
  QWidget *m_widgetPage;
  QGridLayout *m_grillePage;

  QString m_title = "Connexion Screen";
  QString m_colorTitle = "blue";

  QLabel *m_labelTitle;
  QLineEdit *m_loginEntered;
  QLineEdit *m_pwdEntered;
  QPushButton *m_buttonConnexion;
};


#endif // MYCONNECTIONWINDOW_H
