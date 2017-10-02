#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/ASHRAF/Desktop/X-folder/german.jpg");
    ui->label_pic->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Browse_clicked()
{

    QFileDialog dialog(this);
    dialog.setNameFilter(tr("Images (*.png *.xpm *.jpg)"));
    dialog.setViewMode(QFileDialog::Detail);
    fileName = QFileDialog::getOpenFileName(this,
        tr("Open Images"), "/home/rpi/Desktop/Picture/Sample Pictures", tr("Image Files (*.png *.jpg *.bmp)"));
    if (!fileName.isEmpty())
    {
        Mat grayImage;
        String image_path=fileName.toLocal8Bit().constData();
        Mat image= imread(image_path);
        cvtColor(image, grayImage, CV_BGR2GRAY);
        SecondDialog obj;
        obj.setImage(grayImage);
        obj.setModal(true);
        obj.exec();
    }
}

//void MainWindow::on_Browse_clicked()
//{
//    QFileDialog dialog(this);
//    dialog.setNameFilter(tr("Images (*.png *.xpm *.jpg)"));
//    dialog.setViewMode(QFileDialog::Detail);
//    fileName = QFileDialog::getOpenFileName(this,
//        tr("Open Images"), "/home/rpi/Desktop/Picture/Sample Pictures", tr("Image Files (*.png *.jpg *.bmp)"));
//    if (!fileName.isEmpty())
//    {
//        String image_path=fileName.toLocal8Bit().constData();
//        Mat image= imread(image_path);
//        cvtColor(image, grayImage, CV_BGR2GRAY);

//        SecondDialog obj;
//        obj.setImage(grayImage);
//        obj.setModal(true);
//        obj.exec();
//    }
//}
