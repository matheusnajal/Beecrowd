#include <stdio.h>

int main(){

    int peca,qntp, peca2, qntp2;
    float vpeca, vpeca2, valor;

    scanf("%d" "%d" "%f", &peca, &qntp, &vpeca);
    scanf("%d" "%d" "%f", &peca2, &qntp2, &vpeca2);

    valor = vpeca * qntp + vpeca2 * qntp2;
    printf("VALOR A PAGAR: R$ %.2f\n", valor);

    return 0;
}