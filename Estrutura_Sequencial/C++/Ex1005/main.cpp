#include <iostream>
#include <iomanip>

int main(){

    float A, B, media;
    std::cin >> A;
    std::cin >> B;
    media = (A * 3.5 + B * 7.5) / 11;

    std::cout << std::fixed << std::setprecision(5);
    std::cout << "MEDIA = " << media << std::endl;

    return 0;

}