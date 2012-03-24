using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_oo_02
{
    class Biblioteca
    {
        public Biblioteca()
        {
            funcionarios = new Pessoa[2];
            livros = new Livro[100];
        }

        public string nome;
        public string endereco;
        public Pessoa[] funcionarios;
        public Livro[] livros;

        public void Contratar(Pessoa funcionario) 
        {
            for (int i = 0; i < funcionarios.Length; i++)
            {
                if (funcionarios[i] == null) 
                {
                    funcionarios[i] = funcionario;
                    Console.WriteLine("Você foi contratado: " + funcionario.nome);
                    return;
                }
            }

            Console.WriteLine("Desculpe não temos mais vagas");
        }

        public Livro Locar(Pessoa cliente, int numeroDoLivro) 
        {
            Recepcionista funcionario = (Recepcionista)funcionarios[0];
            funcionario.FazerLocacao(livros[numeroDoLivro], cliente);
            return livros[numeroDoLivro];
        }

        public void Demitir(Pessoa funcionario) 
        {
            
        }
    }
}
