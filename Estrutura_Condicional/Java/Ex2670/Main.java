package Ex2670;

import java.util.Scanner;

public class Main {
    public static int min(int a, int b, int c) {
        if (a <= b && a <= c)
            return a;
        else if (b <= a && b <= c)
            return b;
        else
            return c;
    }

    public static int tempoMinimo(int A1, int A2, int A3) {
        int tempoNoPrimeiroAndar = A2 * 2 + A3 * 4;
        int tempoNoSegundoAndar = A1 * 2 + A3 * 2;
        int tempoNoTerceiroAndar = A1 * 4 + A2 * 2;

        return min(tempoNoPrimeiroAndar, tempoNoSegundoAndar, tempoNoTerceiroAndar);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int A1 = scanner.nextInt();
        int A2 = scanner.nextInt();
        int A3 = scanner.nextInt();

        System.out.println(tempoMinimo(A1, A2, A3));

        scanner.close();
    }
}