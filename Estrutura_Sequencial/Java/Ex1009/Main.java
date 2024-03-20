package Ex1009;

import java.util.Scanner;

public class Main{

    public void main(){        
        
        Scanner sc = new Scanner(System.in); 
        String A = sc.nextLine();
        double B = sc.nextDouble();
        double C = sc.nextDouble();
        sc.close();

        double salario = B + (C * 0.15f);

        System.out.printf("TOTAL = R$ %.2f\n", salario);
    }
    

    public static void main(String[] args) {
        Main m = new Main();
        m.main();
    }
}