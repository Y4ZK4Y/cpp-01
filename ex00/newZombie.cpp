#include "Zombie.h"

// allocated on the heap
Zombie* newZombie(std::string name) {
    return new Zombie(name);
}
