#include <iostream>
#include <iomanip>
#include <math.h>

int main(){

    double R, volume;
    double pi = 3.14159;
    
    std::cin >> R;
    volume = (4.0/3) * pi * pow(R, 3);

    std::cout << std::fixed << std::setprecision(3);
    std::cout << "VOLUME = " << volume << std::endl;

    return 0;
}