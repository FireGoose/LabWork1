//
// Created by Andrey on 20.03.2025.
//

#include "Technique.h"


class TTank : public TTechnique
{
protected:
    int turretRotationSpeed;
public:
    TTank();
    TTank(int turretRotationSpeed_);
    TTank(TTank& obj);
    ~TTank();

    int GetTurretRotationSpeed();
    void SetTurretRotationSpeed(int turretRotationSpeed_);

    virtual string GetDescription() const override
    {
        return "Tank that can rotate turret with speed of " + to_string(turretRotationSpeed);
    };

    friend ostream& operator <<(ostream& o, TTank& var);
    friend istream& operator >>(istream& i, TTank& var);
};
