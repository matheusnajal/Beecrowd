#include <stdio.h>
#include <string.h>

int main()
{
    char A[20], B[20], C[20];
    scanf("%s %s %s", A, B, C);

    if (strcmp(A, "vertebrado") == 0)
    {
        if (strcmp(B, "ave") == 0)
        {
            if (strcmp(C, "carnivoro") == 0)
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
        else
        {
            if (strcmp(C, "onivoro") == 0)
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            }
        }
    }
    else
    {
        if (strcmp(B, "inseto") == 0)
        {
            if (strcmp(C, "hematofago") == 0)
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }
        else
        {
            if (strcmp(C, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minhoca\n");
            }
        }
    }
    return 0;
}