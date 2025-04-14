//
// Created by Andrey on 13.04.2025.
//

#include <gtest.h>
#include "HeavyTank.h"


TEST(THeavyTankTest, DefaultConstructor)
{
    THeavyTank w;
    EXPECT_EQ(w.GetArmor(), 200);
}

TEST(THeavyTankTest, ParameterizedConstructorValid)
{
    THeavyTank w(20);
    EXPECT_EQ(w.GetArmor(), 20);
}

TEST(THeavyTankTest, ParameterizedConstructorInvalid)
{
    EXPECT_THROW(THeavyTank(-1), const char*);
}

TEST(THeavyTankTest, CopyConstructor)
{
    THeavyTank original(57);
    THeavyTank copy(original);
    EXPECT_EQ(copy.GetArmor(), original.GetArmor());
}

TEST(THeavyTankTest, Setter)
{
    THeavyTank w;
    w.SetArmor(31);
    EXPECT_EQ(w.GetArmor(), 31);
}

TEST(THeavyTankTest, SetInvalid)
{
    THeavyTank w;
    EXPECT_THROW(w.SetArmor(-10), const char*);
}

TEST(THeavyTankTest, EdgeCases)
{
    THeavyTank w;
    w.SetArmor(0);
    EXPECT_EQ(w.GetArmor(), 0);
}