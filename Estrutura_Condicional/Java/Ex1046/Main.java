package Ex1046;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int hora_inicio, hora_fim, duracao;
        hora_inicio = sc.nextInt();
        hora_fim = sc.nextInt();
        sc.close();

        if (hora_inicio < hora_fim){
            duracao = hora_fim - hora_inicio;
        } else {
            duracao = 24 - hora_inicio + hora_fim;
        }
    
        System.out.printf("O JOGO DUROU %d HORA(S)\n", duracao);
    }
}