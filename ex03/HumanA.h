#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.h"
#include <string>

// HumanA always has a weapon
class HumanA {
private:
    std::string name;
    Weapon& weapon; // reference to a weapon

public:
    HumanA(const std::string& name, Weapon& weapon); // constructor
    void attack() const;
};

#endif
