#include <iostream>
#include <string>

__attribute__ ((weak)) void log(std::string message) {
    std::cout << "Log 0: " << message << std::endl;
}

void level0() {
    log("level0");
    std::cout << "level0" << std::endl;
}


