//
// Created by Andrey on 19.03.2025.
//

#include "Technique.h"


TTechnique::TTechnique()
{
    mass = 188900;
    velocity = 0;
    damage = 400;
    name = "Maus";
}

TTechnique::TTechnique(string name_, int mass_, int velocity_, int damage_)
{
    if (mass_ <= 0 || velocity_ < 0 || damage_ < 0)
        throw("Negative value or zero mass");
    else
    {
        mass = mass_;
        velocity = velocity_;
        damage = damage_;
    }
    name = name_;
}

TTechnique::TTechnique(TTechnique& z)
{
    mass = z.GetMass();
    velocity = z.GetVelocity();
    damage = z.GetDamage();
    name = z.GetName();
}

TTechnique::~TTechnique()
{}


string TTechnique::GetName()
{
    return name;
}

int TTechnique::GetVelocity()
{
    return velocity;
}

int TTechnique::GetMass()
{
    return mass;
}

int TTechnique::GetDamage()
{
    return damage;
}


void TTechnique::SetName(string name_)
{
    name = name_;
}

void TTechnique::SetMass(int mass_)
{
    if (mass_ <= 0)
        throw("Mass cannot be non positive");
    mass = mass_;
}

void TTechnique::SetVelocity(int velocity_)
{
    if (velocity_ < 0)
        throw("Velocity cannot be negative");
    velocity = velocity_;
}

void TTechnique::SetDamage(int damage_)
{
    if (damage_ < 0)
        throw("Damage cannot be negative");
    damage = damage_;
}


ostream& operator <<(ostream& o, TTechnique& var)
{
    o << "Name: " << var.name << " | "
        << "Mass: " << var.mass << " | "
        << "Velocity: " << var.velocity << " | "
        << "Damage: " << var.damage << " \n ";
    return o;
}

istream& operator >>(istream& i, TTechnique& var)
{
    cout << "Name: " << "\n";
    i >> var.name;

    cout << "Mass: " << "\n";
    i >> var.mass;
    if (var.mass < 1)
        throw("Mass cannot be non positive");

    cout << "Velocity: " << "\n";
    i >> var.velocity;
    if (var.velocity < 0)
        throw("Velocity cannot be negative");

    cout << "Damage: " << "\n";
    i >> var.damage;
    if (var.damage < 0)
        throw("Damage cannot be negative");

    return i;
}
