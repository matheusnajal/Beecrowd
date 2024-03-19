#include <stdio.h>

int main() {
    int valor;
    scanf("%d", &valor);
    int valorT = valor;

    int nota100 = valor / 100;
    valor %= 100;

    int nota50 = valor / 50;
    valor %= 50;

    int nota20 = valor / 20;
    valor %= 20;

    int nota10 = valor / 10;
    valor %= 10;

    int nota5 = valor / 5;
    valor %= 5;

    int nota2 = valor / 2;
    valor %= 2;

    int nota1 = valor;

    printf("%d\n"
         "%d nota(s) de R$ 100,00\n"
         "%d nota(s) de R$ 50,00\n"
         "%d nota(s) de R$ 20,00\n"
         "%d nota(s) de R$ 10,00\n"
         "%d nota(s) de R$ 5,00\n"
         "%d nota(s) de R$ 2,00\n"
         "%d nota(s) de R$ 1,00\n", 
         valorT, nota100, nota50, nota20, nota10, nota5, nota2, nota1);

    return 0;
}
