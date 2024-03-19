#include <stdio.h>

int main() {
    double valor;
    scanf("%lf", &valor);

    int centavos = (int)(valor * 100);

    int notas100 = centavos / 10000;
    centavos %= 10000;

    int notas50 = centavos / 5000;
    centavos %= 5000;

    int notas20 = centavos / 2000;
    centavos %= 2000;

    int notas10 = centavos / 1000;
    centavos %= 1000;

    int notas5 = centavos / 500;
    centavos %= 500;

    int notas2 = centavos / 200;
    centavos %= 200;

    int moedas1 = centavos / 100;
    centavos %= 100;

    int moedas050 = centavos / 50;
    centavos %= 50;

    int moedas025 = centavos / 25;
    centavos %= 25;

    int moedas010 = centavos / 10;
    centavos %= 10;

    int moedas005 = centavos / 5;
    centavos %= 5;

    int moedas001 = centavos;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", notas100, notas50, notas20, notas10, notas5, notas2, moedas1, moedas050, moedas025, moedas010, moedas005, moedas001);

    return 0;
}