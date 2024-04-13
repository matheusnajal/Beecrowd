using System;

class MainClass {
    public static void Main(string[] args) {
        int valor = Convert.ToInt32(Console.ReadLine());

        for (int i = 2; i < valor + 1; i += 2) {
            int media = (int)Math.Pow(i, 2);
            Console.WriteLine($"{i}^2 = {media}");
        }
    }
}