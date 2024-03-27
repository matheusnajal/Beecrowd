package Ex1061;

import java.util.Scanner;
import java.time.LocalDateTime;
import java.time.Duration;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        String[] entradaInicio = scanner.nextLine().split(" ");
        int entradaInicioDia = Integer.parseInt(entradaInicio[1]);
        String[] entradaInicioTempo = scanner.nextLine().split(" : ");
        LocalDateTime inicio = LocalDateTime.of(2024, 4, entradaInicioDia,
                                                  Integer.parseInt(entradaInicioTempo[0]),
                                                  Integer.parseInt(entradaInicioTempo[1]),
                                                  Integer.parseInt(entradaInicioTempo[2]));

        String[] entradaFim = scanner.nextLine().split(" ");
        int entradaFimDia = Integer.parseInt(entradaFim[1]);
        String[] entradaFimTempo = scanner.nextLine().split(" : ");
        LocalDateTime fim = LocalDateTime.of(2024, 4, entradaFimDia,
                                              Integer.parseInt(entradaFimTempo[0]),
                                              Integer.parseInt(entradaFimTempo[1]),
                                              Integer.parseInt(entradaFimTempo[2]));

        Duration diferenca = Duration.between(inicio, fim);
        long dias = diferenca.toDays();
        long horas = diferenca.toHours() % 24;
        long minutos = diferenca.toMinutes() % 60;
        long segundos = diferenca.getSeconds() % 60;

        System.out.println(dias + " dia(s)");
        System.out.println(horas + " hora(s)");
        System.out.println(minutos + " minuto(s)");
        System.out.println(segundos + " segundo(s)");

        scanner.close();
    }
}
