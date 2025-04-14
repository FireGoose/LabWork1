//
// Created by Andrey on 13.04.2025.
//

#include <gtest.h>
#include "Tank.h"


TEST(TTankTest, DefaultConstructor)
{
    TTank w;
    EXPECT_EQ(w.GetTurretRotationSpeed(), 30);
}

TEST(TTankTest, ParameterizedConstructorValid)
{
    TTank w(20);
    EXPECT_EQ(w.GetTurretRotationSpeed(), 20);
}

TEST(TTankTest, ParameterizedConstructorInvalid)
{
    EXPECT_THROW(TTank(-1), const char*);
}

TEST(TTankTest, CopyConstructor)
{
    TTank original(57);
    TTank copy(original);
    EXPECT_EQ(copy.GetTurretRotationSpeed(), original.GetTurretRotationSpeed());
}

TEST(TTankTest, Setter)
{
    TTank w;
    w.SetTurretRotationSpeed(31);
    EXPECT_EQ(w.GetTurretRotationSpeed(), 31);
}

TEST(TTankTest, SetInvalid)
{
    TTank w;
    EXPECT_THROW(w.SetTurretRotationSpeed(-10), const char*);
}

TEST(TTankTest, EdgeCases)
{
    TTank w;
    w.SetTurretRotationSpeed(0);
    EXPECT_EQ(w.GetTurretRotationSpeed(), 0);
}