using System;

class MainClass {
    static void Main(string[] args) {
        for (int i = 0; i <= 20; i += 2) {
            double i_double = i / 10.0;
            for (int j = 1; j <= 3; j++) {
                if (i_double == 0 || i_double == 1 || i_double == 2) {
                    Console.WriteLine($"I={(int)i_double} J={(int)(j + i_double)}");
                } else {
                    Console.WriteLine($"I={i_double:F1} J={(j + i_double):F1}");
                }
            }
        }
    }
}