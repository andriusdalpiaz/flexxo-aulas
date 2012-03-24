using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_oo_03
{
    class Program
    {
        static void Main(string[] args)
        {
            Relatorio rel = new Relatorio(DateTime.Now.AddMonths(-1));
            rel.Carregar();
            rel.Gerar();

            Console.ReadKey();
        }
    }
}
