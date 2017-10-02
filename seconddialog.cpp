#include "seconddialog.h"
#include "ui_seconddialog.h"
#include "mainwindow.h"

SecondDialog::SecondDialog(QWidget *parent) :
QDialog(parent),
ui(new Ui::SecondDialog)
{
    ui->setupUi(this);
}

void SecondDialog::setImage(const Mat &image){
    Mat temp(image.cols, image.rows, image.type());
    QImage dest((const uchar *) temp.data, temp.cols, temp.rows, temp.step, QImage::Format_RGB888);
    ui->label_img->setPixmap(QPixmap::fromImage(dest));
}

//SecondDialog::SecondDialog(QWidget *parent) :
//    QDialog(parent),
//    ui(new Ui::SecondDialog)
//{
//    ui->setupUi(this);
//    MainWindow object;
//    Mat src= object.grayImage;
//    Mat temp(src.cols,src.rows,src.type());
//    QImage dest((const uchar *) temp.data, temp.cols, temp.rows, temp.step, QImage::Format_RGB888);
//        dest.bits();
//    ui->label_img->setPixmap(QPixmap::fromImage(dest));
//}

SecondDialog::~SecondDialog()
{
    delete ui;
}
