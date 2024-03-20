package Ex1020;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int idadeDias = sc.nextInt();

        int anos = idadeDias / 365;
        idadeDias %= 365;
        int meses = idadeDias / 30;
        idadeDias %= 30;
        int dias = idadeDias;

        System.out.println(anos + " ano(s)");
        System.out.println(meses + " mes(es)");
        System.out.println(dias + " dia(s)");

        sc.close();
    }
}