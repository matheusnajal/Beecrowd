#include <stdio.h>

int main() {
    int segundos;
    scanf("%d", &segundos);

    int horas = segundos / 3600;
    segundos %= 3600;

    int minutos = segundos / 60;
    segundos %= 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
