package Ex1006;

import java.util.Scanner;

public class Main {
    
    public void main(){

        Scanner sc = new Scanner(System.in);
        float A = sc.nextFloat();
        float B = sc.nextFloat();
        float C = sc.nextFloat();
        float media = (A * 2 + B * 3 + C * 5) / 10;
        sc.close();
        System.out.printf("MEDIA = %.1f\n", media);
    }
    
    public static void main(String[] args) {
        Main m = new Main();
        m.main();
    }
}