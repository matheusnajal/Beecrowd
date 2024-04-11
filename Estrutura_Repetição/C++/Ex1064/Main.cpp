#include <iostream>
#include <iomanip>

int main(){

    int positivos = 0;
    float valor = 0.0;
    float media = 0.0;
    for (int i = 0; i <= 5; i++){
        std::cin >> valor;
        if (valor > 0){
            positivos += 1;
            media += valor;
        }
    }
    std::cout << std::fixed << std::setprecision(1);
    std::cout << positivos << " valores positivos" << std::endl
    << media / 4 << std::endl;

    return 0;
}