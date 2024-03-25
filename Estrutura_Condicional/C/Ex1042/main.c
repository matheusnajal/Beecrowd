#include <stdio.h>

#define max(a, b, c) (((a) > (b)) ? (((a) > (c)) ? (a) : (c)) : (((b) > (c)) ? (b) : (c)))
#define min(a, b, c) (((a) < (b)) ? (((a) < (c)) ? (a) : (c)) : (((b) < (c)) ? (b) : (c)))

int main(){

    int a, b, c;
    scanf("%d" "%d" "%d", &a, &b, &c);

    int menor = min(a, b, c);
    int meio = (a + b + c) - menor - max(a, b, c);
    int maior = max(a, b, c);

    printf("%d\n%d\n%d\n\n", menor, meio, maior);
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}