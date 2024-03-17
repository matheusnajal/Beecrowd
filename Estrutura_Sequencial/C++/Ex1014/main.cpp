#include <iostream>
#include <iomanip>

int main(){

    int distancia;
    float combustivel, consumo;

    std::cin >> distancia;
    std::cin >> combustivel;

    consumo = distancia / combustivel;

    std::cout << std::fixed << std::setprecision(3);
    std::cout << consumo << " km/l" << std::endl;

    return 0;
}