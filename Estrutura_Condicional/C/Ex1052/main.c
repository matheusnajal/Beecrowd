#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *meses[] = {
        NULL, "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    int mes;
    scanf("%d", &mes);

    if (mes >= 1 && mes <= 12) {
        printf("%s\n", meses[mes]);
    } else {
        printf("Valor inválido. Por favor, insira um número entre 1 e 12.\n");
    }

    return 0;
}