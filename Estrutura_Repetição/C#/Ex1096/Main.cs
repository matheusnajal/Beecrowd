using System;

class MainClass {
    static void Main(string[] args) {
        for (int i = 1; i < 10; i += 2) {
            for (int j = 7; j > 4; j -= 1) {
                Console.WriteLine($"I={i} J={j}");
            }
        }
    }
}