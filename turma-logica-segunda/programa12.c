#include "stdio.h"
#include "conio.h"

float VALOR_SAL_MINIMO;
int qnt_salarios;
float salario;
float porcentagem;
int count;

int main()
{
	VALOR_SAL_MINIMO = 622;
	porcentagem = 0;
	// Entrada
	
	while(count <= 10)
	{
		// Entrada
		
		printf("Quantos salarios minimos:");	
		scanf("%d", &qnt_salarios);
		
		if(qnt_salarios < 3)
		{
			porcentagem = 50;
		}

		if(qnt_salarios >= 3 && qnt_salarios <= 10)
		{
			porcentagem = 20;
		}

		if(qnt_salarios > 10 && qnt_salarios <= 20)
		{
			porcentagem = 15;
		}

		if(qnt_salarios > 20)
		{
			porcentagem = 10;
		}

		printf("Acrescimo de %.0f por cento\n", porcentagem);
		salario = (VALOR_SAL_MINIMO * qnt_salarios);
		salario = salario * ((porcentagem / 100) + 1);
		printf("Salario final: R$ %.2f\n", salario);
		count++;
	}
}






