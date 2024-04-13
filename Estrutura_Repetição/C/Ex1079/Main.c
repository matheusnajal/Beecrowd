#include <stdio.h>

int main() {
    int v;
    scanf("%d", &v);

    for (int i = 0; i < v; i++) {
        float n1, n2, n3, media;

        scanf("%f %f %f", &n1, &n2, &n3);

        media = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

        printf("%.1f\n", media);
    }

    return 0;
}