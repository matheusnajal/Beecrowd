using System;

class Program
{
    static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());

        for (int i = 0; i < N; i++)
        {
            string[] valores = Console.ReadLine().Split(' ');

            double valor1 = double.Parse(valores[0]);
            double valor2 = double.Parse(valores[1]);
            double valor3 = double.Parse(valores[2]);

            double mediaPonderada = (valor1 * 2 + valor2 * 3 + valor3 * 5) / 10.0;

            Console.WriteLine(mediaPonderada.ToString("F1"));
        }
    }
}