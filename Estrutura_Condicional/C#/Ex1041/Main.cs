using System;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {
            string[] valores = Console.ReadLine().Split();
            float x = float.Parse(valores[0]);
            float y = float.Parse(valores[1]);

            if (x == 0 && y == 0) {
                Console.WriteLine("Origem");
            } else if (x > 0 && y > 0){
                Console.WriteLine("Q1");
            } else if (x < 0 && y < 0){
                Console.WriteLine("Q3");
            } else if (x > 0 && y < 0){
                Console.WriteLine("Q4");
            } else if (x < 0 && y > 0){
                Console.WriteLine("Q2");
            } else if (x == 0){
                Console.WriteLine("Eixo Y");
            } else if (y == 0){
                Console.WriteLine("Eixo X"); 
            }
        }
    }
}