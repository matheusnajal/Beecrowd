import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int total = 0, coelho = 0, rato = 0, sapo = 0;
        int c = sc.nextInt();

        for (int i = 0; i < c; i++) {
            int quantia = sc.nextInt();
            char tipo = sc.next().charAt(0);

            total += quantia;
            if (tipo == 'C') {
                coelho += quantia;
            } else if (tipo == 'R') {
                rato += quantia;
            } else if (tipo == 'S') {
                sapo += quantia;
            }
        }

        float porcentagem_coelho = (coelho * 100.0f) / total;
        float porcentagem_rato = (rato * 100.0f) / total;
        float porcentagem_sapo = (sapo * 100.0f) / total;

        System.out.println("Total: " + total + " cobaias");
        System.out.println("Total de coelhos: " + coelho);
        System.out.println("Total de ratos: " + rato);
        System.out.println("Total de sapos: " + sapo);
        System.out.printf("Percentual de coelhos: %.2f %%\n", porcentagem_coelho);
        System.out.printf("Percentual de ratos: %.2f %%\n", porcentagem_rato);
        System.out.printf("Percentual de sapos: %.2f %%\n", porcentagem_sapo);
    }
}