#ifndef PARSEINPUT_H
#define PARSEINPUT_H

#include <string>

struct Input {
    std::string filename;
    std::string s1;
    std::string s2;
};

Input parseInput(int argc, char **argv);

#endif
