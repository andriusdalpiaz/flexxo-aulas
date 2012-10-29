#include "stdio.h"
#include "conio.h"

char nome[200];
int idade;
float sal_fixo;
char sexo;

int main()
{
	printf("Informe o nome:");
	gets(nome);
	printf("Informe a idade:");
	scanf("%d", &idade);
	printf("Informe o sexo:");
	scanf("%c", &sexo);
	printf("Informe o salario fixo");
	scanf("%f", &sal_fixo);
	
	if (sexo == 'm' || sexo == 'M')
	{
		if (idade >= 30)
		{
			sal_fixo = sal_fixo + 100;
		}
		else
		{
			sal_fixo = sal_fixo + 50;
		}
	}

	if (sexo == 'f' || sexo == 'F')
	{
		if (idade >= 30)
		{
			sal_fixo = sal_fixo + 100;		
		}
		else
		{
			sal_fixo = sal_fixo + 80;
		}
	}

	printf("%s tem o salario final de R$ %.2f\n", nome, sal_fixo);

	getch();
}
