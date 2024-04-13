import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int[] valores = new int[100];
        int maior = 0;
        int posicao = 0;

        for (int i = 0; i < 100; i++) {
            valores[i] = sc.nextInt();

            if (valores[i] > maior) {
                maior = valores[i];
                posicao = i + 1;
            }
        }

        System.out.println(maior);
        System.out.println(posicao);
    }
}