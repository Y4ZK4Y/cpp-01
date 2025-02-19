
// use pointers to member functions
// harl has to complain without a buncha if elses
// create your tests

#include "Harl.h"
#include <iostream>

int main() {
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("INVALID"); // Test with an invalid level

    return 0;
}
