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

     QImage img_left(filename);
     ui->display_1->setText(filename);

     ui->display_1->setPixmap(QPixmap::fromImage(img_left));
     ui->display_1->setScaledContents(true);
     ui->display_1->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
     //ui->display_1->setText(filename);
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

    QImage img_right(filename);


    ui->display_2->setPixmap(QPixmap::fromImage(img_right));
    ui->display_2->setScaledContents(true);
    ui->display_2->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    ui->display_2->setText(filename);
    QTextStream(stdout) << ui->display_1->pixmap() << endl;

    if(ui->display_1->pixmap()!=0){
        ui->Stitcher->setEnabled(true);
    }
}

void MainWindow::on_Stitcher_clicked()
{
  //  std::vector<cv::Mat> vImg;

     //   cv::Mat image = cv::imread(imgPath,CV_LOAD_IMAGE_COLOR);

//    cv::Mat stitch_img;

//    const QPixmap* pic1 = ui->display_1->text()
//    if ( pic1 )
//    {
//        QImage image_left( pic1->toImage() );
//    }

//    const QPixmap* pic2 = ui->display_2->pixmap();
//    if ( pic1 )
//    {
//        QImage image_right( pic2->toImage() );
//    }

//    vImg.push_back();


}
