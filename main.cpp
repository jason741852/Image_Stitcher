#include "mainwindow.h"
#include <QApplication>

QImage img_left;
QImage img_right;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
