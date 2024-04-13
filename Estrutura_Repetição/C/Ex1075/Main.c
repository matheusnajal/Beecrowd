#include <stdio.h>

int main() {
    int v;
    scanf("%d", &v);

    for (int i = 0; i < 10000; i++) {
        if (i % v == 2) {
            printf("%d\n", i);
        }
    }

    return 0;
}