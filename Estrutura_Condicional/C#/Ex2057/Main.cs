using System;

namespace Ex2057
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] input = Console.ReadLine().Split(' ');
            int S = int.Parse(input[0]);
            int T = int.Parse(input[1]);
            int F = int.Parse(input[2]);

            int arrivalTime = S + T + F;
            if (arrivalTime >= 24)
            {
                arrivalTime -= 24;
            }
            else if (arrivalTime < 0)
            {
                arrivalTime += 24;
            }

            Console.WriteLine(arrivalTime);
        }
    }
}