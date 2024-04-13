using System;

class MainClass {
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());

        for (int i = 0; i < n; ++i) {
            string[] inputs = Console.ReadLine().Split();
            int x = int.Parse(inputs[0]);
            int y = int.Parse(inputs[1]);

            if (y == 0) {
                Console.WriteLine("divisao impossivel");
            } else if (x == 0) {
                Console.WriteLine("0.0");
            } else {
                double valor = (double)x / y;
                Console.WriteLine(valor.ToString("0.0"));
            }
        }
    }
}