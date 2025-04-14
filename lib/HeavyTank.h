//
// Created by Andrey on 22.03.2025.
//

#include "Tank.h"


class THeavyTank : public TTank
{
protected:
    int armor;
public:
    THeavyTank();
    THeavyTank(int armor_);
    THeavyTank(THeavyTank& obj);
    ~THeavyTank();

    int GetArmor();
    void SetArmor(int armor_);

    virtual string GetDescription() const override
    {
        return "Heavy tank that has " + to_string(armor) + " mm armor";
    };

    friend ostream& operator <<(ostream& o, THeavyTank& var);
    friend istream& operator >>(istream& i, THeavyTank& var);
};

