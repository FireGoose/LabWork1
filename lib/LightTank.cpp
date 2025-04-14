//
// Created by Andrey on 24.03.2025.
//

#include "LightTank.h"


TLightTank::TLightTank()
{
    detection = 40;
}

TLightTank::TLightTank(int detection_)
{
    if (detection_ < 0)
        throw("Detection cannot be negative");
    detection = detection_;
}

TLightTank::TLightTank(TLightTank& z)
{
    detection = z.GetDetection();
}

TLightTank::~TLightTank()
{}

void TLightTank::SetDetection(int detection_)
{
    if (detection_ < 0)
        throw("Detection cannot be negative");
    detection = detection_;
}

int TLightTank::GetDetection()
{
    return detection;
}

ostream& operator <<(ostream& o, TLightTank& var)
{
    o << "Name: " << var.name << " | "
      << "Mass: " << var.mass << " | "
      << "Velocity: " << var.velocity << " | "
      << "Damage: " << var.damage << " | "
      << "TurretRotationSpeed: " << var.turretRotationSpeed << " | "
      << "Detection: " << var.detection << " \n ";
    return o;
}

istream& operator >>(istream& i, TLightTank& var)
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

    cout << "Detection: " << "\n";
    i >> var.detection;
    if (var.detection < 0)
        throw("Detection cannot be negative");

    return i;
}
