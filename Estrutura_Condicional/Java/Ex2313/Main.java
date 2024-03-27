package Ex2313;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int A, B, C;
        A = scanner.nextInt();
        B = scanner.nextInt();
        C = scanner.nextInt();

        if (A + B > C && B + C > A && C + A > B) {
            if (A == B && B == C)
                System.out.println("Valido-Equilatero");
            else if (A != B && B != C && A != C)
                System.out.println("Valido-Escaleno");
            else
                System.out.println("Valido-Isoceles");

            if (Math.pow(A, 2) == Math.pow(B, 2) + Math.pow(C, 2) || Math.pow(B, 2) == Math.pow(A, 2) + Math.pow(C, 2) || Math.pow(C, 2) == Math.pow(A, 2) + Math.pow(B, 2))
                System.out.println("Retangulo: S");
            else
                System.out.println("Retangulo: N");
        } else {
            System.out.println("Invalido");
        }

        scanner.close();
    }
}