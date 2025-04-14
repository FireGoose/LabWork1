//
// Created by Andrey on 19.03.2025.
//

#pragma once
#include <string>
#include <iostream>
using namespace std;


class TTechnique
{
protected:
    int mass;
    int velocity;
    int damage;
    string name;
public:
    TTechnique();
    TTechnique(string name_, int mass_, int velocity_, int damage_);
    TTechnique(TTechnique& z);
    ~TTechnique();

    int GetMass();
    int GetVelocity();
    int GetDamage();
    string GetName();

    void SetMass(int mass_);
    void SetVelocity(int velocity_);
    void SetDamage(int damage_);
    void SetName(string name_);

    virtual string GetDescription() const
    {
        return "Just technique that has some mass, velocity and damage";
    }

    friend ostream& operator <<(ostream& o, TTechnique& var);
    friend istream& operator >>(istream& i, TTechnique& var);
};
