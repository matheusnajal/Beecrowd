#include <iostream>

int main() {
    int valor;
    std::cin >> valor;
    int valorT = valor;

    int nota100 = valor / 100;
    valor %= 100;

    int nota50 = valor / 50;
    valor %= 50;

    int nota20 = valor / 20;
    valor %= 20;

    int nota10 = valor / 10;
    valor %= 10;

    int nota5 = valor / 5;
    valor %= 5;

    int nota2 = valor / 2;
    valor %= 2;

    int nota1 = valor;

    std::cout << valorT << std::endl
         << nota100 << " nota(s) de R$ 100,00" << std::endl
         << nota50 << " nota(s) de R$ 50,00" << std::endl
         << nota20 << " nota(s) de R$ 20,00" << std::endl
         << nota10 << " nota(s) de R$ 10,00" << std::endl
         << nota5 << " nota(s) de R$ 5,00" << std::endl
         << nota2 << " nota(s) de R$ 2,00" << std::endl
         << nota1 << " nota(s) de R$ 1,00" << std::endl;

    return 0;
}