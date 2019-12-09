#ifndef DISPLACEMENT_H
#define DISPLACEMENT_H

#include <QObject>

class Displacement : public QObject
{
    Q_OBJECT
public:
    explicit Displacement(QObject *parent = nullptr);

    void set(double v); // ustawia pole w klasie na wybrana wartosc
    // po ustawieniu wysla sygnal ktory zawiera informacje jaka jest nowa wartosc

signals:
    void changed(double v);

public slots:

private:
    double value;
};

#endif // DISPLACEMENT_H
