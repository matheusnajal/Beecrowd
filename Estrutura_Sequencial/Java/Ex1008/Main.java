package Ex1008;

import java.util.Scanner;

public class Main{

    public void main(){
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        float C = sc.nextFloat();
        sc.close();

        float salario = B * C;

        System.out.printf("NUMBER = %d\nSALARY = U$ %.2f\n", A, salario);
    }
    

    public static void main(String[] args) {
        Main m = new Main();
        m.main();
    }
}