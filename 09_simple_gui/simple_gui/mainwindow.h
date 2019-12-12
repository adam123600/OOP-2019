#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "displacement.h"
#include "speed.h"
#include "acceleration.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    //void on_lineEditDisplacement_textEdited(const QString &arg1);

private:
    Ui::MainWindow *ui;

    displacement* displacement1;
    speed* speed1;
    acceleration* acceleration1;
};

#endif // MAINWINDOW_H
