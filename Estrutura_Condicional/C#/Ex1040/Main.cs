using System;

class Program
{
    static void Main(string[] args)
    {
        string[] notas = Console.ReadLine().Split(' ');
        double N1 = double.Parse(notas[0]);
        double N2 = double.Parse(notas[1]);
        double N3 = double.Parse(notas[2]);
        double N4 = double.Parse(notas[3]);

        double media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;
        Console.WriteLine($"Media: {media:f1}");

        if (media >= 7.0)
        {
            Console.WriteLine("Aluno aprovado.");
        }
        else if (media < 5.0)
        {
            Console.WriteLine("Aluno reprovado.");
        }
        else
        {
            Console.WriteLine("Aluno em exame.");
            double notaExame = double.Parse(Console.ReadLine());
            Console.WriteLine($"Nota do exame: {notaExame:f1}");

            double mediaFinal = (media + notaExame) / 2;
            Console.WriteLine(mediaFinal >= 5.0 ? "Aluno aprovado." : "Aluno reprovado.");
            Console.WriteLine($"Media final: {mediaFinal:f1}");
        }
    }
}