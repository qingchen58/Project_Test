#include "mainwindow.h"
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    new QLabel("HaHa HelloWorld DaDaDaDa",this);
}

MainWindow::~MainWindow()
{

}
