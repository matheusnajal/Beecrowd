#include <iostream>

int main()
{
    int L, C;
    std::cin >> L >> C;

    int color = (L + C) % 2 == 0 ? 1 : 0;

    std::cout << color << std::endl;

    return 0;
}