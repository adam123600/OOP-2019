#include <QtTest>

// add necessary includes here

#include "demo.h"
#include <QSignalSpy>

class DemoTest : public QObject
{
    Q_OBJECT



private slots:
    void test_case1()
    {
        Demo demo{};

        QSignalSpy spy{&demo, SIGNAL(added())};

        QCOMPARE(0, spy.count());

        QCOMPARE(10, demo.add(2, 8));

        QCOMPARE(1, spy.count());

//        demo.property("value");
        demo.setProperty("value", 10);

    }

};


QTEST_APPLESS_MAIN(DemoTest)

#include "tst_demotest.moc"
