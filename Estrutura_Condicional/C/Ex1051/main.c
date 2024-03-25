#include <stdio.h>

int main() {
    float salario;
    scanf("%f", &salario);

    if (salario <= 2000.00) {
        printf("Isento\n");
    } else {
        float imposto;
        if (salario <= 3000.00) {
            imposto = (salario - 2000.00) * 0.08;
        } else if (salario <= 4500.00) {
            imposto = 1000.00 * 0.08 + (salario - 3000.00) * 0.18;
        } else {
            imposto = 1000.00 * 0.08 + 1500.00 * 0.18 + (salario - 4500.00) * 0.28;
        }

        printf("R$ %.2f\n", imposto);
    }

    return 0;
}