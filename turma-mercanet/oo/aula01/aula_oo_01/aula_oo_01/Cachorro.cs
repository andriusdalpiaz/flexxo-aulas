using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_oo_01
{
    class Cachorro
    {
        public string nome;

        public void ReceberCarinho(Pessoa dono) 
        {
            Console.WriteLine(nome + " está recebendo carinho de " + dono.nome);
            Latir();
        }

        public void Latir() 
        {
            Console.WriteLine(nome + " está latindo: Au au");
        }
    }
}
