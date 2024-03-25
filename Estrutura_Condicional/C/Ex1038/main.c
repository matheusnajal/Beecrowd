#include <stdio.h>

int main()
{

    int cod, qnt;
    scanf("%d" "%d", &cod, &qnt);

    if (cod == 1){
        printf("Total: R$ %.2f\n", qnt * 4.00);
    } else if (cod == 2){
        printf("Total: R$ %.2f\n", qnt * 4.50);
    } else if (cod == 3){
        printf("Total: R$ %.2f\n", qnt * 5.00);
    } else if (cod == 4){
        printf("Total: R$ %.2f\n", qnt * 2.00);
    } else if (cod == 5){
        printf("Total: R$ %.2f\n", qnt * 1.50);
    }

    return 0;
}