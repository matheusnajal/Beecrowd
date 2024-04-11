#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float media = 0;
    int nota_valida = 0;

    while (true) {
        float nota;
        cin >> nota;

        if (nota >= 0 && nota <= 10) {
            nota_valida++;
            media += nota;
            if (nota_valida == 2) {
                cout << fixed << setprecision(2) << "media = " << media / 2 << endl;
                break;
            }
        } else {
            cout << "nota invalida" << endl;
        }
    }

    return 0;
}