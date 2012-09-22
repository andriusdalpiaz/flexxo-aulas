using System;

namespace ProgramaRestaurante
{
	class MainClass
	{
		public static void Main (string[] args)
		{
			Restaurante lucios = new Restaurante();

			for (int i = 0; i < 6; i++) 
			{
				Cliente cliente = new Cliente();
				cliente.Nome = "cliente_" + i;
				cliente.Sobrenome = "sobrenome_" + i;
				cliente.Dinheiro = (i + 1) * (new Random()).Next(100);
				lucios.ReceberCliente(cliente);
				System.Threading.Thread.Sleep(1000);
			}

			Console.ReadKey();
		}
	}

	class Restaurante
	{
		public string Nome;
		Empregado[] Empregados;

		public Restaurante ()
		{
			Empregados = new Empregado[10];
			for (int i = 0; i < 10; i++) 
			{
				if( i < 5)
				{
					Empregados[i] = new Garcon();
				}
				else
				{
					Empregados[i] = new Recepcionista();
				}
			}
		}

		public void ReceberCliente (Cliente cliente)
		{
			Recepcionista atendente = AcharRecepcionistaLiberado ();
			if (atendente == null) {
				cliente.Sair ();
			} else {
				atendente.Recepcionar(cliente);
			}
		}

		private Recepcionista AcharRecepcionistaLiberado()
		{
			for (int i = 5; i < 10; i++) {
				if(!Empregados[i].EstaAtendendo){
					Empregados[i].EstaAtendendo = true;
					return (Recepcionista)Empregados[i];
				}
			}

			return null;
		}

		private Garcon AcharGarconLiberado()
		{
			for (int i = 0; i < 5; i++) {
				if(!Empregados[i].EstaAtendendo)
				{
					Empregados[i].EstaAtendendo = true;
					return (Garcon)Empregados[i];
				}
			}

			return null;
		}
	}

	class Pessoa
	{
		public string Nome;
		public string Sobrenome;

		public string InformarNome ()
		{
			Console.WriteLine("Meu nome é: " + Nome);
			return Nome;
		}

	}

	class Empregado : Pessoa
	{
		public string RegistroEmprego;
		public bool EstaAtendendo;
	}

	class Garcon : Empregado
	{

	}

	class Recepcionista : Empregado
	{
		public void Recepcionar (Cliente cliente)
		{
			Console.WriteLine("Olá senhor(a) seja bem vindo");
			Console.WriteLine("Qual seu nome?");
			string nomeDoCliente = cliente.InformarNome();
			Console.WriteLine("Venha comigo senhor(a) " + nomeDoCliente);
		}
	}

	class Cliente : Pessoa
	{
		public void Sair ()
		{
			Console.WriteLine(Nome + " está saindo");
		}

		public float Dinheiro;	
	}
}
