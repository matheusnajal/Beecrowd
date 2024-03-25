#include <stdio.h>

int main() {
    int S, T, F;
    scanf("%d %d %d", &S, &T, &F);

    int arrivalTime = S + T + F;
    if (arrivalTime >= 24) {
        arrivalTime -= 24;
    } else if (arrivalTime < 0) {
        arrivalTime += 24;
    }

    printf("%d\n", arrivalTime);

    return 0;
}