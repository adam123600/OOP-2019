#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    displacement1 = new displacement(this);
    speed1 = new speed(this);
    acceleration1 = new acceleration(this);

    connect(displacement1, SIGNAL(changed(double)), speed1, SLOT(onDisplacementChanged(double)));
    connect(speed1, SIGNAL(changed(double)), acceleration1, SLOT(onSpeedChanged(double)));

    ui->setupUi(this);

    connect(speed1, SIGNAL(changed(double)), ui->lcdNumberSpeed, SLOT(display(double)));
    connect(acceleration1, SIGNAL(changed(double)), ui->lcdNumberAcceleration, SLOT(display(double)));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    auto value = ui->lineEditDisplacement->text().toDouble();
    displacement1->set(value);
}

