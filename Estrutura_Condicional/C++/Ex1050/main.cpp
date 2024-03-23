#include <iostream>
using namespace std;

int main() {
    int D;
    cin >> D;

    if (D == 61)
        cout << "Brasilia" << endl;
    else if (D == 71)
        cout << "Salvador" << endl;
    else if (D == 11)
        cout << "Sao Paulo" << endl;
    else if (D == 21)
        cout << "Rio de Janeiro" << endl;
    else if (D == 32)
        cout << "Juiz de Fora" << endl;
    else if (D == 19)
        cout << "Campinas" << endl;
    else if (D == 27)
        cout << "Vitoria" << endl;
    else if (D == 31)
        cout << "Belo Horizonte" << endl;
    else
        cout << "DDD nao cadastrado" << endl;

    return 0;
}