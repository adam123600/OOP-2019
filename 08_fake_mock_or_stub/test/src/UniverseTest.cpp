
#include "Universe.h"
#include "TestIncludes.h"

#include "../include/SpaceMock.h"
#include "../include/ObserverMock.h"
#include "../include/TimeMock.h"

// przyklad
/*
class Interface
{
public:
    virtual int test() = 0;
};

class Implementation : public Interface
{
public:
    int test() override
    {
        return 10;
    }
};

class MyMock : public Interface
{
    MOCK_METHOD0(test, int());
};

class Dummy
{
    Interface &interface;
public:
    explicit Dummy(Interface &interface) : interface(interface){}
    int execute() { return interface.test(); }
};
*/

TEST(Universe, Create)
{
    // TODO: Test Universe class...

    StrictMock<TimeMock> timeMock{};
    StrictMock<SpaceMock> spaceMock{};
    StrictMock<ObserverMock> observerMock{};

    Universe universe {timeMock, spaceMock, observerMock};

    EXPECT_CALL(timeMock, create(true)).WillOnce(Return());
    EXPECT_CALL(spaceMock, create(11)).WillOnce(Return());
    EXPECT_CALL(spaceMock, dimensions()).WillOnce(Return(5));
    EXPECT_CALL(observerMock, remember("How many dimensions there are?", "5"));

    universe.create();
}

TEST(Universe, simulateEarth)
{
    StrictMock<TimeMock> timeMock{};
    StrictMock<SpaceMock> spaceMock{};
    StrictMock<ObserverMock> observerMock{};

    Universe universe(timeMock, spaceMock, observerMock);


    EXPECT_CALL(timeMock, now).WillOnce(Return(9300000000)).WillOnce(Return(9300000001));
    EXPECT_CALL(timeMock, flow()).WillOnce(Return());
    EXPECT_CALL(observerMock, remember("Is there planet Earth?", "Yes!"));

    universe.simulate(9300000001);
}

TEST(Universe, simulateLife)
{
    StrictMock<TimeMock> timeMock{};
    StrictMock<SpaceMock> spaceMock{};
    StrictMock<ObserverMock> observerMock{};

    Universe universe(timeMock, spaceMock, observerMock);


    EXPECT_CALL(timeMock, now).WillOnce(Return(9900000000)).WillOnce(Return(9900000001));
    EXPECT_CALL(timeMock, flow()).WillOnce(Return());
    EXPECT_CALL(observerMock, remember("Does life exist?", "Yes!"));

    universe.simulate(9900000001);
}

TEST(Universe, simulateEvolved)
{
    StrictMock<TimeMock> timeMock{};
    StrictMock<SpaceMock> spaceMock{};
    StrictMock<ObserverMock> observerMock{};

    Universe universe(timeMock, spaceMock, observerMock);


    EXPECT_CALL(timeMock, now).WillOnce(Return(13800000000)).WillOnce(Return(13800000001));
    EXPECT_CALL(timeMock, flow()).WillOnce(Return());
    EXPECT_CALL(observerMock, remember("Have People evolved?", "Yes!"));

    universe.simulate(13800000001);
}

