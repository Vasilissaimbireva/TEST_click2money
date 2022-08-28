#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    int a = 0, b = 1;
    int c = 0;

    QString str;

    str.push_back(QString::number(a));
    str.push_back(' ');
    str.push_back(QString::number(b));
    str.push_back(' ');

        for (int i = 0; i < 10 -2 ; i++)
        {
            c = a + b;
        str.push_back(QString::number(c));
        str.push_back(' ');
            a = b;
            b = c;
        }
        ui->lineEdit->setText(str);
}

