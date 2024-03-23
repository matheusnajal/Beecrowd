#include <iostream>
#include <iomanip>

int main() {
    float salario;
    std::cin >> salario;

    if (salario <= 2000.00) {
        std::cout << "Isento" << std::endl;
    } else {
        float imposto;
        if (salario <= 3000.00) {
            imposto = (salario - 2000.00) * 0.08;
        } else if (salario <= 4500.00) {
            imposto = 1000.00 * 0.08 + (salario - 3000.00) * 0.18;
        } else {
            imposto = 1000.00 * 0.08 + 1500.00 * 0.18 + (salario - 4500.00) * 0.28;
        }

        std::cout << "R$ " << std::fixed << std::setprecision(2) << imposto << std::endl;
    }

    return 0;
}