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
   EXPECT_EQ("A\nS\nD", TextWrapper::wrapper("ASD", 1));
}

TEST(TextWrapper, CheckMethodWrapper2)
{
    ASSERT_EQ("A", TextWrapper::wrapper("A", 1));
}

TEST(TextWrapper, CheckMethodWrapper3)
{
    ASSERT_EQ("A\nB\nC", TextWrapper::wrapper("ABC", 1));
}

TEST(TextWrapper, CheckMethodWrapper4)
{
    ASSERT_EQ("AB\nC", TextWrapper::wrapper("ABC", 2));
}

TEST(TextWrapper, CheckMethodWrapper5)
{
    ASSERT_EQ("AB\nCD", TextWrapper::wrapper("ABCD", 2));
}

TEST(TextWrapper, HasColumnsGetter)
{
    auto wrapper = TextWrapper{};
    EXPECT_EQ(0, wrapper.columns(0));
}
