using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace aula_oo_03
{
    class Relatorio
    {
        private Vendedor[] vendedores;
        public float comissao;

        public Relatorio(DateTime dataRelatorio)
        {
            comissao = 0.3f;
            vendedores = new Vendedor[2];

            vendedores[0] = new Vendedor();
            vendedores[1] = new Vendedor();
        }

        public void Carregar()
        {
            vendedores[0].nome = "Marcos";
            vendedores[0].email = "marconvcm@gmail.com";
            vendedores[0].vendas = new Venda[520];

            for (int i = 0; i < vendedores[0].vendas.Length; i++)
            {
                Produto produto = null;
                Venda venda = new Venda();

                produto = new Produto();
                produto.nome = "base";
                produto.preco = 10;

                venda.produto = produto;
                vendedores[0].vendas[i] = venda;
            }

            vendedores[1].nome = "Andre";
            vendedores[1].email = "andre@gmail.com";
            vendedores[1].vendas = new Venda[230];

            for (int i = 0; i < vendedores[1].vendas.Length; i++)
            {
                Produto produto = null;
                Venda venda = new Venda();

                produto = new Produto();
                produto.nome = "base";
                produto.preco = 10;

                venda.produto = produto;
                vendedores[1].vendas[i] = venda;
            }
        }

        public void Gerar()
        {
            for (int i = 0; i < vendedores.Length; i++)
            {
                Console.WriteLine("Exibindo vendas do vendedor: " + vendedores[i].nome);
                vendedores[i].CalcularComissao(comissao);
            }
        }
    }
}
