using System;

class Program
{
    static void Main(string[] args)
    {
        string[] refeicoesDisponiveis = Console.ReadLine().Split();
        int ca = int.Parse(refeicoesDisponiveis[0]);
        int ba = int.Parse(refeicoesDisponiveis[1]);
        int pa = int.Parse(refeicoesDisponiveis[2]);

        string[] refeicoesRequisitadas = Console.ReadLine().Split();
        int cr = int.Parse(refeicoesRequisitadas[0]);
        int br = int.Parse(refeicoesRequisitadas[1]);
        int pr = int.Parse(refeicoesRequisitadas[2]);

        int naoAtendidos = Math.Max(0, cr - ca) + Math.Max(0, br - ba) + Math.Max(0, pr - pa);

        Console.WriteLine(naoAtendidos);
    }
}