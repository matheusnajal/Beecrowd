using System;

class MainClass {
    static void Main(string[] args) {
        int n = 7;
        for (int i = 1; i < 10; i += 2) {
            for (int j = n; j > n - 3; j--) {
                Console.WriteLine($"I={i} J={j}");
            }
            n += 2;
        }
    }
}