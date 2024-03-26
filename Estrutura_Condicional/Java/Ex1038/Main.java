package Ex1038;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int cod, qnt;
        cod = sc.nextInt();
        qnt = sc.nextInt();
        sc.close();

        if (cod == 1){
            System.out.printf("Total: R$ %.2f\n", qnt * 4.00);
        } else if (cod == 2){
            System.out.printf("Total: R$ %.2f\n", qnt * 4.50);
        } else if (cod == 3){
            System.out.printf("Total: R$ %.2f\n", qnt * 5.00);
        } else if (cod == 4){
            System.out.printf("Total: R$ %.2f\n", qnt * 2.00);
        } else if (cod == 5){
            System.out.printf("Total: R$ %.2f\n", qnt * 1.50);
        }
    }
}