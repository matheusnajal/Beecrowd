#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float salario, salarioF = 0, reajuste = 0;
    
    cin >> salario;

    if (salario >= 0 && salario <= 400) {
        reajuste = salario * 0.15;
        salarioF = salario + reajuste;
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << salarioF << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    else if (salario <= 800) {
        reajuste = salario * 0.12;
        salarioF = salario + reajuste;
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << salarioF << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if (salario <= 1200) {
        reajuste = salario * 0.10;
        salarioF = salario + reajuste;
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << salarioF << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if (salario <= 2000) {
        reajuste = salario * 0.07;
        salarioF = salario + reajuste;
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << salarioF << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else {
        reajuste = salario * 0.04;
        salarioF = salario + reajuste;
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << salarioF << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 4 %" << endl;
    }

    return 0;
}
