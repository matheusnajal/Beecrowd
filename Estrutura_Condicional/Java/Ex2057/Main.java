package Ex2057;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int S, T, F;
        S = scanner.nextInt();
        T = scanner.nextInt();
        F = scanner.nextInt();

        int arrivalTime = S + T + F;
        if (arrivalTime >= 24) {
            arrivalTime -= 24;
        } else if (arrivalTime < 0) {
            arrivalTime += 24;
        }

        System.out.println(arrivalTime);

        scanner.close();
    }
}