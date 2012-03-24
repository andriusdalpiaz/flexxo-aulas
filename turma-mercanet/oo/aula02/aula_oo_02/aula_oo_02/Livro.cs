using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_oo_02
{
    class Livro
    {
        public string nome;
        public string autor;
        public int isbn;

        public void SerLocado(Pessoa cliente, Recepcionista recepcionista)
        {

        }

        public void SerLido(Pessoa pessoa)
        {
            Console.WriteLine(pessoa.nome + " está lendo: " + nome);
        }
    }
}
