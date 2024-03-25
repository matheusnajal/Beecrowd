#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c;
    scanf("%lf" "%lf" "%lf", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a){
        printf("Perimetro = %.1lf\n", round((a + b + c) * 10.0) / 10.0);
    } else {
        printf("Area = %.1lf\n", round(((a + b) * c) / 2.0 * 10.0) / 10.0);
    }

    return 0;
}