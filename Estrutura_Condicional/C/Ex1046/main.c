#include <stdio.h>

int main(){

    int hora_inicio, hora_fim, duracao;
    scanf("%d" "%d", &hora_inicio, &hora_fim);

    if (hora_inicio < hora_fim){
        duracao = hora_fim - hora_inicio;
    } else {
        duracao = 24 - hora_inicio + hora_fim;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}
