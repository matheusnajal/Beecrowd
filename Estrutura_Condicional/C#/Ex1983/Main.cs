using System;

class Program
{
    static void Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine());
        double highestScore = 0;
        int studentNumber = 0;

        for (int i = 0; i < n; i++)
        {
            string[] input = Console.ReadLine().Split();
            int studentId = int.Parse(input[0]);
            double score = double.Parse(input[1]);

            if (score >= 8 && score > highestScore)
            {
                highestScore = score;
                studentNumber = studentId;
            }
        }

        if (highestScore >= 8)
            Console.WriteLine(studentNumber);
        else
            Console.WriteLine("Minimum note not reached");
    }
}