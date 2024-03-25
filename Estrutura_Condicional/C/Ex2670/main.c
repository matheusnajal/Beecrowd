#include <stdio.h>

int min(int a, int b, int c) {
    if (a <= b && a <= c)
        return a;
    else if (b <= a && b <= c)
        return b;
    else
        return c;
}

int tempo_minimo(int A1, int A2, int A3) {
    int tempo_no_primeiro_andar = A2 * 2 + A3 * 4;
    int tempo_no_segundo_andar = A1 * 2 + A3 * 2;
    int tempo_no_terceiro_andar = A1 * 4 + A2 * 2;

    return min(tempo_no_primeiro_andar, tempo_no_segundo_andar, tempo_no_terceiro_andar);
}

int main() {
    int A1, A2, A3;
    scanf("%d %d %d", &A1, &A2, &A3);

    printf("%d\n", tempo_minimo(A1, A2, A3));

    return 0;
}