//
// Created by Andrey on 20.03.2025.
//

#pragma once
#include "Technique.h"


class TArtillery : public TTechnique
{
protected:
    int penetration;
public:
    TArtillery();
    TArtillery(int penetration_);
    TArtillery(TArtillery& obj);
    ~TArtillery();

    int GetPenetration();
    void SetPenetration(int penetration_);

    virtual string GetDescription() const override
    {
        return "Tank destroyer that can penetrate " + to_string(penetration) + " mm armor";
    };

    friend ostream& operator <<(ostream& o, TArtillery& var);
    friend istream& operator >>(istream& i, TArtillery& var);
};
