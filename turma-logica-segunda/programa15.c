#include "stdio.h"
#include "conio.h"

float preco_produto, qnt_produto, val_produto;
int continuar, cod_produto;

int main(){
	continuar = 1;
	while(continuar == 1){
		printf("Informe o codigo do produto:");
		scanf("%d", &cod_produto);

		if(cod_produto == 100) {
			val_produto = 1.20;
		}

		if(cod_produto == 101) {
			val_produto = 1.30;
		}

		if(cod_produto == 102) {
			val_produto = 1.50;
		}

		if(cod_produto == 103) {
			val_produto = 1.20;
		}

		if(cod_produto == 104) {
			val_produto = 1.30;
		}

		if(cod_produto == 105) {
			val_produto = 1.00;
		}
		
		if(cod_produto < 100 || cod_produto > 105){
			printf("== Codigo invalido ==\n");	
			continue;
		}

		printf("Informe a qnt de produto:");
		scanf("%f", &qnt_produto);

		val_produto = (val_produto * qnt_produto);

		printf("Valor final: %f\n", val_produto);

		printf("Deseja continuar? 1 ou 0\n");
		scanf("%d", &continuar);
	}

	getch();
}
