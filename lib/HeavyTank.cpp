//
// Created by Andrey on 22.03.2025.
//

#include "HeavyTank.h"


THeavyTank::THeavyTank()
{
    armor = 200;
}

THeavyTank::THeavyTank(int armor_)
{
    if (armor_ < 0)
        throw("Armor cannot be negative");
    armor = armor_;
}

THeavyTank::THeavyTank(THeavyTank& z)
{
    armor = z.GetArmor();
}

THeavyTank::~THeavyTank()
{}

void THeavyTank::SetArmor(int armor_)
{
    if (armor_ < 0)
        throw("Armor cannot be negative");
    armor = armor_;
}

int THeavyTank::GetArmor()
{
    return armor;
}

ostream& operator <<(ostream& o, THeavyTank& var)
{
    o << "Name: " << var.name << " | "
      << "Mass: " << var.mass << " | "
      << "Velocity: " << var.velocity << " | "
      << "Damage: " << var.damage << " | "
      << "TurretRotationSpeed: " << var.turretRotationSpeed << " | "
      << "Armor: " << var.armor << " \n ";
    return o;
}

istream& operator >>(istream& i, THeavyTank& var)
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

    cout << "TurretRotationSpeed: " << "\n";
    i >> var.turretRotationSpeed;
    if (var.turretRotationSpeed < 0)
        throw("TurretRotationSpeed cannot be negative");

    cout << "Armor: " << "\n";
    i >> var.armor;
    if (var.armor < 0)
        throw("Armor cannot be negative");

    return i;
}
