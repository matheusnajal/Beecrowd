#include <stdio.h>

int main() {
    int positivos = 0;
    float valor = 0.0;
    float media = 0.0;
    for (int i = 0; i <= 5; i++) {
        scanf("%f", &valor);
        if (valor > 0) {
            positivos += 1;
            media += valor;
        }
    }
    printf("%d valores positivos\n", positivos);
    printf("%.1f\n", media / positivos);

    return 0;
}