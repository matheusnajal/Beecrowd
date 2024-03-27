package Ex1045;

import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double a = scanner.nextDouble();
        double b = scanner.nextDouble();
        double c = scanner.nextDouble();
        scanner.close();

        double[] lados = {a, b, c};
        Arrays.sort(lados);

        a = lados[2];
        b = lados[1];
        c = lados[0];

        if (a >= b + c) {
            System.out.println("NAO FORMA TRIANGULO");
        } else {
            if (Math.pow(a, 2) == Math.pow(b, 2) + Math.pow(c, 2)) {
                System.out.println("TRIANGULO RETANGULO");
            }

            if (Math.pow(a, 2) > Math.pow(b, 2) + Math.pow(c, 2)) {
                System.out.println("TRIANGULO OBTUSANGULO");
            }

            if (Math.pow(a, 2) < Math.pow(b, 2) + Math.pow(c, 2)) {
                System.out.println("TRIANGULO ACUTANGULO");
            }

            if (a == b && b == c) {
                System.out.println("TRIANGULO EQUILATERO");
            }

            if (a == b && b != c || a == c && c != b || b == c && c != a) {
                System.out.println("TRIANGULO ISOSCELES");
            }
        }
    }
}