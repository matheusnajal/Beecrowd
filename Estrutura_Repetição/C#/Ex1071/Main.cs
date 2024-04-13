using System;

class MainClass {
    public static void Main(string[] args) {
        int x, y;
        x = Convert.ToInt32(Console.ReadLine());
        y = Convert.ToInt32(Console.ReadLine());

        int menor = Math.Min(x, y);
        int maior = Math.Max(x, y);

        if (menor % 2 == 0)
            menor += 1;
        else
            menor += 2;

        int soma = 0;
        for (int i = menor; i < maior; i += 2) {
            soma += i;
        }

        Console.WriteLine(soma);
    }
}