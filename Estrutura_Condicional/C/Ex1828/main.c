#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    char *regras[][2] = {
        {"tesoura", "papel"},
        {"papel", "pedra"},
        {"pedra", "lagarto"},
        {"lagarto", "Spock"},
        {"Spock", "tesoura"},
        {"tesoura", "lagarto"},
        {"lagarto", "papel"},
        {"papel", "Spock"},
        {"Spock", "pedra"},
        {"pedra", "tesoura"},
        {"tesoura", "Spock"},
        {"Spock", "papel"},
        {"papel", "tesoura"},
        {"tesoura", "pedra"},
        {"pedra", "papel"},
        {"papel", "lagarto"},
        {"lagarto", "pedra"},
        {"pedra", "Spock"},
        {"Spock", "lagarto"},
        {"lagarto", "tesoura"}
    };

    char escolha_sheldon[10], escolha_raj[10];
    for (int t = 1; t <= T; t++) {
        scanf("%s %s", escolha_sheldon, escolha_raj);
        if (strcmp(escolha_sheldon, escolha_raj) == 0) {
            printf("Caso #%d: De novo!\n", t);
        } else {
            char *resultado = NULL;
            for (int i = 0; i < sizeof(regras) / sizeof(regras[0]); i++) {
                if (strcmp(regras[i][0], escolha_sheldon) == 0 && strcmp(regras[i][1], escolha_raj) == 0) {
                    resultado = "Bazinga!";
                    break;
                } else if (strcmp(regras[i][0], escolha_raj) == 0 && strcmp(regras[i][1], escolha_sheldon) == 0) {
                    resultado = "Raj trapaceou!";
                    break;
                }
            }
            printf("Caso #%d: %s\n", t, resultado);
        }
    }

    return 0;
}