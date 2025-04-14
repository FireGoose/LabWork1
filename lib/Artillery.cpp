//
// Created by Andrey on 20.03.2025.
//

#include "Artillery.h"
#include <string>


TArtillery::TArtillery()
{
    penetration = 250;
}

TArtillery::TArtillery(int penetration_)
{
    if (penetration_ < 0)
        throw("Penetration cannot be negative");
    penetration = penetration_;
}

TArtillery::TArtillery(TArtillery& z)
{
    penetration = z.GetPenetration();
}

TArtillery::~TArtillery()
{}

void TArtillery::SetPenetration(int penetration_)
{
    if (penetration_ < 0)
        throw("Penetration cannot be negative");
    penetration = penetration_;
}

int TArtillery::GetPenetration()
{
    return penetration;
}

ostream& operator <<(ostream& o, TArtillery& var)
{
    o << "Name: " << var.name << " | "
      << "Mass: " << var.mass << " | "
      << "Velocity: " << var.velocity << " | "
      << "Damage: " << var.damage << " | "
      << "Penetration: " << var.penetration << " \n ";
    return o;
}

istream& operator >>(istream& i, TArtillery& var)
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

    cout << "Penetration: " << "\n";
    i >> var.penetration;
    if (var.penetration < 0)
        throw("Penetration cannot be negative");

    return i;
}