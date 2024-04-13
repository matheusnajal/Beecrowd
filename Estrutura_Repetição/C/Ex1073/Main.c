#include <stdio.h>
#include <math.h>

int main() {
    int valor = 0;
    scanf("%d", &valor);

    for (int i = 2; i < valor + 1; i += 2) {
        int media = pow(i, 2);
        printf("%d^2 = %d\n", i, media);
    }

    return 0;
}