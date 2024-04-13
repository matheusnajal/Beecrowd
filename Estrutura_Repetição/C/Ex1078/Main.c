#include <stdio.h>

int main() {
    int v;
    scanf("%d", &v);

    for (int i = 1; i < 11; i++) {
        printf("%d x %d = %d\n", i, v, (i * v));
    }

    return 0;
}