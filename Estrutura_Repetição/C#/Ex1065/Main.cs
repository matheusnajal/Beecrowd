using System;

class URI {

    static void Main(string[] args) { 
        int valor = 0;
        int pares = 0;

        for (int i = 0; i <= 4; i++) {
            valor = Convert.ToInt32(Console.ReadLine());

            if (valor % 2 == 0) {
                pares += 1;
            }
        }
        Console.WriteLine(pares + " valores pares");
    }
}