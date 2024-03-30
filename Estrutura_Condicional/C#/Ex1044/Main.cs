using System;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {
            string[] valores = Console.ReadLine().Split();
            int a = int.Parse(valores[0]);
            int b = int.Parse(valores[1]);

            int maior = Math.Max(a, b);
            int menor = Math.Min(a, b);

            if (maior % menor == 0){
                Console.WriteLine("Sao Multiplos");
            } else {
                Console.WriteLine("Nao sao Multiplos");
            }
        }
    }
}