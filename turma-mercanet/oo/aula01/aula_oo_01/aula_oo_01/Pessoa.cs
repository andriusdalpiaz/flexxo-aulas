using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_oo_01
{
    class Pessoa
    {
        public string nome;
        public DateTime dataDeNascimento;
        public string sobreNome;
        public char sexo;

        public void Ler() 
        {
            Console.WriteLine(nome + " está lendo");
        }

        public void Andar(int destino) 
        {
            Console.WriteLine(nome + " está andando até " + destino);
        }

        public void Cumprimentar(Pessoa amigo) 
        {
            Falar("Oi " + amigo.nome);
            Console.WriteLine(nome + " está cumprimentando " + amigo.nome);
            amigo.Falar("Oi " + nome);
        }

        public void Falar(string fala) 
        {
            Console.WriteLine(nome + " fala:" + fala);
        }
    }
}
