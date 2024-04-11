#include <iostream>
#include <math.h>

int main (){

    int valor = 0;
    std::cin >> valor;

    for (int i = 2; i < valor + 1; i += 2) {
        int media = pow(i, 2);
        std::cout << i << "^2 = " << media << std::endl;
    }

    return 0;
}