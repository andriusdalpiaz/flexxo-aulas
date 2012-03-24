using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_oo_03
{
    class Vendedor : Pessoa
    {
        public string email;
        public Venda[] vendas;

        public void CalcularComissao(float commisao)
        {
            float totalCommisao = 0;
            
            for (int i = 0; i < vendas.Length; i++)
            {
                vendas[i].VendaDoProduto(commisao);
                totalCommisao += (vendas[i].produto.preco * commisao);
            }

            Console.WriteLine(nome + " comissão: " + totalCommisao);
        }


    }
}
