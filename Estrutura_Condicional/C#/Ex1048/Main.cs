using System;

namespace Ex1048
{
    class Program
    {
        static void Main(string[] args)
        {
            double salario, salarioF, reajuste;
            salario = double.Parse(Console.ReadLine());

            if (salario >= 0 && salario <= 400)
            {
                reajuste = salario * 0.15;
                salarioF = salario + reajuste;
                Console.WriteLine($"Novo salario: {salarioF:F2}");
                Console.WriteLine($"Reajuste ganho: {reajuste:F2}");
                Console.WriteLine("Em percentual: 15 %");
            }
            else if (salario <= 800)
            {
                reajuste = salario * 0.12;
                salarioF = salario + reajuste;
                Console.WriteLine($"Novo salario: {salarioF:F2}");
                Console.WriteLine($"Reajuste ganho: {reajuste:F2}");
                Console.WriteLine("Em percentual: 12 %");
            }
            else if (salario <= 1200)
            {
                reajuste = salario * 0.10;
                salarioF = salario + reajuste;
                Console.WriteLine($"Novo salario: {salarioF:F2}");
                Console.WriteLine($"Reajuste ganho: {reajuste:F2}");
                Console.WriteLine("Em percentual: 10 %");
            }
            else if (salario <= 2000)
            {
                reajuste = salario * 0.07;
                salarioF = salario + reajuste;
                Console.WriteLine($"Novo salario: {salarioF:F2}");
                Console.WriteLine($"Reajuste ganho: {reajuste:F2}");
                Console.WriteLine("Em percentual: 7 %");
            }
            else
            {
                reajuste = salario * 0.04;
                salarioF = salario + reajuste;
                Console.WriteLine($"Novo salario: {salarioF:F2}");
                Console.WriteLine($"Reajuste ganho: {reajuste:F2}");
                Console.WriteLine("Em percentual: 4 %");
            }
        }
    }
}