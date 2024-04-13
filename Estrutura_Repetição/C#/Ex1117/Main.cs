using System;

class MainClass {
    static void Main(string[] args) {
        float media = 0;
        int notaValida = 0;

        while (true) {
            float nota = float.Parse(Console.ReadLine());

            if (nota >= 0 && nota <= 10) {
                notaValida++;
                media += nota;
                if (notaValida == 2) {
                    Console.WriteLine("media = " + (media / 2).ToString("0.00"));
                    break;
                }
            } else {
                Console.WriteLine("nota invalida");
            }
        }
    }
}