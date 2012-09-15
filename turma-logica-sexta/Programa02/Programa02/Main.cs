using System;

namespace Programa02
{
	class MainClass
	{
		public static void Main (string[] args)
		{
			Cofre meuCofre = new Cofre();
			meuCofre.Altura = 10;
			meuCofre.Largura = 10;
			meuCofre.Profundidade = 10;
			//meuCofre.Abrir();
			meuCofre.VerInterior();
			Console.ReadKey();
		}
	}

	class Cofre
	{
		public int Largura;
		public int Altura;
		public int Profundidade;
		public int Peso;
		public bool EstaAberto;
		private string CorInterna;

		public Cofre ()
		{
			CorInterna = "Cinza";	
		}

		public void Abrir(){
			Console.WriteLine("Abrindo o cofre");
			EstaAberto = true;
		}

		public void VerInterior ()
		{
			if (EstaAberto) {
				Console.WriteLine ("A cor do interior do cofre é: " + CorInterna); 
			} else {
				Console.WriteLine ("O cofre está fechado"); 
			}
		}
	}
}
