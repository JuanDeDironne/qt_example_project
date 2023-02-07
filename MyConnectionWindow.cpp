#include"MyConnectionWindow.h"

MyConnectionWindow::MyConnectionWindow()
{
  m_widgetPage    = new QWidget();
  m_grillePage    = new QGridLayout();    m_grillePage->setAlignment(Qt::AlignCenter);
}


void MyConnectionWindow::display(QMainWindow* fenetreFonc)
{
  m_labelTitle = new QLabel(m_title);   m_labelTitle->setStyleSheet("color: "+m_colorTitle);

  m_grillePage->addWidget(m_labelTitle);

  /*
  Here we display the form to enter login and password
  Here we can connect signal and slot to another functions of MyConnectionWindow Class (like callQuery for example)
  */


  m_widgetPage->setLayout(m_grillePage);
  fenetreFonc->setCentralWidget(m_widgetPage);
}
