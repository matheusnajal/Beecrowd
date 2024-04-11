#include <iostream>

int main () {

    int n = 0;
    std::cin >> n;

    if (n % 2 != 0) 
        n -= 1;

    for (int i = n; i < n + 12; i += 2){
        std::cout << i + 1 << std::endl;
    }

    return 0;
}