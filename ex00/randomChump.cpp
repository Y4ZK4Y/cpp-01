#include "Zombie.h"

// allocated on the stack
void randomChump(std::string name) {
    Zombie zombie(name);
    zombie.announce();
}
