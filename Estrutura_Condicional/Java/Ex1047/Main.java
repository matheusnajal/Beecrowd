package Ex1047;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int hora_inicio, minuto_inicio, hora_fim, minuto_fim;
        hora_inicio = sc.nextInt();
        minuto_inicio = sc.nextInt();
        hora_fim = sc.nextInt();
        minuto_fim = sc.nextInt();
        sc.close();

        int inicio_em_minutos = hora_inicio * 60 + minuto_inicio;
        int fim_em_minutos = hora_fim * 60 + minuto_fim;
        int duracao_em_minutos = fim_em_minutos - inicio_em_minutos;

        if (duracao_em_minutos <= 0){
            duracao_em_minutos += 24 * 60;
        }
    
        int duracao_horas = duracao_em_minutos / 60;
        int duracao_minutos = duracao_em_minutos % 60;
    
        System.out.printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_horas, duracao_minutos);
    }
}