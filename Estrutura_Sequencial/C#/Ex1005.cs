using System;

class MainClass {
    public static void Main (string[] args) {

        double notaA = double.Parse(Console.ReadLine());
        double notaB = double.Parse(Console.ReadLine());

        double media = ((notaA * 3.5) + (notaB * 7.5)) / 11;

        Console.WriteLine($"MEDIA = {media:F5}");
    }
}