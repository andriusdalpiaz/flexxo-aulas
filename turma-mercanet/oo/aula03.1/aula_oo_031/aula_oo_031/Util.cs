using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_oo_031
{
    class Util
    {
        public static void InvertPalavra(string palavra) 
        {
            for (int i = palavra.Length - 1; i >= 0; i--)
            {
                Console.Write(palavra[i]);
            }
        }
    }
}
