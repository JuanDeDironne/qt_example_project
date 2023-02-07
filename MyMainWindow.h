#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include<QMainWindow>
#include<QLayout>

class MyMainWindow : public QMainWindow
{
  Q_OBJECT

  public:
  MyMainWindow();

  public:
  QString chaineTest;

  public slots:
  void processConnexion();
  void processConfiguration();

  private:
  void createActions();
  void createMenu();
  void createHomeScreen();

  QAction *m_actionQuit;
  QAction *m_actionConnexion;
  QAction *m_actionConfiguration;

  QMenu *m_menuFile;
  QMenu *m_menuTools;

  QWidget *m_widgetPage;
  QGridLayout *m_layoutPage;
};


#endif // MYMAINWINDOW_H
