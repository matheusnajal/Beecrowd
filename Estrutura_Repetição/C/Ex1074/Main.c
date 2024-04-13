#include <stdio.h>

int main() {
    int v = 0, valores;
    scanf("%d", &valores);

    for (int i = 0; i < valores; i++) {
        scanf("%d", &v);
        if (v != 0) {
            if (v % 2 == 0) {
                if (v > 0) {
                    printf("EVEN POSITIVE\n");
                } else {
                    printf("EVEN NEGATIVE\n");
                }
            } else {
                if (v > 0) {
                    printf("ODD POSITIVE\n");
                } else {
                    printf("ODD NEGATIVE\n");
                }
            }
        } else {
            printf("NULL\n");
        }
    }

    return 0;
}