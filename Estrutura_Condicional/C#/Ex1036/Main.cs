using System;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {
    
            string[] valores = Console.ReadLine().Split(' ');
            double a = double.Parse(valores[0]);
            double b = double.Parse(valores[1]);
            double c = double.Parse(valores[2]);

            double delta = Math.Pow(b, 2) - 4 * a * c;

            if (delta < 0 || a == 0.0){
                Console.WriteLine("Impossivel calcular");
                return;
            } else {
                double r1 = (-b + Math.Sqrt(delta)) / (2 * a);
                double r2 = (-b - Math.Sqrt(delta)) / (2 * a);

                Console.WriteLine($"R1 = {r1:F5}");
                Console.WriteLine($"R2 = {r2:F5}");
                
            }
        }
    }
}