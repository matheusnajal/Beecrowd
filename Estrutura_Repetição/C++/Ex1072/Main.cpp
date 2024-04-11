#include <iostream>

int main () {

    int dentro = 0, fora = 0, quant, v;
    std::cin >> quant;


    for (int i = 0; i < quant; i++){
        std::cin >> v;

        if (v >= 10 && v <= 20){
            dentro += 1;
        } else {
            fora += 1;
        }
    }

    std::cout << dentro << " in" << std::endl
    << fora << " out" << std::endl;

    return 0;
}