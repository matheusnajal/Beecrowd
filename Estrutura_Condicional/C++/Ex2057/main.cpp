#include <iostream>

int main() {
    int S, T, F;
    std::cin >> S >> T >> F;

    int arrivalTime = S + T + F;
    if (arrivalTime >= 24) {
        arrivalTime -= 24;
    } else if (arrivalTime < 0) {
        arrivalTime += 24;
    }

    std::cout << arrivalTime << std::endl;

    return 0;
}