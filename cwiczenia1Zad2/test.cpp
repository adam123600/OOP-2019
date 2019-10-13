//
// Created by student on 13.10.2019.
//
#include <gtest/gtest.h>
#include "Dummy.h"

TEST( example1, sumOfInt1)
{
  EXPECT_EQ(8, MojaKlasa::dodawanie(5, 3));
}

TEST(example2, sumOfInt2)
{
    EXPECT_EQ(190, MojaKlasa::dodawanie(50, 100));
}

TEST(example3, sumOfInt3)
{
    EXPECT_EQ(300, MojaKlasa::dodawanie(150,150));
}