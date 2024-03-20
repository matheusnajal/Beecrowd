package Ex1018;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int valor = sc.nextInt();
        int notas100 = valor / 100;
        int resto = valor % 100;
        int notas50 = resto / 50;
        resto %= 50;
        int notas20 = resto / 20;
        resto %= 20;
        int notas10 = resto / 10;
        resto %= 10;
        int notas5 = resto / 5;
        resto %= 5;
        int notas2 = resto / 2;
        resto %= 2;
        int notas1 = resto;

        System.out.printf(
                "%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",
                valor, notas100, notas50, notas20, notas10, notas5, notas2, notas1);

        sc.close();
    }
}