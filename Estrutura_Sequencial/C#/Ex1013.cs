using System;

class Program
{
    static void Main(string[] args)
    {
        string[] valores = Console.ReadLine().Split();
        int a = int.Parse(valores[0]);
        int b = int.Parse(valores[1]);
        int c = int.Parse(valores[2]);

        int maiorAB = (a + b + Math.Abs(a - b)) / 2;

        int maior = (maiorAB + c + Math.Abs(maiorAB - c)) / 2;

        Console.WriteLine($"{maior} eh o maior");
    }
}