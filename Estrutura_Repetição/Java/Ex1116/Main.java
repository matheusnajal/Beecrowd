import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();

        for (int i = 0; i < n; ++i) {
            int x = sc.nextInt();
            int y = sc.nextInt();

            if (y == 0) {
                System.out.println("divisao impossivel");
            } else if (x == 0) {
                System.out.println("0.0");
            } else {
                double valor = (double)x / y;
                System.out.printf("%.1f\n", valor);
            }
        }

        sc.close();
    }
}