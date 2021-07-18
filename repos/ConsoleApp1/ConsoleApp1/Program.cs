using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter your name: ");
            string name = Console.ReadLine();
            Console.WriteLine("Hello " + name);

            Console.Write("How old are you? ");
            string age = Console.ReadLine();
            Console.WriteLine("You are " + age + " years old.");

            Console.WriteLine("Hello " + name + " you are " + age + " years old");

            Console.ReadLine();

           
        }
    }
}
