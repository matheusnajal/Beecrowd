using System;

class MainClass {
    public static void Main (string[] args) {
        int valor = int.Parse(Console.ReadLine());
        int resto, nota;
        
        Console.WriteLine(valor);

        nota = 100;
        resto = valor;
        Console.WriteLine(resto / nota + " nota(s) de R$ 100,00");
        resto %= nota;

        nota = 50;
        Console.WriteLine(resto / nota + " nota(s) de R$ 50,00");
        resto %= nota;

        nota = 20;
        Console.WriteLine(resto / nota + " nota(s) de R$ 20,00");
        resto %= nota;

        nota = 10;
        Console.WriteLine(resto / nota + " nota(s) de R$ 10,00");
        resto %= nota;

        nota = 5;
        Console.WriteLine(resto / nota + " nota(s) de R$ 5,00");
        resto %= nota;

        nota = 2;
        Console.WriteLine(resto / nota + " nota(s) de R$ 2,00");
        resto %= nota;

        nota = 1;
        Console.WriteLine(resto / nota + " nota(s) de R$ 1,00");
    }
}