#include <stdio.h>

int main() {
    while (1) {
        float nota1, nota2;

        do {
            scanf("%f", &nota1);
            if (nota1 < 0 || nota1 > 10)
                printf("nota invalida\n");
        } while (nota1 < 0 || nota1 > 10);

        do {
            scanf("%f", &nota2);
            if (nota2 < 0 || nota2 > 10)
                printf("nota invalida\n");
        } while (nota2 < 0 || nota2 > 10);

        float media = (nota1 + nota2) / 2;
        printf("media = %.2f\n", media);

        int opcao;
        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &opcao);
        } while (opcao != 1 && opcao != 2);

        if (opcao == 2)
            break;
    }

    return 0;
}