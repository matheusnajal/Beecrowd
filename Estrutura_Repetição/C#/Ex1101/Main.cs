using System;

class MainClass {
    static void Main(string[] args) {
        int x, y;

        while (true) {
            string[] inputs = Console.ReadLine().Split();
            x = Convert.ToInt32(inputs[0]);
            y = Convert.ToInt32(inputs[1]);

            int menor = Math.Min(x, y);
            int maior = Math.Max(x, y);

            if (menor <= 0 || maior <= 0) {
                break;
            } else {
                int soma = 0;
                for (int i = menor; i < maior + 1; i++) {
                    soma += i;
                    Console.Write(i + " ");
                }
                Console.WriteLine("Sum=" + soma);
            }
        }
    }
}