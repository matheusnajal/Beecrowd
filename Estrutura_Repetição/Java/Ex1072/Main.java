import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int dentro = 0, fora = 0;
        int quant = sc.nextInt();

        for (int i = 0; i < quant; i++) {
            int v = sc.nextInt();

            if (v >= 10 && v <= 20) {
                dentro += 1;
            } else {
                fora += 1;
            }
        }

        System.out.println(dentro + " in");
        System.out.println(fora + " out");

        sc.close();
    }
}