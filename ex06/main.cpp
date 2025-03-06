#include "Harl.h"
#include <iostream>

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Invalid number of arguments." << std::endl;
        return 1;
    }

    std::string level = argv[1];
    Harl harl;
    harl.complain(level);
    return 0;
}
