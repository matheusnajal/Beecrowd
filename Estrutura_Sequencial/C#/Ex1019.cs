using System;

class MainClass {
    public static void Main (string[] args) {
        int totalSegundos = Convert.ToInt32(Console.ReadLine());

        int horas = totalSegundos / 3600;
        int minutos = (totalSegundos % 3600) / 60;
        int segundos = totalSegundos % 60;

        Console.WriteLine($"{horas}:{minutos}:{segundos}");
    }
}