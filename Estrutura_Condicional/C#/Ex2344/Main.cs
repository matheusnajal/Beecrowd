using System;

namespace Ex2344
{
    class Program
    {
        static void Main(string[] args)
        {
            int nota;
            nota = Convert.ToInt32(Console.ReadLine());

            if (nota == 0)
            {
                Console.WriteLine("E");
            }
            else if (nota <= 35)
            {
                Console.WriteLine("D");
            }
            else if (nota <= 60)
            {
                Console.WriteLine("C");
            }
            else if (nota <= 85)
            {
                Console.WriteLine("B");
            }
            else if (nota <= 100)
            {
                Console.WriteLine("A");
            }
        }
    }
}