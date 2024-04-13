using System;

class MainClass {
    static void Main(string[] args) {
        int total = 0, coelho = 0, rato = 0, sapo = 0;
        int c = Convert.ToInt32(Console.ReadLine());

        for (int i = 0; i < c; i++) {
            string[] input = Console.ReadLine().Split();
            int quantia = Convert.ToInt32(input[0]);
            char tipo = Convert.ToChar(input[1]);

            total += quantia;
            if (tipo == 'C') {
                coelho += quantia;
            } else if (tipo == 'R') {
                rato += quantia;
            } else if (tipo == 'S') {
                sapo += quantia;
            }
        }

        float porcentagem_coelho = (coelho * 100.0f) / total;
        float porcentagem_rato = (rato * 100.0f) / total;
        float porcentagem_sapo = (sapo * 100.0f) / total;

        Console.WriteLine("Total: " + total + " cobaias");
        Console.WriteLine("Total de coelhos: " + coelho);
        Console.WriteLine("Total de ratos: " + rato);
        Console.WriteLine("Total de sapos: " + sapo);
        Console.WriteLine("Percentual de coelhos: " + porcentagem_coelho.ToString("F2") + " %");
        Console.WriteLine("Percentual de ratos: " + porcentagem_rato.ToString("F2") + " %");
        Console.WriteLine("Percentual de sapos: " + porcentagem_sapo.ToString("F2") + " %");
    }
}