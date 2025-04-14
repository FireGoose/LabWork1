//
// Created by Andrey on 13.04.2025.
//

#include <gtest.h>
#include "Technique.h"


TEST(TTechniqueTest, DefaultConstructor)
{
    TTechnique w;
    EXPECT_EQ(w.GetName(), "Maus");
    EXPECT_EQ(w.GetMass(), 188900);
    EXPECT_EQ(w.GetVelocity(), 0);
    EXPECT_EQ(w.GetDamage(), 400);
}

TEST(TTechniqueTest, ParameterizedConstructorValid)
{
    TTechnique w("T62A", 60000, 30, 350);
    EXPECT_EQ(w.GetName(), "T62A");
    EXPECT_EQ(w.GetMass(), 60000);
    EXPECT_EQ(w.GetVelocity(), 30);
    EXPECT_EQ(w.GetDamage(), 350);
}

TEST(TTechniqueTest, ParameterizedConstructorInvalid)
{
    EXPECT_THROW(TTechnique("Test", 0, 0, 2006), const char*);
}

TEST(TTechniqueTest, CopyConstructor)
{
    TTechnique original("ISU152", 60000, 20, 700);
    TTechnique copy(original);
    EXPECT_EQ(copy.GetName(), original.GetName());
    EXPECT_EQ(copy.GetMass(), original.GetMass());
    EXPECT_EQ(copy.GetVelocity(), original.GetVelocity());
    EXPECT_EQ(copy.GetDamage(), original.GetDamage());
}

TEST(TTechniqueTest, Setters)
{
    TTechnique w;
    w.SetName("IS2");
    w.SetMass(100000);
    w.SetVelocity(25);
    w.SetDamage(400);

    EXPECT_EQ(w.GetName(), "IS2");
    EXPECT_EQ(w.GetMass(), 100000);
    EXPECT_EQ(w.GetVelocity(), 25);
    EXPECT_EQ(w.GetDamage(), 400);
}

TEST(TTechniqueTest, SetMassInvalid)
{
    TTechnique w;
    EXPECT_THROW(w.SetMass(0), const char*);
}

TEST(TTechniqueTest, SetVelocityInvalid)
{
    TTechnique w;
    EXPECT_THROW(w.SetVelocity(-57), const char*);
}

TEST(TTechniqueTest, SetDamageInvalid)
{
    TTechnique w;
    EXPECT_THROW(w.SetDamage(-14), const char*);
}

TEST(TTechniqueTest, EdgeCases)
{
    TTechnique w;
    w.SetMass(1);
    w.SetVelocity(0);
    w.SetDamage(0);

    EXPECT_EQ(w.GetMass(), 1);
    EXPECT_EQ(w.GetVelocity(), 0);
    EXPECT_EQ(w.GetDamage(), 0);
}
