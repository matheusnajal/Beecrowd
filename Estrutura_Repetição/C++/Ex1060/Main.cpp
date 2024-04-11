#include <iostream>

int main(){

    int positivos = 0;
    float valor = 0;
    for (int i = 0; i <= 5; i++){
        std::cin >> valor;
        if (valor > 0){
            positivos += 1;
        }
    }
    std::cout << positivos << " valores positivos" << std::endl;

    return 0;
}