#include <stdio.h>

int main() {
    float salario, salarioF = 0, reajuste = 0;
    
    scanf("%f", &salario);

    if (salario >= 0 && salario <= 400) {
        reajuste = salario * 0.15;
        salarioF = salario + reajuste;
        printf("Novo salario: %.2f\n", salarioF);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 15 %%\n");
    }
    else if (salario <= 800) {
        reajuste = salario * 0.12;
        salarioF = salario + reajuste;
        printf("Novo salario: %.2f\n", salarioF);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 12 %%\n");
    }
    else if (salario <= 1200) {
        reajuste = salario * 0.10;
        salarioF = salario + reajuste;
        printf("Novo salario: %.2f\n", salarioF);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 10 %%\n");
    }
    else if (salario <= 2000) {
        reajuste = salario * 0.07;
        salarioF = salario + reajuste;
        printf("Novo salario: %.2f\n", salarioF);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 7 %%\n");
    }
    else {
        reajuste = salario * 0.04;
        salarioF = salario + reajuste;
        printf("Novo salario: %.2f\n", salarioF);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}