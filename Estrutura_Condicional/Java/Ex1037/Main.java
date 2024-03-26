package Ex1037;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        float v;
        v = sc.nextFloat();
        sc.close();

        if (v >= 0 && v <= 25){
            System.out.println("Intervalo [0,25]");
        } else if (v > 25 && v <= 50){
            System.out.println("Intervalo (25,50]");
        } else if (v > 75 && v <= 100){
            System.out.println("Intervalo (75,100]");
        } else {
            System.out.println("Fora de intervalo");
        }
    }
}