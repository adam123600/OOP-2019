#include "UniverseImpl.h"
#include "TestIncludes.h"

#include "../include/ObserverMock.h"
#include "../include/SpaceMock.h"
#include "../include/TimeMock.h"
//#include "../../include/UniverseImpl.h"

/*
class Interface {
public:
    virtual int test() = 0;
};

class Implementation : public Interface {
public:
    int test() override {
        return 10;
    }
};

class MyMock : public Interface {
public:
    MOCK_METHOD0(test, int());
};

class Dummy {
    Interface &interface;
public:
    explicit Dummy(Interface &interface) : interface(interface){}
    int execute() { return interface.test(); }
};



TEST(Universe, Create)
{
    // TODO: Test UniverseImpl class...

    StrictMock<MyMock> myMock{};
    Dummy dummy{myMock};

    EXPECT_CALL(myMock, test()).WillOnce(Return(10)); // willwonce - implementacja tej funkcji\
    // implementacja na potrzeby jednego testu


    EXPECT_EQ(10, dummy.execute());

}
*/

TEST(Universe, Create)
{
    SpaceMock spaceMock{};
    ObserverMock observerMock{};
    TimeMock timeMock{};

    UniverseImpl universe {timeMock, spaceMock, observerMock};

/*

    EXPECT_CALL(SpaceMock, create(100));
    EXPECT_CALL(ObserverMock, remember("ASD", "DSA"));
    EXPECT_CALL(ObserverMock, answer("DDDDDDD"));
    EXPECT_CALL(TimeMock, create(false));
    EXPECT_CALL(TimeMock, now()).WillOnce(Return(5));
    EXPECT_CALL(TimeMock, flow());
*/


}
