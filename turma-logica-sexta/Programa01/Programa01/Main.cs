using System;
namespace Programa01
{
	class MainClass
	{
		public static void Main (string[] args)
		{
			Pessoa soldado;
			soldado = new Pessoa();
			soldado.pontosDeVida = 200;
			soldado.nome = "João";
			soldado.sobrenome = "Pé de Feijão";

			Pessoa nazista;
			nazista = new Pessoa();
			nazista.pontosDeVida = 200;
			nazista.nome = "Adolfo";
			nazista.sobrenome = "Hitinho";

			int valorDoAtaque = soldado.Ataca();
			nazista.RecebeuAtaque(valorDoAtaque);

			Console.ReadKey();
		}
	}

	class Pessoa
	{
		public string nome;
		public string sobrenome;
		public int pontosDeVida;

		public int Ataca ()
		{
			Random r = new Random();
			Console.WriteLine("A pessoa " + nome + " " + sobrenome + " atacou");
			return r.Next(0, 100);
		}

		public void RecebeuAtaque (int valorDoAtaque)
		{
			Console.WriteLine("A pessoa " + nome + " " + sobrenome + " recebeu dano de " + valorDoAtaque);
			pontosDeVida -= valorDoAtaque;
			Console.WriteLine("A pessoa " + nome + " " + sobrenome + " tem " + pontosDeVida + " pontos de vida" );
		}
	}
}