#include <iostream>
#include <string>

void log(std::string message);

void level1();

void level2() {
    level1();
    log("level2");
    std::cout << "level2" << std::endl;
}

int main() {
    level2();
    return 0;
}

void log(std::string message) {
    std::cout << "Log 2: " << message << std::endl;
}
