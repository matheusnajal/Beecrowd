import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        float media = 0;
        int notaValida = 0;

        while (true) {
            float nota = sc.nextFloat();

            if (nota >= 0 && nota <= 10) {
                notaValida++;
                media += nota;
                if (notaValida == 2) {
                    System.out.printf("media = %.2f\n", media / 2);
                    break;
                }
            } else {
                System.out.println("nota invalida");
            }
        }

        sc.close();
    }
}