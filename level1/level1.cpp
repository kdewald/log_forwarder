#include <iostream>
#include <string>

void level0();

template<typename T>
void log(std::string message) {
    std::cout << "Log 1: " << message << std::endl;
}

void level1() {
    level0();
    log<int>("level1");
    std::cout << "level1" << std::endl;
}


