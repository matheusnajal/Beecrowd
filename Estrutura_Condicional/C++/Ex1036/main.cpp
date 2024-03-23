#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
    double A, B, C, delta, r1, r2;
    std::cin >> A >> B >> C;

    delta = pow(B, 2) - 4 * A * C;

    if (delta < 0 or A == 0) {
        std::cout << "Impossivel calcular\n";
    } else {
        r1 = (-B + sqrt(delta)) / (2 * A);
        r2 = (-B - sqrt(delta)) / (2 * A);

        std::cout << std::fixed << std::setprecision(5);
        std::cout << "R1 = " << r1 << std::endl;
        std::cout << "R2 = " << r2 << std::endl;
    }

    return 0;
}