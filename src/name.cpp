// src/name.cpp
#include "name.hpp"
#include <iostream>

std::string askForName() {
    std::string name;
    std::cout << "What is your name? " << std::endl;
    std::getline(std::cin, name);
    return name;
}