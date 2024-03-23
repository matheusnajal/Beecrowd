#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "Perimetro = " << fixed << setprecision(1) << round((a + b + c) * 10.0) / 10.0 << endl;
    } else {
        cout << "Area = " << fixed << setprecision(1) << round(((a + b) * c) / 2.0 * 10.0) / 10.0 << endl;
    }

    return 0;
}