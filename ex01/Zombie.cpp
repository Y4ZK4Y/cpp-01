#include "Zombie.h"
#include <iostream>

// initialization - for when we create a zombie object without providing a name
Zombie::Zombie(): name("Unnamed") {
}

// parameterized constructor - for when we create a zombie object and provide a name
Zombie::Zombie(std::string name): name(name) {
}

// destructor
Zombie::~Zombie() {
    std::cout << this->name << " is destroyed." << std::endl;
}
void Zombie::announce(void) {
    std::cout << this->name << ":: BraiiiiiiinnnzzzZ..." << std::endl;
};
