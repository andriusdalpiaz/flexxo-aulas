using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_oo_02
{
    class Program
    {
        static void Main(string[] args)
        {
            Biblioteca biblioteca;
            biblioteca = new Biblioteca();
            biblioteca.nome = "Municipal";
            biblioteca.endereco = "Rua x, nº Y";

            Livro livro01;
            livro01 = new Livro();
            livro01.nome = "Senhor dos Aneis";
            livro01.isbn = 7854;
            livro01.autor = "JJR Tolkin";

            Pessoa cliente;
            cliente = new Pessoa();
            cliente.nome = "Marcos";
            cliente.sobrenome = "Marcon";
            cliente.dataNascimento = new DateTime(1989, 1, 22);

            Recepcionista funcionario;
            
            funcionario = new Recepcionista();

            funcionario.nome = "Angela";
            funcionario.sobrenome = "Fagundes";
            funcionario.dataNascimento = new DateTime(1970, 5, 15);
            funcionario.dataAdmissao = DateTime.Now;

            Pessoa zelador;

            zelador = new Pessoa();

            zelador.nome = "Ruanito";
            zelador.sobrenome = "Freitas";
            zelador.dataNascimento = new DateTime(1970, 5, 15);

            biblioteca.livros[0] = livro01;

            Livro locado = biblioteca.Locar(cliente, 0);

            cliente.Ler(locado);

            biblioteca.Contratar(funcionario);
            biblioteca.Contratar(zelador);

            funcionario.FazerLocacao(locado, cliente);

            Console.ReadKey();
        }
    }
}
