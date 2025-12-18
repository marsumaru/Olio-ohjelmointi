#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);   //tämä rivi luo Qt-sovelluksen
    MainWindow w;                 //luodaan olio luokasta MainWindow
    w.show();                      //tämä näyttää ikkunan
    return a.exec();
}
