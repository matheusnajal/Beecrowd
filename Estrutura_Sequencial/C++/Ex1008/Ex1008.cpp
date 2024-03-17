#include <iostream>
#include <iomanip>
int main(){

    int numeroF, horasT;
    float valorH, salario;

    std::cin >> numeroF;
    std::cin >> horasT;
    std::cin >> valorH;
    salario = horasT * valorH;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "NUMBER = " << numeroF
              << "\n" << "SALARY = U$ " << salario << std::endl;

    return 0; 
}