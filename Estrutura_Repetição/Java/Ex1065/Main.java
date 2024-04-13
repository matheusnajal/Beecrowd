import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int valor = 0;
        int pares = 0;

        for (int i = 0; i <= 4; i++) {
            valor = sc.nextInt();

            if (valor % 2 == 0) {
                pares += 1;
            }
        }
        System.out.println(pares + " valores pares");
        
        sc.close();
    }
}