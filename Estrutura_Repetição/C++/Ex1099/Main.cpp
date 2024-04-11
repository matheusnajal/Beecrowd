#include <iostream>
#include <math.h>

int main () {

    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++){
        int soma = 0, x, y;
        std::cin >> x >> y;

        int menor = fmin(x,y);
        int maior = fmax(x,y);

        for (int j = menor + 1; j < maior; j++){
            if (j % 2 != 0){
                soma += j;
            }
        }
    std::cout << soma << std::endl;
    }
    return 0;
}