using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_oo_031
{
    class Program
    {
        static void Main(string[] args)
        {
            Curso[] cursos = new Curso[2];

            Console.WriteLine("Cadastro de cursos: \n");

            for (int i = 0; i < cursos.Length; i++)
            {
                cursos[i] = new Curso();
            }

            for (int i = 0; i < cursos.Length; i++)
            {
                cursos[i].MostraDados();
            }

            Console.ReadKey();
        }
    }
}
