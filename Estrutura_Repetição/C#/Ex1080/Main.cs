using System;

class MainClass {
    static void Main(string[] args) {
        int[] valores = new int[100];
        int maior = 0;
        int posicao = 0;

        for (int i = 0; i < 100; i++) {
            valores[i] = Convert.ToInt32(Console.ReadLine());

            if (valores[i] > maior) {
                maior = valores[i];
                posicao = i + 1;
            }
        }

        Console.WriteLine(maior);
        Console.WriteLine(posicao);
    }
}