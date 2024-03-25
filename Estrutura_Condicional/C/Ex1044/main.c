#include <stdio.h>

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

int main(){

    int a, b;
    scanf("%d" "%d", &a, &b);

    int maior = max(a, b);
    int menor = min(a, b);

    if (maior % menor == 0){
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}