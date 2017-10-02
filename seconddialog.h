#ifndef SECONDDIALOG_H
#define SECONDDIALOG_H

#include <QDialog>
#include <opencv/highgui.h>

using namespace cv;

namespace Ui {
class SecondDialog;
}

class SecondDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecondDialog(QWidget *parent = 0);
    void setImage(const Mat &image);
    //void show_image(QString file);
    ~SecondDialog();

private:
    Ui::SecondDialog *ui;
};

#endif // SECONDDIALOG_H
