#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    if (n % 2 != 0)
        n -= 1;

    for (int i = n; i < n + 12; i += 2) {
        printf("%d\n", i + 1);
    }

    return 0;
}