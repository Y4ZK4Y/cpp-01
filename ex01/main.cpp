#include "Zombie.h"
#include <iostream>


int main() {
    std::cout << "Creating a horde of 10 zombies:" << std::endl;
    Zombie* horde1 = zombieHorde(10, "MacLovin");
    for (int i = 0; i < 10; i++) {
        horde1[i].announce();
    }
    //delete horde1; // gives segfault
    delete [] horde1; // array form of delete

    // Test with 0 zombies
    // std::cout << "Creating a horde of 0 zombies:" << std::endl;
    // Zombie* horde3 = zombieHorde(0, "Empty");
    // if (horde3 == nullptr) {
    //     std::cout << "Error: Could not create a horde of 0 zombies." << std::endl;
    // } else {
    //     delete horde3;
    // }
    return 0;
}
