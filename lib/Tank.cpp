//
// Created by Andrey on 20.03.2025.
//

#include "Tank.h"


TTank::TTank()
{
    turretRotationSpeed = 30;
}

TTank::TTank(int turretRotationSpeed_)
{
    if (turretRotationSpeed_ < 0)
        throw("Turret rotation speed cannot be negative");
    turretRotationSpeed = turretRotationSpeed_;
}

TTank::TTank(TTank& z)
{
    turretRotationSpeed = z.GetTurretRotationSpeed();
}

TTank::~TTank()
{}

void TTank::SetTurretRotationSpeed(int turretRotationSpeed_)
{
    if (turretRotationSpeed_ < 0)
        throw("Turret rotation speed cannot be negative");
    turretRotationSpeed = turretRotationSpeed_;
}

int TTank::GetTurretRotationSpeed()
{
    return turretRotationSpeed;
}

ostream& operator <<(ostream& o, TTank& var)
{
    o << "Name: " << var.name << " | "
      << "Mass: " << var.mass << " | "
      << "Velocity: " << var.velocity << " | "
      << "Damage: " << var.damage << " | "
      << "Turret rotation speed: " << var.turretRotationSpeed << " \n ";
    return o;
}

istream& operator >>(istream& i, TTank& var)
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

    cout << "Turret rotation speed: " << "\n";
    i >> var.turretRotationSpeed;
    if (var.turretRotationSpeed < 0)
        throw("Turret rotation speed cannot be negative");

    return i;
}
