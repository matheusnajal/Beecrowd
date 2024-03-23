#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if (A + B > C && B + C > A && C + A > B) {
        if (A == B && B == C)
            cout << "Valido-Equilatero\n";
        else if (A != B && B != C && A != C)
            cout << "Valido-Escaleno\n";
        else
            cout << "Valido-Isoceles\n";

        if (pow(A, 2) == pow(B, 2) + pow(C, 2) || pow(B, 2) == pow(A, 2) + pow(C, 2) || pow(C, 2) == pow(A, 2) + pow(B, 2))
            cout << "Retangulo: S\n";
        else
            cout << "Retangulo: N\n";
    } else {
        cout << "Invalido\n";
    }

    return 0;
}