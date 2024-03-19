#include <stdio.h>

int main(){

    float Tempo, VM, distancia, gasto;

    scanf("%f", &Tempo);
    scanf("%f", &VM);

    distancia = VM * Tempo;
    gasto = distancia / 12;

    printf("%.3f\n", gasto);
    return 0;
}