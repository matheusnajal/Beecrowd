public class Main {
    public static void main(String[] args) {
        for (int i = 0; i <= 20; i += 2) {
            double i_double = i / 10.0;
            for (int j = 1; j <= 3; j++) {
                if (i_double == 0 || i_double == 1 || i_double == 2) {
                    System.out.printf("I=%d J=%d\n", (int)i_double, (int)(j + i_double));
                } else {
                    System.out.printf("I=%.1f J=%.1f\n", i_double, j + i_double);
                }
            }
        }
    }
}