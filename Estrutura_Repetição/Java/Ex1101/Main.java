import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int x, y;

        while (true) {
            x = sc.nextInt();
            y = sc.nextInt();

            int menor = Math.min(x, y);
            int maior = Math.max(x, y);

            if (menor <= 0 || maior <= 0) {
                break;
            } else {
                int soma = 0;
                for (int i = menor; i < maior + 1; i++) {
                    soma += i;
                    System.out.print(i + " ");
                }
                System.out.println("Sum=" + soma);
            }
        }

        sc.close();
    }
}