//
// Created by Andrey on 13.04.2025.
//

#include <gtest.h>
#include "Artillery.h"


TEST(TArtilleryTest, DefaultConstructor)
{
    TArtillery w;
    EXPECT_EQ(w.GetPenetration(), 250);
}

TEST(TArtilleryTest, ParameterizedConstructorValid)
{
    TArtillery w(20);
    EXPECT_EQ(w.GetPenetration(), 20);
}

TEST(TArtilleryTest, ParameterizedConstructorInvalid)
{
    EXPECT_THROW(TArtillery(-1), const char*);
}

TEST(TArtilleryTest, CopyConstructor)
{
    TArtillery original(57);
    TArtillery copy(original);
    EXPECT_EQ(copy.GetPenetration(), original.GetPenetration());
}

TEST(TArtilleryTest, Setter)
{
    TArtillery w;
    w.SetPenetration(31);
    EXPECT_EQ(w.GetPenetration(), 31);
}

TEST(TArtilleryTest, SetInvalid)
{
    TArtillery w;
    EXPECT_THROW(w.SetPenetration(-10), const char*);
}

TEST(TArtilleryTest, EdgeCases)
{
    TArtillery w;
    w.SetPenetration(0);
    EXPECT_EQ(w.GetPenetration(), 0);
}
