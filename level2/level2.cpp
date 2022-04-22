#include <iostream>
#include <string>

template<typename T>
void log(std::string message) {
    std::cout << "Log 2: " << message << std::endl;
}

void level1();

void level2() {
    level1();
    log<int>("level2");
    std::cout << "level2" << std::endl;
}

int main() {
    level2();
    return 0;
}


