#include "stdio.h"
#include "conio.h"

int qnt_pecas, qnt_da_peca;
float valor_total, valor_da_peca;
float ipi;

int main()
{
	valor_total = 0;

	printf("Informe o IPI:");
	scanf("%f", &ipi);
	printf("Quantidade tipo de pecas:");
	scanf("%d", &qnt_pecas);
	
	for (int i = 0; i < qnt_pecas; i++)
	{
		printf("Informe o valor da peca");
		scanf("%f", &valor_da_peca);
		printf("Informe a quantidade da peca");
		scanf("%d", &qnt_da_peca);

		valor_total = valor_total = (valor_da_peca * qnt_pecas);
	}

	valor_total = valor_total * ((ipi / 100) + 1);

	printf("Valor total %f\n", valor_total);
	
	getch();
}
