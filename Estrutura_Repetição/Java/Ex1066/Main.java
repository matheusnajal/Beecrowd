import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int valor, positivo = 0, negativo = 0, impar = 0, par = 0;

        for (int i = 0; i <= 4; i++) {
            valor = sc.nextInt();

            if (valor % 2 == 0) {
                par += 1;
            } else {
                impar += 1;
            }

            if (valor > 0) {
                positivo += 1;
            } else if (valor < 0) {
                negativo += 1;
            }
        }

        System.out.println(par + " valor(es) par(es)");
        System.out.println(impar + " valor(es) impar(es)");
        System.out.println(positivo + " valor(es) positivo(s)");
        System.out.println(negativo + " valor(es) negativo(s)");

        sc.close();
    }
}