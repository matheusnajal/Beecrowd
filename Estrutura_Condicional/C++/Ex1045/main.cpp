#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;

    std::vector<double> lados = {a, b, c};
    std::sort(lados.begin(), lados.end(), std::greater<double>());

    a = lados[0];
    b = lados[1];
    c = lados[2];

    if (a >= b + c) {
        std::cout << "NAO FORMA TRIANGULO" << std::endl;
    } else {
        if (std::pow(a, 2) == std::pow(b, 2) + std::pow(c, 2)) {
            std::cout << "TRIANGULO RETANGULO" << std::endl;
        }

        if (std::pow(a, 2) > std::pow(b, 2) + std::pow(c, 2)) {
            std::cout << "TRIANGULO OBTUSANGULO" << std::endl;
        }

        if (std::pow(a, 2) < std::pow(b, 2) + std::pow(c, 2)) {
            std::cout << "TRIANGULO ACUTANGULO" << std::endl;
        }

        if (a == b && b == c) {
            std::cout << "TRIANGULO EQUILATERO" << std::endl;
        }

        if (a == b && b != c || a == c && c != b || b == c && c != a) {
            std::cout << "TRIANGULO ISOSCELES" << std::endl;
        }
    }

    return 0;
}
