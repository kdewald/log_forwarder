#include <iostream>
#include <string>

void level0();

__attribute__ ((weak)) void log(std::string message) {
    std::cout << "Log 1: " << message << std::endl;
}

void level1() {
    level0();
    log("level1");
    std::cout << "level1" << std::endl;
}


