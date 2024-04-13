#include <stdio.h>

int main() {
    int positivos = 0;
    float valor = 0;
    for (int i = 0; i <= 5; i++) {
        scanf("%f", &valor);
        if (valor > 0) {
            positivos += 1;
        }
    }
    printf("%d valores positivos\n", positivos);

    return 0;
}