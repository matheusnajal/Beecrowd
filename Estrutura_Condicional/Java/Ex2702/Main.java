package Ex2702;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] disponiveis = new int[3];
        int[] requisitadas = new int[3];

        for (int i = 0; i < 3; ++i) {
            disponiveis[i] = scanner.nextInt();
        }

        for (int i = 0; i < 3; ++i) {
            requisitadas[i] = scanner.nextInt();
        }

        int naoAtendidos = 0;

        for (int i = 0; i < 3; ++i) {
            naoAtendidos += (requisitadas[i] - disponiveis[i]) > 0 ? (requisitadas[i] - disponiveis[i]) : 0;
        }

        System.out.println(naoAtendidos);
        scanner.close();
    }
}