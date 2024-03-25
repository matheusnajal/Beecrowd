#include <stdio.h>

int main() {
    int disponiveis[3];
    int requisitadas[3];

    for (int i = 0; i < 3; ++i) {
        scanf("%d", &disponiveis[i]);
    }

    for (int i = 0; i < 3; ++i) {
        scanf("%d", &requisitadas[i]);
    }

    int nao_atendidos = 0;

    for (int i = 0; i < 3; ++i) {
        nao_atendidos += (requisitadas[i] - disponiveis[i]) > 0 ? (requisitadas[i] - disponiveis[i]) : 0;
    }

    printf("%d\n", nao_atendidos);

    return 0;
}