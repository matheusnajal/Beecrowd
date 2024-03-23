#include <iostream>
#include <algorithm>

int main() {
    int a, b;
    std::cin >> a >> b;

    int maior = std::max(a, b);
    int menor = std::min(a, b);

    if (maior % menor == 0) {
        std::cout << "Sao Multiplos" << std::endl;
    } else {
        std::cout << "Nao sao Multiplos" << std::endl;
    }

    return 0;
}