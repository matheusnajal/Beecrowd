#include <iostream>

int main()
{

    float v;
    std::cin >> v;

    if (v >= 0 and v <= 25){
        std::cout << "Intervalo [0,25]\n";
    } else if (v > 25 and v <= 50){
        std::cout << "Intervalo (25,50]\n";
    } else if (v > 25 and v <= 50) {
        std::cout << "Intervalo (50,75]\n";
    } else if (v > 75 and v <= 100){
        std::cout << "Intervalo (75,100]\n";
    } else {
        std::cout << "Fora de intervalo\n";
    }
        return 0;
}