package Ex1005;

import java.util.Scanner;

public class Main {
    
    public void main(){

        Scanner sc = new Scanner(System.in);
        float A = sc.nextFloat();
        float B = sc.nextFloat();
        float media = (A * 3.5f + B * 7.5f) / 11;
        sc.close();
        System.out.printf("MEDIA = %.5f\n", media);
    }
    
    public static void main(String[] args) {
        Main m = new Main();
        m.main();
    }
}