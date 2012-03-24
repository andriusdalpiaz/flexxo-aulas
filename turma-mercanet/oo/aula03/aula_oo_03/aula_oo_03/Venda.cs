using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_oo_03
{
    class Venda
    {
        public Produto produto;
        public DateTime vendidoEm;

        public void VendaDoProduto(float commisao) 
        {
            Console.WriteLine(produto.nome + "\t" + produto.preco + "\t" + (produto.preco * commisao));
        }
    }
}
