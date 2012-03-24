using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_oo_02
{
    class Recepcionista : Pessoa
    {
        public DateTime dataAdmissao;

        public void FazerLocacao(Livro livro, Pessoa cliente) 
        {
            Console.WriteLine(nome + " está locando o livro " 
                               + livro.nome + " para " + cliente.nome); 
        }
    }
}
