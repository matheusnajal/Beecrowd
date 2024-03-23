#include <iostream>
#include <algorithm>

int tempo_minimo(int A1, int A2, int A3) {
    int tempo_no_primeiro_andar = A2 * 2 + A3 * 4;
    int tempo_no_segundo_andar = A1 * 2 + A3 * 2;
    int tempo_no_terceiro_andar = A1 * 4 + A2 * 2;

    return std::min({tempo_no_primeiro_andar, tempo_no_segundo_andar, tempo_no_terceiro_andar});
}

int main() {
    int A1, A2, A3;
    std::cin >> A1 >> A2 >> A3;

    std::cout << tempo_minimo(A1, A2, A3) << std::endl;

    return 0;
}