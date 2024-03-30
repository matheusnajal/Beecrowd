using System;

namespace Ex1049
{
    class Program
    {
        static void Main(string[] args)
        {
            string A, B, C;
            A = Console.ReadLine();
            B = Console.ReadLine();
            C = Console.ReadLine();

            if (A == "vertebrado")
            {
                if (B == "ave")
                {
                    if (C == "carnivoro")
                    {
                        Console.WriteLine("aguia");
                    }
                    else
                    {
                        Console.WriteLine("pomba");
                    }
                }
                else
                {
                    if (C == "onivoro")
                    {
                        Console.WriteLine("homem");
                    }
                    else
                    {
                        Console.WriteLine("vaca");
                    }
                }
            }
            else
            {
                if (B == "inseto")
                {
                    if (C == "hematofago")
                    {
                        Console.WriteLine("pulga");
                    }
                    else
                    {
                        Console.WriteLine("lagarta");
                    }
                }
                else
                {
                    if (C == "hematofago")
                    {
                        Console.WriteLine("sanguessuga");
                    }
                    else
                    {
                        Console.WriteLine("minhoca");
                    }
                }
            }
        }
    }
}