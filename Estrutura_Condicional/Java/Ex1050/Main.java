package Ex1050;

import java.util.Scanner;

public interface Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int D = sc.nextInt();
        sc.close();

        if (D == 61) {
            System.out.printf("Brasilia\n");
        } else if (D == 71) {
            System.out.printf("Salvador\n");
        } else if (D == 11) {
            System.out.printf("Sao Paulo\n");
        } else if (D == 21) {
            System.out.printf("Rio de Janeiro\n");
        } else if (D == 32) {
            System.out.printf("Juiz de Fora\n");
        } else if (D == 19) {
            System.out.printf("Campinas\n");
        } else if (D == 27) {
            System.out.printf("Vitoria\n");
        } else if (D == 31) {
            System.out.printf("Belo Horizonte\n");
        } else {
            System.out.printf("DDD nao cadastrado\n");
        }
        
    }
}