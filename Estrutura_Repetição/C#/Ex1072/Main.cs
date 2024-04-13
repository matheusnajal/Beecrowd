using System;

class MainClass {
    public static void Main(string[] args) {
        int dentro = 0, fora = 0;
        int quant = Convert.ToInt32(Console.ReadLine());

        for (int i = 0; i < quant; i++) {
            int v = Convert.ToInt32(Console.ReadLine());

            if (v >= 10 && v <= 20) {
                dentro += 1;
            } else {
                fora += 1;
            }
        }

        Console.WriteLine(dentro + " in");
        Console.WriteLine(fora + " out");
    }
}