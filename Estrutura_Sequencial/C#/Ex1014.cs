using System;

class Program
{
    static void Main(string[] args)
    {
        int distanciaTotal = int.Parse(Console.ReadLine());
        double combustivelGasto = double.Parse(Console.ReadLine());

        double consumoMedio = distanciaTotal / combustivelGasto;

        Console.WriteLine(consumoMedio.ToString("F3") + " km/l");
    }
}