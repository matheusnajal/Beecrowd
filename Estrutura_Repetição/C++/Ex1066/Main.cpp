#include <iostream>

int main (){

    int valor,  positivo = 0, negativo = 0, impar = 0, par = 0;


    for (int i = 0; i <= 4; i++){
        std::cin >> valor;

        if (valor % 2 == 0){
            par += 1;
        } else {
            impar += 1;
        }

        if (valor > 0){
            positivo += 1;
        } else if (valor < 0){
            negativo += 1;
        }
    }

    std::cout << par << " valor(es) par(es)\n"
    << impar << " valor(es) impar(es)\n"
    << positivo << " valor(es) positivo(s)\n"
    << negativo << " valor(es) negativo(s)" << std::endl;

    return 0;
}