#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::fixed << std::setprecision(1);
    
    for (int i = 0; i <= 20; i += 2) {
        double i_double = i / 10.0;
        for (int j = 1; j <= 3; j++) {
            if (i_double == 0 || i_double == 1 || i_double == 2) {
                std::cout << "I=" << static_cast<int>(i_double) << " J=" << static_cast<int>(j + i_double) << std::endl;
            } else {
                std::cout << "I=" << i_double << " J=" << j + i_double << std::endl;
            }
        }
    }
    
    return 0;
}