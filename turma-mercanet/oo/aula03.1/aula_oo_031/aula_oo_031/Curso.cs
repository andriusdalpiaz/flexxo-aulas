using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_oo_031
{
    class Curso
    {
        public Curso()
        {
            Console.Write("Informe o nome do curso: ");
            nome = Console.ReadLine();
            Console.Write("Informe a carga horária: ");
            cargaHoraria = int.Parse(Console.ReadLine());
        }

        public void MostraDados()
        {
            Console.WriteLine("Nome: " + nome + " Carga Horaria: " + cargaHoraria);
        }

        public string nome;
        public int cargaHoraria;
    }
}
