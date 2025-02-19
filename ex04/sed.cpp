#include "sed.h"
#include <fstream>
#include <iostream>
#include <string>


void goodOlSed(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open input file." << std::endl;
        return;
    }
    std::ofstream outputFile(filename + ".replace ");
    if (!outputFile.is_open()) {
        std::cerr << "Erorr: Could not create output file." << std::endl;
        return;
    }
    std::string line;
    size_t pos;
    while (std::getline(inputFile, line)) {
        pos = 0;
        if (s1.empty()) { // Handle empty s1
            outputFile << line << std::endl;
            continue;
        }
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outputFile << line << std::endl;
    }
    inputFile.close();
    outputFile.close();


}
