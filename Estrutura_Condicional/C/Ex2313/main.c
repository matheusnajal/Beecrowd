#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (A + B > C && B + C > A && C + A > B) {
        if (A == B && B == C)
            printf("Valido-Equilatero\n");
        else if (A != B && B != C && A != C)
            printf("Valido-Escaleno\n");
        else
            printf("Valido-Isoceles\n");

        if (pow(A, 2) == pow(B, 2) + pow(C, 2) || pow(B, 2) == pow(A, 2) + pow(C, 2) || pow(C, 2) == pow(A, 2) + pow(B, 2))
            printf("Retangulo: S\n");
        else
            printf("Retangulo: N\n");
    } else {
        printf("Invalido\n");
    }

    return 0;
}