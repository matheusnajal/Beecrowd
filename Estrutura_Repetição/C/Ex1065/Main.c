#include <stdio.h>

int main() {
    int valor = 0;
    int pares = 0;

    for (int i = 0; i <= 4; i++) {
        scanf("%d", &valor);

        if (valor % 2 == 0) {
            pares += 1;
        }
    }
    printf("%d valores pares\n", pares);

    return 0;
}