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

//private:
//    double value;
};

#endif // SPEED_H
