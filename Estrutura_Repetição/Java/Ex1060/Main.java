import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int positivos = 0;
        float valor = 0;

        for (int i = 0; i <= 5; i++){
            valor = sc.nextFloat();
            if (valor > 0){
                positivos += 1;
            }
        }
        System.out.printf("%d valores positivos\n", positivos);
    }
}