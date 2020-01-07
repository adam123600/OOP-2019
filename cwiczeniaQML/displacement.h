#ifndef DISPLACEMENT_H
#define DISPLACEMENT_H

#include <QObject>

class displacement : public QObject
{
    Q_OBJECT

    Q_PROPERTY(double value READ get WRITE set NOTIFY changed)
public:
    explicit displacement(QObject *parent = nullptr);

    Q_INVOKABLE void doSomething();
    Q_INVOKABLE void set(double v);
    Q_INVOKABLE double get();

signals:
    void changed(double v);
    void test();

public slots:


private:
    double value;
};

#endif // DISPLACEMENT_H
