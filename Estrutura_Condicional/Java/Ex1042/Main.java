package Ex1042;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a, b ,c;
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        sc.close();

        int menor = Math.min(a, b);
        int menorF = Math.min(menor, c);
        int maior = Math.max(a, b);
        int maiorF = Math.max(maior, c);
        int meio = (a + b + c) - menorF - maiorF;

        System.out.printf("%d\n%d\n%d\n", menorF, meio, maiorF);
        System.out.println();
        System.out.printf("%d\n%d\n%d\n", a, b, c);
    }
}