using System;

class Program
{
    static void Main(string[] args)
    {
        int distancia = int.Parse(Console.ReadLine());

        int velocidadeCarroX = 60;
        int velocidadeCarroY = 90;

        int velocidadeRelativa = velocidadeCarroY - velocidadeCarroX;

        int tempoEmMinutos = (distancia * 60) / velocidadeRelativa;

        Console.WriteLine(tempoEmMinutos + " minutos");
    }
}