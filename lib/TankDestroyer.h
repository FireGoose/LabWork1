//
// Created by Andrey on 24.03.2025.
//

#include "Artillery.h"


class TTankDestroyer : public TArtillery
{
protected:
    int turretRotationAngle;
public:
    TTankDestroyer();
    TTankDestroyer(int turretRotationAngle_);
    TTankDestroyer(TTankDestroyer& obj);
    ~TTankDestroyer();

    int GetTurretRotationAngle();
    void SetTurretRotationAngle(int turretRotationAngle_);

    virtual string GetDescription() const override
    {
        return "Tank destroyer that can turn turret" + to_string(turretRotationAngle) + " degrees";
    };

    friend ostream& operator <<(ostream& o, TTankDestroyer& var);
    friend istream& operator >>(istream& i, TTankDestroyer& var);
};

