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

#include "Small.h"

TEST(SmallTest, SizeIsOneByte) {

    EXPECT_EQ(1u, sizeof(Small));
}

TEST(SmallTest, CreateObject) {

    Small small{};
}

TEST(SmallTest, HasLessThenOperator) {

    Small a{};
    Small b{};

    a < b;
}

TEST(SmallTest, HasEqualityOperator) {

    Small a{};
    Small b{};

    a == b;
}

TEST(SmallTest, CanBeHashed) {

    Small small{};
    std::hash<Small> hash;

    hash(small);
}

TEST(SmallTest, Collections) {

    Small small{};

    std::vector<Small> vector{};
    vector.push_back(small);

    std::array<Small, 1> array{};
    array[0] = small;

    std::deque<Small> deque{};
    deque.push_back(small);

    std::list<Small> list{};
    list.push_back(small);

    std::forward_list<Small> forward_list{};
    forward_list.push_front(small);

    std::map<Small, bool> map{};
    map[small] = true;

    std::set<Small> set{};
    set.insert(small);

    std::unordered_map<Small, bool> unordered_map{};
    unordered_map[small] = true;

    std::unordered_set<Small> unordered_set{};
    unordered_set.insert(small);
}

TEST(SmallTest, Randomize) {

    auto count = 0u;

    for (auto n = 0u; n < 1024u; n++) {

        Small small{};
        small.randomize();

        for (char i : small.data) {

            ASSERT_LE(-128, i);
            ASSERT_GE(127, i);

            if (i != 0)
                ++count;
        }
    }

    EXPECT_NE(0u, count) << "All elements were zero?";
}

TEST(SmallTest, Clear) {

    Small small{};
    small.randomize();
    small.clear();

    for (char i : small.data) {
        ASSERT_EQ(0, i);
    }
}


// TODO: Add tests for your operators implementation!

TEST(SmallTest, is1BSize)
{
    EXPECT_EQ(1, sizeof(Small));
}

TEST(SmallTest, lessOperatorTest1)
{
    Small a{};
    a.data[0] = 'a';
    Small b{};
    b.data[0] = 'b';

    EXPECT_EQ(true, a.operator<(b));
}

TEST(SmallTest, lessOperatorTest2)
{
    Small a{};
    a.data[0] = 'a';
    Small b{};
    b.data[0] = '9';

    EXPECT_EQ(false, a.operator<(b));
}

TEST(SmallTest, lessOperatorTest3)
{
    Small a{};
    a.data[0] = '5';
    Small b{};
    b.data[0] = '9';

    //EXPECT_EQ(true, a.operator<(b));
    EXPECT_EQ(true, a<(b));
}

TEST(SmallTest, lessOperatorTest4)
{
    Small a{};
    a.data[0] = '5';
    Small b{};
    b.data[0] = '9';

    //EXPECT_EQ(false, b.operator<(a));
    EXPECT_EQ(false, b<(a));
}

TEST(SmallTest, hashTest1)
{
    Small a{};
    a.data[0] = 'a';

    //auto wynik = std::hash<Small>();

    //EXPECT_EQ('a', wynik(a));
    EXPECT_EQ('a', std::hash<Small>()(a));
}

TEST(SmallTest, hashTest2)
{
    Small a{};
    a.data[0] = 'i';

    EXPECT_EQ('i', std::hash<Small>()(a));
}