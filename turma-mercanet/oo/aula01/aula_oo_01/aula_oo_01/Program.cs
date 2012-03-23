using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_oo_01
{
    class Program
    {
        static void Main(string[] args)
        {
            Mesa minhaLindaMesa;
            minhaLindaMesa = new Mesa();

            minhaLindaMesa.altura = 0.7f;
            minhaLindaMesa.largura = 1f;
            minhaLindaMesa.profundidade = 0.5f;

            minhaLindaMesa.cor = "branco";

            minhaLindaMesa.ToString();
            Console.WriteLine("Caracteristicas da minha linda mesa");
            Console.WriteLine(minhaLindaMesa.altura);
            Console.WriteLine(minhaLindaMesa.largura);
            Console.WriteLine(minhaLindaMesa.profundidade);
            Console.WriteLine(minhaLindaMesa.cor);
            Console.ReadKey();
        }
    }
}
