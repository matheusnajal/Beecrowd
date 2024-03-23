#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> meses = {
        {1, "January"},
        {2, "February"},
        {3, "March"},
        {4, "April"},
        {5, "May"},
        {6, "June"},
        {7, "July"},
        {8, "August"},
        {9, "September"},
        {10, "October"},
        {11, "November"},
        {12, "December"}
    };

    int mes;
    std::cin >> mes;

    if (mes >= 1 && mes <= 12) {
        std::cout << meses[mes] << std::endl;
    } else {
        std::cout << "Valor inválido. Por favor, insira um número entre 1 e 12." << std::endl;
    }

    return 0;
}