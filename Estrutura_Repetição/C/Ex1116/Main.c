#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        int x, y;
        scanf("%d %d", &x, &y);

        if (y == 0) {
            printf("divisao impossivel\n");
        } else if (x == 0) {
            printf("%.1f\n", 0.0);
        } else {
            double valor = (double)x / y;
            printf("%.1f\n", valor);
        }
    }

    return 0;
}