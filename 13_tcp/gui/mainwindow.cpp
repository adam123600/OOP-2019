#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QHostAddress>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(&socket, SIGNAL(readyRead()), this, SLOT(readyRead()));

    socket.connectToHost(QHostAddress::LocalHost, 8000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::readyRead()
{
    QTextStream stream{&socket};

    ui->label->setText(stream.readAll());
}

void MainWindow::on_pushButton_clicked()
{
    QTextStream stream{&socket};

    stream << ui->lineEdit->text();
}
