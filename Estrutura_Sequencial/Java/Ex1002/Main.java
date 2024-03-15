package Ex1002;

import java.util.Scanner;

public class Main {
    @SuppressWarnings("resource")
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double raio = sc.nextDouble();
        double n = 3.14159;
        double area = n * Math.pow(raio, 2);

        System.out.printf("A=%.4f\n", area);
    }
}
