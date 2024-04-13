import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x = sc.nextInt();
        int y = sc.nextInt();

        int menor = Math.min(x, y);
        int maior = Math.max(x, y);

        if (menor % 2 == 0)
            menor += 1;
        else
            menor += 2;

        int soma = 0;
        for (int i = menor; i < maior; i += 2) {
            soma += i;
        }

        System.out.println(soma);

        sc.close();
    }
}