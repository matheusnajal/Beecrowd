package Ex1007;

import java.util.Scanner;

public class Main {

    public void main() {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = sc.nextInt();
        int D = sc.nextInt();
        sc.close();
        int diferenca = A * B - C * D;

        System.out.printf("DIFERENCA = %d\n", diferenca);
    }

    public static void main(String[] args) {
        Main m = new Main();
        m.main();
    }
}