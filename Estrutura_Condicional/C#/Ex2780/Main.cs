using System;

namespace Ex2780
{
    class Program
    {
        static void Main(string[] args)
        {
            int D = int.Parse(Console.ReadLine());

            if (D <= 800)
            {
                Console.WriteLine("1");
            }
            else if (D <= 1400)
            {
                Console.WriteLine("2");
            }
            else
            {
                Console.WriteLine("3");
            }
        }
    }
}