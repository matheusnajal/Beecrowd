#include <iostream>
#include <iomanip>

int main(){

    int peca1, qnt1, peca2, qnt2;
    float preco1, preco2, conta;

    std::cin >> peca1 >> qnt1 >> preco1;
    std::cin >> peca2 >> qnt2 >> preco2;

    conta = (qnt1 * preco1) + (qnt2 * preco2);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "VALOR A PAGAR: R$ " << conta << std::endl;
    
    return 0;
}