using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_oo_04
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Iniciando");
            while (Console.ReadKey().Key != ConsoleKey.Escape)
            {
                Console.WriteLine("Telefone: ");
                ITelefone telefone = GeraTelefone();
                telefone.Apertar(Console.ReadKey().KeyChar);
            }
        }

        public static ITelefone GeraTelefone() 
        {
            Random random = new Random();

            if ((random.Next(5) % 2) == 0)
                return new TelefoneSimples();
            else
                return new TelefoneJorgeForman();
        }
    }
}
