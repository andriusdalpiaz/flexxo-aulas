using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_00_41
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Informe quantos itens: ");
            int numEspacos = int.Parse(Console.ReadLine());
            Estante estante = new Estante(numEspacos);
            ConsoleKey key;
            do
            {
                Console.WriteLine("Informe o que deseja guardar");
                Console.Write("(c) CD / (d) DVD / (l) Livro / (r) Revista");

                key = Console.ReadKey().Key;

                IItemGuardavel item = null;

                if (key == ConsoleKey.C)
                {
                    item = new Cd();
                }

                if (key == ConsoleKey.D)
                {
                    item = new Dvd();
                }

                if (key == ConsoleKey.L)
                {
                    item = new Livro();
                }

                if (key == ConsoleKey.R)
                {
                    item = new Revista();
                }

                if (item != null)
                {
                    Console.WriteLine("");
                    estante.Guardar(item);
                }
                else
                {
                    Console.Clear();
                }

            } while (key != ConsoleKey.Escape);

            estante.ExibirItens();

            Console.ReadKey();
        }
    }
}
