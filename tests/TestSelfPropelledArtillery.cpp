//
// Created by Andrey on 13.04.2025.
//

#include <gtest.h>
#include "SelfPropelledArtillery.h"


TEST(TSelfPropelledArtilleryTest, DefaultConstructor)
{
    TSelfPropelledArtillery w;
    EXPECT_EQ(w.GetCannonRotationAngle(), 30);
}

TEST(TSelfPropelledArtilleryTest, ParameterizedConstructorValid)
{
    TSelfPropelledArtillery w(20);
    EXPECT_EQ(w.GetCannonRotationAngle(), 20);
}

TEST(TSelfPropelledArtilleryTest, ParameterizedConstructorInvalid)
{
    EXPECT_THROW(TSelfPropelledArtillery(-1), const char*);
    EXPECT_THROW(TSelfPropelledArtillery(100), const char*);
}

TEST(TSelfPropelledArtilleryTest, CopyConstructor)
{
    TSelfPropelledArtillery original(57);
    TSelfPropelledArtillery copy(original);
    EXPECT_EQ(copy.GetCannonRotationAngle(), original.GetCannonRotationAngle());
}

TEST(TSelfPropelledArtilleryTest, Setter)
{
    TSelfPropelledArtillery w;
    w.SetCannonRotationAngle(31);
    EXPECT_EQ(w.GetCannonRotationAngle(), 31);
}

TEST(TSelfPropelledArtilleryTest, SetInvalid)
{
    TSelfPropelledArtillery w;
    EXPECT_THROW(w.SetCannonRotationAngle(-10), const char*);
    EXPECT_THROW(w.SetCannonRotationAngle(120), const char*);
}

TEST(TSelfPropelledArtilleryTest, EdgeCases)
{
    TSelfPropelledArtillery w;
    w.SetCannonRotationAngle(0);
    EXPECT_EQ(w.GetCannonRotationAngle(), 0);
}