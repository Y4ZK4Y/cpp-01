#include "HumanB.h"
#include <iostream>

// weapon not included because human B could potentially start with no weapon
HumanB::HumanB(const std::string& name): name(name), weapon(NULL) {
}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}

void HumanB::attack() const {
    if (weapon) {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    } else {
        std::cout << name << " attacks with their bare hands." << std::endl;
    }
}
