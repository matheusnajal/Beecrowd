using System;

class MainClass {
    static void Main(string[] args) {
        int positivos = 0;
        float valor = 0;
        float media = 0;

        for (int i = 0; i < 6; i++) {
            valor = float.Parse(Console.ReadLine());
            if (valor > 0) {
                positivos++;
                media += valor;
            }
        }

        Console.WriteLine($"{positivos} valores positivos");
        Console.WriteLine($"{media / positivos:F1}");
    }
}