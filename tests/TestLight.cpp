//
// Created by Andrey on 13.04.2025.
//

#include <gtest.h>
#include "LightTank.h"


TEST(TLightTankTest, DefaultConstructor)
{
    TLightTank w;
    EXPECT_EQ(w.GetDetection(), 40);
}

TEST(TLightTankTest, ParameterizedConstructorValid)
{
    TLightTank w(20);
    EXPECT_EQ(w.GetDetection(), 20);
}

TEST(TLightTankTest, ParameterizedConstructorInvalid)
{
    EXPECT_THROW(TLightTank(-1), const char*);
}

TEST(TLightTankTest, CopyConstructor)
{
    TLightTank original(57);
    TLightTank copy(original);
    EXPECT_EQ(copy.GetDetection(), original.GetDetection());
}

TEST(TLightTankTest, Setter)
{
    TLightTank w;
    w.SetDetection(31);
    EXPECT_EQ(w.GetDetection(), 31);
}

TEST(TLightTankTest, SetInvalid)
{
    TLightTank w;
    EXPECT_THROW(w.SetDetection(-10), const char*);
}

TEST(TLightTankTest, EdgeCases)
{
    TLightTank w;
    w.SetDetection(0);
    EXPECT_EQ(w.GetDetection(), 0);
}