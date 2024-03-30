using System;

namespace Ex2670
{
    class Program
    {
        public static int Min(int a, int b, int c)
        {
            if (a <= b && a <= c)
                return a;
            else if (b <= a && b <= c)
                return b;
            else
                return c;
        }

        public static int TempoMinimo(int A1, int A2, int A3)
        {
            int tempoNoPrimeiroAndar = A2 * 2 + A3 * 4;
            int tempoNoSegundoAndar = A1 * 2 + A3 * 2;
            int tempoNoTerceiroAndar = A1 * 4 + A2 * 2;

            return Min(tempoNoPrimeiroAndar, tempoNoSegundoAndar, tempoNoTerceiroAndar);
        }

        static void Main(string[] args)
        {
            int A1 = Convert.ToInt32(Console.ReadLine());
            int A2 = Convert.ToInt32(Console.ReadLine());
            int A3 = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine(TempoMinimo(A1, A2, A3));
        }
    }
}