package Ex1051;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        float salario = sc.nextFloat();
        sc.close();


    if (salario <= 2000.00) {
        System.out.printf("Isento\n");
    } else {
        float imposto;
        if (salario <= 3000.00f) {
            imposto = (salario - 2000.00f) * 0.08f;
        } else if (salario <= 4500.00) {
            imposto = 1000.00f * 0.08f + (salario - 3000.00f) * 0.18f;
        } else {
            imposto = 1000.00f * 0.08f + 1500.00f * 0.18f + (salario - 4500.00f) * 0.28f;
        }

        System.out.printf("R$ %.2f\n", imposto);
        }
    }
}