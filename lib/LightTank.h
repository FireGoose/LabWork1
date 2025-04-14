//
// Created by Andrey on 24.03.2025.
//

#include "Tank.h"


class TLightTank : public TTank
{
protected:
    int detection;
public:
    TLightTank();
    TLightTank(int detection_);
    TLightTank(TLightTank& obj);
    ~TLightTank();

    int GetDetection();
    void SetDetection(int detection_);

    virtual string GetDescription() const override
    {
        return "Light tank that can detect other tanks at " + to_string(detection) + " range";
    };

    friend ostream& operator <<(ostream& o, TLightTank& var);
    friend istream& operator >>(istream& i, TLightTank& var);
};
