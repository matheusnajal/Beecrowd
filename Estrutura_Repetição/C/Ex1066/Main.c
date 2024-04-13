#include <stdio.h>

int main() {
    int valor, positivo = 0, negativo = 0, impar = 0, par = 0;

    for (int i = 0; i <= 4; i++) {
        scanf("%d", &valor);

        if (valor % 2 == 0) {
            par += 1;
        } else {
            impar += 1;
        }

        if (valor > 0) {
            positivo += 1;
        } else if (valor < 0) {
            negativo += 1;
        }
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",
            par, impar, positivo, negativo);

    return 0;
}