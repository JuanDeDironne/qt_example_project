#include"MyXWindow.h"


MyXWindow::MyXWindow()
{

}

void MyXWindow::displayWindow(MyMainWindow* windowFonc)
{
  // Initialization
  QWidget *widgetPage;        widgetPage  = new QWidget();
  QGridLayout *layoutPage;    layoutPage  = new QGridLayout();          layoutPage->setAlignment(Qt::AlignCenter);
  QPushButton *buttonPage;    buttonPage  = new QPushButton("Submit");

  // Add Label and Button
  layoutPage->addWidget(new QLabel("Here Interface of <b>X</b> Window"));
  layoutPage->addWidget(buttonPage);

  // Association Layout to Widget and Placement
  widgetPage->setLayout(layoutPage);
  windowFonc->setCentralWidget(widgetPage);

  // Creation Connection
  connect(buttonPage,SIGNAL(clicked(bool)),this,SLOT(doSpecificTreatment()));
}

void MyXWindow::doSpecificTreatment()
{
  qDebug() << "Here X Treatment";
}
