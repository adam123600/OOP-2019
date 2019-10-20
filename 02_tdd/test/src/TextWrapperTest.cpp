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
   //EXPECT_EQ("A\nS\nD", TextWrapper::wrapper("ASD", 1));
   //ASSERT_EQ("A\nS\nD", TextWrapper::wrapper("ASD", 1));
   std::string test = "A\nS\nD";
   //ASSERT_EQ(test, wrapper.wrapper("ASD", 1));
   EXPECT_EQ("A\nS\nD", TextWrapper::wrapper("ASD", 1));
   //ASSERT_EQ(wrapper.wrapper("ASD", 1), test);
}

TEST(TextWrapper, CheckMethodWrapper2)
{
    auto wrapper = TextWrapper{};
    ASSERT_EQ("A", wrapper.wrapper("A", 1));
}

TEST(TextWrapper, CheckMethodWrapper3)
{
    auto wrapper = TextWrapper{};
    ASSERT_EQ("A\nB\nC", wrapper.wrapper("ABC", 1));
}

TEST(TextWrapper, CheckMethodWrapper4)
{
    auto wrapper = TextWrapper{};
    ASSERT_EQ("AB\nC", wrapper.wrapper("ABC", 2));
}

TEST(TextWrapper, CheckMethodWrapper5)
{
    auto wrapper = TextWrapper{};
    ASSERT_EQ("AB\nCD\n", wrapper.wrapper("ABCD", 2));
}

TEST(TextWrapper, HasColumnsGetter)
{
    auto wrapper = TextWrapper{};
    EXPECT_EQ(0, wrapper.columns(0));
}
