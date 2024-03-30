using System;

namespace Ex1828
{
    class Program
    {
        static void Main(string[] args)
        {
            int T = int.Parse(Console.ReadLine());

            string[][] regras = new string[][] {
                new string[] {"tesoura", "papel"},
                new string[] {"papel", "pedra"},
                new string[] {"pedra", "lagarto"},
                new string[] {"lagarto", "Spock"},
                new string[] {"Spock", "tesoura"},
                new string[] {"tesoura", "lagarto"},
                new string[] {"lagarto", "papel"},
                new string[] {"papel", "Spock"},
                new string[] {"Spock", "pedra"},
                new string[] {"pedra", "tesoura"},
                new string[] {"tesoura", "Spock"},
                new string[] {"Spock", "papel"},
                new string[] {"papel", "tesoura"},
                new string[] {"tesoura", "pedra"},
                new string[] {"pedra", "papel"},
                new string[] {"papel", "lagarto"},
                new string[] {"lagarto", "pedra"},
                new string[] {"pedra", "Spock"},
                new string[] {"Spock", "lagarto"},
                new string[] {"lagarto", "tesoura"}
            };

            for (int t = 1; t <= T; t++)
            {
                string[] escolhas = Console.ReadLine().Split(' ');
                string escolhaSheldon = escolhas[0];
                string escolhaRaj = escolhas[1];

                if (escolhaSheldon == escolhaRaj)
                {
                    Console.WriteLine($"Caso #{t}: De novo!");
                }
                else
                {
                    string resultado = null;
                    foreach (string[] regra in regras)
                    {
                        if (regra[0] == escolhaSheldon && regra[1] == escolhaRaj)
                        {
                            resultado = "Bazinga!";
                            break;
                        }
                        else if (regra[0] == escolhaRaj && regra[1] == escolhaSheldon)
                        {
                            resultado = "Raj trapaceou!";
                            break;
                        }
                    }
                    Console.WriteLine($"Caso #{t}: {resultado}");
                }
            }
        }
    }
}