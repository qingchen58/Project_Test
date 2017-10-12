#include "mainwindow.h"
#include <QApplication>
#include <QtGui>
#include"testwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    TestWidget w;
    w.show();
    return a.exec();
}
