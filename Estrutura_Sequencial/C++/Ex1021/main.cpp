#include <iostream>

int main() {
    double valor;
    std::cin >> valor;

    int centavos = valor * 100;

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

    std::cout << "NOTAS:\n" << notas100 << " nota(s) de R$ 100.00\n" 
              << notas50 << " nota(s) de R$ 50.00\n" 
              << notas20 << " nota(s) de R$ 20.00\n" 
              << notas10 << " nota(s) de R$ 10.00\n" 
              << notas5 << " nota(s) de R$ 5.00\n" 
              << notas2 << " nota(s) de R$ 2.00\n" 
              << "MOEDAS:\n" 
              << moedas1 << " moeda(s) de R$ 1.00\n" 
              << moedas050 << " moeda(s) de R$ 0.50\n" 
              << moedas025 << " moeda(s) de R$ 0.25\n" 
              << moedas010 << " moeda(s) de R$ 0.10\n" 
              << moedas005 << " moeda(s) de R$ 0.05\n" 
              << moedas001 << " moeda(s) de R$ 0.01\n";

    return 0;
}
