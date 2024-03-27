package Ex1828;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        scanner.nextLine();
        scanner.close();

        String[][] regras = {
            {"tesoura", "papel"},
            {"papel", "pedra"},
            {"pedra", "lagarto"},
            {"lagarto", "Spock"},
            {"Spock", "tesoura"},
            {"tesoura", "lagarto"},
            {"lagarto", "papel"},
            {"papel", "Spock"},
            {"Spock", "pedra"},
            {"pedra", "tesoura"},
            {"tesoura", "Spock"},
            {"Spock", "papel"},
            {"papel", "tesoura"},
            {"tesoura", "pedra"},
            {"pedra", "papel"},
            {"papel", "lagarto"},
            {"lagarto", "pedra"},
            {"pedra", "Spock"},
            {"Spock", "lagarto"},
            {"lagarto", "tesoura"}
        };

        for (int t = 1; t <= T; t++) {
            String escolhaSheldon = scanner.next();
            String escolhaRaj = scanner.next();

            if (escolhaSheldon.equals(escolhaRaj)) {
                System.out.printf("Caso #%d: De novo!\n", t);
            } else {
                String resultado = null;
                for (String[] regra : regras) {
                    if (regra[0].equals(escolhaSheldon) && regra[1].equals(escolhaRaj)) {
                        resultado = "Bazinga!";
                        break;
                    } else if (regra[0].equals(escolhaRaj) && regra[1].equals(escolhaSheldon)) {
                        resultado = "Raj trapaceou!";
                        break;
                    }
                }
                System.out.printf("Caso #%d: %s\n", t, resultado);
            }
        }
    }
}
