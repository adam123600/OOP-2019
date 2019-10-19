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


TEST(TextWrapper, CheckMethodWrapper1)
{
    ASSERT_EQ("", TextWrapper::wrapper("", 1));
}

TEST(TextWrapper, CheckMethodWrapper2)
{
    ASSERT_EQ("a", TextWrapper::wrapper("a", 1));
}

TEST(TextWrapper, CheckMethodWrapper3)
{
    ASSERT_EQ("a\nb\nc", TextWrapper::wrapper("abc", 1));
}

TEST(TextWrapper, CheckMethodWrapper4)
{
    ASSERT_EQ("ab\nc", TextWrapper::wrapper("abc", 2));
}

TEST(TextWrapper, CheckMethodWrapper5)
{
    ASSERT_EQ("ab\ncd", TextWrapper::wrapper("abcd", 2));
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

TEST(TextWrapper, HasColumnsGetter) {

auto wrapper = TextWrapper{};

EXPECT_EQ(0, wrapper.columns(0));
}
