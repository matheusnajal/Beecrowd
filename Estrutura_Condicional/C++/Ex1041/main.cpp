#include <iostream>
#include <string>
#include <sstream>

int main() {
    double x, y;
    std::string input;
    std::getline(std::cin, input);
    std::istringstream iss(input);
    iss >> x >> y;

    if (x == 0 && y == 0) {
        std::cout << "Origem" << std::endl;
    } else if (x > 0 && y > 0) {
        std::cout << "Q1" << std::endl;
    } else if (x < 0 && y < 0) {
        std::cout << "Q3" << std::endl;
    } else if (x > 0 && y < 0) {
        std::cout << "Q4" << std::endl;
    } else if (x < 0 && y > 0) {
        std::cout << "Q2" << std::endl;
    } else if (x == 0) {
        std::cout << "Eixo Y" << std::endl;
    } else if (y == 0) {
        std::cout << "Eixo X" << std::endl;
    }

    return 0;
}
