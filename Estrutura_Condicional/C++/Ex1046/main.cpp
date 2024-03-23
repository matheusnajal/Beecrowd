#include <iostream>

int main() {
    int hora_inicio, hora_fim;
    std::cin >> hora_inicio >> hora_fim;

    int duracao;
    if (hora_inicio < hora_fim) {
        duracao = hora_fim - hora_inicio;
    } else {
        duracao = 24 - hora_inicio + hora_fim;
    }

    std::cout << "O JOGO DUROU " << duracao << " HORA(S)" << std::endl;

    return 0;
}