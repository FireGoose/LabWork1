//
// Created by Andrey on 25.03.2025.
//

#include "SelfPropelledArtillery.h"


TSelfPropelledArtillery::TSelfPropelledArtillery()
{
    cannonRotationAngle = 30;
}

TSelfPropelledArtillery::TSelfPropelledArtillery(int cannonRotationAngle_)
{
    if (cannonRotationAngle_ < 0 || cannonRotationAngle_ > 90)
        throw("Cannon rotation angle can only be between 0 and 90");
    cannonRotationAngle = cannonRotationAngle_;
}

TSelfPropelledArtillery::TSelfPropelledArtillery(TSelfPropelledArtillery& z)
{
     cannonRotationAngle = z.GetCannonRotationAngle();
}

TSelfPropelledArtillery::~TSelfPropelledArtillery()
{}

void TSelfPropelledArtillery::SetCannonRotationAngle(int cannonRotationAngle_)
{
    if (cannonRotationAngle_ < 0 || cannonRotationAngle_ > 90)
        throw("Cannon rotation angle can only be between 0 and 90");
    cannonRotationAngle = cannonRotationAngle_;
}

int TSelfPropelledArtillery::GetCannonRotationAngle()
{
    return cannonRotationAngle;
}

ostream& operator <<(ostream& o, TSelfPropelledArtillery& var)
{
    o << "Name: " << var.name << " | "
      << "Mass: " << var.mass << " | "
      << "Velocity: " << var.velocity << " | "
      << "Damage: " << var.damage << " | "
      << "Penetration: " << var.penetration << " | "
      << "Cannon rotation angle: " << var.cannonRotationAngle << '\n';
    return o;
}

istream& operator >>(istream& i, TSelfPropelledArtillery& var)
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

    i >> var.cannonRotationAngle;
    if (var.cannonRotationAngle < 0 || var.cannonRotationAngle > 90)
        throw("Cannon rotation angle can only be between 0 and 90");

    return i;
}
