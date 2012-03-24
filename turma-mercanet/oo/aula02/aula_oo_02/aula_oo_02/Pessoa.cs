using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_oo_02
{
    class Pessoa
    {
        public string nome;
        public string sobrenome;
        public DateTime dataNascimento;

        public void Ler(Livro livro) 
        {
            livro.SerLido(this);
        }
    }
}
