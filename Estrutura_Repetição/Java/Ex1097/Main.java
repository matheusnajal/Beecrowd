public class Main {
    public static void main(String[] args) {
        int n = 7;
        for (int i = 1; i < 10; i += 2) {
            for (int j = n; j > n - 3; j--) {
                System.out.printf("I=%d J=%d\n", i, j);
            }
            n += 2;
        }
    }
}