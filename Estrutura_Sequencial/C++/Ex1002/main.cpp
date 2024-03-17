#include <iostream>
#include <math.h>
#include <iomanip>
#define n 3.14159

int main(){
    double raio, area;


    std::cin >> raio;
    area = n * pow(raio, 2);

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "A=" << area << std::endl;

    return 0;
}