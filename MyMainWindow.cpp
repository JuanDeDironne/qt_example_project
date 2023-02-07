#include"MyMainWindow.h"
#include"MyXWindow.h"
#include"MyYWindow.h"

MyMainWindow::MyMainWindow()
{
  // Initialization Window
  setWindowTitle("My Example Software");
  setMinimumHeight(500);
  setMinimumWidth(500);

  // Definition Actions
  m_actionQuit = new QAction(QIcon("./icones/icone_quit.png"),"Quit",this);
  m_actionX = new QAction(QIcon("./icones/icone_perso.png"),"X Window",this);
  m_actionY = new QAction(QIcon("./icones/icone_configuration.png"),"Y Window",this);

  // Définition Menu
  m_menuFile = menuBar()->addMenu("File");
  m_menuFile->addAction(m_actionX);
  m_menuFile->addAction(m_actionY);
  m_menuFile->addAction(m_actionQuit);

  // Creation Connections
  connect(m_actionQuit,SIGNAL(triggered(bool)),qApp,SLOT(quit()));
  connect(m_actionX,SIGNAL(triggered(bool)),this,SLOT(launchXWindow()));
  connect(m_actionY,SIGNAL(triggered(bool)),this,SLOT(launchYWindow()));
}


void MyMainWindow::launchXWindow()
{
  MyXWindow currentWindow;
  currentWindow.displayWindow(this);
}

void MyMainWindow::launchYWindow()
{
  MyYWindow currentWindow;
  currentWindow.displayWindow(this);
}
