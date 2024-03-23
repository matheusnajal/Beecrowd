using System;

class MainClass {
    public static void Main (string[] args) {

        int funcionario = int.Parse(Console.ReadLine());
        int horas = int.Parse(Console.ReadLine());
        float salario = float.Parse(Console.ReadLine());

        float salariof = salario * horas;
        Console.WriteLine($"NUMBER = {funcionario}\nSALARY = U$ {salariof:F2}");
        
    }
}