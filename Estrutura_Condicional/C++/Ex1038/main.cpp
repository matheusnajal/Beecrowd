#include <iostream>
#include <iomanip>
#include <string>

int main() {
    int cod, qnt;
    std::cin >> cod >> qnt;

    if (cod == 1) {
        std::cout << std::fixed << std::setprecision(2) << "Total: R$ " << qnt * 4.00 << std::endl;
    } else if (cod == 2) {
        std::cout << std::fixed << std::setprecision(2) << "Total: R$ " << qnt * 4.50 << std::endl;
    } else if (cod == 3) {
        std::cout << std::fixed << std::setprecision(2) << "Total: R$ " << qnt * 5.00 << std::endl;
    } else if (cod == 4) {
        std::cout << std::fixed << std::setprecision(2) << "Total: R$ " << qnt * 2.00 << std::endl;
    } else if (cod == 5) {
        std::cout << std::fixed << std::setprecision(2) << "Total: R$ " << qnt * 1.50 << std::endl;
    }

    return 0;
}