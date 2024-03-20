package Ex1019;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int segundos = sc.nextInt();

        int horas = segundos / 3600;
        segundos %= 3600;
        int minutos = segundos / 60;
        segundos %= 60;

        System.out.printf("%d:%d:%d\n", horas, minutos, segundos);

        sc.close();
    }
}