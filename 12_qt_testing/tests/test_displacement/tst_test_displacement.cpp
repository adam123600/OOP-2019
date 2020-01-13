#include <QtTest>

// add necessary includes here
#include "displacement.h"
#include <QSignalSpy>

class test_displacement : public QObject
{
    Q_OBJECT

//public:
//    test_displacement();
//    ~test_displacement();

private slots:
    void test_case1();

};

void test_displacement::test_case1()
{
    Displacement dis{};

    QSignalSpy spy{&dis, SIGNAL(changed(double))};

    QCOMPARE(0, spy.count());

    dis.set(5);

    QCOMPARE(5, dis.property("value"));

    QCOMPARE(1, spy.count());

    dis.setProperty("value", 100);
    QCOMPARE(100, dis.property("value"));
}

QTEST_APPLESS_MAIN(test_displacement)

#include "tst_test_displacement.moc"
