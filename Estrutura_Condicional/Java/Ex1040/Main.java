package Ex1040;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        float n1, n2, n3, n4, media;
        n1 = sc.nextFloat();
        n2 = sc.nextFloat();
        n3 = sc.nextFloat();
        n4 = sc.nextFloat();
        

        media = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
        System.out.printf("Media: %.1f\n", media);

        if (media >= 7){
            System.out.println("Aluno aprovado.");
        } else if (media < 5){
            System.out.println("Aluno reprovado.");
        } else if (media >= 5 && media <= 6.9){
            System.out.println("Aluno em exame.");
            float ne = sc.nextFloat();
            System.out.printf("Nota do exame: %.1f\n", ne);
            media = (media + ne) / 2;
            
            if (media >= 5){
                System.out.println("Aluno aprovado.");
                System.out.printf("Media final: %.1f\n", media);
            } else {
                System.out.println("Aluno reprovado.");
                System.out.printf("Media final: %.1f\n", media);
            } 
            sc.close();
        }
    }
}