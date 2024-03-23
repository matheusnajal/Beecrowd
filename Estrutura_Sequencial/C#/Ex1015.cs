using System;

class Program
{
    static void Main(string[] args)
    {
        string[] valoresP1 = Console.ReadLine().Split(' ');
        string[] valoresP2 = Console.ReadLine().Split(' ');

        double x1 = double.Parse(valoresP1[0]);
        double y1 = double.Parse(valoresP1[1]);
        double x2 = double.Parse(valoresP2[0]);
        double y2 = double.Parse(valoresP2[1]);

        double distancia = Math.Sqrt(Math.Pow(x2 - x1, 2) + Math.Pow(y2 - y1, 2));

        Console.WriteLine(distancia.ToString("F4"));
    }
}