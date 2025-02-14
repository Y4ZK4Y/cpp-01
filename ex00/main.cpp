#include "Zombie.h"
#include <iostream>

int main() {

    // test newZombie
    std::cout << "Creating a zombie on the heap: " << std::endl;
    Zombie* hombie = newZombie("Hombie");
    hombie->announce();

    // test randomChump
    std::cout << "Creating a zombie on the stack: " << std::endl;
    randomChump("Stombie");

    // test destructor
    delete hombie;

    return 0;

}
