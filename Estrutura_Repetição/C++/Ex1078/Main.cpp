#include <iostream>

int main () {

    int v;
    std::cin >> v;

    for (int i = 1; i < 11; i++){
        std::cout << i << " x " << v << " = " << (i * v) << std::endl;
    }

    return 0;
}