#include <iostream>
using namespace std;

int main() {
    int hora_inicio, minuto_inicio, hora_fim, minuto_fim;
    cin >> hora_inicio >> minuto_inicio >> hora_fim >> minuto_fim;

    int inicio_em_minutos = hora_inicio * 60 + minuto_inicio;
    int fim_em_minutos = hora_fim * 60 + minuto_fim;

    int duracao_em_minutos = fim_em_minutos - inicio_em_minutos;

    if (duracao_em_minutos <= 0) {
        duracao_em_minutos += 24 * 60;
    }

    int duracao_horas = duracao_em_minutos / 60;
    int duracao_minutos = duracao_em_minutos % 60;

    cout << "O JOGO DUROU " << duracao_horas << " HORA(S) E " << duracao_minutos << " MINUTO(S)" << endl;

    return 0;
}