using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_oo_031
{
    class CadastroCurso
    {
        Curso[] cursos;

        public CadastroCurso()
        {
            Console.WriteLine("Informe a quantidade de cursos: \n");
            int numCursos = int.Parse(Console.ReadLine());
            cursos = new Curso[numCursos];
        }

        public void Registrar()
        {
            Console.WriteLine("Cadastro de cursos: \n");

            for (int i = 0; i < cursos.Length; i++)
            {
                cursos[i] = new Curso();
            }
        }


        public void Exibir()
        {
            for (int i = 0; i < cursos.Length; i++)
            {
                cursos[i].MostraDados();
            }
        }
    }
}
