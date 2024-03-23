using System;

class MainClass {
    public static void Main (string[] args) {

        string nome = Console.ReadLine();
        float salario = float.Parse(Console.ReadLine());
        float vendas = float.Parse(Console.ReadLine());

        float salariof = salario + (float)(vendas * 0.15);
        Console.WriteLine($"TOTAL = R$ {salariof:F2}");
    }
}