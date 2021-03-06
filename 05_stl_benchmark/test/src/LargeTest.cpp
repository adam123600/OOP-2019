#include "TestIncludes.h"

#include <vector>
#include <array>
#include <deque>
#include <list>
#include <forward_list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

#include "Large.h"

TEST(LargeTest, SizeIsOneMegabyte) {

    EXPECT_EQ(1024u*1024u, sizeof(Large));
}

TEST(LargeTest, CreateObject) {

    Large large{};
}

TEST(LargeTest, HasLessThenOperator) {

    Large a{};
    Large b{};

    a < b;
}

TEST(LargeTest, HasEqualityOperator) {

    Large a{};
    Large b{};

    a == b;
}

TEST(LargeTest, CanBeHashed) {

    Large large{};
    std::hash<Large> hash;

    hash(large);
}

TEST(LargeTest, Collections) {

    Large large{};

    std::vector<Large> vector{};
    vector.push_back(large);

    std::array<Large, 1> array{};
    array[0] = large;

    std::deque<Large> deque{};
    deque.push_back(large);

    std::list<Large> list{};
    list.push_back(large);

    std::forward_list<Large> forward_list{};
    forward_list.push_front(large);

    std::map<Large, bool> map{};
    map[large] = true;

    std::set<Large> set{};
    set.insert(large);

    std::unordered_map<Large, bool> unordered_map{};
    unordered_map[large] = true;

    std::unordered_set<Large> unordered_set{};
    unordered_set.insert(large);
}

TEST(LargeTest, Randomize) {

    Large large{};
    large.randomize();

    auto count = 0u;

    for (double i : large.data) {

        ASSERT_LE(0.0, i);
        ASSERT_GE(1.0, i);

        if (i != 0.0)
            ++count;
    }

    EXPECT_NE(0u, count) << "All elements were zero?";
}

TEST(LargeTest, Clear) {

    Large large{};
    large.randomize();
    large.clear();

    for (double i : large.data) {
        ASSERT_DOUBLE_EQ(0.0, i);
    }
}


// TODO: Add tests for your operators implementation!

TEST(LargeTest, lessOperatorFalse1)
{
    Large a{};
    a.data[0] = 1e-18;

    Large b{};
    b.data[0] = 2e-16;

    EXPECT_EQ(false, a<b);
}

TEST(LargeTest, lessOperatorFalse2)
{
    Large a{};
    a.data[0] = 12e-9;
    a.data[1] = 13e-2;

    Large b{};
    b.data[0] = 13e-9;
    b.data[1] = 14e-2;

    EXPECT_EQ( false, a<b);
}

TEST(LargeTest, lessOperatorFalse3)
{
    Large a{};
    a.data[0] = 1e-19;

    Large b{};
    b.data[0] = 1e19;

    EXPECT_EQ(false, a<b);
}

TEST(LargeTest, lessOperatorFalse4)
{
    Large a{};
    a.data[0] = 2e-19;

    Large b{};
    b.data[0] = 1e-19;

    EXPECT_EQ(false, a<b);
}

TEST(LargeTest, lessOperatorFalse5)
{
    Large a{};
    a.data[0] = 15e10;

    Large b{};
    b.data[0] = 14e10;

    EXPECT_EQ(false, a<b);
}

TEST(LargeTest, isEqualFalse1)
{
    Large a{};
    a.data[0] = 1e-19;

    Large b{};
    b.data[0] = 1e-19;

    EXPECT_EQ(false, a==b);
}

TEST(LargeTest, isEqualFalse2)
{
    Large a{};
    a.data[0] = 1e-29;

    Large b{};
    b.data[0] = 1e-29;

    EXPECT_EQ(false, a==b);
}

TEST(LargeTest, isEqualFalse3)
{
    Large a{};
    a.data[0] = 1e-29;

    Large b{};
    b.data[0] = 2e-29;

    EXPECT_EQ(false, a==b);
}

TEST(LargeTest, hashTest1True)
{
    Large a{};
    a.data[0] = 1e-29;
    double resultA = std::hash<Large>()(a);

    Large b{};
    b.data[0] = 1e-29;
    double resultB = std::hash<Large>()(b);

    EXPECT_EQ(resultA, resultB);
}

TEST(LargeTest, hashTest2False)
{
    Large a{};
    a.data[0] = 1e9;
    double resultA = std::hash<Large>()(a);

    Large b{};
    b.data[0] = 1.21e9;
    double resultB = std::hash<Large>()(b);

    EXPECT_EQ(false, resultA==resultB);
}