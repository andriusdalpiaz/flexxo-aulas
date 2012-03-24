using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_oo_01
{
    class Monitor
    {
        public float largura;
        public float altura;
        public float profundidade;
        public string cor;

        public void Ligar() 
        {
            Console.WriteLine("Monitor está ligando");
        }

        public void Desligar() 
        {
            Console.WriteLine("Monitor está desligando");
        }

        public int Movimentar(int a, int b) 
        {
            return (a - b);
        }
    }
}
