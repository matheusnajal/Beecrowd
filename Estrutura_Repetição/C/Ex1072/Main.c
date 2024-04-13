#include <stdio.h>

int main() {
    int dentro = 0, fora = 0, quant, v;
    scanf("%d", &quant);

    for (int i = 0; i < quant; i++) {
        scanf("%d", &v);

        if (v >= 10 && v <= 20) {
            dentro += 1;
        } else {
            fora += 1;
        }
    }

    printf("%d in\n%d out\n", dentro, fora);

    return 0;
}