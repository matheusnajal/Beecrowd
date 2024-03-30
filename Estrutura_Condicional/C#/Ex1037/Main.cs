using System;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {

            float v = float.Parse(Console.ReadLine());
            
            if (v >= 0 && v <= 25){
            Console.WriteLine("Intervalo [0,25]");
            } else if (v > 25 && v <= 50){
            Console.WriteLine("Intervalo (25,50]");
            } else if (v > 75 && v <= 100){
            Console.WriteLine("Intervalo (75,100]");
            } else {
            Console.WriteLine("Fora de intervalo");
            }
            
        }
    }
}