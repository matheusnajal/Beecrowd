import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            int soma = 0, x, y;
            x = sc.nextInt();
            y = sc.nextInt();

            int menor = Math.min(x, y);
            int maior = Math.max(x, y);

            for (int j = menor + 1; j < maior; j++) {
                if (j % 2 != 0) {
                    soma += j;
                }
            }
            System.out.println(soma);
        }
        sc.close();
    }
}