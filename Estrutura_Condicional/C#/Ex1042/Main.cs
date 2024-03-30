using System;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {
            string[] valores = Console.ReadLine().Split();
            float a = float.Parse(valores[0]);
            float b = float.Parse(valores[1]);
            float c = float.Parse(valores[2]);

            if (a + b > c && a + c > b && b + c > a){
                Console.WriteLine($"Perimetro = {Math.Round((a + b + c) * 10.0) / 10.0:F1}");
            } else {
                Console.WriteLine($"Area = {Math.Round(((a + b) * c) / 2.0 * 10.0) / 10.0:F1}");
            }
        }
    }
}