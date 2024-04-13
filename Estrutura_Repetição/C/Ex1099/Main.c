#include <stdio.h>
#include <math.h>

int main() {

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int soma = 0, x, y;
        scanf("%d %d", &x, &y);

        int menor = fmin(x, y);
        int maior = fmax(x, y);

        for (int j = menor + 1; j < maior; j++) {
            if (j % 2 != 0) {
                soma += j;
            }
        }
        printf("%d\n", soma);
    }
    return 0;
}