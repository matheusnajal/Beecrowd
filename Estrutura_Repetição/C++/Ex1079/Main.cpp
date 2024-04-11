#include <iostream>
#include <iomanip>

int main() {

    int v;
    std::cin >> v;

    for (int i = 0; i < v; i++) {
        float n1, n2, n3, media;

        std::cin >> n1 >> n2 >> n3;

        media = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

        std::cout << std::fixed << std::setprecision(1);
        std::cout << media << std::endl;
    }

    return 0;
}