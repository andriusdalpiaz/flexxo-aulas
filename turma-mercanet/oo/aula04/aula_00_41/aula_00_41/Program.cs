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
            int numEspacos =  int.Parse(Console.ReadLine());
            Estante estante = new Estante(numEspacos);
        }
    }
}
