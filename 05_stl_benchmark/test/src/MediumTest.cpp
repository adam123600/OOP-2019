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

#include "Medium.h"

TEST(MediumTest, SizeIsOneKiloByte) {

    EXPECT_EQ(1024u, sizeof(Medium));
}

TEST(MediumTest, CreateObject) {

    Medium medium{};
}

TEST(MediumTest, HasLessThenOperator) {

    Medium a{};
    Medium b{};
    a < b;
}

TEST(MediumTest, HasEqualityOperator) {

    Medium a{};
    Medium b{};
    a == b;
}

TEST(MediumTest, CanBeHashed) {

    Medium medium{};
    std::hash<Medium> hash;
    hash(medium);
}

TEST(MediumTest, Collections) {

    Medium medium{};

    std::vector<Medium> vector{};
    vector.push_back(medium);

    std::array<Medium, 1> array{};
    array[0] = medium;

    std::deque<Medium> deque{};
    deque.push_back(medium);

    std::list<Medium> list{};
    list.push_back(medium);

    std::forward_list<Medium> forward_list{};
    forward_list.push_front(medium);

    std::map<Medium, bool> map{};
    map[medium] = true;

    std::set<Medium> set{};
    set.insert(medium);

    std::unordered_map<Medium, bool> unordered_map{};
    unordered_map[medium] = true;

    std::unordered_set<Medium> unordered_set{};
    unordered_set.insert(medium);
}


TEST(MediumTest, Randomize) {

    Medium medium{};
    medium.randomize();

    auto count = 0u;

    for (int i : medium.data) {
        ASSERT_LE(0, i);
        ASSERT_GE(std::numeric_limits<int>::max(), i);

        if (i != 0)
            ++count;
    }

    EXPECT_NE(0u, count) << "All elements were zero?";
}

TEST(MediumTest, Clear) {

    Medium medium{};
    medium.randomize();
    medium.clear();

    for (int i : medium.data) {
        ASSERT_EQ(0, i);
    }
}

// TODO: Add tests for your operators implementation!

TEST(MediumTest, is1024Byte)
{
    EXPECT_EQ(1024, sizeof(Medium));
}

TEST(MediumTest, lessOperator1True)
{
    Medium a{};
    Medium b{};

    a.data[0] = 1;
    a.data[1] = 2;
    a.data[2] = 3;

    b.data[0] = 1;
    b.data[1] = 2;
    b.data[2] = 4;

    EXPECT_EQ(true, a<b);

}

TEST(MediumTest, lessOperator2True)
{
    Medium a{};
    Medium b{};

    for(int i = 0; i < 20; i++)
        a.data[i] = i;
    for(int i = 0; i < 20; i++)
        b.data[i] = 2*i;

    EXPECT_EQ(true, a<b);
}

TEST(MediumTest, lessOperator3True)
{
    Medium a{};
    Medium b{};

    a.data[0] = -15;
    b.data[0] = -10;

    EXPECT_EQ(true, a<b);
}

TEST(MediumTest, lessOperator4True)
{
    Medium a{};
    Medium b{};

    a.data[0] = 9;
    a.data[1] = 9;
    a.data[2] = 8;

    b.data[0] = 9;
    b.data[1] = 9;
    b.data[2] = 9;


    EXPECT_EQ(true, a<b);
}

TEST(MediumTest, lessOperator5True)
{
    Medium a{};
    Medium b{};

    a.data[0] = -10;
    b.data[0] = 9999999;

    EXPECT_EQ(true, a<b);
}

TEST(MediumTest, lessOperator6False)
{
    Medium a{};
    Medium b{};

    a.data[0] = 10;
    b.data[0] = 0;

    EXPECT_EQ(false, a<b);
}

TEST(MediumTest, lessOperator7False)
{
    Medium a{};
    Medium b{};

    a.data[0] = 0;
    b.data[0] = -1;

    EXPECT_EQ(false, a<b);
}

TEST(MediumTest, lessOperator8False)
{
    Medium a{};
    Medium b{};

    a.data[0] = 9;
    a.data[1] = 9;
    a.data[2] = 9;

    b.data[0] = -9;
    b.data[1] = 9;
    b.data[2] = 9;

    EXPECT_EQ(false, a<b);
}