#include <stdio.h>

int main(){

    int hora_incio, hora_fim, duracao;
    scanf("%d" "%d", &hora_incio, &hora_fim);

    if (hora_incio < hora_fim){
        duracao = hora_fim - hora_incio;
    } else {
        duracao = 24 - hora_incio + hora_fim;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}