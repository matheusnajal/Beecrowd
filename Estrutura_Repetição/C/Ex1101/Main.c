#include <stdio.h>
#include <math.h>

int main() {
    int x, y;

    while (1) {
        scanf("%d %d", &x, &y);

        int menor = fmin(x, y);
        int maior = fmax(x, y);

        if (menor <= 0 || maior <= 0) {
            break;
        } else {
            int soma = 0;
            for (int i = menor; i < maior + 1; i++) {
                soma += i;
                printf("%d ", i);
            }
            printf("Sum=%d\n", soma);
        }
    }

    return 0;
}