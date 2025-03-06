#include "Harl.h"
#include <iostream>

void Harl::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    // Array of pointers to member functions
    void (Harl::*complaintFunctions)(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    // Array of complaint level strings
    std::string complaintLevels = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    // Find the index of the provided level
    int levelIndex = -1;
    for (int i = 0; i < 4; i++) {
        if (complaintLevels[i] == level) {
            levelIndex = i;
            break;
        }
    }
     // Call the complaint functions based on the level index
    if (levelIndex >= 0) {
        for (int i = levelIndex; i < 4; i++) {
            (this->*complaintFunctions[i])();
        }
    } else {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
