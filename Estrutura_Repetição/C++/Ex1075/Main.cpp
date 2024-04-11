#include <iostream>

int main() {

    int v;
    std::cin >> v;

    for (int i = 0; i < 10000; i++){
        if (i % v == 2){
            std::cout << i << std::endl;
        }
    }

    return 0;
}