import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int v = sc.nextInt();

        for (int i = 0; i < 10000; i++) {
            if (i % v == 2) {
                System.out.println(i);
            }
        }

        sc.close();
    }
}