#ifndef DISPLACEMENT_H
#define DISPLACEMENT_H

#include <QObject>

class displacement : public QObject
{
    Q_OBJECT
public:
    explicit displacement(QObject *parent = nullptr);

    void set(double v);

signals:
    void changed(double v);

public slots:

private:
    double value;
};

#endif // DISPLACEMENT_H
