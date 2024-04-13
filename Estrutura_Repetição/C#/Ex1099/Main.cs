using System;

class MainClass {
    static void Main(string[] args) {
        int n = Convert.ToInt32(Console.ReadLine());

        for (int i = 0; i < n; i++) {
            int soma = 0, x, y;
            string[] inputs = Console.ReadLine().Split();
            x = Convert.ToInt32(inputs[0]);
            y = Convert.ToInt32(inputs[1]);

            int menor = Math.Min(x, y);
            int maior = Math.Max(x, y);

            for (int j = menor + 1; j < maior; j++) {
                if (j % 2 != 0) {
                    soma += j;
                }
            }
            Console.WriteLine(soma);
        }
    }
}