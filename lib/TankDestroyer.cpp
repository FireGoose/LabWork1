//
// Created by Andrey on 24.03.2025.
//

#include "TankDestroyer.h"


TTankDestroyer::TTankDestroyer()
{
    turretRotationAngle = 120;
}

TTankDestroyer::TTankDestroyer(int turretRotationAngle_)
{
    if (turretRotationAngle_ < 0 || turretRotationAngle_ > 360)
        throw("Turret rotation angle can only be between 0 and 360");
    turretRotationAngle = turretRotationAngle_;
}

TTankDestroyer::TTankDestroyer(TTankDestroyer& z)
{
    turretRotationAngle = z.turretRotationAngle;
}

TTankDestroyer::~TTankDestroyer()
{}

void TTankDestroyer::SetTurretRotationAngle(int turretRotationAngle_)
{
    if (turretRotationAngle_ < 0 || turretRotationAngle_ > 360)
        throw("Turret rotation angle can only be between 0 and 360");
    turretRotationAngle = turretRotationAngle_;
}

int TTankDestroyer::GetTurretRotationAngle()
{
    return turretRotationAngle;
}

ostream& operator <<(ostream& o, TTankDestroyer& var)
{
    o << "Name: " << var.name << " | "
      << "Mass: " << var.mass << " | "
      << "Velocity: " << var.velocity << " | "
      << "Damage: " << var.damage << " | "
      << "Penetration: " << var.penetration << " | "
      << "Turret rotation angle: " << var.turretRotationAngle << '\n';
    return o;
}

istream& operator >>(istream& i, TTankDestroyer& var)
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

    cout << "Turret rotation angle: " << "\n";
    i >> var.turretRotationAngle;
    if (var.turretRotationAngle < 0 || var.turretRotationAngle > 360)
        throw("Turret rotation angle can only be between 0 and 360");

    return i;
}