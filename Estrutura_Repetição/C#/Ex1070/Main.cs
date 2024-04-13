using System;

class URI {

    static void Main(string[] args) { 
        int n = Convert.ToInt32(Console.ReadLine());

        if (n % 2 != 0) 
            n -= 1;

        for (int i = n; i < n + 12; i += 2) {
            Console.WriteLine(i + 1);
        }
    }
}