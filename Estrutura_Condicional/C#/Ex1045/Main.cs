using System;

namespace Ex1045
{
    class Program
    {
        static void Main(string[] args)
        {
            double a, b, c;
            string[] inputs = Console.ReadLine().Split(' ');
            a = double.Parse(inputs[0]);
            b = double.Parse(inputs[1]);
            c = double.Parse(inputs[2]);

            double[] lados = { a, b, c };
            Array.Sort(lados);

            a = lados[2];
            b = lados[1];
            c = lados[0];

            if (a >= b + c)
            {
                Console.WriteLine("NAO FORMA TRIANGULO");
            }
            else
            {
                if (Math.Pow(a, 2) == Math.Pow(b, 2) + Math.Pow(c, 2))
                {
                    Console.WriteLine("TRIANGULO RETANGULO");
                }

                if (Math.Pow(a, 2) > Math.Pow(b, 2) + Math.Pow(c, 2))
                {
                    Console.WriteLine("TRIANGULO OBTUSANGULO");
                }

                if (Math.Pow(a, 2) < Math.Pow(b, 2) + Math.Pow(c, 2))
                {
                    Console.WriteLine("TRIANGULO ACUTANGULO");
                }

                if (a == b && b == c)
                {
                    Console.WriteLine("TRIANGULO EQUILATERO");
                }

                if (a == b && b != c || a == c && c != b || b == c && c != a)
                {
                    Console.WriteLine("TRIANGULO ISOSCELES");
                }
            }
        }
    }
}