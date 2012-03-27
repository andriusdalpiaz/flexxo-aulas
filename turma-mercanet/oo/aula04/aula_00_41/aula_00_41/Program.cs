using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_00_41
{
    /*
     Criar um programa para cadastrar 
        items dentro de uma estante.

        Intefaces
            IItemGuardavel
              void ColocarNaEstante();
              void RetirarDaEstante();	
        Classes necessarias.
            Disco
                CD
                DVD
	
            Papel
                Livro
                Revista
	
            Estante
     */
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
