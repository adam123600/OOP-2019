#ifndef SPEED_H
#define SPEED_H

#include <QObject>

class speed : public QObject
{
    Q_OBJECT

     Q_PROPERTY(double value READ get NOTIFY changed)
public:
    explicit speed(QObject *parent = nullptr);

    Q_INVOKABLE double get();


signals:
    void changed(double v);


public slots:
    void onDisplacementChanged(double v);

private:

    double predkosc1;
    double predkosc2;
    int flagPredkosc1;
    int flagPredkosc2;

    double wynik;
};

#endif // SPEED_H
