#include <stdio.h>

int main() {
    int L, C;
    scanf("%d %d", &L, &C);

    int color = (L + C) % 2 == 0 ? 1 : 0;

    printf("%d\n", color);

    return 0;
}