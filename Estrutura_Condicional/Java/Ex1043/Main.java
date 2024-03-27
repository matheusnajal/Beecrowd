package Ex1043;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double a, b, c;
        a = sc.nextDouble();
        b = sc.nextDouble();
        c = sc.nextDouble();
        sc.close();

        if (a + b > c && a + c > b && b + c > a){
            System.out.printf("Perimetro = %.1f\n", Math.round((a + b + c) * 10.0) / 10.0);
        } else {
            System.out.printf("Area = %.1f\n", Math.round(((a + b) * c) / 2.0 * 10.0) / 10.0);
        }
    }
}