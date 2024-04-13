using System;

class MainClass {
    public static void Main(string[] args) {
        int valores = Convert.ToInt32(Console.ReadLine());

        for (int i = 0; i < valores; i++) {
            int v = Convert.ToInt32(Console.ReadLine());
            if (v != 0) {
                if (v % 2 == 0){
                    if (v > 0) {
                        Console.WriteLine("EVEN POSITIVE");
                    } else {
                        Console.WriteLine("EVEN NEGATIVE");
                    }
                } else {
                    if (v > 0) {
                        Console.WriteLine("ODD POSITIVE");
                    } else {
                        Console.WriteLine("ODD NEGATIVE");
                    }
                }
            } else {
                Console.WriteLine("NULL");
            }
        }
    }
}