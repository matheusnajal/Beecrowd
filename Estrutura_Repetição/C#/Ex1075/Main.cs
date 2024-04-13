using System;

class MainClass {
    public static void Main(string[] args) {
        int v = Convert.ToInt32(Console.ReadLine());

        for (int i = 0; i < 10000; i++) {
            if (i % v == 2) {
                Console.WriteLine(i);
            }
        }
    }
}