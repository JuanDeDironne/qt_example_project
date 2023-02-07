#include"MyConfigurationWindow.h"

MyConfigurationWindow::MyConfigurationWindow()
{
  m_widgetPage    = new QWidget();
  m_grillePage    = new QGridLayout();    m_grillePage->setAlignment(Qt::AlignCenter);
}


void MyConfigurationWindow::display(QMainWindow* fenetreFonc)
{
  m_labelTitle = new QLabel(m_title);   m_labelTitle->setStyleSheet("color: "+m_colorTitle);

  m_grillePage->addWidget(m_labelTitle);

  m_widgetPage->setLayout(m_grillePage);
  fenetreFonc->setCentralWidget(m_widgetPage);
}
