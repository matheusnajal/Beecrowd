using System;

class Program
{
    static void Main(string[] args)
    {
        int L = int.Parse(Console.ReadLine());
        int C = int.Parse(Console.ReadLine());

        int somaLinhasColunas = L + C;
        int corCantoInferiorDireito = somaLinhasColunas % 2 == 0 ? 1 : 0;

        Console.WriteLine(corCantoInferiorDireito);
    }
}