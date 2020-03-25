#include "input_fcfs.h"
#include "ui_input_fcfs.h"
#include <QString>
input_fcfs::input_fcfs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::input_fcfs)
{
    ui->setupUi(this);
}

input_fcfs::~input_fcfs()
{
    delete ui;
}
int i=0;
QString process[10];

QString ArrivalTime[10];
QString BurstTime[10];
void input_fcfs::on_PB_next_clicked()
{
    process[i]=ui->lineEdit_name->text();
    ArrivalTime[i]=ui->lineEdit_arrival->text();
    BurstTime[i]=ui->lineEdit_burst->text();
    i++;
    ui->lineEdit_name->clear();
    ui->lineEdit_arrival->clear();
    ui->lineEdit_burst->clear();

}

