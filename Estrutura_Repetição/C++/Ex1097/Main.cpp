#include <iostream>

int main () {

    int n = 7;
    for (int i = 1; i < 10; i += 2) {
        for (int j = n; j > n-3; j--) {
            std::cout << "I=" << i << " J=" << j << std::endl;
        }
        n += 2;
    }

    return 0;
}