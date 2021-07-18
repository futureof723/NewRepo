using System;

namespace ConsoleApp5
{
    class Program
    {
        static void MyMethod()
        {
            Console.WriteLine("What is your name?");
            string userName = Console.ReadLine();
            Console.WriteLine("\n\nHi " + userName + ",\nThis is a program that accepts 3 integer arguments from the user and returns their sum.");
            Console.WriteLine("\nEnter the first integer please: ");
            int first = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter the second integer please: ");
            int second = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter the third integer please: ");
            int third = Convert.ToInt32(Console.ReadLine());

            int sum = first + second + third;

            Console.WriteLine("\nThe sum of your selected three integers:\n" + sum);

            return;

        }
        static void Main(string[] args)
        {
            MyMethod();


        }
    }
}
