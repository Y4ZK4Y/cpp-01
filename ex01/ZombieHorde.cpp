#include "Zombie.h"

Zombie* zombieHorde(int N, std::string name) {
    if (N <= 0) {
        return NULL;
    }
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++) {
        horde[i] = Zombie(name);
    }
    return horde;
}
