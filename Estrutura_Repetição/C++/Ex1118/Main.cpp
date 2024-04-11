#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    while (true) {
        float nota1, nota2;

        do {
            cin >> nota1;
            if (nota1 < 0 || nota1 > 10)
                cout << "nota invalida" << endl;
        } while (nota1 < 0 || nota1 > 10);

        do {
            cin >> nota2;
            if (nota2 < 0 || nota2 > 10)
                cout << "nota invalida" << endl;
        } while (nota2 < 0 || nota2 > 10);

        float media = (nota1 + nota2) / 2;
        cout << "media = " << fixed << setprecision(2) << media << endl;

        int opcao;
        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> opcao;
        } while (opcao != 1 && opcao != 2);

        if (opcao == 2)
            break;
    }

    return 0;
}