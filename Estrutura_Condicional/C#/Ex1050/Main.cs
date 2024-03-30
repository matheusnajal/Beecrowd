using System;

namespace Ex1050
{
    class Program
    {
        static void Main(string[] args)
        {
            int D;
            D = int.Parse(Console.ReadLine());

            if (D == 61)
            {
                Console.WriteLine("Brasilia");
            }
            else if (D == 71)
            {
                Console.WriteLine("Salvador");
            }
            else if (D == 11)
            {
                Console.WriteLine("Sao Paulo");
            }
            else if (D == 21)
            {
                Console.WriteLine("Rio de Janeiro");
            }
            else if (D == 32)
            {
                Console.WriteLine("Juiz de Fora");
            }
            else if (D == 19)
            {
                Console.WriteLine("Campinas");
            }
            else if (D == 27)
            {
                Console.WriteLine("Vitoria");
            }
            else if (D == 31)
            {
                Console.WriteLine("Belo Horizonte");
            }
            else
            {
                Console.WriteLine("DDD nao cadastrado");
            }
        }
    }
}
