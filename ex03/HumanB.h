#ifndef HUMANB_H
#define HUMANB_H

#include <string>
#include "Weapon.h"

class HumanB {
private:
    std::string name;
    Weapon* weapon; // chill attitude toward weapon 

public:
    HumanB(const std::string& name);
    void setWeapon(Weapon& weapon);
    void attack() const;
};

#endif
