// src/hello.cpp
#include "name.hpp"
#include <iostream>

int main() {
    std::string name = askForName();
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}