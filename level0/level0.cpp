#include <iostream>
#include <string>

template<typename T>
void log(std::string message) {
    std::cout << "Log 0: " << message << std::endl;
}

void level0() {
    log<int>("level0");
    std::cout << "level0" << std::endl;
}


