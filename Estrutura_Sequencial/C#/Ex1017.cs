using System;

class Program
{
    static void Main(string[] args)
    {
        int tempoViagem = int.Parse(Console.ReadLine());
        int velocidadeMedia = int.Parse(Console.ReadLine());

        double distancia = tempoViagem * velocidadeMedia;

        double litrosCombustivel = distancia / 12.0;

        Console.WriteLine(litrosCombustivel.ToString("F3"));
    }
}