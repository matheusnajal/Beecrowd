package Ex1052;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        String[] meses = {
            "January", "February", "March", "April", "May", "June", 
            "July", "August", "September", "October", "November", "December"
        };

        int mes = scanner.nextInt();
        scanner.close()
;
        if (mes >= 1 && mes <= 12) {
            System.out.println(meses[mes - 1]);
        } else {
            System.out.println("Valor inválido. Por favor, insira um número entre 1 e 12.");
        }
    }
}