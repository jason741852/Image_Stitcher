#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pic_1_clicked()
{
     QString filename = QFileDialog::getOpenFileName(this, tr("Open File"), "C://", "jpg (*.jpg)");

     QMessageBox::information(this,tr("File Name"), filename);

     std::string pPath = filename.toLocal8Bit().constData();

     picPath1 = filename;

     QImage img_left(filename);

     ui->display_1->setPixmap(QPixmap::fromImage(img_left));
     ui->display_1->setScaledContents(true);
     ui->display_1->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
     QTextStream(stdout) << ui->display_2->pixmap() << endl;
     if(ui->display_2->pixmap()!=0){
        ui->Stitcher->setEnabled(true);
     }
     QTextStream(stdout) << ui->display_1->text() << endl;

}


void MainWindow::on_pic_2_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Open File"), "C://", "jpg (*.jpg)");

    QMessageBox::information(this,tr("File Name"), filename);

    std::string pPath = filename.toLocal8Bit().constData();

    picPath2 = filename;


    QImage img_right(filename);


    ui->display_2->setPixmap(QPixmap::fromImage(img_right));
    ui->display_2->setScaledContents(true);
    ui->display_2->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    QTextStream(stdout) << ui->display_1->pixmap() << endl;

    if(ui->display_1->pixmap()!=0){
        ui->Stitcher->setEnabled(true);
    }
}

void MainWindow::on_Stitcher_clicked()
{
    std::vector<cv::Mat> vImg;
    cv::Mat stitch_img;
    cv::Mat dest;

    std::string pPath1 = picPath1.toLocal8Bit().constData();
    std::string pPath2 = picPath2.toLocal8Bit().constData();
    cv::Mat image1 = cv::imread(pPath1,CV_LOAD_IMAGE_COLOR);
    cv::Mat image2 = cv::imread(pPath2,CV_LOAD_IMAGE_COLOR);

    vImg.push_back(image1);
    vImg.push_back(image2);

    cv::Stitcher stitcher = cv::Stitcher::createDefault();

    stitcher.stitch(vImg,stitch_img);

    cv::imshow("Stitch result", stitch_img);

    cv::imwrite("test.png", stitch_img);
}

