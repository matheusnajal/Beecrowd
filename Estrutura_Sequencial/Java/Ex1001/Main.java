package Ex1001;

import java.util.Scanner;

public class Main {

    Scanner sc = new Scanner(System.in);

    public void main(){
        int a = sc.nextInt();
        int b = sc.nextInt();

        System.out.printf("SOMA = %d \n", (a+b));
    }
    public static void main(String[] args) {
        Main m = new Main();
        m.main();
    }
}