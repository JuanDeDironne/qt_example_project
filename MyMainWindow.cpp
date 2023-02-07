#include<QtWidgets>
#include"MyMainWindow.h"
#include"MyConnectionWindow.h"
#include"MyConfigurationWindow.h"


MyMainWindow::MyMainWindow()
{
  setWindowTitle("Example Application");
  setMinimumHeight(600);
  setMinimumWidth(600);

  createActions();
  createMenu();
  createHomeScreen();

  connect(m_actionQuit,SIGNAL(triggered(bool)),qApp,SLOT(quit()));
  connect(m_actionConfiguration,SIGNAL(triggered(bool)),this,SLOT(processConfiguration()));
  connect(m_actionConnexion,SIGNAL(triggered(bool)),this,SLOT(processConnexion()));
}


void MyMainWindow::processConfiguration()
{
  MyConfigurationWindow currentWindow;
  currentWindow.display(this);
}


void MyMainWindow::processConnexion()
{
  MyConnectionWindow currentWindow;
  currentWindow.display(this);
}





void MyMainWindow::createActions()
{
  m_actionQuit = new QAction(QIcon("./icones/icone_quit.png"),"Quit",this);
  m_actionConfiguration = new QAction(QIcon("./icones/icone_configuration.png"),"Configuration",this);
  m_actionConnexion = new QAction(QIcon("./icones/icone_perso.png"),"Connexion",this);
}


void MyMainWindow::createMenu()
{
  m_menuFile = menuBar()->addMenu("File");
  m_menuFile->addAction(m_actionQuit);

  m_menuTools = menuBar()->addMenu("Tools");
  m_menuTools->addAction(m_actionConfiguration);
  m_menuTools->addAction(m_actionConnexion);
}


void MyMainWindow::createHomeScreen()
{
  m_widgetPage    = new QWidget();
  m_layoutPage    = new QGridLayout();          m_layoutPage->setAlignment(Qt::AlignCenter);

  m_layoutPage->addWidget(new QLabel("<b>Home Screen</b>"));

  m_widgetPage->setLayout(m_layoutPage);
  setCentralWidget(m_widgetPage);
}
