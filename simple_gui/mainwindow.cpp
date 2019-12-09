#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "displacement.h"
#include "speed.h"
#include "acceleration.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    Displacement *displacement = new Displacement(this);
    Speed *speed = new Speed(this);
    Acceleration *acceleration = new Acceleration(this);

    connect(displacement, SIGNAL(changed(double)), speed, SLOT(onChange(double)));
    connect(speed, SIGNAL(changed(double)), acceleration, SLOT(onChange(double)));


    ui->setupUi(this);

    connect(speed, SIGNAL(changed(double)), ui->lcdNumber, SLOT(display(double)));
    connect(acceleration, SIGNAL(changed(double)), ui->lcdNumber_2, SLOT(display(double)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //ui->lineEdit->setText("123")
    //ui->lineEdit->displayText();
    //ui->lcdNumber;

    auto value = ui->lineEdit->text().toDouble();

}

void MainWindow::on_pushButton_pressed()
{
    //ui->lineEdit->setText("ASDASDASDASDDS");
}
