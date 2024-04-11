#include <iostream>

int main () {

    int v = 0, valores;
    std::cin >> valores;

    for (int i = 0; i < valores; i++) {
        std::cin >> v;
        if (v != 0) {
            if (v % 2 == 0){
                if (v > 0) {
                    std::cout << "EVEN POSITIVE" << std::endl;
                } else {
                    std::cout << "EVEN NEGATIVE" << std::endl;
                }
            } else {
                if (v > 0) {
                    std::cout << "ODD POSITIVE" << std::endl;
                } else {
                    std::cout << "ODD NEGATIVE" << std::endl;
                }
            }
        } else {
             std::cout << "NULL" << std::endl;
        }
    }

    return 0;
}