#include <iostream>
#include <math.h>

int main () {

    while (1) {
        int x, y;
        std::cin >> x >> y;

        int menor = fmin(x,y);
        int maior = fmax(x,y);

        if (menor <= 0 || maior <= 0){
            break;
        } else {
            int soma = 0;
            for (int i = menor; i < maior + 1; i++){
                soma += i;
                std::cout << i << " ";
            }
            std::cout << "Sum=" << soma << std::endl;
        }
    }

    return 0;
}