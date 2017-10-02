#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QLabel>
#include <opencv/highgui.h>
#include "opencv2/imgproc/imgproc.hpp"
#include <seconddialog.h>

using namespace cv;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    QString fileName;
    //Mat grayImage;
    ~MainWindow();

private slots:

    void on_Browse_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
