using System;

class MainClass {
    static void Main(string[] args) {
        int x, y;

        while (true) {
            string[] input = Console.ReadLine().Split();
            x = int.Parse(input[0]);
            y = int.Parse(input[1]);

            if (x > 0 && y > 0) {
                Console.WriteLine("primeiro");
            } else if (x < 0 && y < 0) {
                Console.WriteLine("terceiro");
            } else if (x > 0 && y < 0) {
                Console.WriteLine("quarto");
            } else if (x < 0 && y > 0) {
                Console.WriteLine("segundo");
            } else if (x == 0 || y == 0) {
                break;
            }
        }
    }
}