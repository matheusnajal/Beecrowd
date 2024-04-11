#include <iostream>

int main () {

    while (1) {
        int x, y;
        std::cin >> x >> y;

        if (x > y) {
            std::cout << "Decrescente" << std::endl;
        } else if (x < y) {
            std::cout << "Crescente" << std::endl;
        } else if (x == y) {
            break;
        }
    }

    return 0;
}