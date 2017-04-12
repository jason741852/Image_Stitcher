#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/stitching.hpp>



#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <fstream>

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QLabel>
#include <QtGui>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pic_1_clicked();


    void on_pic_2_clicked();

    void on_Stitcher_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
