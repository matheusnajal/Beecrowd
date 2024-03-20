package Ex1014;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int distanciaTotal = sc.nextInt();
        double combustivelGasto = sc.nextDouble();

        double consumoMedio = distanciaTotal / combustivelGasto;

        System.out.printf("%.3f km/l\n", consumoMedio);

        sc.close();
    }
}
