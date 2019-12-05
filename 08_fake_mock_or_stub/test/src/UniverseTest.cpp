
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
