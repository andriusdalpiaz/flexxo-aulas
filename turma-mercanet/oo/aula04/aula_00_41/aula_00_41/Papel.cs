using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_00_41
{
    class Papel : IItemGuardavel
    {
        public string name;

        public void ColocarNaEstante()
        {
            Console.WriteLine("Este " + this.GetType().Name + " está sendo guardado!");
        }

        public void RetirarDaEstante()
        {
            Console.WriteLine("Este " + this.GetType().Name + " está sendo retirado!");
        }
    }
}
