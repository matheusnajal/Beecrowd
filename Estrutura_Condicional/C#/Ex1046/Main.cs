using System;

namespace Ex1046
{
    class Program
    {
        static void Main(string[] args)
        {
            int hora_inicio, hora_fim, duracao;
            string[] inputs = Console.ReadLine().Split(' ');
            hora_inicio = int.Parse(inputs[0]);
            hora_fim = int.Parse(inputs[1]);

            if (hora_inicio < hora_fim)
            {
                duracao = hora_fim - hora_inicio;
            }
            else
            {
                duracao = 24 - hora_inicio + hora_fim;
            }

            Console.WriteLine("O JOGO DUROU " + duracao + " HORA(S)");
        }
    }
}