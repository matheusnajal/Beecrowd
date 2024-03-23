using System;

class MainClass {
    public static void Main (string[] args) {

        int diferenca;
        int A = int.Parse(Console.ReadLine());
        int B = int.Parse(Console.ReadLine());
        int C = int.Parse(Console.ReadLine());
        int D = int.Parse(Console.ReadLine());

        diferenca = (A * B) - (C * D);
        
        Console.WriteLine($"DIFERENCA = {diferenca}");
    }
}