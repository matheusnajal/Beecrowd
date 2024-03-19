#include <stdio.h>

int main(){

    int nFuncionario, horas;
    float valor, salario;

    scanf("%d", &nFuncionario);
    scanf("%d", &horas);
    scanf("%f", &valor);

    salario = valor * horas;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", nFuncionario, salario);

    return 0;
}