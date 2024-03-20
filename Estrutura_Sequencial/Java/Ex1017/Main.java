package Ex1017;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int tempoViagem = sc.nextInt();
        int velocidadeMedia = sc.nextInt();

        double distanciaPercorrida = tempoViagem * velocidadeMedia;

        double litrosNecessarios = distanciaPercorrida / 12.0;

        System.out.printf("%.3f\n", litrosNecessarios);

        sc.close();
    }
}