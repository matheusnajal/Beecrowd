package Ex1044;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a, b;
        a = sc.nextInt();
        b = sc.nextInt();
        sc.close();

        int maior = Math.max(a, b);
        int menor = Math.min(a, b);

        if (maior % menor == 0){
            System.out.printf("Sao Multiplos\n");
        } else {
            System.out.printf("Nao sao Multiplos\n");
        }
    }
}