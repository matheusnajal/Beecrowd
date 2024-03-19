#include <stdio.h>

int main(){

    double salario, vendas, salarioF;
    
    scanf("%*s");
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    salarioF = salario + (vendas * 0.15);
    printf("TOTAL = R$ %.2lf\n", salarioF);

    return 0;
}