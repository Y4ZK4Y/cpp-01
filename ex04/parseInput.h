#ifndef PARSEINPUT_H
#define PARSEINPUT_H

// define a struct input with filename, s1, s2
#include <string>

struct Input {
    std::string filename;
    std::string s1;
    std::string s2;
};

//  function prototype
Input parseInput(int argc, char **argv);

#endif
