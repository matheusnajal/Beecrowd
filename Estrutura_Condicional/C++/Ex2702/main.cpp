#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> disponiveis(3);
    vector<int> requisitadas(3);

    for (int i = 0; i < 3; ++i) {
        cin >> disponiveis[i];
    }

    for (int i = 0; i < 3; ++i) {
        cin >> requisitadas[i];
    }

    int nao_atendidos = 0;
    for (int i = 0; i < 3; ++i) {
        nao_atendidos += max(0, requisitadas[i] - disponiveis[i]);
    }

    cout << nao_atendidos << endl;

    return 0;
}