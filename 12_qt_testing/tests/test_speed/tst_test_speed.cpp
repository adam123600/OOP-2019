#include <QtTest>

// add necessary includes here

//#include "displacement.h>
#include "speed.h"
#include <QSignalSpy>

class test_speed : public QObject
{
    Q_OBJECT

//public:
//    test_speed();
//    ~test_speed();

private slots:
    void test_case1()
    {
        Speed speed{};

        QSignalSpy spy{&speed, SIGNAL(changed(double))};

        QCOMPARE(0, spy.count());

        QCOMPARE(0, speed.get());

        speed.onChange(5);

        QCOMPARE(1, spy.count());

        QCOMPARE(5, speed.get());

    }

};


QTEST_APPLESS_MAIN(test_speed)

#include "tst_test_speed.moc"
