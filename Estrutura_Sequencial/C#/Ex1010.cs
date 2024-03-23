using System;

class Program {
    static void Main(string[] args) {
        string[] valores1 = Console.ReadLine().Split(' ');
        string[] valores2 = Console.ReadLine().Split(' ');

        int codigo1 = int.Parse(valores1[0]);
        int quantidade1 = int.Parse(valores1[1]);
        double valor1 = double.Parse(valores1[2]);

        int codigo2 = int.Parse(valores2[0]);
        int quantidade2 = int.Parse(valores2[1]);
        double valor2 = double.Parse(valores2[2]);

        double total = quantidade1 * valor1 + quantidade2 * valor2;

        Console.WriteLine("VALOR A PAGAR: R$ " + total.ToString("F2"));
    }
}