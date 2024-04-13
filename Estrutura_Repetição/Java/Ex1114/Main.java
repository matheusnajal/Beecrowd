import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int senha = 2002;

        while (true) {
            int novaSenha = sc.nextInt();

            if (senha == novaSenha) {
                System.out.println("Acesso Permitido");
                break;
            } else {
                System.out.println("Senha Invalida");
            }
        }

        sc.close();
    }
}