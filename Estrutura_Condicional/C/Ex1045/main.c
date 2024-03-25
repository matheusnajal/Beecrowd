#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void ordenar(double *a, double *b, double *c) {
    if (*a < *b) {
        double temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a < *c) {
        double temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b < *c) {
        double temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    ordenar(&a, &b, &c);

    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (a * a == b * b + c * c) {
            printf("TRIANGULO RETANGULO\n");
        }

        if (a * a > b * b + c * c) {
            printf("TRIANGULO OBTUSANGULO\n");
        }

        if (a * a < b * b + c * c) {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (a == b && b == c) {
            printf("TRIANGULO EQUILATERO\n");
        }

        if (a == b && b != c || a == c && c != b || b == c && c != a) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}