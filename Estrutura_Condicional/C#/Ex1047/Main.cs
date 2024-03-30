using System;

namespace Ex1047
{
    class Program
    {
        static void Main(string[] args)
        {
            int hora_inicio, minuto_inicio, hora_fim, minuto_fim;
            string[] inputs = Console.ReadLine().Split(' ');
            hora_inicio = int.Parse(inputs[0]);
            minuto_inicio = int.Parse(inputs[1]);
            hora_fim = int.Parse(inputs[2]);
            minuto_fim = int.Parse(inputs[3]);

            int inicio_em_minutos = hora_inicio * 60 + minuto_inicio;
            int fim_em_minutos = hora_fim * 60 + minuto_fim;
            int duracao_em_minutos = fim_em_minutos - inicio_em_minutos;

            if (duracao_em_minutos <= 0)
            {
                duracao_em_minutos += 24 * 60;
            }

            int duracao_horas = duracao_em_minutos / 60;
            int duracao_minutos = duracao_em_minutos % 60;

            Console.WriteLine("O JOGO DUROU " + duracao_horas + " HORA(S) E " + duracao_minutos + " MINUTO(S)");
        }
    }
}