using System;

class MainClass {
    static void Main(string[] args) {
        while (true) {
            float nota1, nota2;

            do {
                nota1 = float.Parse(Console.ReadLine());
                if (nota1 < 0 || nota1 > 10)
                    Console.WriteLine("nota invalida");
            } while (nota1 < 0 || nota1 > 10);

            do {
                nota2 = float.Parse(Console.ReadLine());
                if (nota2 < 0 || nota2 > 10)
                    Console.WriteLine("nota invalida");
            } while (nota2 < 0 || nota2 > 10);

            float media = (nota1 + nota2) / 2;
            Console.WriteLine("media = " + media.ToString("0.00"));

            int opcao;
            do {
                Console.WriteLine("novo calculo (1-sim 2-nao)");
                opcao = int.Parse(Console.ReadLine());
            } while (opcao != 1 && opcao != 2);

            if (opcao == 2)
                break;
        }
    }
}