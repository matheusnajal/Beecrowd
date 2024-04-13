using System;

class MainClass {
    static void Main(string[] args) {
        int positivos = 0;
        float valor = 0;

        for (int i = 0; i <= 5; i++) {
            valor = float.Parse(Console.ReadLine());
            if (valor > 0) {
                positivos++;
            }
        }
        Console.WriteLine($"{positivos} valores positivos");
    }
}