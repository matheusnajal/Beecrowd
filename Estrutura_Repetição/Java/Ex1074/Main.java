import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int valores = sc.nextInt();

        for (int i = 0; i < valores; i++) {
            int v = sc.nextInt();
            if (v != 0) {
                if (v % 2 == 0){
                    if (v > 0) {
                        System.out.println("EVEN POSITIVE");
                    } else {
                        System.out.println("EVEN NEGATIVE");
                    }
                } else {
                    if (v > 0) {
                        System.out.println("ODD POSITIVE");
                    } else {
                        System.out.println("ODD NEGATIVE");
                    }
                }
            } else {
                System.out.println("NULL");
            }
        }

        sc.close();
    }
}