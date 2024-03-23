#include <iostream>
#include <iomanip>

int main() {
    int n, matricula, melhor_matricula;
    double nota, melhor_nota = -1.0;

    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> matricula >> nota;
        if (nota > melhor_nota) {
            melhor_nota = nota;
            melhor_matricula = matricula;
        }
    }

    if (melhor_nota >= 8.0)
        std::cout << melhor_matricula << std::endl;
    else
        std::cout << "Minimum note not reached" << std::endl;

    return 0;
}