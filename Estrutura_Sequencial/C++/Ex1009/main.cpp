#include <iostream>
#include <iomanip>

int main(){

    std::string nomeF;
    double salarioF, vendasT, salario;

    std::cin >> nomeF;
    std::cin >> salarioF;
    std::cin >> vendasT;

    salario = salarioF + (vendasT * 0.15);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "TOTAL = R$ " << salario << std::endl;

    return 0;
}