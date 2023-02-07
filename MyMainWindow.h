#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include<QtWidgets>

class MyMainWindow : public QMainWindow
{
  Q_OBJECT

  public:
  MyMainWindow();

  public slots:
  void launchXWindow();
  void launchYWindow();

  private:
  QAction *m_actionQuit;
  QAction *m_actionX;
  QAction *m_actionY;
  QMenu *m_menuFile;
};

#endif // MYMAINWINDOW_H
