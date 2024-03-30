using System;

namespace Ex1052
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] meses = {
                "January", "February", "March", "April", "May", "June", 
                "July", "August", "September", "October", "November", "December"
            };

            int mes = int.Parse(Console.ReadLine());

            if (mes >= 1 && mes <= 12)
            {
                Console.WriteLine(meses[mes - 1]);
            }
            else
            {
                Console.WriteLine("Valor inválido. Por favor, insira um número entre 1 e 12.");
            }
        }
    }
}