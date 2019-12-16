#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void error();
    void opened();
    void saved();

    void done(); // do stanu LOG

public slots:
    void open();
    void save();

    void log(); // do stanu LOG

private:
    Ui::MainWindow *ui;

    QString fileName;
};

#endif // MAINWINDOW_H
