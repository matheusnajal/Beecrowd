using System;

class MainClass {
    public static void Main (string[] args) {

        double notaA = double.Parse(Console.ReadLine());
        double notaB = double.Parse(Console.ReadLine());
        double notaC = double.Parse(Console.ReadLine());

        double media = ((notaA * 2) + (notaB * 3) + (notaC * 5)) / 10;

        Console.WriteLine($"MEDIA = {media:F1}");
    }
}