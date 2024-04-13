using System;

class MainClass {
    public static void Main(string[] args) {
        int v = Convert.ToInt32(Console.ReadLine());

        for (int i = 1; i < 11; i++) {
            Console.WriteLine($"{i} x {v} = {i * v}");
        }
    }
}