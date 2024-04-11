#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;

        if (y == 0) {
            cout << "divisao impossivel" << endl;
        } else if (x == 0) {
            cout << fixed << setprecision(1) << 0.0 << endl;
        } else {
            double valor = static_cast<double>(x) / y;
            cout << fixed << setprecision(1) << valor << endl;
        }
    }

    return 0;
}