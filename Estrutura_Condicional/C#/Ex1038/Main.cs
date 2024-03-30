using System;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {

            string[] valores = Console.ReadLine().Split();
            int cod = int.Parse(valores[0]);
            int qnt = int.Parse(valores[1]);

            if (cod == 1){
            Console.WriteLine($"Total: R$ {qnt * 4.00:F2}");
            } else if (cod == 2){
            Console.WriteLine($"Total: R$ {qnt * 4.50:F2}");
            } else if (cod == 3){
            Console.WriteLine($"Total: R$ {qnt * 5.00:F2}");
            } else if (cod == 4){
            Console.WriteLine($"Total: R$ {qnt * 2.00:F2}");
            } else if (cod == 5){
            Console.WriteLine($"Total: R$ {qnt * 1.50:F2}");
            }
        }
    }
}