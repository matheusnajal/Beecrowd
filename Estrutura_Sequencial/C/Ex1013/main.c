#include <stdio.h>
#include <stdlib.h>

int main()
{

    int A, B, C, maiorAB, maiorF;
    scanf("%d" "%d" "%d",&A, &B, &C);

    maiorAB = (A + B + abs(A - B)) / 2;
    maiorF = (maiorAB + C + abs(maiorAB - C)) / 2;

    printf("%d eh o maior\n", maiorF);
    return 0;
}