using System;

namespace Ex1051
{
    class Program
    {
        static void Main(string[] args)
        {
            float salario;
            salario = float.Parse(Console.ReadLine());

            if (salario <= 2000.00)
            {
                Console.WriteLine("Isento");
            }
            else
            {
                float imposto;
                if (salario <= 3000.00f)
                {
                    imposto = (salario - 2000.00f) * 0.08f;
                }
                else if (salario <= 4500.00)
                {
                    imposto = 1000.00f * 0.08f + (salario - 3000.00f) * 0.18f;
                }
                else
                {
                    imposto = 1000.00f * 0.08f + 1500.00f * 0.18f + (salario - 4500.00f) * 0.28f;
                }

                Console.WriteLine("R$ " + imposto.ToString("F2"));
            }
        }
    }
}