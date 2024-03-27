package Ex2787;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int L = scanner.nextInt();
        int C = scanner.nextInt();

        int color = (L + C) % 2 == 0 ? 1 : 0;

        System.out.println(color);
        scanner.close();
    }
}