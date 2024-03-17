#include <iostream>

int main(){

    int A, B, C, D, Diferenca;
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    std::cin >> D;
    Diferenca = A * B - C * D;

    std::cout << "DIFERENCA = " << Diferenca << std::endl;
    
    return 0;
}