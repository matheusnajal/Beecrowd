#include <iostream>

int main() {
    int segundos;
    std::cin >> segundos;

    int horas = segundos / 3600;
    segundos %= 3600;

    int minutos = segundos / 60;
    segundos %= 60;

    std::cout << horas << ":" << minutos << ":" << segundos << std::endl;

    return 0;
}
