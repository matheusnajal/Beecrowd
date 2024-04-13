import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int v = sc.nextInt();

        for (int i = 0; i < v; i++) {
            float n1, n2, n3, media;

            n1 = sc.nextFloat();
            n2 = sc.nextFloat();
            n3 = sc.nextFloat();

            media = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

            System.out.printf("%.1f%n", media);
        }

        sc.close();
    }
}