#include <iostream>

int main()
{
    int idade;
    std::cin >> idade;

    int ano = idade / 365;
    idade %= 365;

    int mes = idade / 30;
    int dias = idade % 30;

    std::cout << ano << " ano(s)" << std::endl
              << mes << " mes(es)" << std::endl
              << dias << " dia(s)" << std::endl;

    return 0;
}