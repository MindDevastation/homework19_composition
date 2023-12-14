#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "car.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    this->carO.setParam("Lamborgini", 142.5, "Red", 4);

    ui->carType->setText("Car type: " + this->carO.getType());
    ui->carPower->setText("Car power: " + QString::number(this->carO.getPower()));
    ui->carColor->setText("Car color: " + this->carO.getColor());
    ui->carAmount->setText("Amount of wheels: " + QString::number(this->carO.getAmount()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if (this->trigger == false){
       car carNew(this->carO);

        QString newCarType;
       double newCarPower;
        QString newCarColor;
       int newCarAmount;

        if(ui->typeEdit->text() != ""){
            newCarType = ui->typeEdit->text();
        }else{
            newCarType = this->carO.getType();
        }
        if(ui->powerEdit->text().toDouble() != NULL){
            newCarPower = ui->powerEdit->text().toDouble();
        }else{
            newCarPower = this->carO.getPower();
        }
        if(ui->colorEdit->text() != ""){
            newCarColor = ui->colorEdit->text();
        }else{
            newCarColor = this->carO.getColor();
        }
        if(ui->amountEdit->text().toInt() != NULL){
            newCarAmount = ui->amountEdit->text().toInt();
        }else{
            newCarAmount = this->carO.getAmount();
        }

        carNew.setParam(newCarType, newCarPower, newCarColor, newCarAmount);

        ui->carType_2->setText("Car type: " + carNew.getType());
        ui->carPower_2->setText("Car power: " + QString::number(carNew.getPower()));
        ui->carColor_2->setText("Car color: " + carNew.getColor());
        ui->carAmount_2->setText("Amount of wheels: " + QString::number(carNew.getAmount()));

        ui->typeEdit->clear();
        ui->powerEdit->clear();
        ui->colorEdit->clear();
        ui->amountEdit->clear();

        this->trigger = true;
    }else{
        car carNew(this->carO);

        QString newCarType;
        double newCarPower;
        QString newCarColor;
        int newCarAmount;

        if(ui->typeEdit->text() != ""){
            newCarType = ui->typeEdit->text();
        }else{
            newCarType = this->carO.getType();
        }
        if(ui->powerEdit->text().toDouble() != NULL){
            newCarPower = ui->powerEdit->text().toDouble();
        }else{
            newCarPower = this->carO.getPower();
        }
        if(ui->colorEdit->text() != ""){
            newCarColor = ui->colorEdit->text();
        }else{
            newCarColor = this->carO.getColor();
        }
        if(ui->amountEdit->text().toInt() != NULL){
            newCarAmount = ui->amountEdit->text().toInt();
        }else{
            newCarAmount = this->carO.getAmount();
        }

        carNew.setParam(newCarType, newCarPower, newCarColor, newCarAmount);

        ui->carType_3->setText("Car type: " + carNew.getType());
        ui->carPower_3->setText("Car power: " + QString::number(carNew.getPower()));
        ui->carColor_3->setText("Car color: " + carNew.getColor());
        ui->carAmount_3->setText("Amount of wheels: " + QString::number(carNew.getAmount()));

        ui->typeEdit->clear();
        ui->powerEdit->clear();
        ui->colorEdit->clear();
        ui->amountEdit->clear();

        this->trigger = true;
    }



}

