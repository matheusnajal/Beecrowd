#include <iostream>

int main () {

    int senha = 2002;

    while (1) {
        int nova_senha;
        std::cin >> nova_senha;

        if (senha == nova_senha) {
            std::cout << "Acesso Permitido" << std::endl;
            break;
        } else {
            std::cout << "Senha Invalida" << std::endl;
        }
    }

    return 0;
}