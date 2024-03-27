package Ex1010;

import java.util.Scanner;

public class Main {

    public void main() {
        Scanner sc = new Scanner(System.in);

        int A = sc.nextInt();
        int B = sc.nextInt();
        float C = sc.nextFloat();
        
        int D = sc.nextInt();
        int E = sc.nextInt();
        float F = sc.nextFloat();

        float total = (B * C) + (E * F);
        sc.close();

        System.out.printf("VALOR A PAGAR R$ %.2f\n", total);
    }

    public static void main(String[] args) {
        Main m = new Main();
        m.main();
    }
}