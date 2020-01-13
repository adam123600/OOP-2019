#ifndef DEMO_H
#define DEMO_H

#include "utils_global.h"
#include <QObject>

class UTILSSHARED_EXPORT Demo : public QObject
{
    Q_OBJECT

public:
    Demo();

    int add(int a, int b);

signals:

    void added();
};

#endif // DEMO_H
