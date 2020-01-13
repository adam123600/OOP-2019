#include <QtTest>

// add necessary includes here

#include "acceleration.h"

#include <QSignalSpy>

class test_acceleration : public QObject
{
    Q_OBJECT

private slots:
    void test_case1()
    {
        Acceleration acc{};
        QSignalSpy spy{&acc, SIGNAL(changed(double))};

        QCOMPARE(0, spy.count());
        QCOMPARE(0, acc.get());



        acc.onChange(5);

       // QList<QVariant> arguments = spy.takeFirst();

        QCOMPARE(5, spy.at(0).value(0));
        //QCOMPARE(5, spy.at(0));

        QCOMPARE(5, acc.get());
        QCOMPARE(5, acc.property("value"));

        QCOMPARE(1, spy.count());

    }

};

QTEST_APPLESS_MAIN(test_acceleration)

#include "tst_test_acceleration.moc"
