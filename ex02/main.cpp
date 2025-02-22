#include <iostream>
#include <string>

int main() {
    std::string brain = "HI THIS IS BRAIN";
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    std::cout << "Memory address of brain: " << &brain << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << stringREF << std::endl;

    std::cout << "The value of brain: " << brain << std::endl;
    std::cout << "The value pointed to by stringPTR: " << stringPTR<< std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;

    return 0;
}
