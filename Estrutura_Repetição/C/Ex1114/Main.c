#include <stdio.h>

int main() {
    int senha = 2002;

    while (1) {
        int nova_senha;
        scanf("%d", &nova_senha);

        if (senha == nova_senha) {
            printf("Acesso Permitido\n");
            break;
        } else {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}