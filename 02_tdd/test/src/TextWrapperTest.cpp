#include "TestIncludes.h"
#include "TextWrapper.h"



TEST(TextWrapper, CreateInstance) {

    auto wrapper = TextWrapper{};
}


TEST(TextWrapper, HasColumnsGetter2)
{
    auto wrapper = TextWrapper{};

    EXPECT_EQ(1, wrapper.columns(1));
}

TEST(TextWrapper, HasColumnsGetter) {

auto wrapper = TextWrapper{};

EXPECT_EQ(0, wrapper.columns(0));
}


/*
TEST(TextWrapper, Test1)
{
  //  auto wrapper = TextWrapper{};
    //EXPECT_EQ(5, TextWrapper::columns("ASD", 5));
    //ASSERT_EQ(5, 10);

    //ASSERT_STREQ(" ", TextWrapper::columns("ASD", 5));

    EXPECT_STRCASEEQ("ASD", TextWrapper::columns("ASD", 5));
}
*/