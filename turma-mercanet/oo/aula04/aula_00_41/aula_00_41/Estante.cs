using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_00_41
{
    class Estante
    {
        private IItemGuardavel[] espacos;

        public Estante (int numEspacos)
	    {
            espacos = new IItemGuardavel[numEspacos];
	    }

        public void Guardar(IItemGuardavel item) 
        {
            for (int i = 0; i < espacos.Length; i++)
            {
                if (espacos[i] == null)
                {
                    espacos[i] = item;
                    espacos[i].ColocarNaEstante();
                    return;
                }
            }
        }

        public void Retirar(IItemGuardavel item)
        {
            for (int i = 0; i < espacos.Length; i++)
            {
                if (espacos[i] == item)
                {
                    espacos[i].RetirarDaEstante();
                    espacos[i] = null;
                    return;
                }
            }
        }
    }
}
