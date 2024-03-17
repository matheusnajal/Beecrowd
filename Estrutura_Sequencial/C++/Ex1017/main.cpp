#include <iostream>
#include <iomanip>

int main(){

    float Tempo, VM, distancia;
    float gasto;

    std::cin >> Tempo;
    std::cin >> VM;

    distancia = VM * Tempo;
    gasto = distancia / 12;

    std::cout << std::fixed << std::setprecision(3);
    std::cout << gasto << std::endl;


    return 0;
}