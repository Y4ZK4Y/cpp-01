#include "HumanA.h"
#include "HumanB.h"
#include "Weapon.h"
#include <iostream>

int main() 
{
        // Weapon club = Weapon("crude spiked club");
        // HumanA bob("Bob", club);
        // bob.attack();
        // club.setType("some other type of club");
        // bob.attack();
    
    
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();

        // Weapon sword("sword");
        // HumanA emptyNameHuman("", sword);
        // emptyNameHuman.attack();
        // HumanB human1("Human 1");
        // HumanB human2("Human 2");
        // Weapon weapon1("axe");
        // Weapon weapon2("bow");

        // human1.setWeapon(weapon1);
        // human2.setWeapon(weapon2);
        // human1.attack();
        // human2.attack();

        // human1.setWeapon(weapon2); // Swap weapons
        // human2.setWeapon(weapon1);
        // human1.attack();
        // human2.attack();

    
    return 0;
}
