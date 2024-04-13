#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int menor = fmin(x, y);
    int maior = fmax(x, y);

    if (menor % 2 == 0)
        menor += 1;
    else if (menor % 2 != 0)
        menor += 2;

    int soma = 0;
    for (int i = menor; i < maior; i += 2) {
        soma += i;
    }

    printf("%d\n", soma);

    return 0;
}