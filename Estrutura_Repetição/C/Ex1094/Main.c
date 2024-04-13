#include <stdio.h>

int main() {

    int c, total = 0, coelho = 0, rato = 0, sapo = 0;
    scanf("%d", &c);

    for (int i = 0; i < c; i++) {
        int quantia;
        char tipo;
        scanf("%d %c", &quantia, &tipo);

        total += quantia;
        if (tipo == 'C') {
            coelho += quantia;
        } else if (tipo == 'R') {
            rato += quantia;
        } else if (tipo == 'S') {
            sapo += quantia;
        }
    }

    float porcentagem_coelho = (coelho * 100.0) / total;
    float porcentagem_rato = (rato * 100.0) / total;
    float porcentagem_sapo = (sapo * 100.0) / total;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    printf("Percentual de coelhos: %.2f %%\n", porcentagem_coelho);
    printf("Percentual de ratos: %.2f %%\n", porcentagem_rato);
    printf("Percentual de sapos: %.2f %%\n", porcentagem_sapo);

    return 0;
}