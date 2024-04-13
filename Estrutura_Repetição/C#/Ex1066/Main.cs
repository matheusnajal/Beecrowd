using System;

class URI {

    static void Main(string[] args) { 
        int valor, positivo = 0, negativo = 0, impar = 0, par = 0;

        for (int i = 0; i <= 4; i++) {
            valor = Convert.ToInt32(Console.ReadLine());

            if (valor % 2 == 0) {
                par += 1;
            } else {
                impar += 1;
            }

            if (valor > 0) {
                positivo += 1;
            } else if (valor < 0) {
                negativo += 1;
            }
        }

        Console.WriteLine(par + " valor(es) par(es)");
        Console.WriteLine(impar + " valor(es) impar(es)");
        Console.WriteLine(positivo + " valor(es) positivo(s)");
        Console.WriteLine(negativo + " valor(es) negativo(s)");
    }
}