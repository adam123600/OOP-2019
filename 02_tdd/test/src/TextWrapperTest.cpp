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
    auto wrapper = TextWrapper{};

   // ASSERT_EQ("", TextWrapper::wrapper("", 1));
   //ASSERT_EQ("A\nS\nD", wrapper.wrapper("ASD", 1));
   //EXPECT_EQ("A\nS\nD", wrapper.wrapper("ASD", 1));
   EXPECT_EQ("A\nS\nD", TextWrapper::wrapper("ASD", 1));
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

TEST(TextWrapper, HasColumnsGetter)
{
    auto wrapper = TextWrapper{};
    EXPECT_EQ(0, wrapper.columns(0));
}
