#include <stdio.h>

int main() {
    float media = 0;
    int nota_valida = 0;

    while (1) {
        float nota;
        scanf("%f", &nota);

        if (nota >= 0 && nota <= 10) {
            nota_valida++;
            media += nota;
            if (nota_valida == 2) {
                printf("media = %.2f\n", media / 2);
                break;
            }
        } else {
            printf("nota invalida\n");
        }
    }

    return 0;
}