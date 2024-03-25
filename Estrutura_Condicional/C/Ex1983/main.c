#include <stdio.h>

int main() {
    int n, matricula, melhor_matricula;
    double nota, melhor_nota = -1.0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %lf", &matricula, &nota);
        if (nota > melhor_nota) {
            melhor_nota = nota;
            melhor_matricula = matricula;
        }
    }

    if (melhor_nota >= 8.0)
        printf("%d\n", melhor_matricula);
    else
        printf("Minimum note not reached\n");

    return 0;
}