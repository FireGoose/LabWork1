//
// Created by Andrey on 25.03.2025.
//

#include "Artillery.h"


class TSelfPropelledArtillery : public TArtillery
{
protected:
    int cannonRotationAngle;
public:
    TSelfPropelledArtillery();
    TSelfPropelledArtillery(int cannonRotationAngle_);
    TSelfPropelledArtillery(TSelfPropelledArtillery& obj);
    ~TSelfPropelledArtillery();

    int GetCannonRotationAngle();
    void SetCannonRotationAngle(int cannonRotationAngle_);

    virtual string GetDescription() const override
    {
        return "Self-propelled artillery that can turn cannon " + to_string(cannonRotationAngle) + " degrees";
    };

    friend ostream& operator <<(ostream& o, TSelfPropelledArtillery& var);
    friend istream& operator >>(istream& i, TSelfPropelledArtillery& var);
};

