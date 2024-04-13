using System;

class MainClass {
    static void Main(string[] args) {
        int senha = 2002;

        while (true) {
            int novaSenha = int.Parse(Console.ReadLine());

            if (senha == novaSenha) {
                Console.WriteLine("Acesso Permitido");
                break;
            } else {
                Console.WriteLine("Senha Invalida");
            }
        }
    }
}