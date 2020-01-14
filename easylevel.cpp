#include "easylevel.h"
#include "ui_easylevel.h"
#include "secondeasylevel.h"
#include "mainwindow.h"


Easylevel::Easylevel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Easylevel)
{
    ui->setupUi(this);
}

Easylevel::~Easylevel()
{
    delete ui;
}


void Easylevel::on_pushButton_clicked()
{
    this->close();

    secondeasylevel object;

    object.setModal(true);
    object.exec();

}

void Easylevel::on_pushButton_2_clicked()
{
    this->close();

//    MainWindow thing;
//    thing.setModal(true);
//    thing.exec();
}
