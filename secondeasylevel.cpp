#include "secondeasylevel.h"
#include "ui_secondeasylevel.h"
#include <QMessageBox>

secondeasylevel::secondeasylevel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secondeasylevel)
{
    ui->setupUi(this);
}

secondeasylevel::~secondeasylevel()
{
    delete ui;
}

void secondeasylevel::on_pushButton_clicked()
{
    QString answer_one = ui->lineEdit->text();
    if(answer_one=="5")
    {
        QMessageBox::information(this,"Answer","Is correct!");
        //this->close();
        //thirdeasylevel object;
//        object.setModal(true);
//        object.exec();
        ui->stackedWidget->setCurrentIndex(1);

    }
    else{
        QMessageBox::information(this,"Answer","Is wrong!");
    }
}

void secondeasylevel::on_pushButton_2_clicked()
{
    QMessageBox::information(this,"Answer","Answer is wrong,try again!");
}

void secondeasylevel::on_pushButton_3_clicked()
{
    QMessageBox::information(this,"Answer","Is correct!");
    ui->stackedWidget->setCurrentIndex(2);
}

void secondeasylevel::on_pushButton_4_clicked()
{
    QMessageBox::information(this,"Answer","Answer is wrong,try again!");
}
