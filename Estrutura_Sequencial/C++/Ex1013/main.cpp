#include <iostream>

int main(){

    int a, b, c, maiorAB, maiorF;
    std::cin >> a >> b >> c;

    maiorAB = (a + b + abs(a - b)) / 2;
    maiorF = (maiorAB + c + abs(maiorAB - c)) / 2;

    std::cout << maiorF << " eh o maior" << std::endl;

    return 0;
}