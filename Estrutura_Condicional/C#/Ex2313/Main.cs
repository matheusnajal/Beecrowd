using System;

namespace Ex2313
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] input = Console.ReadLine().Split(' ');
            int A = int.Parse(input[0]);
            int B = int.Parse(input[1]);
            int C = int.Parse(input[2]);

            if (A + B > C && B + C > A && C + A > B)
            {
                if (A == B && B == C)
                    Console.WriteLine("Valido-Equilatero");
                else if (A != B && B != C && A != C)
                    Console.WriteLine("Valido-Escaleno");
                else
                    Console.WriteLine("Valido-Isoceles");

                if (Math.Pow(A, 2) == Math.Pow(B, 2) + Math.Pow(C, 2) || 
                    Math.Pow(B, 2) == Math.Pow(A, 2) + Math.Pow(C, 2) || 
                    Math.Pow(C, 2) == Math.Pow(A, 2) + Math.Pow(B, 2))
                    Console.WriteLine("Retangulo: S");
                else
                    Console.WriteLine("Retangulo: N");
            }
            else
            {
                Console.WriteLine("Invalido");
            }
        }
    }
}