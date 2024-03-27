package Ex1983;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int matricula, melhorMatricula = 0;
        double nota, melhorNota = -1.0;

        for (int i = 0; i < n; i++) {
            matricula = scanner.nextInt();
            nota = scanner.nextDouble();
            if (nota > melhorNota) {
                melhorNota = nota;
                melhorMatricula = matricula;
            }
        }

        if (melhorNota >= 8.0)
            System.out.println(melhorMatricula);
        else
            System.out.println("Minimum note not reached");
        
        scanner.close();
    }
}