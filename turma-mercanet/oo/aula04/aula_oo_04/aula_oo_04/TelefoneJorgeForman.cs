using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_oo_04
{
    class TelefoneJorgeForman : ITelefone
    {
        public void Apertar(char botao)
        {
            Console.WriteLine("Botao apertado no telefone jorge forman: " + botao);
        }
    }
}
