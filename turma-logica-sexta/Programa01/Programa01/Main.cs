using System;

namespace Programa01
{
	class MainClass
	{
		public static void Main (string[] args)
		{
			Pessoa soldado;
			soldado = new Pessoa ();
			soldado.pontosDeVida = 200;
			soldado.nome = "João";
			soldado.sobrenome = "Pé de Feijão";

			Pessoa nazista;
			nazista = new Pessoa ();
			nazista.pontosDeVida = 200;
			nazista.nome = "Adolfo";
			nazista.sobrenome = "Hitinho";

			while (true) {
				int valorDoAtaque = soldado.Ataca ();
				nazista.RecebeuAtaque (valorDoAtaque);

				valorDoAtaque = nazista.Ataca ();
				soldado.RecebeuAtaque (valorDoAtaque);

				if (nazista.pontosDeVida <= 0) {
					nazista.Morrer ();
					break;
				}

				if (soldado.pontosDeVida <= 0) {
					soldado.Morrer ();
					break;
				}
			}

			Console.ReadKey ();
		}
	}

	class Pessoa
	{
		public string nome;
		public string sobrenome;
		public int pontosDeVida;

		public void Morrer ()
		{
			Console.WriteLine ("A pessoa " + nome + " " + sobrenome + " morreu");
		}

		public int Ataca ()
		{
			Random r = new Random ();
			System.Threading.Thread.Sleep (1000);
			if (pontosDeVida > 0) {
				Console.WriteLine ("A pessoa " + nome + " " + sobrenome + " atacou");
				return r.Next (0, 100);
			}
			return 0;
		}

		public void RecebeuAtaque (int valorDoAtaque)
		{
			if (valorDoAtaque > 0) {
			
				Console.WriteLine ("A pessoa " + nome + " " + sobrenome + " recebeu dano de " + valorDoAtaque);
				pontosDeVida -= valorDoAtaque;
				if (pontosDeVida < 0) {
					pontosDeVida = 0;
				}
				Console.WriteLine ("A pessoa " + nome + " " + sobrenome + " tem " + pontosDeVida + " pontos de vida");
			}
		}
	}
}