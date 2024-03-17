#include <iostream>
#include <iomanip>
#include <math.h>

int main(){

    float A, B, C;
    std::cin >> A >> B >> C;

    std::cout << std::fixed << std::setprecision(3);
    std::cout << "TRIANGULO: " << (A * C) / 2 << std::endl
              << "CIRCULO: " << (3.14159 * pow(C, 2)) << std::endl
              << "TRAPEZIO: " << ((A + B) * C) / 2 << std::endl
              << "QUADRADO: " << pow(B, 2) << std::endl
              << "RETANGULO: " << A * B << std::endl;
    

}