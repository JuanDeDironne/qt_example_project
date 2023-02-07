#include<QApplication>
#include"MyMainWindow.h"

int main(int nbArg, char* argList[])
{
  QApplication myApp(nbArg,argList);
  MyMainWindow myWindow;

  myWindow.show();
  myApp.exec();
}
