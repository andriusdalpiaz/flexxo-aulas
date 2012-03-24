using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_oo_01
{
    class Program
    {
        static void Main(string[] args)
        {
            //Mesa minhaLindaMesa;
            //minhaLindaMesa = new Mesa();

            //minhaLindaMesa.altura = 0.7f;
            //minhaLindaMesa.largura = 1f;
            //minhaLindaMesa.profundidade = 0.5f;

            //minhaLindaMesa.cor = "branco";

            //minhaLindaMesa.ToString();

            //Copo copo;
            //copo = new Copo();

            //copo.medida = 250;
            //copo.cor = "branco";
            //copo.diametro = 0.08f;
            //copo.altura = 0.12f;

            //Console.WriteLine("Caracteristicas da minha linda mesa");
            //Console.WriteLine(minhaLindaMesa.altura);
            //Console.WriteLine(minhaLindaMesa.largura);
            //Console.WriteLine(minhaLindaMesa.profundidade);
            //Console.WriteLine(minhaLindaMesa.cor);

            //Console.WriteLine("Caracteristicas do meu copo");
            //Console.WriteLine(copo.altura);
            //Console.WriteLine(copo.diametro);
            //Console.WriteLine(copo.cor);
            //Console.WriteLine(copo.medida);


            //Monitor monitor;

            //monitor = new Monitor();

            //monitor.altura = 15;
            //monitor.largura = 14;
            //monitor.profundidade = 3;
            //monitor.cor = "preto";

            //monitor.Ligar();
            //monitor.Desligar();


            Pessoa eu = new Pessoa();

            eu.nome = "Marcos";
            eu.sexo = 'm';
            eu.sobreNome = "Marcon";
            eu.dataDeNascimento = new DateTime(1989, 1, 22);

            Pessoa amigo = new Pessoa();

            amigo.nome = "Felipe";
            amigo.sexo = 'm';
            amigo.sobreNome = "Gimenez";
            amigo.dataDeNascimento = new DateTime(1995, 2, 1);

            eu.Cumprimentar(amigo);
            
            Cachorro dog = new Cachorro();

            dog.nome = "Ruanito";

            dog.ReceberCarinho(eu);

            Console.ReadKey();
        }
    }
}
