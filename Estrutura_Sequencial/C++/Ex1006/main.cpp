#include <iostream>
#include <iomanip>

int main(){

   double A, B, C, Media; 
   std::cin >> A;
   std::cin >> B;
   std::cin >> C;
   Media = (A * 2 + B * 3 + C * 5) / 10;

   std::cout << std::fixed << std::setprecision(1);
   std::cout << "MEDIA = " << Media << std::endl;

   return 0;
}