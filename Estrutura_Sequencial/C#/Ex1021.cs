using System;

class Program
{
    static void Main(string[] args)
    {
        double valor = double.Parse(Console.ReadLine());

        int parteInteira = (int)valor;
        int parteDecimal = (int)Math.Round((valor - parteInteira) * 100);

        int notas100 = parteInteira / 100;
        parteInteira %= 100;

        int notas50 = parteInteira / 50;
        parteInteira %= 50;

        int notas20 = parteInteira / 20;
        parteInteira %= 20;

        int notas10 = parteInteira / 10;
        parteInteira %= 10;

        int notas5 = parteInteira / 5;
        parteInteira %= 5;

        int notas2 = parteInteira / 2;
        parteInteira %= 2;

        int moedas1 = parteInteira;

        int moedas50 = parteDecimal / 50;
        parteDecimal %= 50;

        int moedas25 = parteDecimal / 25;
        parteDecimal %= 25;

        int moedas10 = parteDecimal / 10;
        parteDecimal %= 10;

        int moedas5 = parteDecimal / 5;
        parteDecimal %= 5;

        int moedas1cent = parteDecimal;

        Console.WriteLine("NOTAS:");
        Console.WriteLine($"{notas100} nota(s) de R$ 100.00");
        Console.WriteLine($"{notas50} nota(s) de R$ 50.00");
        Console.WriteLine($"{notas20} nota(s) de R$ 20.00");
        Console.WriteLine($"{notas10} nota(s) de R$ 10.00");
        Console.WriteLine($"{notas5} nota(s) de R$ 5.00");
        Console.WriteLine($"{notas2} nota(s) de R$ 2.00");
        Console.WriteLine("MOEDAS:");
        Console.WriteLine($"{moedas1} moeda(s) de R$ 1.00");
        Console.WriteLine($"{moedas50} moeda(s) de R$ 0.50");
        Console.WriteLine($"{moedas25} moeda(s) de R$ 0.25");
        Console.WriteLine($"{moedas10} moeda(s) de R$ 0.10");
        Console.WriteLine($"{moedas5} moeda(s) de R$ 0.05");
        Console.WriteLine($"{moedas1cent} moeda(s) de R$ 0.01");
    }
}