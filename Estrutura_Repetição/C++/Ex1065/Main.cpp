#include <iostream>

int main(){

    int valor = 0;
    int pares = 0;

    for (int i = 0; i <= 4; i++){
        std::cin >> valor;

        if (valor % 2 == 0){
            pares += 1;
        }
    }
    std::cout << pares << " valores pares" << std::endl;

    return 0;
}