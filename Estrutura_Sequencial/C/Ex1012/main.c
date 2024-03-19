#include <stdio.h>
#include <math.h>

int main(){

    float A, B, C;
    scanf("%f" "%f" "%f", &A, &B, &C);

    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", (A * C) / 2, pow(C, 2) * 3.14159, (((A + B) * C) / 2), pow(B, 2), A * B);
    return 0;
}