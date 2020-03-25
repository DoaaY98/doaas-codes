#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "input_fcfs.h"
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
    if(ui->RB_FCFS->isChecked())
    {
        input_fcfs fcfsIn;
        fcfsIn.setModal(true);
        fcfsIn.exec();
    }
}
