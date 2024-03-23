#include <iostream>
#include <algorithm>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int menor = std::min({a, b, c});
    int meio = (a + b + c) - menor - std::max({a, b, c});
    int maior = std::max({a, b, c});

    std::cout << menor << std::endl;
    std::cout << meio << std::endl;
    std::cout << maior << std::endl;

    std::cout << std::endl;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    return 0;
}