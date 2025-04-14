//
// Created by Andrey on 13.04.2025.
//

#include <gtest.h>
#include "TankDestroyer.h"


TEST(TTankDestroyerTest, DefaultConstructor)
{
    TTankDestroyer w;
    EXPECT_EQ(w.GetTurretRotationAngle(), 120);
}

TEST(TTankDestroyerTest, ParameterizedConstructorValid)
{
    TTankDestroyer w(20);
    EXPECT_EQ(w.GetTurretRotationAngle(), 20);
}

TEST(TTankDestroyerTest, ParameterizedConstructorInvalid)
{
    EXPECT_THROW(TTankDestroyer(-1), const char*);
    EXPECT_THROW(TTankDestroyer(500), const char*);
}

TEST(TTankDestroyerTest, CopyConstructor)
{
    TTankDestroyer original(57);
    TTankDestroyer copy(original);
    EXPECT_EQ(copy.GetTurretRotationAngle(), original.GetTurretRotationAngle());
}

TEST(TTankDestroyerTest, Setter)
{
    TTankDestroyer w;
    w.SetTurretRotationAngle(31);
    EXPECT_EQ(w.GetTurretRotationAngle(), 31);
}

TEST(TTankDestroyerTest, SetInvalid)
{
    TTankDestroyer w;
    EXPECT_THROW(w.SetTurretRotationAngle(-10), const char*);
    EXPECT_THROW(w.SetTurretRotationAngle(400), const char*);
}

TEST(TTankDestroyerTest, EdgeCases)
{
    TTankDestroyer w;
    w.SetTurretRotationAngle(0);
    EXPECT_EQ(w.GetTurretRotationAngle(), 0);
}
