#include "parseInput.h"
#include <iostream>
Input parseInput(int argc, char **argv) {
    Input input;
    if (argc != 4) {
        std::cerr << "Not enough arguments presented." << std::endl;
        input.filename = "";
        input.s1 = "";
        input.s2 = "";
        return input;
    }
    input.filename = argv[1];
    input.s1 = argv[2];
    input.s2 = argv[3];
    return input;
}
