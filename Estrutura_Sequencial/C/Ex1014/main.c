#include <stdio.h>

int main(){

    int distancia;
    float combustivel, consumo;

    scanf("%d" "%f", &distancia, &combustivel);

    consumo = distancia / combustivel;
    printf("%.3f km/l", consumo);

    return 0;
}