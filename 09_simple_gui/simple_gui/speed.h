#ifndef SPEED_H
#define SPEED_H

#include <QObject>

class speed : public QObject
{
    Q_OBJECT
public:
    explicit speed(QObject *parent = nullptr);

signals:
    void changed(double v);

public slots:
    void onDisplacementChanged(double v);

private:

    double predkosc1;
    double predkosc2;
    int flagPredkosc1;
    int flagPredkosc2;

};

#endif // SPEED_H
