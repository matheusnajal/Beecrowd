#include <iostream>
#include <iomanip> // Para setprecision

int main() {
    float n1, n2, n3, n4;
    std::cin >> n1 >> n2 >> n3 >> n4;

    float media = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;

    std::cout << "Media: " << std::fixed << std::setprecision(1) << media << std::endl;

    if (media >= 7) {
        std::cout << "Aluno aprovado." << std::endl;
    } else if (media < 5) {
        std::cout << "Aluno reprovado." << std::endl;
    } else if (media >= 5 && media <= 6.9) {
        std::cout << "Aluno em exame." << std::endl;
        float ne;
        std::cin >> ne;
        std::cout << "Nota do exame: " << std::fixed << std::setprecision(1) << ne << std::endl;
        media = (media + ne) / 2;
        if (media >= 5) {
            std::cout << "Aluno aprovado." << std::endl;
            std::cout << "Media final: " << std::fixed << std::setprecision(1) << media << std::endl;
        } else if (media <= 4.9) {
            std::cout << "Aluno reprovado." << std::endl;
            std::cout << "Media final: " << std::fixed << std::setprecision(1) << media << std::endl;
        }
    }

    return 0;
}