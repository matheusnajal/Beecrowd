#include <stdio.h>

int main(){

    float n1, n2, n3, n4, media;
    scanf("%f" "%f" "%f" "%f", &n1, &n2, &n3, &n4);

    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;

    printf("Media: %.1f\n", media);

    if (media >= 7) {
        printf("Aluno aprovado.\n");
    } else if (media < 5){
        printf("Aluno reprovado.\n");
    } else if (media >= 5 && media <= 6.9) {
        printf("Aluno em exame.\n");
        float ne;
        scanf("%f", &ne);
        printf("Nota do exame: %.1f\n", ne);
        media = (media + ne) / 2;

        if (media >= 5){
            printf("Aluno aprovado.\nMedia final: %.1f\n", media);
        } else if (media <= 4.9) {
            printf("Aluno reprovado.\nMedia final: %.1f\n");
        }
    } 

    return 0;
}