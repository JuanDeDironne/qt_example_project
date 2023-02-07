#include"MyYWindow.h"


MyYWindow::MyYWindow()
{
}

void MyYWindow::displayWindow(MyMainWindow* windowFonc)
{
  // Initialization
  QWidget *widgetPage;        widgetPage  = new QWidget();
  QGridLayout *layoutPage;    layoutPage  = new QGridLayout();          layoutPage->setAlignment(Qt::AlignCenter);
  QPushButton *buttonPage;    buttonPage  = new QPushButton("Submit");

  // Add Button and Label
  layoutPage->addWidget(new QLabel("Here Interface of <b>Y</b> Window"));
  layoutPage->addWidget(buttonPage);

  // Association Layout to Widget and Placement
  widgetPage->setLayout(layoutPage);
  windowFonc->setCentralWidget(widgetPage);

  // Creation Connection
  connect(buttonPage,SIGNAL(clicked(bool)),this,SLOT(doSpecificTreatment()));
}

void MyYWindow::doSpecificTreatment()
{
  qDebug() << "Here Y Treatment";
}
