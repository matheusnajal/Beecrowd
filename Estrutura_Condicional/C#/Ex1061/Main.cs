using System;

namespace Ex1061
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] entradaInicio = Console.ReadLine().Split(' ');
            int entradaInicioDia = int.Parse(entradaInicio[1]);
            string[] entradaInicioTempo = Console.ReadLine().Split(':');
            DateTime inicio = new DateTime(2024, 4, entradaInicioDia,
                                            int.Parse(entradaInicioTempo[0]),
                                            int.Parse(entradaInicioTempo[1]),
                                            int.Parse(entradaInicioTempo[2]));

            string[] entradaFim = Console.ReadLine().Split(' ');
            int entradaFimDia = int.Parse(entradaFim[1]);
            string[] entradaFimTempo = Console.ReadLine().Split(':');
            DateTime fim = new DateTime(2024, 4, entradaFimDia,
                                        int.Parse(entradaFimTempo[0]),
                                        int.Parse(entradaFimTempo[1]),
                                        int.Parse(entradaFimTempo[2]));

            TimeSpan diferenca = fim - inicio;
            long dias = diferenca.Days;
            long horas = diferenca.Hours;
            long minutos = diferenca.Minutes;
            long segundos = diferenca.Seconds;

            Console.WriteLine(dias + " dia(s)");
            Console.WriteLine(horas + " hora(s)");
            Console.WriteLine(minutos + " minuto(s)");
            Console.WriteLine(segundos + " segundo(s)");
        }
    }
}